#include<stdio.h>
#define n 5
int a[n], top = -1;
void display(){
    for(int i=0;i<=top;i++){
        printf("\t%d",a[i]);
    }printf("\n");
}
int First_insert(){
    int val;
    if(top>=n-1)
        printf("\n\t\tArray is Full...\n");
    else{
        for(int i=top;i>=0;i--){
            a[i+1]=a[i];
        }
        printf("\n\tEnter Insert Array Num : ");
        scanf("%d",&val);
        top++;
        a[0]=val;
    }
}
int First_delete(){
    if(top<0)
        printf("\n\t\tArray is Empty...\n");
    else{
        for(int i=0;i<top;i++){
            a[i]=a[i+1];
        }
        top--;
    }
}

int main(){
    int ch;
    do{
        printf("\n\t1. Insert\n");
        printf("\t2. Delete\n");
        printf("\t   (Note:Delete Only Last Element)\n");
        printf("\t3. Display\n");
        printf("\n\tEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                First_insert();
                break;
            case 2:
                First_delete();
                break;
            case 3:
                printf("\n\t\tArray is : ");
                display();
                break;
            case 0:
                break;
            default:
                printf("\nChoice Valid Num...\n");
                break;
        }
    }while(ch!=0);
}