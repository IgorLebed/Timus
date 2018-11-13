#include <stdio.h>
#include <math.h>

int main(void)
{
    double num;

    if(scanf("%lf", &num) == 1)
    {
        main();
        printf("%.4f\n", sqrt(num));
    }

    return 0;
}
