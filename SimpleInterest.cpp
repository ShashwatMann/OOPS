#include <iostream>
using namespace std;
class interest
{
  float s1,p,t,s2;
  float r=0.01;
  public:
  void get()
  {
    cout<<"Enter the principal: ";
    cin>>p;
    cout<<"Enter the time in years: ";
    cin>>t;
  }
  void cal()
  {
  s1=p*r*t;
  s2=p+s1;
  cout<<"You will get "<<s1<<" ruppees in "<<t<<" years.";
  cout<<"Your net balance is: "<<s2;
  }
};
int main()
{
  interest x;
  x.get();
  x.cal();
  return 0;
}
