#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    int t = 0;
    while (t == 0)
    {
        float dollars = get_float("How much change?($ is not required): ");
        if (dollars > 0)
        {
            int cents = round(dollars * 100);
            int a = cents / 25;
            int b = (cents - a * 25) / 10;
            int c = (cents - a * 25 - b * 10) / 5;
            int d = cents - a * 25 - b * 10 - c * 5;
            printf("%d\n", a + b + c + d);
            t = 1;
        }
    }

}
