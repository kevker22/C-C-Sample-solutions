#include <stdio.h>

int main()
{
    double preis = 1.45, ergebnis = 0.0;
    int anzahl;

     printf("Anzahl         Preis\n");

    for(anzahl =1; anzahl<=10; anzahl=anzahl+1)
    {
        ergebnis = preis*anzahl;
        printf("%6d", anzahl);
        printf("%8.2f Euro\n",ergebnis);


    }

    return 0;
}
