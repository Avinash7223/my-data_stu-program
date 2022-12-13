// Implementation of Queue using Array.
#include<stdio.h>

#include<stdlib.h>

#define MAX 50

int queue_array[MAX];

int rear = - 1;

int front = - 1;

enqueue()

{

 int add_item;

 if (rear == MAX - 1)

 printf("Queue Overflow \n");

 else

 {

 if (front == - 1) 

 front = 0;

 printf("Inset the element in queue : ");

 scanf("%d", &add_item);

 rear = rear + 1;

 queue_array[rear] = add_item;

 }



}

dequeue()

{

 if (front == - 1 || front > rear)

 {

 printf("Queue Underflow \n");

 return ;

 }

 else

 {

 printf("Element deleted from queue is : %d\n", queue_array[front]);

 front = front + 1;

 }

} 

display()

{

 int i;

 if (front == - 1)

 printf("Queue is empty \n");

 else

 {

 printf("Queue is : \n");

 for (i = front; i <= rear; i++)

 printf("%d ", queue_array[i]);

 printf("\n");

 }

} 

void main()

{

 int choice;

 while (1)

 {

 printf("1.Enqueue \n");

 printf("2.Dequeue \n");

 printf("3.Display \n");

 printf("Enter your choice between (1 to 3): ");

 scanf("%d", &choice);

 switch (choice)

 {

 case 1:

 enqueue();

 break;

 case 2:

 dequeue();

 break;

 case 3:

 display();

 break;

 default:

 printf("Wrong choice \n");

 }

 } 

} 
