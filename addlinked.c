#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creatnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}
void linkedlistprint(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :-  %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
}
int main()
{
    struct node *first = creatnode(3);
    struct node *second = creatnode(6);
    struct node *third = creatnode(2);
    first->next = second;
    second->next = third;
    third->next = NULL;
    struct node *p1 = creatnode(3);
    struct node *p2 = creatnode(6);
    struct node *p3 = creatnode(2);
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
    linkedlistprint(first);
    linkedlistprint(p1);

    return 0;
}