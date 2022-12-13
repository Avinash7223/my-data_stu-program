//  basic operations of binary tree
#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

struct Node

{

 char data;

 struct Node *left;

 struct Node *right;

};

struct Node *root = NULL;

struct Node* insert(struct Node*,int);

void In_Order(struct Node*);

void Pre_Order(struct Node*);

void Post_Order(struct Node*);

int main()



{

 int choice,n,i,value;

 printf("\n----- Binary Tree -----\n");

 while(1)

 {

 printf("\n***** MENU *****\n");

 printf(" 1. Create BST \n 2. In_Order \n 3. Pre_Order \n 4.Post_Order \n 5. Exit");

 printf("\nEnter your choice: ");

 scanf("%d",&choice);

 switch(choice)

 {

 case 1:

 printf("How many data items do you want to insert ?\n");

 scanf("%d",&n);

 for(i=0; i<n; i++)

 {

 printf("Data %d: ", i+1);

 scanf("%d",&value);

 root = insert(root,value);

 }

 break;

 case 2: printf("Inorder Traversal: ");

 In_Order(root);

 break;

 case 3: printf("Preorder Traversal: ");

 Pre_Order(root);

 break;

 case 4: printf("Postorder Traversal: ");

 Post_Order(root);

 break;

 case 5: exit(0);

 default: printf("\nPlease select correct operations!!!\n");

 }

 }

getch();

}

struct Node* insert(struct Node *root,int value)

{

 if(root == NULL)

 {

 root = (struct Node*) malloc(sizeof(struct Node));

 root->data = value;

 root->left = NULL;

 root->right = NULL;

 }

 else if(value < root->data)

 root->left = insert(root->left,value);

 else

 root->right = insert(root->right,value);





 return root;

}

// display is performed by using Inorder Traversal

void In_Order(struct Node *root)

{

 if(root != NULL)

 {

 In_Order(root->left);

 printf("%3d",root->data);

 In_Order(root->right);

 }

}

// display is performed by using Preorder Traversal

void Pre_Order(struct Node *root)

{

 if(root!=NULL)

 {

 printf("%3d",root->data);

 Pre_Order(root->left);

 Pre_Order(root->right);

 }

}

// display is performed by using Postorder Traversal

void Post_Order(struct Node *root)

{

 if(root!=NULL)

 {

 Post_Order(root->left);

 Post_Order(root->right);

 printf("%3d",root->data);

 }

}