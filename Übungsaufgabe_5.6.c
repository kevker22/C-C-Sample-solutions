#include <stdio.h>

int main()
{
    int anzahl;
    double preis;

    do

    {
        printf("\nAnzahl eingeben: ");
        scanf("%d", &anzahl);
        while (anzahl<0)
        {
         printf("Anzahl muss possitiv sein!");
         printf("\nAnzahl eingeben: ");
         scanf("%d", &anzahl);

        }
        printf("Preis in Euro eingeben: ");
        scanf("%lf", &preis);
        while (preis<0)
        {
         printf("Preis muss possitiv sein!");
         printf("\nPreis in Euro eingeben: ");
         scanf("%lf", &preis);
         while (preis>10.0)
         {
         printf("Preis muss kleiner als 10 Euro sein!");
         printf("\nPreis in Euro eingeben: ");
         scanf("%lf", &preis);
         }

        }

        printf("Anzahl: %d\n", anzahl);
        printf("Preis: %.2f Euro", preis);

         if(anzahl ==0|| preis == 0)
    {
        printf("\nAnzahl und Preis sollen nicht 0 sein, bitte erneut eingeben!");
    }
    }

    while(anzahl ==0 || preis ==0.0);



    return 0;


}
