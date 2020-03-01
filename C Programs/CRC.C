#include<stdio.h>
#include<conio.h>

int main()
{
  int j,i,temp[4],data[11],divisor[4];
  printf("Enter the data\n");
  for(i=0;i<8;i++)
  {
    scanf("%d",&data[i]);
  }
  data[8]=data[9]=data[10]=0;
  for(j=0;j<4;j++)
  {
    temp[j] = data[j];
  }
  printf("Enter the divisor\n");
  for(i=0;i<4;i++)
  {
    scanf("%d",&divisor[i]);
  }
  for(i=4;i<=11;i++)
  {
    if(temp[0] == 1)
    {
      for(j=0;j<4;j++)
      {
        temp[j] = temp[j] ^ divisor[j];
      }

    }
    else
    {
      for(j=0;j<4;j++)
      {
        temp[j] = temp[j] ^ 0;
      }
    }
    for(j=0;j<3;j++)
    {
      temp[j] = temp[j+1];
    }
    temp[3] = data[i];
  }

printf("CMC : ");
for(i=0;i<3;i++)
{
  printf("%d",temp[i]);
}

  return 0;
}
