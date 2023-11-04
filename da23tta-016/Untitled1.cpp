#include<stdio.h>
#include<math.h>
int a[100];
int main ()
{   int n,k,x;
	printf("nhap n= ");
	scanf("%d",&n);

 for(int i=0;i<n;i++){
    printf("a[%d]=",i);
    scanf("\n %d",&a[i]);}
    printf("nhap vi tri can chen k=");
    scanf("%d",&k);
    printf("gia tri can chen x=");
    scanf("%d",&x);
    for(int i=n-1;i>=k;i--)
         a[i+1]=a[i];
         a[k]=x;
         ++n;
printf("mang sau khi chen");
for(int i=0;i<n;i++)
   printf("\t %d",a[i]);
   return 0;
}
