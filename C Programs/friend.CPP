#include<iostream>
using namespace std;
class B;
class A
{
public:
  int a;
  A(int x)
  {
    a=x;
  }
  friend void swap(A&,B&);
  void display()
  {
    cout<<"Value of a is:"<<a;
  }
};
class B
{
public:
  int b;
  B(int y)
  {
    b=y;
  }
  friend void swap(A&,B&);
  void display()
  {
    cout<<"\nValue of b is: "<<b<<"\n";
  }
};
void swap(A& x,B& y)
{
  int temp;
  temp=x.a;
  x.a=y.b;
  y.b=temp;
}
int main()
{
  A obj1=A(10);
  B obj2=B(9);
  obj1.display();
  obj2.display();
  swap(obj1,obj2);
  obj1.display();
  obj2.display();
  return 0;
}
