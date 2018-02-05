#include<stdio.h>

int modify(int arr[],int l,int h,int x)
{ int res=-1;
  while(l<=h)
 {
  	int m=(l+h)/2;
	if(arr[m]==x) { res=m; h=m-1;}
//	else if(x<arr[m]) h=m-1;
         // if(arr[m]!=0)
        //  l=m+1;
 	else l=m+1;
	
   }
return res;
}



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
while(!feof(f2))
{
  for(int i=0;i<n;i++) fscanf(f2,"%d",&arr[i]);
}
int x;
scanf("%d",&x);
int r=modify(arr,0,n-1,x);

//FILE* f3=fopen("out","wb");

// for(int i=0;i<n;i++) fprintf(f3,"%d ",arr[i]);
printf("%d ",r);

fclose(f2);
//fclose(f3);

return 0;

}

