#include<stdio.h>
void isotope(int [] , int );
int main()
{
    int N,i,a[1000];
    printf("Enter the no. of elements\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    isotope(a,N);
    return 0;
}
void isotope(int a[],int N)
{
    int E,i,j,key;
    for(j=1;j<N;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    for(j=N-1;j>=0;j-2)
    {
        E=E +(a[j]*a[j-1])%199;
    }

    printf("%d",E);
}
