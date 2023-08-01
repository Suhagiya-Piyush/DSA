#include <stdio.h>
#include <stdlib.h>
#define n 15
int a[n];
int Display()
{
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
int SelectionShort()
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
int main()
{
    for (int i = 0; i < n; i++)
        a[i] = rand() % 50 + 1;

    printf("\nRandom Array is : ");
    Display();

    SelectionShort();

    printf("\nShorted Array is : ");
    Display();
}