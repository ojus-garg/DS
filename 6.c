#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = newNode; // Circular link to itself
    return newNode;
}

void append(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (!newNode)
        return;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = (*head)->next;
        (*head)->next = newNode;
    }
}

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *current = head;
    do
    {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("HEAD\n");
}

int main()
{
    struct Node *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    display(head);

    return 0;
}
