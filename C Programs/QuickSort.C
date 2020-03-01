#include<stdio.h>
void Quick_Sort(int [], int ,int );
int Partition(int a[],int ,int);
void Quick_Sort(int a[],int p, int r)
{
  int q;
  if(p<r)
  {
    q=Partition(a,p,r);
    Quick_Sort(a,p,q-1);
    Quick_Sort(a,q+1,r);
  }
}
int Partition(int a[],int p, int r)
{
  int pivot,i,j,temp;
  pivot=a[r];
  i=p-1;
  for(j=p;j<r;j++)
  {
    if(a[j]<=pivot)
    {
      i=i+1;
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  temp=a[i+1];
  a[i+1]=a[r];
  a[r]=temp;
  return i+1;
}

int main()
{
  int a[20],i,N,p,r;
  printf("Enter the size of array\n");
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  p=0;
  r=N-1;
  Quick_Sort(a,p,r);
  printf("Sorted array\n");
  for(i=0;i<N;i++)
    printf("%d ",a[i]);
  return 0;
}
