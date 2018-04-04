#include <stdio.h>
int main()
{
    // Deklaration
    int anzahl;
    double preis;
    int alter;


    // erste Eingabe des Benutzers
    printf("Anzahl eingeben: ");
    scanf("%d", &anzahl);

    // zweite Eingabe des Benutzers
    printf("Preis in Euro eingeben: ");
    scanf("%lf", &preis);

    // dritte Eingabe des Benutzers
    printf(" Bitte geben Sie ihr Alter ein:");
    scanf("%d", &alter);

    // Ausgabe auf dem Bildschrim

    printf("Anzahl: %d\n", anzahl);
    printf("Preis: %.2f Euro\n", preis);
    printf("Ihr Alter ist: %d", alter);


return 0;


}
