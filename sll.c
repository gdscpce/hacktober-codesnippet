// Singly Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void InsertAtLast(struct node **head, int data)
{
    struct node *n, *t;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = n;
    }
    else
    {
        t = *head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = n;
    }
}

void InsertAtBeginning(struct node **head, int data)
{
    struct node *n, *t;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = n;
    }
    else
    {
        n->next = (*head);
        (*head) = n;
    }
}
void InsertAtPosition(struct node **head, int pos, int data)
{
    struct node *n, *t, *bck;
    int count = 0;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    if (*head == NULL && pos == 1)
    {
        *head = n;
    }
    else
    {
        t = *head;
        bck = NULL;
        while (t->next != NULL && count < pos - 1)
        {
            bck = t;
            t = t->next;
            count += 1;
        }
        if (count + 1 == pos - 1 && t->next == NULL)
        {
            t->next = n;
        }
        else if (t->next == NULL && count > pos)
        {
            printf("\nInvalid Position");
            return;
        }
        else
        {
            n->next = bck->next;
            bck->next = n;
        }
    }
}
void ShowList(struct node **head)
{
    struct node *t;
    t = *head;
    if (*head == NULL)
    {
        printf("\nList is Empty");
        return;
    }
    while (t->next != NULL)
    {
        printf(" %d ", t->data);
        t = t->next;
    }
    printf(" %d ", t->data);
}
void DeleteAtFirst(struct node **head)
{
    struct node *t, *r;
    t = *head;
    if (*head == NULL)
    {
        printf("\nList is Empty !\t");
        return;
    }
    else
    {
        r = (*head);
        (*head) = (*head)->next;
        free(r);
    }
}
void DeleteAtLast(struct node **head)
{
    struct node *t, *bck, *r;
    if (*head == NULL)
    {
        printf("\nList is Empty !\t");
        return;
    }
    else if ((*head)->next == NULL)
    {
        r = (*head);
        (*head) = (*head)->next;
        free(r);
    }
    else
    {
        t = *head;
        while (t->next != NULL)
        {
            bck = t;
            t = t->next;
        }
        r = t;
        bck->next = NULL;
        free(r);
    }
}
void DeleteAtPosition(struct node **head, int pos)
{
    struct node *t, *r, *bck;
    int count = 0;
    if (*head == NULL)
    {
        printf("\nList is Empty !\t");
        return;
    }
    else if ((*head)->next == NULL && pos == 1)
    {
        r = (*head);
        (*head) = (*head)->next;
        free(r);
    }
    else
    {
        t = *head;
        while (t->next != NULL && count < pos - 1)
        {
            bck = t;
            t = t->next;
            count += 1;
        }
        if (t->next == NULL && count > pos - 1)
        {
            printf("\nInvalid Position");
            return;
        }
        else
        {
            r = bck->next;
            bck->next = t->next;
            free(r);
        }
    }
}
int main()
{
    struct node *head = NULL;
    int data, choice, pos;
    while (1)
    {
        system("CLS");
        printf("1-InsertFirst \n 2-InsertLast \n 3-Insert At Position \n 4-DeleteFirst \n 5-Delete at Last \n 6-Delete at pos \n 7-View List");
        printf("\nEnter Your Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInsert Data :");
            scanf("%d", &data);
            InsertAtBeginning(&head, data);
            break;

        case 2:
            printf("\nInsert Data :");
            scanf("%d", &data);
            InsertAtLast(&head, data);
            break;

        case 3:
            printf("\nInsert Data:");
            scanf("%d", &data);
            printf("\nEnter position at which you want to insert data:");
            scanf("%d", &pos);
            InsertAtPosition(&head, pos, data);
            break;
        case 4:
            DeleteAtFirst(&head);
            printf("\nValue Deleted");
            break;
        case 5:
            DeleteAtLast(&head);
            printf("\nValue Deleted");
            break;
        case 6:
            printf("\nEnter position to delete:");
            scanf("%d", &pos);
            DeleteAtPosition(&head, pos);
            break;
        case 7:
            ShowList(&head);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        system("PAUSE");
    }
}
