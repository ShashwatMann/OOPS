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
   friend void add(abc&, xyz&);
};
class abc
{
  int a;
  public:
  void get();
  void disp();
  friend void add(abc&, xyz&);
};
  void abc::get()
  {
  cout<<"Enter data value";
  cin>>a;
  }
  void xyz::get()
  {
  cout<<"Enter data value";
  cin>>d;
  }
  void add(abc&ob1,xyz&ob2)
  {
  int t;
  t=ob1.a + ob2.d;
  cout<<"The summation is: "<<t<<endl;
  }
  int main()
  {
  xyz x;
  abc b;
  x.get();
  b.get();
  add(b,x);
  getch();
  }
