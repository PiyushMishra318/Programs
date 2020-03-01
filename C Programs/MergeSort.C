#include<stdio.h>
#include<conio.h>
int b[10];
void Merge_sort(int [],int ,int );
void Merge(int [],int ,int ,int );
void Merge_Sort(int a[],int p,int r)
{
  int q;
  if(p<r)
  {
    q=(p+r)/2;
    Merge_Sort(a,p,q);
    Merge_Sort(a,q+1,r);
    Merge(a,p,q,r);
  }
}
void Merge(int a[],int p, int q, int r)
{
  int l1,l2,i;
  for(l1=p,l2=q+1,i=p;l1<=q && l2<= r;i++)
  {
    if(a[l1]<=a[l2])
      b[i]=a[l1++];
    else
      b[i]=a[l2++];
  }
  while(l1<=q)
    b[i++]=a[l1++];
  while(l2<=r)
    b[i++]=a[l2++];
  for(i=p;i<=r;i++)
    a[i]=b[i];
}
int main()
{
  int a[10],i,n,p,r;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  printf("Enter the array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  p=0;
  r=n-1;
  Merge_Sort(a,p,r);
  printf("The sorted array is\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
