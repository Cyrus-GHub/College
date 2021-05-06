// Linked list

/*

0. Struct defintion
1. Create a node using malloc function
2. Node stores 2 value (int data and pointer initialised to null)
3. 1st node attaches to head (added to head)
4. Every subsequent node is added to list (added to end)

*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *t, *p;

void display(struct node *p)
{
    if (p == NULL)
    {
        printf("\n List is empty");
    }

    p = head;
    printf("List: ");
    while (p != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next;
    }
    printf("NULL");
}

int largest(struct node *p)
{
    struct node *new = head;
    int max;

    max = head->data;

    while (new != NULL)
    {
        if (max < new->data)
        {
            max = new->data;
        }
        new = new->next;
    }
    return max;
}

int main()
{
    int a;
    t = (struct node *)malloc(sizeof(struct node)); // First node
    printf("\n Enter 1st data: ");
    scanf("%d", &t->data);
    t->next = NULL;
    head = t;

    do // Node addition
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter next data: ");
        scanf("%d", &t->data);
        t->next = NULL;
        p = head;
        while (p->next)
            p = p->next;

        p->next = t;

        printf("\n Do you wnat to add more nodes? Press 1 for YES, Press 0 for NO\n");
        scanf("%d", &a);
    } while (a);

    display(head);

    int x = largest(head);
    printf("\n Largest: %d", x);

    return 0;
}
