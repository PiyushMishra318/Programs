#include<iostream>
using namespace std;
class Media
{
public:
  char name[20];
  int number;
  Media()
  {
    gets(name);
    cin>>number;
  }
  virtual void display()
  {
    cout<<name<<"\n"<<number<<"\n";
  }
};
class Book : public Media
{
public:
    int  price;
    Book()
    {
      cin>>price;
    }
    void display()
    {
      cout<<price<<"\n";
    }
};
class Tape : public Media
{
public:
    int length;
    Tape()
    {
      cin>>length;
    }
    void display()
    {
      cout<<length<<"\n";
    }
};
int main()
{
  Media *M,m;
  M=&m;
  M->display();
  Tape T1;
  M=&T1;
  M->display();
  return 0;
}
