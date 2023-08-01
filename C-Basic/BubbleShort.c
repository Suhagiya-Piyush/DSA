#include<stdio.h>
#include<stdlib.h>
# define n 10
int a[n];
int Display(){
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}
int BubbleShort(){
    int i, j, t;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
int main(){
    for(int i=0;i<n;i++)
        a[i] = rand() % 50 + 1;

    printf("\nRandom Array is : ");
    Display();

    BubbleShort();

    printf("\nShorted Array is : ");
    Display();
}