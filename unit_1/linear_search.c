//linear search// 
#include<stdio.h> 
int main() 
{ 
 int arr[10] ,i,list, search, found=0; 
 printf("enter the number of numbers:"); 
 scanf("%d",&list);
 printf("Enter %d Numbers:",list);
 for(i=0;i<list;i++) 
 { 
 scanf("%d",&arr[i]); 
 } 
 printf("enter the Search:\n"); 
 scanf("%d", &search); 
 for (i=0; i<10; i++) 
 { 
 if (arr[i] == search) 
 { 
 found = 1; 
 break; 
 } 
 } 
 if (found == 1) 
 { 
 printf("search element found at index %d",i); 
 } 
 else 
 { 
 printf("search element not found "); 
 } 
} 
