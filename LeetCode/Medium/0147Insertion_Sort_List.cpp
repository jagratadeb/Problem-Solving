#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

// Your insertionSortList function (unchanged)
struct ListNode *insertionSortList(struct ListNode *head)
{
    struct ListNode *p = head;
    struct ListNode *q;
    if (p == NULL || p->next == NULL)
        return p;

    while (p != NULL)
    {
        q = head;
        while (q != p)
        {
            if (q->val > p->val)
            {
                int temp = q->val;
                q->val = p->val;
                p->val = temp;
            }
            q = q->next;
        }
        p = p->next;
    }
    return head;
}

// Helper function to create a new node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    if (!newNode)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print the list
void printList(struct ListNode *head)
{
    struct ListNode *current = head;
    while (current != NULL)
    {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

// Helper function to free the list
void freeList(struct ListNode *head)
{
    struct ListNode *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    // Create linked list: 4 -> 2 -> 1 -> 3
    struct ListNode *head = createNode(4);
    head->next = createNode(2);
    head->next->next = createNode(1);
    head->next->next->next = createNode(3);

    printf("Original list: ");
    printList(head);

    // Call your insertionSortList function
    head = insertionSortList(head);

    printf("Sorted list: ");
    printList(head);

    freeList(head);
    return 0;
}
