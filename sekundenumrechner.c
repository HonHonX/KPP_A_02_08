#include<stdio.h>

/*
	Nach der Eingabe von Sekunden soll angezeigt werden,
	wie viele Tage und (Rest-)Stunden, (-Rest)Minuten und
	(Rest-)Sekunden das sind.
*/

int main (){
	int sekunden,restsekunden,minuten,stunden,tage;

	printf("\n\nBitte geben Sie die Anzahl der Sekunden an: ");
	scanf("%i",&sekunden);

	tage=sekunden/(24*60*60); //Berechnung der Tage
	restsekunden=(sekunden%(24*60*60)); //Zwischenberechnung
	stunden=restsekunden/(60*60); //Berechnung der Stunden
	restsekunden=(restsekunden%(60*60)); //Zwischenberechnung
	minuten=restsekunden/60; //Berechnung der Minuten
	restsekunden=(restsekunden%60); //Berechnung der Restsek.

	printf("\nUmgerechnet sind das %i Tag(e),\n%i Stunde(n),\n%i Minute(n) und\n%i Restsekunde(n)!\n\n",tage,stunden,minuten,restsekunden);

	return 0;
}
