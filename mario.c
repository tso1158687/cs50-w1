#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int t = 0;
    while (t == 0)
    {
        int n = get_int("Height: ");;
        if (n > 0 && n < 9)
        {
            for (int i = 1; i < n + 1 ; i++)
            {
                for (int j = n; j > i; j--)
                {
                    printf(" ");
                }
                for (int k = 0; k < i; k++)
                {
                    printf("#");
                }
                
                printf("  ");
                
                for (int k = 0; k < i; k++)
                {
                    printf("#");
                }
                
                
                printf("\n");
            }
            t = 1;
        }
    }


}
