#include<stdio.h>

void rotate(int arr[],int n)
{ int j,t=arr[0];
  for(j=0;j<n-1;j++)
   arr[j]=arr[j+1];
  arr[j]=t;
}

int main()
{
 int n;
scanf("%d",&n);
 int arr[n];
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
int k;
scanf("%d",&k);
for(int i=0;i<k;i++)
rotate(arr,n);
for(int i=0;i<n;i++) printf("%d ",arr[i]);

return 0;

}

