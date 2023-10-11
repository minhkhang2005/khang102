#include<stdio.h>
#include<conio.h>
int n,i,x,dem,a[100];
int nhapmang(int n);
int xuatmang(int n);
int timGTLN(int n);
int tinhtich(int n);
int tinhSNT(int n);
int nhapx(int x);
int sapxepmang(int n);
int main()
{
	printf("nhap so n ");
	scanf("%d",&n);
	nhapmang(n);
	 xuatmang(n);
	// timGTLN(n);
	 //tinhtich(n);
	 //tinhSNT(n);
	// nhapx(n);
	printf("\n mang sau sap xep");
	  sapxepmang(n);
	}
int nhapmang(int n)
{
	for(int i=0;i<n;i++)
	{  
		printf(" ptu a[%d]= ",i);
		scanf("%d",&a[i]);
		}
		}
int xuatmang(int n)
{
	for(int i=0;i<n;i++)
	{  
		printf("\t gia tri cua ptu a[%d]=%d ",i,a[i]);
		}}
int timGTLN(int n)
{    int max=0;
	for(int i=0;i<n;)
	  {  if(a[i]>max)
	   
	       
	       max=a[i];
	       i++;
	   }    
	 printf("\n gia tri lon nhat la %d",max);
	 }
int tinhtich(int n)
{

 int  tich=1;
    for(int i=0;i<n;i++)
	       tich*=a[i];
	       printf("\n tich la %d",tich);
}
int tinhSNT(int n)
{
	int uoc,dem=0,tong=0;
	for(int i=1;i<=n;i++)
	  {   uoc=0;
	  for(int j=1;j<=n;j++)
	   if((i%j)==0)
	     uoc=uoc+1;
	   if(uoc==2)
	     { dem=dem+1;
	      tong+=i;
	      }
	}
	      printf("\n co %d so nguyen to",dem);
	      printf("\n tong cac ptu ngto la:%d",tong);
	      
	     }
int nhapx(int n)
{
	printf("\n nhap gia tri cua x= ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	  if(x==a[i])
	 { dem+=1;
	  	/*if(dem!=0)
	 printf("\n vi tri cac ptu co gia tri = x la vi tri ");
	 else
	  printf("\n ko co gia tri nao = x ");*/
	   printf("\t %d",i);
	   }
	   if(dem==0)
	    printf("\n ko co gia tri nao = x ");
	   }
int sapxepmang(int n)
{
 int tam;
	for(i=0;i<n-1;i++)
	 for(int j=i+1;j<n;j++)
	     { if(a[i]<a[j])
	      { tam=a[i];
	       a[i]=a[j];
	       a[j]=tam;
	       }
	     printf("\n %d",a[i]);
	     }
}
	
	
