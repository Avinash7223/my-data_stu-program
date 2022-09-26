#include<stdio.h>
int main()
{
      char name[5][20], grade[5];
      int roll[5], i;
      for (i=0; i<5; i++)
     {
           printf("Enter your name: ");
           scanf("%s", name[i]);
           printf("Enter your grade: ");
           fflush(stdin);
           scanf("%c", &grade[i]);
           fflush(stdin);
           printf("Enter your Roll Number: ");
           scanf("%d", &roll[i]);
    }
for (i=0; i<5; i++)
    {
     printf("Name: %s\tRoll Number: %d\tGrade: %c\n", name[i], roll[i], grade[i]);
    }
}

