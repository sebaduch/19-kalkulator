#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, wynik;
    char wybor;

    printf("Kalkulator: \n");
    printf(" Wprowadż pierwszą liczbę:\n");
    scanf("%lf", &a);
    printf("Wprowadz drugą liczbę: \n");
    scanf("%lf", &b);

    printf("wybierz działanie:\n+. Dodawanie\n-. Odejmowanie \n*. Mnożenie \n/. Dzielenie");
    scanf("%s",&wybor);

    switch(wybor)
    {
        case '+' :
            wynik = a+b;
            printf("wynik działania to : %lf\n", wynik);
            break;
        case '-' :
            wynik = a-b;
            printf("wynik działania to : %lf\n", wynik);
            break;
        case '*' :
            wynik = a*b;
            printf("wynik działania to : %lf\n", wynik);
            break;
        case '/':
            wynik = a/b;
            if (b!=0)
            {
            printf("wynik działania to : %lf\n", wynik);
            }
            else
            {
                printf("Nie diel przez zero");
            }
            break;
    }
    return 0;
}