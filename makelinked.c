#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void linkedlistprint(struct node *ptr){
while (ptr != NULL)
{
    printf("Element :-  %d\n",ptr->data);
    ptr = ptr->next;
}

}

int main(){
    // declearing nodes
    struct node *first;
    struct node *second;
    struct node *third;
    // giving space in memory 
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first->data = 7;
    first->next = second;
    second->data = 98;
    second->next = third;
    third->data = 78;
    third->next = NULL;
    linkedlistprint(first);

return 0;
}