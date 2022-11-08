//5. Find factorial using recursion.
#include<stdio.h>
long int mutli(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, mutli(n));
    return 0;
}

long int mutli(int n) 
{
    if (n>=1)
        return n*mutli(n-1);
    else
        return 1;
}
