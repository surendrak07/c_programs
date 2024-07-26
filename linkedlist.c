
//linked list

// #include<stdio.h>

// struct Node
// {
//     int data;
//     struct Node*next;
    
// };

// struct Node* createNode(int data)
// {
//     struct Node* newNode=(struct Node* )malloc(sizeof(struct Node));
//     newNode->data=data;
//     newNode->next=NULL;
//     return newNode;
// };

// void insertpos(struct Node** head,int data){
//     struct Node* newNode=createNode(data);
// }

// double linked list

// circular linked list

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// void push(struct Node** head_ref, int data)
// {

//     struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node));
//     ptr1->data = data;
//     ptr1->next = *head_ref;

//     if (*head_ref != NULL) {

//         struct Node* temp = *head_ref;
//         while (temp->next != *head_ref)
//             temp = temp->next;
//         temp->next = ptr1;
//     }
//     else

//         ptr1->next = ptr1;

//     *head_ref = ptr1;
// }
// void printList(struct Node* head)
// {
//     struct Node* temp = head;
//     if (head != NULL) {
//         do {
//             printf("%d ", temp->data);
//             temp = temp->next;
//         } while (temp != head);
//     }

//     printf("\n");
// }

// void deleteNode(struct Node** head, int key)
// {

//     if (*head == NULL)
//         return;

//     if ((*head)->data == key && (*head)->next == *head) {
//         free(*head);
//         *head = NULL;
//         return;
//     }

//     struct Node *last = *head, *d;

//     if ((*head)->data == key) {

//         while (last->next != *head)
//             last = last->next;

//         last->next = (*head)->next;
//         free(*head);
//         *head = last->next;
//         return;
//     }

//     while (last->next != *head && last->next->data != key) {
//         last = last->next;
//     }

//     if (last->next->data == key) {
//         d = last->next;
//         last->next = d->next;
//         free(d);
//     }
//     else
//         printf("Given node is not found in the list!!!\n");
// }

// int main()
// {
//     struct Node* head = NULL;

//     push(&head, 2);
//     push(&head, 5);
//     push(&head, 7);
//     push(&head, 8);
//     push(&head, 10);

//     printf("List Before Deletion: ");
//     printList(head);

//     deleteNode(&head, 7);

//     printf("List After Deletion: ");
//     printList(head);

//     return 0;
// }
// loop in a linked list
// #include <stdio.h>
// #include <stdlib.h>

// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

// // Function to detect loop in a linked list
// int hasCycle(struct ListNode *head) {
//     if (head == NULL || head->next == NULL) {
//         return 0; // No cycle
//     }

//     struct ListNode *slow = head;
//     struct ListNode *fast = head;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;          // Move slow pointer one step
//         fast = fast->next->next;    // Move fast pointer two steps

//         if (slow == fast) {
//             return 1; // Cycle detected
//         }
//     }

//     return 0; // No cycle
// }

// // Utility function to create a new node
// struct ListNode* newNode(int val) {
//     struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
//     temp->val = val;
//     temp->next = NULL;
//     return temp;
// }

// int main() {
//     // Example usage
//     struct ListNode* head = newNode(1);
//     head->next = newNode(2);
//     head->next->next = newNode(3);
//     head->next->next->next = newNode(4);
//     head->next->next->next->next = head->next; // Create a cycle

//     if (hasCycle(head)) {
//         printf("Cycle detected.\n");
//     } else {
//         printf("No cycle detected.\n");
//     }

//     return 0;
// }

// doubly linked list
// #include <stdio.h> 
// #include <stdlib.h> 

// struct node { 
// 	int data; 
// 	struct node* next; 
// 	struct node* prev; 
// }; 

// struct node* head = NULL; 
// struct node* tail = NULL; 

// struct node* create_node(int data) 
// { 
// 	struct node* new_node 
// 		= (struct node*)malloc(sizeof(struct node)); 
// 	new_node->data = data; 
// 	new_node->next = NULL; 
// 	new_node->prev = NULL; 
// 	return new_node; 
// } 

// void insert_at_head(int data) 
// { 
// 	struct node* new_node = create_node(data); 
// 	if (head == NULL) { 
// 		head = new_node; 
// 		tail = new_node; 
// 	} 
// 	else { 
// 		new_node->next = head; 
// 		head->prev = new_node; 
// 		head = new_node; 
// 	} 
// } 

// void insert_at_tail(int data) 
// { 
// 	struct node* new_node = create_node(data); 
// 	if (tail == NULL) { 
// 		head = new_node; 
// 		tail = new_node; 
// 	} 
// 	else { 
// 		new_node->prev = tail; 
// 		tail->next = new_node; 
// 		tail = new_node; 
// 	} 
// } 

// void delete_at_head() 
// { 
// 	if (head == NULL) { 
// 		return; 
// 	} 
// 	struct node* temp = head; 
// 	if (head == tail) { 
// 		head = NULL; 
// 		tail = NULL; 
// 	} 
// 	else { 
// 		head = head->next; 
// 		head->prev = NULL; 
// 	} 
// 	free(temp); 
// } 

// void delete_at_tail() 
// { 
// 	if (tail == NULL) { 
// 		return; 
// 	} 
// 	struct node* temp = tail; 
// 	if (head == tail) { 
// 		head = NULL; 
// 		tail = NULL; 
// 	} 
// 	else { 
// 		tail = tail->prev; 
// 		tail->next = NULL; 
// 	} 
// 	free(temp); 
// } 

// void display_forward() 
// { 
// 	struct node* current = head; 
// 	while (current != NULL) { 
// 		printf("%d ", current->data); 
// 		current = current->next; 
// 	} 
// 	printf("\n"); 
// } 

// void display_backward() 
// { 
// 	struct node* current = tail; 
// 	while (current != NULL) { 
// 		printf("%d ", current->data); 
// 		current = current->prev; 
// 	} 
// 	printf("\n"); 
// } 

// int main() 
// { 
// 	insert_at_head(10); 
// 	insert_at_head(20); 
// 	insert_at_tail(30); 
// 	display_forward(); // expected output: 20 10 30 
// 	display_backward(); // expected output: 30 10 20 
// 	delete_at_head(); 
// 	delete_at_tail(); 
// 	display_forward(); // expected output: 10 
// 	display_backward(); // expected output: 10 

// 	return 0; 
// }

// doubly circular linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;
    newNode->prev = newNode;
    return newNode;
}

void insertStart(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* last = (*head)->prev;

    newNode->next = *head;
    newNode->prev = last;
    last->next = newNode;
    (*head)->prev = newNode;
    *head = newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* last = (*head)->prev;

    newNode->next = *head;
    (*head)->prev = newNode;
    newNode->prev = last;
    last->next = newNode;
}

void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) {
        insertStart(head, data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* temp = *head;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
        if (temp == *head) {
            printf("Position out of bounds!\n");
            free(newNode);
            return;
        }
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteStart(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == *head) {
        *head = NULL;
        free(temp);
        return;
    }

    struct Node* last = temp->prev;
    *head = temp->next;
    last->next = *head;
    (*head)->prev = last;
    free(temp);
}

void deleteEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == *head) {
        *head = NULL;
        free(temp);
        return;
    }

    struct Node* last = temp->prev;

    last->prev->next = *head;
    (*head)->prev = last->prev;
    free(last);
}

void deleteAtPosition(struct Node** head, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) {
        deleteStart(head);
        return;
    }

    struct Node* temp = *head;

    for (int i = 1; i < position; i++) {
        temp = temp->next;
        if (temp == *head) {
            printf("Position out of bounds!\n");
            return;
        }
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Doubly Circular Linked List: ");
    display(head);

    insertStart(&head, 5);
    printf("After inserting 5 at the start: ");
    display(head);

    insertAtPosition(&head, 25, 3);
    printf("After inserting 25 at position 3: ");
    display(head);

    deleteStart(&head);
    printf("After deleting start: ");
    display(head);

    deleteEnd(&head);
    printf("After deleting end: ");
    display(head);

    deleteAtPosition(&head, 2);
    printf("After deleting at position 2: ");
    display(head);

    return 0;
}
