#include<stdio.h>
unsigned int a[1000000],b[1000000],c[1000000];
void check_no( unsigned int );
unsigned int euler(unsigned int , unsigned int);
void check_no( unsigned int N)
{
  unsigned int count=0;
  unsigned int i;
  for(i=0;i<N-1;i++)
  {
    c[i]=euler(N,a[i]);
  }
  for(i=0;i<N-1;i++)
  {
    if(c[i]==1)
      count++;
  }
  printf("%u",count);
}
unsigned int euler(unsigned int a, unsigned int b)
{
  unsigned int i,flag;
  if(b!=0)
  {
    flag=0;
    for(i=2; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
      return 1;
    else
      return 0;
  }
  else
    return 0;
}

unsigned int main()
{
  unsigned int N,i;
  scanf("%u",&N);
  for(i=0;i<N-1;i++)
  {
    a[i]=i+1;
  }
  check_no(N);
  return 0;
}
