
#include"header.h"
#include<stdio.h>
int main()
{
  int a[100],i,n;
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter elements in arry");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  sort(a,n);
  sortprint(a,n);
 }
    
