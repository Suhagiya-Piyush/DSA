#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void Display(){
    struct Node *ptr = head;
    if(head == NULL)
        printf("\tList is Empty...");
    else{
        while(ptr != NULL){
            printf("  %d",ptr->data);
            ptr = ptr->next;
        }
    }printf("\n");
}
void Insert(){
    int val;
    printf("\nEnter Value : ");
    scanf("%d",&val);
    struct Node *ptr = head;
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr->next != NULL)
        ptr = ptr->next;
    
    ptr->next = temp;
    return;
}
void Delete(){
    struct Node *ptr = head;
    struct Node *p;
    if(head == NULL){
        printf("List is Already Empty...\n");
        return;
    }
    else if(head->next == NULL){
        head = NULL;
        free(ptr);
        printf("Now List is Empty...\n");
        return;
    }
    while(ptr->next != NULL){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

int main(){
    int ch;
    do{
        printf("\n\t1->Insert");
        printf("\n\t2->Delete");
        printf("\n\t3->Display");
        printf("\n\tEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                printf("List is : ");
                Display();
                break;
            case 0:
                break;
            default:
                printf("\nEnter Valid Choice...\n");
                break;
        }
    }while (ch!=0);
}