#include<stdio.h>
#include<math.h>
int x;
void nhap(int a[],int n)
{
     for(int i=0;i<n;i++)
       {
      		printf("a[%d]: ",i);
        	scanf("%d",&a[i]);
       }
}

void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
   	printf("\n \t a[%d]= %d ",i,a[i]);
}

void timtt1(int a[],int n)
{
	for(int i=0;i<n;i++)
		if(x==a[i])
        {
          	printf("stop!");
          	break;
        }
}

void timtt2(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
    if(x==a[i])
    {
		dem++;
		printf("\n vi tri x: %d",i);
    }
	printf("\n co %d ptu x!",dem);
}

int snt(int k)
{
	int kq=1;
	if(k<2)
		kq=0;
	//else
	for(int i=2;i<sqrt(k);i++)
	   if(k%i==0)
	   {
	   	kq=0;
	   	break;
	   }
	       //return 0;
	   return kq;
}

void timsnt(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	if(snt(a[i])==1)
	 {
	 	dem++;
	 	printf("\n vi tri snt:%d",i);
	 }
	 printf("\n co %d snt !",dem);
}
void sapxep(int a[],int n)
{
	int tam;
	for(int i=0;i<n-1;i++)
	 for(int j=i+1;j<n;j++)
	     if(a[i]>a[j])
	         {
	         tam=a[i];
	         a[i]=a[j];
	         a[j]=tam;
	         }
}
void timnp(int a[],int n)
{
		int m;
	for(int i=0;i<n;i++)
		m=n/2;
	if(x=a[m])
	  printf("dung");
     	else
	      if(x<m)
	       {
	      	for(int i=0;i<m;i++)
	   	       if(x=a[i])
	   	          printf("dung");
	        }
            	else
	              for(int i=m+1;i<n;i++)
	              if(x=a[i])
	              printf("dung");
}
void timnp1(int a[],int n)
{
	int m,dem=0;
//	for(int i=0;i<n;i++)
		m=(n-1)/2;
		//eof
	if(x==a[m])
	  {
	  	dem++;
	  printf("\n vitri: %d",m);
	  }
     	else
	      if(x<m)
	       {
	      	for(int i=0;i<m;i++)
	   	       if(x==a[i])
	   	          {
	   	          		dem++;
	                    printf("\n vitri: %d",i);
	   	          }
	        }
            	else
	              for(int i=m+1;i<n;i++)
	              if(x==a[i])
	             {
	             	dem++;
	                printf("\n vitri: %d",i);
	             }
	             printf("\n co %d x xuat hien",dem);
}
int main()
{
	int n,a[100];
	printf("nhap so n: ");	
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	printf("\n mang sau khi sap");
		sapxep(a,n);
	xuat(a,n);
	printf("\n nhap so x: ");
   	scanf("%d",&x);
//   	timtt1(a,n);timtt2(a,n);
//	timsnt(a,n);

	printf("\n");
	timnp(a,n);
	printf("\n");
	timnp1(a,n);
}
