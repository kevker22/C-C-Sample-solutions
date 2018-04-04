#include <stdio.h>
int main()
{
    double preis = 1.0;

   /* printf(" Welchen Preis wollen Sie festlegen?: ");
    scanf("%lf", preis); */

    // Bedingte Ausführung eines Blocks von Anzweisungen

if(preis > 0.99)
{
    printf("Ein wirklich teurer Artikel\n"
           "Brauchen wir den wirklich?\n");
}

// Bedingte Anweisung einer einzelnen Anweisung

 if  (preis < 1.0){
    printf(" Ein billiger Artikel\n");
}

return 0;
}

