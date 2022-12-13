// Implementation of Queue using Linked list

#include <stdio.h>

#include <stdlib.h>

struct node

{

 int info;

 struct node *ptr;

}*front=NULL,*rear=NULL,*temp,*front1;

void enq(int data) 

{

 if (rear == NULL)

 {

 rear = (struct node *)malloc(1*sizeof(struct node));

 rear->ptr = NULL;

 rear->info = data;

 front = rear;

 }

 else

 {

 temp=(struct node *)malloc(1*sizeof(struct node));

 rear->ptr = temp;

 temp->info = data;

 temp->ptr = NULL;

 rear = temp;

 }

}

void deq() 

{

 front1 = front;

 if (front1 == NULL)

 {

 printf("\n Error: Trying to display elements from empty queue");

 return;

 }

 else

 if (front1->ptr != NULL)

 {

 front1 = front1->ptr;

 printf("\n Dequed value : %d", front->info);

 free(front);

 front = front1;

 }

 else

 {

 printf("\n Dequed value : %d", front->info);

 free(front);

 front = NULL;

 rear = NULL;

 }

}

void display() 

{

 front1 = front;

 if ((front1 == NULL) && (rear == NULL))

 {

 printf("Queue is empty");

 return;

 }

 while (front1 != rear)

 {

 printf("%d ", front1->info);

 front1 = front1->ptr;

 }

 if (front1 == rear)

 printf("%d", front1->info);

}

void main()

{

 int no, ch, e;

 printf("\n 1 - Enque");

 printf("\n 2 - Deque");

 printf("\n 3 - Display");

 while (1)

 {

 printf("\n Enter choice : ");

 scanf("%d", &ch);

 switch (ch)

 {

 case 1:

 printf("Enter data : ");

 scanf("%d", &no);

 enq(no);

 break;

 case 2:

 deq();

 break;

 case 3:

 display();

 break;

 default:

 printf("Wrong choice, Please enter correct choice ");

 break;

 }



}

}

