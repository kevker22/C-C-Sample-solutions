#include <stdio.h>

int main()
{
    int anzahl, nummer, nochEiner;
    double preis, summe;

    // Startwerte
    nummer=1;
    summe= 0.0;

    // Bedingte Wiederholung

    do
    {
        //Eingabe
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        // Berechung
        summe = summe + anzahl*preis;

        // Abfrage
        printf("Noch ein Artikel (Ja=1, Nein= andere Eingabe):" );
        scanf("%d", &nochEiner);

        // Laufende Nummer erhöhen
        nummer = nummer+1;
    }

    while(nochEiner == 1);

    // Ausgabe
    printf("Summe der Rechung: %.2f Euro \n", summe);

    return 0;
}
