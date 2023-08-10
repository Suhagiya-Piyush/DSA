#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void dis(){
    struct node *ptr = head;
    if(head == NULL)
        printf("List is empty...");
    else{
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }

}
void insert(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr->next !=NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;
}
int midDel(int pos){
    struct node *ptr = head,*p;
    while(ptr->data != pos){
        ptr = ptr->next;
        p = ptr->next;
    }
    ptr->next = p->next;    //ptr->next->next;
    free(p);
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    dis();
    midDel(50);
    dis();
}