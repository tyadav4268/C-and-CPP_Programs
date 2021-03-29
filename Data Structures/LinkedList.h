// Currently the following functions are available:
// struct node *createANewNode(int element);
// void addElementAtBeg(int element);
// void addElementAtEnd(int element);
// int getLength();
// void addElementAtIndex(int element, int index);
// void printLinkedList();
// void printReverse(); // using stack
// void reverseLinkedList(); // using pointers


//To be created:
// delete functions
// reverse using recursion
// find middle element
// sort
// insert in sorted, etc...

struct node{
        int data;
        struct node *link;
};

struct node *start = NULL;

struct node *createANewNode(int element){
    struct node * temp = (struct node *) malloc(sizeof(struct node)); // creates a new node
    temp->data = element; // put the element in the data part of new node
    temp->link = NULL; // make it point to NULL
    return temp;
}

int getLength(){
        int count = 0;
        if (start == NULL) return 0;
        else{
            struct node *ptr = start;
            while(ptr != NULL){
                count++;
                ptr = ptr->link;
            }
            return count;
        }
}

void addElementAtBeg(int element){
    struct node *temp = createANewNode(element);
    // if linked list is Empty
    if (start == NULL){
        start = temp;   // make start points to the newly created node
    }
    // if the linked list is not Empty
    else{
        temp->link = start; // make the newly created node point to the linked list
        start = temp;   // Now make the start point to the newly created node
    }

}

void addElementAtEnd(int element){
    struct node *temp = createANewNode(element);
    if (start == NULL) start = temp;
    else{
        struct node *ptr = start;
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void printLinkedList(){
    if (start == NULL) printf("Linked List is Empty!\n");   // if the linked list is Empty
    else{
        // storing the address of linked list in ptr variable ( pointing to first node)
        // as we dont want to change the start value
        // if we do not do this our whole linked list would be lost as we lose the
        // pointer to the first node i.e start
        struct node *ptr = start;
        while(ptr != NULL){
            printf("%d\n", ptr->data);  // prints the data of the node pointed by ptr
            ptr = ptr->link;    // make the ptr points to next node
        }
    }
}

void addElementAtIndex(int element, int index){
    if (index < 0) printf("Index should be greater than or equal to zero!!\n");
    else if(index > getLength()){
        printf("Index cannot be greater than length of Linked List, Length of linked list is: %d\n", getLength());
    }
    else if(index == 0){
        addElementAtBeg(element);
    }
    else{
        struct node *temp = createANewNode(element);
        struct node *ptr = start;
        struct node *prev = NULL;
        for(int i = 0; i < index; i++){
            prev = ptr;
            ptr = ptr->link;
        }
        temp->link = ptr;
        prev->link = temp;
    }
}

void reverseLinkedList(){
    if (!(start == NULL || start->link == NULL)){
        struct node* ptr = start;
        struct node* ptr2 = ptr->link;
        struct node* ptr3 = ptr2->link;
        ptr->link = NULL;
        while(ptr3 != NULL){
            ptr2->link = ptr;
            ptr = ptr2;
            ptr2 = ptr3;
            ptr3 = ptr3->link;
        }
        ptr2->link = ptr;
        start = ptr2;
    }
}


void printReverse(){
    //----------------------Creating required part of stack to be used---------------------------
    int stack[getLength()];
    int top = -1;

    int isEmpty(){
        if(top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int pop(){
        return stack[top--];
    }

    void push(int element){
        top++;
        stack[top] = element;
    }

    //----------------------building stack completed-------------------------------------------------------

    // printing reverse linked list using stack
    if (start == NULL) printf("Linked List is empty!\n");
    else{
        struct node *ptr = start;
        while(ptr != NULL){

            push(ptr->data);
            ptr = ptr->link;
        }
        while(!isEmpty()){
            printf("%d\n", pop());
        }

    }
}
