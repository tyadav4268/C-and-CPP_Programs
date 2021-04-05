/*
Created:
    Traversal
    Height of the tree
    Size of the tree
To be created:
    BST and operations
*/

struct node{
    int info;
    struct node* left;
    struct node* right;
};

struct node* createNode(int info_);
void inorderTraverse(struct node* root);
void preorderTraverse(struct node* root);
void postorderTraverse(struct node* root);
void freeAllNodes(struct node* root);
void levelorderTraverse(struct node* root);
int heightofTree(struct node* root);
int sizeofTree(struct node* root);

struct node* createNode(int info_){
    struct node * temp = malloc(sizeof(struct node));
    temp->left = NULL;
    temp->info = info_;
    temp->right = NULL;
    return temp;
}

void inorderTraverse(struct node* root){
    if(root == NULL){
        return;
    }
    inorderTraverse(root->left);
    printf("%d\n", root->info);
    inorderTraverse(root->right);
}

void preorderTraverse(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d\n", root->info);
    preorderTraverse(root->left);
    preorderTraverse(root->right);
}

void postorderTraverse(struct node* root){
    if(root == NULL){
        return;
    }
    postorderTraverse(root->left);
    postorderTraverse(root->right);
    printf("%d\n", root->info);
}

void levelorderTraverse(struct node* root){
    // for level order traversal we need a queue
    // ----------------- so lets create a queue--------
    // Currently we do not know the size of the tree so lets create a queue of size 100
    // NOTE: we know why and how we are going to use it
    //      so this queue is custom made for our requirements
    int SIZE = 100;
    struct node* queue[SIZE];
    int front = -1;
    int rear = -1;

    void enqueue(struct node* ptr){
        if(front == -1){
            front = rear = 0;
            queue[rear] = ptr;
        }
        else{
            queue[++rear] = ptr;
        }
        // we do not need here to check whether the queue is full or not
    }

    struct node* dequeue(){
        if(front == rear){
            struct node* ptr =  queue[front];
            front = rear = -1;
            return ptr;
        }
        return queue[front++];
    }

    int isEmpty(){
        if(front == -1){
            return 1;
        }
        return 0;
    }
    //------------------ queue created----------------
    enqueue(root);
    while(!isEmpty()){
        struct node* temp = dequeue();
        printf("%d\n", temp->info);
        if(temp->left != NULL){
            enqueue(temp->left);
        }
        if(temp->right != NULL){
            enqueue(temp->right);
        }
    }

}
// required max function: it returns the maximum of two integers
int max(int a, int b){
    return a >= b? a: b;
}

int heightofTree(struct node* root){
    if(root == NULL){
        return -1;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }

    return 1 + max(heightofTree(root->left), heightofTree(root->right));

}

int sizeofTree(struct node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + sizeofTree(root->left) + sizeofTree(root->right);
}

void freeAllNodes(struct node* root){
    if(root == NULL){
        return;
    }
    freeAllNodes(root->left);
    freeAllNodes(root->right);
    free(root);
}
