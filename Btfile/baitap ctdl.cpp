#include<stdio.h>
#include<math.h>
int n;
int prime(int &n)
{
	if(n<=1)
	return 0;
for(int i=2;i*i<=n;i++)
{
	if(n%i==0)
	return 0;
}
return 1;
}

void taofile()
{
	FILE*f;
	int a[100];
	f=fopen("D:\\songuyen.dat","w");
	printf("nhap so phtu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	   {printf("a[%d]: ",i);
	    scanf("%d",&a[i]);
	    fprintf(f,"%3d",a[i]);
	    }
	    fclose(f);
 }
void xuatfile()
{
int a[100];
	FILE*f1;
	int i=0;
	f1=fopen("D:\\songto.dat","r");
	while(i<n)
	{
		fscanf(f1,"%d",&a[i]);
	     printf("%3d",a[i]);
	     i++;
	     }
   fclose(f1);
   }
void songtofile()
{
	FILE*f1;
	int a[100];
	f1=fopen("D:\\songto.dat","w");
	for(int i=0;i<n;i++)
	  if(prime(a[i])==1)
	          fprintf(f1,"%3d",a[i]);
	fclose(f1);
	
}
int main()
{
	taofile();
	songtofile();
	xuatfile();
}
