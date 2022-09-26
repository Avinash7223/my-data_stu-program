#include<stdio.h> 
int main() 
{ 
void bubble(int x[],int n); 
int a[10],n,i; 
printf("enter number of elements:"); 
scanf("%d",&n); 
printf("enter %d elements:",n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("\n before sorting:\n"); 
for(i=0;i<n;i++) 
printf("%d\t",a[i]); 
bubble(a,n); 
printf("\n after sorting:\n"); 
for(i=0;i<n;i++) 
{ 
printf("%d\t",a[i]); 
} 
} 
void bubble(int x[],int n) 
{ 
int i,j,temp; 
for(i=0;i<n-1;i++) 
{ 
for(j=0;j<n-i-1;j++) 
if(x[j]>x[j+1] 
) 
{ 
temp=x[j]; 
x[j]=x[j+1]; 
x[j+1]=temp; 
} 
} 
} 
