#include<stdio.h>
void nhapmang(int n);
int n,i,a[100];
int main()
{   
	printf("\n so ptu cua mang n= ");
	scanf("%d",&n);
	//nhapmang(n);
}
void nhapmang(int n)
{
	for(i=1;i<n;i++)
	{
	 printf("ptu a[%d]=",i);
	 scanf("%d",&a[i]);
	 }
	// return 0;
}
