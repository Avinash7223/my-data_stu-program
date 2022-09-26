//BINARY SEARCH// 

#include<stdio.h> 
int main() 
{ 
 int arr[10],list,flag=0,search, low, high, mid, i,j,a; 
 printf("enter the number of numbers:"); 
 scanf("%d",&list);
 printf("Enter %d Numbers:",list);
 for(i=0;i<list;i++) 
 { 
 scanf("%d",&arr[i]); 
 } 
 for (i = 0; i < list; ++i) 
  {
    for (j = i + 1; j < list; ++j)
            {
                 if (arr[i] > arr[j]) 
                {
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                 }
             }
    }
 printf("Enter the search element: "); 
 scanf("%d", &search); 
 low=0; 
 high=list; 
 
 while (low < high) 
 { 
 mid= (low + high)/2; 
 if (arr[mid] == search) 
 { 
 flag = 1; 
 break; 
 } 
 else if (search < arr[mid]) 
 { 
 high = mid - 1; 
 } 
 else 
 { 
 low = mid + 1; 
 } 
 } 
 if (flag == 1) 
 { 
 printf("search element found"); 
 } 
 else 
 { 
 printf("search element not found"); 
 } 
 
} 

