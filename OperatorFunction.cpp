#include<iostream>
using namespace std;
class Complex
{
  int r,i;
  public:
    void get()
    {
      cout<<"Enter real number: ";
      cin>>r;
      cout<<"Enter an imaginary number: ";
      cin>>i;
    }
    void disp()
    {
      cout<<"Your complex number after addition is: ";
      cout<<r<<" + i"<<i;
    }
    Complex operator +(Complex c2)
    {
    Complex t;
    t.r=r+c2.r;
    t.i=i+c2.i;
    return t;
    }
};
int main()
{
  Complex c1, c2, result;
  cout<<"Enter the first complex number \n";
  c1.get();
  cout<<"Enter the second complex number \n";
  c2.get();
  result=c1+c2;
  result.disp();
  return 0;
}
