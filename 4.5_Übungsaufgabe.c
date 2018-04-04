#include <stdio.h>

int main()
{
    int anzahl;
    double preis;
    double summe;
    double maxbetrag = 10.0;

    printf(" Bitte geben Sie die Anzahl der Artikel ein: \n");
    scanf("%d", &anzahl);
    printf("Anzahl: %d\n", anzahl);

    printf("\n");


    printf(" Bitte geben Sie den Preis für ein Artikel ein: \n");
    scanf("%lf", &preis);
    printf("preis in Euro: %.2f\n", preis);

    printf("\n");

    summe = anzahl * preis;

    if(summe < maxbetrag)
    {
        printf("Summe der Rechung: %.2f Euro \n", summe );
        printf(" Es wurde kein Rabatt gewährt!");
    }
    if(summe > maxbetrag)
    {
        summe = (summe/100)*80;
        printf("Summe der Rechung: %.2f Euro \n", summe );
        printf(" Es wurde ein 20 Prozent  Rabatt gewährt!");

    }
}
