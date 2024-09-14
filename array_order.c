#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{

    int count, i, temp, j;
    int T[100];
    do
    {

        printf("give me a positive number");
        scanf("%d", &count);

    } while (count <= 0);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &T[i]);
    }
    printf("here the array that u created");
    for (i = 0; i < count; i++)
    {
        printf("%d ", T[i]);
    }
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (T[j] > T[j + 1])
            {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
    printf("and here the same table but ordred");
    for (i = 0; i < count; i++)
    {
        printf("%d", T[i]);
    }

    return 0;
}
