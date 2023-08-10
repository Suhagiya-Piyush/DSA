#include<stdio.h>
struct Node{
    int data;
    char ch;
    struct Node *ptr;
};

int main(){
    struct Node x, y;
    x.ch = 'A';
    x.data = 10;
    x.ptr = NULL;

    y.ch = 'Z';
    y.data = 36;
    y.ptr = NULL;

    //printf("X :\nData : %d\tCh : %c",x.data, x.ch);
    //printf("\nY :\nData : %d\tCh : %c",y.data, y.ch);

    y.ptr = &x;
    x.ptr = &y;
    printf("\nX : [Data : %d\tCh : %c]",y.ptr->data, y.ptr->ch);
    printf("\nY : [Data : %d\tCh : %c]",x.ptr->data, x.ptr->ch);


}