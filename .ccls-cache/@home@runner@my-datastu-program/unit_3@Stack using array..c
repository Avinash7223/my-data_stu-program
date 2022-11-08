//1. Implementation of Stack using array.
#include<stdio.h>
#define Size 5
int Stack[Size];
int Tos=-1;

// Function to perform Push operation on the Stack

int Pushop(){
  int Element;
  if(Tos==(Size-1)){
    printf("Stack is Full (Overflow Condition)\n");
    return 0;
  }
  else{
    printf("Enter the element to be pushed\n:-");
    scanf("%d",&Element);
    Tos=Tos+1;
    Stack[Tos]=Element;
  }
  return 0;
}

//Function to perform Pop operation on the Stack

int Popop(){
  int Element;
  if (Tos==-1){
    printf("Stack is Empty (Underflow Condition)");
    return(Tos);
  }
  else{
    Element=Stack[Tos];
    printf("Element deleted is =%d\n",Stack[Tos]);
    Tos=Tos-1;
  }
  return(Element);
}

// Functions to display Contents of the stack.

int Show(){
  int a;
  if(Tos==-1){
    printf("Stack is Empty (No elements)\n");
    return 0;
  }
  else{
    printf("The Contents of the Stack are:-\n");
    for(a=Tos;a>=0;a--){
      printf("%d\n",Stack[a]);
    }
  }
}

int main(){
  int select, choice=1;
  printf("IMPLEMENTATION OF STACK");
  while(choice=1){
    printf("\n*********Main Menu*********\n");
    printf("\nChoose one Operation from the following list ...\n");
    printf("\n===============================================\n");
    printf("Select 1 --- IF YOU WANT TO PUSH AN ELEMENT IN THE STACK\n");
    printf("Select 2 --- IF YOU WANT TO POP AN ELEMENT FROM STACK\n");
    printf("Select 3 --- IF YOU WANT TO DISPLAY THE CONTENTS OF THE STACK\n");
    printf("Select 4 --- IF YOU WANT TO EXIT\n");
    printf("\n===============================================\n");
    printf("Enter your choice:-\n");
    scanf("%d",&select);

    switch(select)
    {
      case 1:
      Pushop();
      break;

      case 2:
      Popop();
      break;

      case 3:
      Show();
      break;

      case 4:
      break;

      default:
      printf("Invalid Choice");
      }
  }
}
