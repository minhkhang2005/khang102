#include<stdio.h>
#include<math.h>
int main()

{ 
int n=7,k=3,x=100;
int a[10]={2,3,1,5,8,9,4};
for(int i=n-1;i>=k;i--)
   a[i+1]=a[i];
   a[k]=x;
   ++n;
   printf("mang sau khi chen :");
   for(int i=0;i<n;i++)
      printf("\t %d",a[i]);
   return 0;
}   
 

