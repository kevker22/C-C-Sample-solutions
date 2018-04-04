#include <stdio.h>
int main()
{

    double preis = 0.0;
    printf(" Was soll der Artikel kosten?");
    scanf("%lf", &preis);
    printf("\n%.2f€ ", preis);

    // Falls die Bedingung zutrifft
    if(preis>0.99)
    {
        printf("Ein teuerer Artikel\n");

    } // Falls die Bedingung nicht stimmt
    else
    {
        printf(" Ein billiger Artikel\n");
        printf(" Den nehmen wir!\n");
    }



    return 0;
}
