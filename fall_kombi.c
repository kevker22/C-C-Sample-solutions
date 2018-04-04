#include <stdio.h>

int main()
{
    double preisApfel = 1.45, preisBirne = 0.85, preisBanane = 0.75;

    // logisches Und
    if(preisBirne < 1.0 && preisBanane < 0.99)
    {
        printf(" Beide Artikel sind billig\n");
    }
    // logisches Oder
    if(preisApfel > 0.99 || preisBirne > 0.99)
    {
        printf(" Mindestens einer der Artikel is teuer\n");
    }
    if(!(preisBanane > 0.99))
    {
        printf(" Artikel ist nicht teuer\n");

    }
    return 0;
}
