#include<iostream>
using namespace std;
class abc;
class uvw;
class xyz
{
int c;
public:
   void get();
   friend void compare(abc&, uvw&, xyz&);
};
class uvw
{
  int b;
public:
  void get();
  friend void compare(abc&, uvw&, xyz&);
};
class abc
{
  int a;
  public:
  void get();
  friend void compare(abc&, uvw&, xyz&);
};
  void abc::get()
  {
  cout<<"Enter data value: ";
  cin>>a;
  }
  void uvw::get()
  {
    cout<<"Enter data value: ";
    cin>>b;
  }
  void xyz::get()
  {
  cout<<"Enter data value: ";
  cin>>c;
  }
  void compare(abc&ob1, uvw&ob2, xyz&ob3)
  {
  if (ob1.a>ob2.b && ob1.a>ob3.c)
    cout<<ob1.a<<" is the greatest number";
  else if (ob2.b>ob1.a && ob2.b>ob3.c)
    cout<<ob2.b<<" is the greatest number";
  else
    cout<<ob3.c<<" is the greatest number";
  }
  int main()
  {
  abc l;
  uvw m;
  xyz n;
  l.get();
  m.get();
  n.get();
  compare(l,m,n);
  return 0;
  }
