#include <stdio.h>

/*
Compiler when gets a statement where a variable is divided by a constant number
then it uses multiplication not division instruction along with bit shift.
-------------------------------------------------------------------------------
X86 architecture

Compile
$ gcc -o div_const div_const.c
Disassemble
$ objdump -d div_const

On x86_64 linux, gcc generate the following assembly.

000000000040052d <main>:
  40052d:	55                   	push   %rbp
  40052e:	48 89 e5             	mov    %rsp,%rbp
  400531:	48 83 ec 10          	sub    $0x10,%rsp
  400535:	c7 45 f4 0d 00 00 00 	movl   $0xd,-0xc(%rbp)
  40053c:	8b 45 f4             	mov    -0xc(%rbp),%eax
  40053f:	ba cd cc cc cc       	mov    $0xcccccccd,%edx \
  400544:	f7 e2                	mul    %edx             | multiplication
  400546:	89 d0                	mov    %edx,%eax        | and bit shift
  400548:	c1 e8 02             	shr    $0x2,%eax        /
  40054b:	89 45 f8             	mov    %eax,-0x8(%rbp)
  40054e:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400551:	89 c6                	mov    %eax,%esi
  400553:	bf 14 06 40 00       	mov    $0x400614,%edi
  400558:	b8 00 00 00 00       	mov    $0x0,%eax
  40055d:	e8 ae fe ff ff       	callq  400410 <printf@plt>
  400562:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%rbp)   <- 13/5 = 2 placed in c
  400569:	8b 45 fc             	mov    -0x4(%rbp),%eax
  40056c:	89 c6                	mov    %eax,%esi
  40056e:	bf 1d 06 40 00       	mov    $0x40061d,%edi
  400573:	b8 00 00 00 00       	mov    $0x0,%eax
  400578:	e8 93 fe ff ff       	callq  400410 <printf@plt>
  40057d:	b8 00 00 00 00       	mov    $0x0,%eax
  400582:	c9                   	leaveq

Compiler generates instruction at address 0x40053f to 0x400548 for b = a /5.
There is no division instruction, only multiplication with constant and bit
shift. 

For c = 13/5 compiler generates instructions from address 0x400562 to 0x400569.
Here direct result of 13/5 is placed in variable c.
-------------------------------------------------------------------------------
ARM architecture

Compile using cross compiler
$ arm-linux-gnueabihf-gcc -o div_const_arm div_const.c

Disassemble
$ arm-linux-gnueabihf-objdump -d div_const_arm

000083f0 <main>:
    83f0:	b580      	push	{r7, lr}
    83f2:	b084      	sub	sp, #16
    83f4:	af00      	add	r7, sp, #0
    83f6:	230d      	movs	r3, #13
    83f8:	607b      	str	r3, [r7, #4]
    83fa:	687a      	ldr	r2, [r7, #4]
    83fc:	f64c 43cd 	movw	r3, #52429	; 0xcccd \
    8400:	f6cc 43cc 	movt	r3, #52428	; 0xcccc | multiplication
    8404:	fba3 1302 	umull	r1, r3, r3, r2           | and bit shift
    8408:	089b      	lsrs	r3, r3, #2               /
    840a:	60bb      	str	r3, [r7, #8]
    840c:	f248 4088 	movw	r0, #33928	; 0x8488
    8410:	f2c0 0000 	movt	r0, #0
    8414:	68b9      	ldr	r1, [r7, #8]
    8416:	f7ff ef68 	blx	82e8 <_init+0x20>
    841a:	2302      	movs	r3, #2                  <- 13/5=2 placed in c
    841c:	60fb      	str	r3, [r7, #12]
    841e:	f248 4094 	movw	r0, #33940	; 0x8494
    8422:	f2c0 0000 	movt	r0, #0
    8426:	68f9      	ldr	r1, [r7, #12]
    8428:	f7ff ef5e 	blx	82e8 <_init+0x20>
    842c:	2300      	movs	r3, #0
    842e:	4618      	mov	r0, r3
    8430:	f107 0710 	add.w	r7, r7, #16
    8434:	46bd      	mov	sp, r7
    8436:	bd80      	pop	{r7, pc}
*/

int main()
{
	unsigned int a = 13;
	unsigned int b;
	unsigned int c;
	
	b = a/5;
	printf("b = %u \n", b);

	c = 13/5;
	printf("c = %u \n", c);

	return 0;
}
