// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data; 
//     int num;            
//     struct Node* next;    
// } Node;

// int main() {
//     Node* head = (Node*)malloc(sizeof(Node));
//     head->data = 10;
//     head->num = 30;
//     head->next = NULL;

//     printf("%d\n", head->data);
//     printf("%d", head->num);

//     free(head);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;              
    struct Node* next;     
} Node;

int main() {

    Node* head = (Node*)malloc(sizeof(Node));
    Node* second = (Node*)malloc(sizeof(Node));
    Node* third = (Node*)malloc(sizeof(Node));


    head->data = 10;
    second->data = 20;
    third->data = 30;


    head->next = second;
    second->next = third;
    third->next = NULL;

    Node* temp = head;  

    printf("Linked list elements:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;  
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}

