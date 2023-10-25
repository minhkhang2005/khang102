#include<stdio.h>
//#include<conio.h>
#include<math.h>
int nhap2chieu(int a[50][50],int m,int n);
int xuat2chieu(int a[50][50],int m,int n);
int max_min(int a[50][50],int m,int n);
int Dem_tong_SNT(int a[50][50],int m,int n);
int ktnt(int n);
int main()
{
int m,n,a[50][50];
	printf("nhap so dong m=");
	scanf("%d",&m);
	printf("nhap so cot n= ");
	scanf("%d",&n);
	nhap2chieu(a,m,n);
	xuat2chieu(a,m,n);
	 max_min(a,m,n);
	  Dem_tong_SNT(a,m,n);
}
int nhap2chieu(int a[50][50],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	  {
	  printf("a[%d][%d]= ",i,j);
	  	scanf("%d",&a[i][j]);
	
}
}
int xuat2chieu(int a[50][50],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
	printf("\n");
	   for(j=0;j<n;j++)
	      printf("\t %d",a[i][j]);
}
}
int max_min(int a[50][50],int m,int n)
{
	int i,Max=-1000000,Min=10000000,j;
	for(i=0;i<m;i++){
	 for(j=0;j<n;j++)
	 {
	   if(Max<a[i][j]){
	     Max=a[i][j];}
	    if(Min>a[i][j]){
	      Min=a[i][j];
	  }
   }
}
	  printf("\n Max=%d ",Max);
	  printf("\n Min=%d",Min);
	  
}
int ktnt(int n)
{ 
	if(n<2) return 0;
for(int i=2;i<=sqrt(n);i++)
	  {
	    if(n%i==0)
		 {
	     return 0;
		 }
	}
	     return 1;
}
int Dem_tong_SNT(int a[50][50],int m,int n)
{
	int dem=0,tong=0;
	for(int i=0;i<m;i++){
	 for(int j=0;i<n;i++){
	   if(ktnt(a[i][j])==1)
	        {
	        	++dem;
	        	tong+=a[i][j];
	        }
	    }
	}
	printf("\n co %d snt trong mang ",dem);
	printf("\n tong cac snt trong mang:%d",tong);
}
