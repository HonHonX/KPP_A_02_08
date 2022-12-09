default: sekundenumrechner

sekundenumrechner.o: sekundenumrechner.c
	gcc -c sekundenumrechner.c -o sekundenumrechner.o

sekundenumrechner: sekundenumrechner.o
	gcc sekundenumrechner.o -o sekundenumrechner

clean:
	-rm -f sekundenumrechner.o
	-rm -f sekundenumrechner
