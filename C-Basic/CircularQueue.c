
    //      Circular Queue

#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int Display(){
    int i = f;
    if(f<0)
        printf("\n\t Queue is Empty...");
    else{
        while(i<r){
            printf("%d  ",a[i]);
            i = (i+1)%n;
        }printf("%d  ",a[i]);
    }
}

