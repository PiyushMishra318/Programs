#include<iostream>
using namespace std;
class Space
{
public:
  int x,y,z;
  void getdata(int a,int b,int c)
  {
    x=a;
    y=b;
    z=c;
  }
  void display();
  void operator-();
};
void Space::display()
{
  cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
}
void Space::operator-()
{
  x=-x;
  y=-y;
  z=-z;
}
int main()
{
  Space s;
  s.getdata(10,-20,30);
  cout<<"s\n";
  s.display();
  cout<<"-s";
  -s;
  s.display();
  return 0;
}
