#include <stdio.h>
int main()
{
    int a[100], i;
    printf("To pop enter -1");
    for (i = 0;;)
    {
        printf("\npush ");
        scanf("%d", &a[i]);
        if (a[i] == -1)
        {
            if (i == 0)
                printf("underflow \n");
            else
                printf("pop=%d\n", a[--i]);
        }
        else
        {
            i++;
        }
    }
}