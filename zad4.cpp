#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double x, sum = 0.0;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    printf("Podaj liczbe x: ");
    scanf("%lf", &x);

    for (i = 0; i < n; i++)
    {
        double term = pow(-1, i) * (i + 1) * pow(x, i);
        sum += term;
    }

    printf("Suma pierwszych %d elementow szeregu wynosi %lf\n", n, sum);

    return 0;
}
