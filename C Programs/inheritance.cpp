#include<iostream>
using namespace std;
class BaseClass
{
public:
  int elem1,elem2,elem3;
};
class ChildClass :public BaseClass
{
public:
  ChildClass(int a,int b,int c)
  {
    elem1=a;
    elem2=b;
    elem3=c;
  }
  void display()
  {
    cout<<elem1<<"\n"<<elem2<<"\n"<<elem3<<"\n";
  }
};

int main()
{
  int a,b,c;
  cout<<"Enter the values in through child class\n";
  cin>>a>>b>>c;
  ChildClass C(a,b,c);
  cout<<"Displaying all the values by using a function in the child class\n";
  C.display();
}
