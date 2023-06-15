#include <stdio.h>
int data[10] = {22, 65, 1, 99, 32, 17, 14, 49, 33, 2};
int n = 10;
void bubble(void);
void main()
{
    int i;
    printf("Value contained in data[10] =");
    for (i = 0; i < 10; i++)
        printf(" %d", data[i]);
    bubble();
    printf("\n \nValues contained in data[10] after sorting =");
    for (i = 0; i < 10; i++)
        printf(" %d", data[i]);
}
void bubble(void)
{
    int k, ptr, temp;
    for (k = 0; k < (n - 1 - 1); k++)
    {
        ptr = 0;
        while (ptr <= (n - k - 1 - 1))
        {
            if (data[ptr] > data[ptr + 1])
            {
                temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }
            ptr = ptr + 1;
        }
    }
}