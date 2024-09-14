#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    int count, i, temp, j,ord;
    int T[100];
    bool order;

    do
    {

        printf("give me a positive number\n");
        scanf("%d", &count);

    } while (count <= 0);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &T[i]);
    }
    printf("here the array that u created\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", T[i]);
    }
    printf("ascending order type 1 descending order type 0\n");
    scanf("%d",&ord);
    order=ord;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
            {
                if (order==true)
                {
                 if (T[j] > T[j + 1])
                    {
                        temp = T[j];
                        T[j] = T[j + 1];
                        T[j + 1] = temp;
                    } 
                }else
                {
                    if (T[j] < T[j + 1])
                    {
                        temp = T[j];
                        T[j] = T[j + 1];
                        T[j + 1] = temp;
                    }
                }
            }
    }
    printf("and here the same table but ordred\n");
    for (i = 0; i < count; i++)
    {
        printf("%d", T[i]);
    }

    return 0;
}
