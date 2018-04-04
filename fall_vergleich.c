#include <stdio.h>
int main()

{
double preisApfel = 1.45, preisBirne = 0.85, preisKiwi = 1.45;

/*Größer */
if (preisApfel > preisBirne){
    printf(" Apfel ist teurer als Birne\n");
}
/* Kleiner */
if (preisBirne < preisKiwi){
    printf(" Birne ist billiger als Kiwi\n");
}
/* Größer oder Gleich */
if(preisApfel >= preisKiwi){
    printf(" Apfel ist mindestens so teuer wie Kiwi\n");
}
/* Kleiner oder Gleich */
if(preisBirne <= preisKiwi){
    printf(" Birne ist höchstens so teuer wie Kiwi\n");
}
/* Gleich */
if(preisApfel == preisKiwi){
    printf(" Apfel und Kiwi haben den selben Preis\n");
}
/* Ungleich */
if(preisBirne != preisKiwi){
    printf(" Birne und Kiwi haben unterschiedliche Preise\n");
}
    return 0;
}
