// INSERTION SORT

#include<stdio.h> 
int main() 
{ 
 int a[10], i, n, hole, key; 
 printf("enter the number of elements: "); 
 scanf("%d", &n); 
 printf("input the elements: "); 
 for (i=0; i<n; i++) 
 { 
 scanf("%d", &a[i]); 
 } 
 for (i=1; i<n; i++) 
 { 
 key = a[i]; 
 hole = i; 
 while (hole>0 && a[hole - 1]> key) 
 { 
 a[hole] = a[hole - 1]; 
 hole -= 1; 
 } 
 a[hole] = key; 
 } 
 printf("The sorted list is:\n"); 
 for (i=0; i<n; i++) 
 { 
 printf("%d\t", a[i]); 
 } 
} 

