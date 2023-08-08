#include<stdio.h>
#include<stdlib.h>
void Marge(int a[], int l, int mid, int h){
    int b[100];
    int i = l, j = mid+1, k = l;
    while(i<=mid && j<=h){
        if(a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while(i <= mid)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for(i=l;i<=h;i++)
        a[i] = b[i];
}

int MargeSort(int a[], int l, int h){
    int mid;
    if(l < h){
        mid = (l+h)/2;
        MargeSort(a, l, mid);
        MargeSort(a, mid+1, h);
        Marge(a, l, mid, h);
    }
}

int main(){
    int a[15], n = 15;
    for(int i=0;i<n;i++)
        a[i] = (rand()%90)+1;

    printf("\nBefore Sorting Array : ");
    for(int i=0;i<n;i++)
        printf("%d  ", a[i]);
    
    MargeSort(a, 0, n-1);
    printf("\n\nAfter Sorting Array : ");
    for(int i=0;i<n;i++)
        printf("%d  ", a[i]);
}