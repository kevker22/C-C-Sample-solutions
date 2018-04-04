#include <stdio.h>

int main()
{
    int anzahl, nummer, nochEiner;
    double preis, summe;

    // Startwerte
    nummer = 0;
    summe= 0.0;

    // Abfrage ob der Benutzer überhaupt Artikel eingeben möchte
    printf("Wollen Sie Artikel eingeben (Ja=1, Nein= andere Eingabe) :");
    scanf("%d", &nochEiner);

    // Bedingte Wiederholung in Abhäningkeit von "nochEiner"

    while(nochEiner ==1)
    {
        // Laufende Nummer erhöhen
        nummer = nummer +1;

        // Eingabe
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        // Berechung
        summe = summe + anzahl*preis;

        // Abfrage
        printf("Wollen Sie noch einen Artikel hinzufügen? (Ja=1, Nein= andere Eingabe): ");
        scanf("%d", &nochEiner);
    }

    // Ausgabe
    if(nummer == 0)
    {
        printf("Es wurde keine Eingabe getätigt \n");
    }
    else
    {
        printf("Summe der Rechung: %.2f Euro \n", summe);
    }

    return 0;
}
