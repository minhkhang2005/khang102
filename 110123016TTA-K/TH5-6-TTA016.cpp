#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s1[100];
char s2[50];
char s[50];
void Xoa_ki_tu_thua(char s1[100],char s2[50]);
int main()
{
	printf("nhap chuoi 1: ");
	gets(s1);
	printf("nhap chuoi 2: ");
	gets(s2);
 Xoa_ki_tu_thua(s1,s2);
  
   }
   void xoa(char s1[100],int vt)
   {
   	int n=strlen(s1);
   	for(int i=vt+1;i<n;i++)
   	{ 
   	s1[i-1]=s1[i];
   	}
   	s1[n-1]='\0';
   	}
void Xoa_ki_tu_thua(char s1[100],char s2[50])
{

	for(int i=0;i<strlen(s1);i++)
		if(s1[i]==' '&&s1[i+1]==' ')
		{
		    s1[i]=s1[i+1];
		  s1[strlen(s1)-1]='\0';
		  xoa(s1,i);
		  i--;
		    }
		     printf("chuoi vua nhap:%s",s1);
			}
/*void in_hoa(char s1[50],char s2[50])
{
	char s1[50]="visual c++6.0";
	strlwr(s1);
	puts(s1);*/
