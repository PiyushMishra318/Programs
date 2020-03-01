#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,k=0;
    int n;
    cin>>n;
    for(i=7;i>=0;i--)
    {
        if(n/(int)pow(2,i)>1)
        {
            k=i;
            break;
        }
    }
    n=n-pow(2,k-1);
    cout<<(2*n);
    return 0;

}
