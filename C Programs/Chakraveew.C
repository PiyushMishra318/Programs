#include<stdio.h>
#include<conio.h>
int a[100][100],size,max;
void matrix_right(int,int,int,int);
void matrix_down(int,int,int,int);
void matrix_left(int,int,int,int);
void matrix_up(int,int,int,int);
void matrix_right(int i,int j,int count,int pass)
{
  max=size*size;
  if(count<=max)
  {
    while(j<size-pass && count<=max)
    {
          a[i][j]=count;
          count++;
          j++;
    }
    matrix_down(i+1,j-1,count,pass);
  }
}
void matrix_down(int i,int j,int count,int pass)
{
  if(count<=max)
  {
    while(i<size-pass && count<=max)
    {
      a[i][j]=count;
      count++;
      i++;
    }
    matrix_left(i-1,j-1,count,pass);
  }
}
void matrix_left(int i,int j,int count,int pass)
{
  if(count<=max)
  {
    while(j>=pass && count<=max)
    {
      a[i][j]=count;
      count++;
      j--;
    }
    pass++;
    matrix_up(i-1,j+1,count,pass);
  }
}
void matrix_up(int i, int j, int count,int pass)
{
  if(count<=max)
  {
    while(i>=pass && count<=max)
    {
      a[i][j]=count;
      count++;
      i--;
    }
    matrix_right(i+1,j+1,count,pass);
  }
}
void powerpoints()
{
  int i,j,power=1;
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
      {
        if(a[i][j]%11==0)
        {
          power=power+1;
        }
      }
    }
    printf("Total Power Points : %d\n",power);
}
void printpowerpoints()
{
  int i,j,power=0;
  printf("(0,0)\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
      {
        if(a[i][j]%11==0)
        {
          printf("(%d,%d)\n",i,j);
        }
      }
    }
}

int main()
{
  int i,j,count,pass,points;
  scanf("%d",&size);
  i=0;
  j=0;
  count=1;
  pass=0;
  matrix_right(i,j,count,pass);
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
      {
        printf(" %d ",a[i][j]);
      }
      printf("\n");
  }
  powerpoints();
  printpowerpoints();
  return 0;
}
