#include<iostream>
using namespace std;
class time
{
  int h,m,s;
public:
  void get()
  {
    cout<<"Enter hour";
    cin>>h;
    cout<<"Enter Minute";
    cin>>m;
    cout<<"Enter Seconds";
    cin>>s;
  }
  time operator +(time t)
  {
    time x;
    x.h=h+t.h;
    x.m=m+t.m;
x.s=s+t.s;

if(x.s>=60)
{
  x.m=x.s/60;
  x.s=x.s%60;
}
    if (x.m>=60)
    {
      x.h=x.m/60;
      x.m=m%60;
    }
return x;
  }
  void disp()
  {
    cout<<h<<":"<<m<<":"<<s;
  }
};
int main()
{
  time t1, t2, t3;
  t1.get();
  t1.disp();
  t2.get();
  t2.disp();
  t3=t1+t2;
  cout<<"\n";
  t3.disp();
  return 0;
}
