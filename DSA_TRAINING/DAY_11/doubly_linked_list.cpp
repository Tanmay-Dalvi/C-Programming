#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

struct node *createNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

void insertNode()
{
    struct node *temp, *t1;
    temp = createNode();

    printf("Enter any Number: ");
    scanf("%d", &temp->info); 

    temp->next = NULL;
    temp->prev = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        t1 = start;
        while (t1->next != NULL)
        {
            t1 = t1->next;
        }
        t1->next = temp;
        temp->prev = t1;
    }
}

void deleteNode()
{
    if (start == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    struct node *r = start;
    start = start->next;
    if (start != NULL)
    {
        start->prev = NULL;
    }
    free(r);
    printf("First node deleted successfully\n");
}

void display()
{
    struct node *t2 = start;
    if (start == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    
    printf("Linked List: ");
    while (t2 != NULL)
    {
        printf("%d <-> ", t2->info);
        t2 = t2->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Insert Node\n2. Display List\n3. Delete node (First Node)\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertNode();
            break;
        case 2:
            display();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice!!!\n");
        }
    }
}
