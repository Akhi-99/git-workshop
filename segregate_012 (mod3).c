#include<stdio.h>

void swap(int *a,int *b) { int t=*a;*a=*b;*b=t;}

void modify(int arr[],int n)
{
  int l=0,m=0,h=n;
   while(m<=h)
 {
	switch(arr[m]%3)
    { case 0: swap(&arr[l++],&arr[m++]); break;
    
     case 1: m++; break;
     case -1: m++;break;

     case 2: swap(&arr[m],&arr[h--]); break;
     case -2: swap(&arr[m],&arr[h--]); break;
   }
}


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

modify(arr,n-1);

FILE* f3=fopen("out","wb");

 for(int i=0;i<n;i++) fprintf(f3,"%d ",arr[i]);

fclose(f2);
fclose(f3);

return 0;

}


