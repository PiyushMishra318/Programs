#include<stdio.h>
void counting_sort(int a[], int b[], int k ,int n)
{
  int i,j,c[20];
  for(i=0;i<=k;i++)
    c[i]=0;
  for(j=1;j<=n;j++)
    c[a[j]]=c[a[j]]+1;
  for(i=1;i<=k;i++)
    c[i]=c[i]+c[i-1];
  for(j=n;j>0;j--)
  {
    b[c[a[j]]]=a[j];
    c[a[j]]=c[a[j]]-1;
  }
  return;
}
int main()
{
  int i,size,a[20],b[20],max=0;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  printf("Enter the array\n");
  for(i=1;i<=size;i++)
    scanf("%d",&a[i]);
  for(i=1;i<=size;i++)
  {
    if(max<a[i])
      max=a[i];
  }
  counting_sort(a,b,max,size);
  printf("The sorted array is\n");
  for(i=1;i<=size;i++)
    printf("%d ",b[i]);
  return 0;
}
