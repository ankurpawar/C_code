IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../obj

_DEPS = add.h mul.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o add.o mul.o
OBJ = $(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(IDIR)/*~
