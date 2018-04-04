#include <stdio.h>

int main()
{
    int anzahl, nummer;
    double preis, summeRechnung;

    // Startwert
    summeRechnung=0.0;

    // Regelm‰ﬂige Wiederholung
    for(nummer=1; nummer < 4; nummer = nummer+1)
    {
        //Eingabe
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);

        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);


        // Berechung
        summeRechnung = summeRechnung + anzahl*preis;


    }

    //Ausgabe
    printf("Summe der Rechung: %.2f Euro\n", summeRechnung);

    return 0;

}
