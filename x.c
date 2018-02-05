#include<stdio.h>

void swap(int *a,int *b)
{
   int t=*a;*a=*b;*b=t;}

void modify(int arr[],int n)
{
  int i=-1;
  for(int j=0;j<n;j++)
 {
	if(arr[j]%2==0)
	{ i++;
	  swap(&arr[i],&arr[j]); }
 }
}


/*
int search(int arr[],int l,int h,int x)
{ int res=-1;
  while(l<=h)
  {
	int m=(l+h)/2;
	if(arr[m]==x)  { res=m;l=m+1;}
	else if(x<arr[m]) h=m-1;
	else l=m+1;
   }
return res;
}

int main()
{
 int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
int x;
scanf("%d",&x);
int r=search(arr,0,n-1,x);

printf("%d ",r);

return 0;
}
*/

int main()
{
 FILE* f1=fopen("in","rb");
 int n=1;
 char c=fgetc(f1);
 while(!feof(f1))
{
 	if(c==' ') n++;
	c=fgetc(f1);
}
fclose(f1);
int arr[n];
FILE* f2=fopen("in","rb");
int i=0;
while(!feof(f1))
{
	fscanf(f2,"%d",&arr[i]); i++;}
//int x;
//scanf("%d",&x);
//int r=search(arr,0,n-1,x);
//printf("%d ",r);
modify(arr,n);
FILE* f3=fopen("out","wb");
{

for(int i=0;i<n;i++) fprintf(f3,"%d ",arr[i]);
}
fclose(f2);
fclose(f3);
return 0;
}






