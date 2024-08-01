//Example of Single Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));;
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link = current;

    struct node *current1 = malloc(sizeof(struct node));
    current1->data = 5;
    current1->link = NULL;
    current->link = current1;

    printf("%d->%d->%d", head->data, current->data, current1->data);
    return 0;
}
