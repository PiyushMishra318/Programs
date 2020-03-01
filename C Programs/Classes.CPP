#include<iostream>
using namespace std;
class NewClass
{
  int a;
  int b;
  int c;
public:
  void setdata(int x,int y, int z);
  void display()
  {
    cout<<"Value of a is :"<<a<<"\n";
    cout<<"Value of b is : "<<b<<"\n";
    cout<<"Value of c is : "<<c<<"\n";
  }
};
void NewClass::setdata(int x,int y,int z)
{
  a=x;
  b=y;
  c=z;
}
int main()
{
  NewClass c;
  c.setdata(6,9,3);
  c.display();
  return 0;
}
