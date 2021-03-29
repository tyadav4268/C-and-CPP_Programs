#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(){
    // printf("Adding 20 at index 1\n");
    // addElementAtIndex(20, 1);
    // printf("Linked List: \n");
    // printLinkedList();
    printf("Adding 30 at index 0\n");
    addElementAtIndex(30, 0);
    printf("Linked List: \n");
    printLinkedList();
        printf("\n\n");
    printf("Adding 20 at index 0\n");
    addElementAtIndex(20, 0);
    printf("Linked List: \n");
    printLinkedList();
        printf("\n\n");
    printf("Adding 10 at Beginning\n");
    addElementAtBeg(10);
    printf("Adding 50 at the End\n");
    addElementAtEnd(50);
        printf("\n\n");
    printf("Final Linked List: \n");
    printLinkedList();
    printf("\n\n");
    // printf("Printing in Reverse: \n");printReverse();
    printf("Reversing linked list\n");
    reverseLinkedList();
    printLinkedList();

    return 0;
}
