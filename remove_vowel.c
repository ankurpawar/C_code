/* Remove all the occurances of vowels in a string */

#include <stdio.h>
#include <string.h>

int fill_arr(char *arr)
{
	int i = 0;
	static char vowel_index[] = {'A', 'a',
				     'E', 'e',
				     'I', 'i',
				     'O', 'o',
				     'U', 'u'};
	for (i = 0; i < sizeof(vowel_index); i++) {
		arr[vowel_index[i]] = 1;
	}
}

int main()
{
	char *str = "Please read this application and give me gratuity";
	char str2[80]; /*String without vowel*/
	char str3[80]; /*String with vowel*/
	char c = str;
	int i = 0, j = 0;
	char arr[256];

	memset(arr, 0, sizeof(arr));	
	fill_arr(arr);
	while(*str) {
		if(arr[*str]) {
			*(str2 + i++) = *str;
			*(str3 + j++) = ' ';
		} else {
			str2[i++] = ' ';
			str3[j++] = *str;
		}
		str++;    
	}
	str3[j] = '\0';
	*(str2+i) = '\0';  

	printf("Original string \"%s\"\n", c);
	printf("With vowel      \"%s\"\n", str2);
	printf("Without vowel   \"%s\"\n", str3);
	return 0;
}

/*
Original string "Please read this application and give me gratuity"
Without vowel   "  ea e  ea    i  a   i a io  a    i e  e   a ui  "
With vowel      "Pl  s  r  d th s  ppl c t  n  nd g v  m  gr t  ty"
*/
