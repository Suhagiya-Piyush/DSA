
// DeQueue 

#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int Display()
{
    if (f < 0)
        printf("Queue is Now Empty...");
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d   ", a[i]);
        }
    }printf("\n");
}

int InsertEnd()
{
    int val;
    if (r >= n - 1)
        printf("\n\tQueue is Full...\n");
    else if (r < 0)
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        f = r = 0;
        a[r] = val;
    }
    else
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        r++;
        a[r] = val;
    }
}

int DeleteFirst()
{
    if (f < 0)
    {
        printf("\n\tQueue is Empty..\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int main()
{
    int ch;
    do
    {
        printf("\n\t   (Note : Last Insert / First Delete)");
        printf("\n\t1 -> Insert End");
        printf("\n\t   (Note : Insert Only Last Position)");
        printf("\n\t2 -> Delete First");
        printf("\n\t   (Note : Delete Only First Position)");

        printf("\n\t9 -> Display");
        printf("\n\t0 -> Exit");

        printf("\n\nEnter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            InsertEnd();
            break;
        case 2:
            DeleteFirst();
            break;
        case 9:
            printf("\n\tQueue is : ");
            Display();
            break;
        case 0:
            break;
        default:
            printf("\n\tEnter Valid Choice..");
            break;
        }
    } while (ch != 0);
}