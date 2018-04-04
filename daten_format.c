#include <stdio.h>
int main()
{
    int anzahlApfel =12 , anzahlRadio = 2;
    double preisApfel = 1.45, preisRadio = 109.95;

    // Ausgabe für Tabelle von ganzen Zahlen, teilweise mit führenden Nullen#
    printf("Anzahl\n");
    printf("%6d\n", anzahlApfel);
    printf("%06d\n", anzahlRadio);

    // Ausgabe für Tabelle von Zahlen mit Nachkommastellen

    printf("\n    Preis\n");
    printf("%8.2f Euro\n", preisApfel);
    printf("%8.2f Euro\n", preisRadio);

    return 0;
}


