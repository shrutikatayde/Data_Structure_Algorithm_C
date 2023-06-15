#include <stdio.h>
void main()
{
    char info[11] = {'A', 'B', 'C', 'D', 'E'};
    int stack[11];
    int left[11] = {1, 4, 3, -1, -1};
    int right[11] = {2, -1, -1, -1, -1};
    int ptr, root, top = 0;
    root = 0;
    stack[top] = -1;
    ptr = root;
    printf("The preorder traversal is\n");
    while (ptr != -1)
    {
        printf("%c", info[ptr]);
        if (right[ptr] != -1)
        {
            top = top + 1;
            stack[top] = right[ptr];
        }
        if (left[ptr] != -1)
        {
            ptr = left[ptr];
        }
        else
        {
            ptr = stack[top];
            top = top - 1;
        }
    }
}