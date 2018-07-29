#include <iostream>
using namespace std;
class complex
{
private:
  int r, i;
public:
  void get()
  {
    cout<<"Enter the value of real number: "<<endl;
    cin>>r;
    cout<<"Enter the value of imaginary number: "<<endl;
    cin>>i;
  }
  void add(complex c1, complex c2)
  {
    r=c1.r + c2.r;
    i=c1.i + c2.i;
  }
  void disp()
  {
    cout<<r<<"+"<<"i"<<i<<endl;
  }
};
int main()
{
   complex a, b, c;
   a.get();
   a.disp();
   b.get();
   b.disp();
   c.add(a,b);
   cout<<"Sum of the complex numbers: "<<endl;
   c.disp();
   return 0;
}
