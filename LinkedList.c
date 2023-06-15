#include <stdio.h>
int info[5];
int link[5];
int start;
int ptr;
void main()
{
    info[0] = 1;
    info[1] = 2;
    info[2] = 3;
    info[3] = 4;
    info[4] = 5;
    
    link[0] = 3;
    link[1] = 4;
    link[2] = 1;
    link[3] = -1;
    link[4] = 0;
    start = 2;
    ptr = start;
    printf("Info\tLink\n");
    while (ptr != -1)
    {
        printf("%d\t%d\n", info[ptr], link[ptr]);
        ptr = link[ptr];
    }
}
