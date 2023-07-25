#include<stdio.h>
#define n 5
int a[n], top = -1;
void display(){
    for(int i=0;i<=top;i++){
        printf("\t%d",a[i]);
    }printf("\n");
}
int Last_insert(){
    int val;
    if(top>=n-1)
        printf("\n\t\tArray is Full...\n");
    else{
        printf("\n\tEnter Insert Array Num : ");
        scanf("%d",&val);
        top++;
        a[top]=val;
    }
}
int First_insert(){
    int val;
    if(top>=n-1)
        printf("\n\t\tArray is Full...\n");
    else if(top<0){
        printf("\n\tEnter Insert Array Num : ");
        scanf("%d",&val);
        top++;
        a[top]=val;
    }else{
        printf("\n\tEnter Insert Array Num : ");
        scanf("%d",&val);
        top++;
        for(int i=top;i>=0;i--){
            a[i]=a[i-1];
        }
        a[0]=val;
    }
}int Last_delete(){
    if(top<0)
        printf("\n\t\tArray is Empty...\n");
    else{
        top--;
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
        printf("\n\t1. Insert Last\n");
        printf("\t2. Insert First\n");
        printf("\t3. Delete Last\n");
        printf("\t   (Note:Delete Only Last Element)\n");
        printf("\t4. Delete First\n");
        printf("\t   (Note:Delete Only First Element)\n");
        printf("\t5. Display\n");
        printf("\n\tEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                Last_insert();
                break;
            case 2:
                First_insert();
                break;
            case 3:
                Last_delete();
                break;
            case 4:
                First_delete();
                break;
            case 5:
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