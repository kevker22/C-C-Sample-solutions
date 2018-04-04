#include <stdio.h>

int main()
{
    int anzahlErster, anzahlZweiter;
    double ersterPreis, zweiterPreis, summeRabatt, summeNormal;

    printf("Anzahl, erster Artikel? ");
    scanf("%d", &anzahlErster);

    printf("Wieviel kostete Ihr erster Artikel ? ");
    scanf("%lf", &ersterPreis);


    printf("Anzahl, zweiter Artikel? ");
    scanf("%d", &anzahlZweiter);


    printf("Wieviel kostete Ihr zweiter Artikel ? ");
    scanf("%lf", &zweiterPreis);


    summeNormal = (anzahlErster * ersterPreis) + (anzahlZweiter * zweiterPreis);
    summeRabatt = (summeNormal / 100) * 80;




    printf("Erster Artikel, Anzahl: %d\n", anzahlErster);
    printf("Erster Artikel, Preis in Euro: %.2f\n", ersterPreis);
    printf("Zweiter Artikel, Anzahl: %d\n", anzahlZweiter);
    printf("Zweiter Artikel, Preis in Euro: %.2f\n", zweiterPreis);
    printf("Summe ohne Rabatt: %.2f Euro\n",summeNormal );
    printf("Summe mit Rabatt : %.2f Euro\n", summeRabatt);

return 0;


}
