
//       Binary Search

#include<stdio.h>
#define n 10
int a[n] = {1,3,5,7,9,12,15,18,21,24};
int binarySearch(int l, int h, int x){
    int mid;
    while(l<=h){
        mid = (l+h)/2;
        if(a[mid]== x)
            return mid + 1;
        else if(a[mid]<x)
            l = mid + 1;
        else
            h = mid - 1;
    }return -1;
}
int main(){
    int x;
    printf("Enter Searching Elements : ");
    scanf("%d",&x);
    int m = binarySearch(0,n-1,x);
    if(m == -1)
        printf("Element was not Found.....");
    else
        printf("Element was Found at %d Position",m);
}