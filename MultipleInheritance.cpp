#include<iostream>
using namespace std;
class internals
{
protected:
  float mv, ma, mc, matt, totalI;
public:
  void get()
  {
    cout<<"Enter your marks in assignment (not more than 7): ";
    cin>>ma;
    cout<<"Enter your marks in minor test (not more than 10): ";
    cin>>mv;
    cout<<"Enter your marks according to class performance (not more than 8): ";
    cin>>mc;
    cout<<"Enter your marks according to yor attendance (not more than 5): ";
    cin>>matt;
  }
  void disp()
  {
  totalI=ma+mv+mc+matt;
  cout<<"Your total internal marks: "<<totalI<<endl;
  }
};
class externals
{
protected:
  float theory, practical, totalE;
public:
  void get()
  {
    cout<<"Enter your marks in theory (not more than 70): ";
    cin>>theory;
    cout<<"Enter your marks in practials (not more than 70): ";
    cin>>practical;
  }
  void disp()
  {
    totalE=(theory+practical)/2;
    cout<<"Your marks in theory: "<<theory<<endl;
    cout<<"Your marks in practicals: "<<practical<<endl;
    cout<<"Your total marks in externals: "<<totalE<<endl;
  }
};
class result : public internals, public externals
{
public:
  void get()
  {
    internals :: get();
    externals :: get();
  }
  void disp()
  {
    internals :: disp();
    externals :: disp();
    cout<<"Total marks: "<<totalE+totalI<<endl;
  }
};
int main()
{
  result r;
  r.get();
  r.disp();
  return 0;
}
