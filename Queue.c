
#include <stdio.h>
void main()
{
    int queue[100], n, item, ch, i, front = 0, rear = 0;
    printf("Enter the size of queue:");
    scanf("%d", &n);
    printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    do
    {
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if ((rear == n) || (front == rear + 1))
            {  
                printf("Overflow");
            }
            else if (front == 0)
            {
                front = 1;
                rear = 1;
            }
            else if (rear == n)
            {
                rear = 1;
            }
            else
            {
                rear = rear + 1;
            }
            printf("Enter the element you want to insert:");
            scanf("%d", &item);
            queue[rear] = item;
            break;

        case 2:

            if (front == 0)
            {
                printf("Underflow");
            }
            printf("%d is deleted\n", queue[front]);
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            else if (front == n)
            {
                front = 1;
            }
            else
            {
                front = front + 1;
            }

            break;
        case 3:
            printf("Element of queue are:\n");
            for (int i = front; i <= rear; i++)
            {
                printf("%d\n", queue[i]);
            }
            break;
        case 4:
            printf("Exit");
            break;
        }
    } while (ch != 4);
}