
// Marge 2 Array with Size Plus

#include<stdio.h>
int main(){
    int Arr1[10],Arr2[10],Array[50],i,j,s1,s2;
    printf("Array 1 Size : ");
    scanf("%d",&s1);
    for(i=0;i<s1;i++){
        printf("Arr1[%d] : ",i);
        scanf("%d",&Arr1[i]);
        Array[i]=Arr1[i];
    }
    j=i;
    printf("Array 2 Size : ");
    scanf("%d",&s2);
    for(i=0;i<s2;i++){
        printf("Arr2[%d] : ",i);
        scanf("%d",&Arr2[i]);
        Array[j++]=Arr2[i];
    }
    printf("After Marge : \n");
    for(i=0;i<j;i++){
        printf("  %d  ",Array[i]);
    }
}