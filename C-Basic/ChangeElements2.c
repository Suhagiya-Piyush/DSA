
//   10  20  30  40  50   ->   50  20  30  40  10

#include<stdio.h>
int main(){
    int Array[50],size,i,t;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Array[%d] : ",i);
        scanf("%d",&Array[i]);
    }
    printf("\nAfter Change\n");
    t=Array[0];
    Array[0]=Array[size-1];
    Array[size-1]=t;
    for(i=0;i<size;i++){
        printf("   %d\t",Array[i]);
    }

}