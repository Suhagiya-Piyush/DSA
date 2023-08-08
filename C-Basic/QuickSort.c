#include<stdio.h>
#include<stdlib.h>
int n;
void Print(int a[]){
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d  ", a[i]);
}

void QuickSort(int a[], int first, int last){
    int i, j, temp, pivot;
    if(first<last){
        Print(a);
        pivot = first;
        i = first, j = last;
        while (i<j)
        {
            while(a[i] <=a[pivot] && i<last)
                i++;
            while(a[j] > a[pivot])
                j--;
            if(i<j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            temp = a[pivot];
            a[pivot] = a[j];
            a[j] = temp;

            QuickSort(a, first, j-1);   //Left Side
            QuickSort(a, j+1, last);    //Right Side
        }
        
    }
}

int main(){
    int a[25], i;
    printf("How Many Elements Enter : ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
        a[i] = rand()%100+1;

    Print(a);
    QuickSort(a, 0, n-1);

    printf("\nAfter Quick Sort : ");
    Print(a);
}