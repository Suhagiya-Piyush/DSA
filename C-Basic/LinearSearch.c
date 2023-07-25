//Linear Search & Random Array

#include<stdio.h>
#include<stdlib.h>
#define n 50
int a[n], i, val;
int Linear_Search(int v){
    for(i=0;i<n;i++){
        if(v==a[i])
           return i;
    }
    return -1;
}
int main(){
    for(i=0;i<n;i++){
        a[i]=rand()%100;        // Generat Random Array
        printf("%d:[%d]  ",i,a[i]);
    }
    printf("\n\nEnter Value For Search : ");
    scanf("%d",&val);
    int m = Linear_Search(val);
    if(m!=-1)
       printf("\nYour Value in Array of Index Num : %d",m);
    else
        printf("\nYour Element Not Found..");
}