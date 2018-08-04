#include<iostream>
#include<conio.h>
using namespace std;
class abc;
class xyz
{
int d;
public:
   void get();
   void disp();
   friend void swap(abc&, xyz&);
};
class abc
{
  int a;
  public:
  void get();
  void disp();
  friend void swap(abc&, xyz&);
};
  void abc::get()
  {
  cout<<"Enter data value: ";
  cin>>a;
  }
  void abc::disp()
  {
    cout<<"The value you entered was: "<<a<<endl;
  }
  void xyz::get()
  {
  cout<<"Enter data value: ";
  cin>>d;
  }
  void xyz::disp()
  {
    cout<<"The value you entered was: "<<d<<endl;
  }
  void swap(abc&ob1,xyz&ob2)
  {
  int t;
  t=ob1.a;
  ob1.a=ob2.d;
  ob2.d=t;
  }
  int main()
  {
  xyz x;
  abc b;
  x.get();
  x.disp();
  b.get();
  b.disp();
  swap(b,x);
  x.disp();
  b.disp();
  getch();
  }
