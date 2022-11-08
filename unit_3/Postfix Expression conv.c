//4. Evaluation of Post fix expression.
#define SIZE 50 
#include <ctype.h>
#include<stdio.h>
int s[SIZE];
int top=-1; 
push(int elem)
{ 
s[++top]=elem;
}
int pop()
{ 
return(s[top--]);
}
main()
{
char posfx[50],ch;
int i=0,op1,op2;
printf("\n\nRead the Postfix Expression ? ");
scanf("%s",posfx);
while( (ch=posfx[i++]) != '\0')
{
 if(isdigit(ch))
 push(ch-48);
 else
 {
 op2=pop();
 op1=pop();
 switch(ch)
 {
 case '+':
 push(op1+op2);
 break;
 case '-':
 push(op1-op2);
 break;
 case '*':
 push(op1*op2);
 break;
 case '/':
 push(op1/op2);
 break;
 }
}
 }
 printf("\n Given Postfix Expn: %s\n",posfx);
 printf("\n Result after Evaluation: %d\n",s[top]);
}
