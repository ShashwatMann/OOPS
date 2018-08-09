#include <iostream>
using namespace std;
int main()
{
  int t, a, b;
  cout<<"Enter a number: ";
  cin>>a;
  cout<<"Enter another number: ";
  cin>>b;
  t=a;
  a=b;
  b=t;
  cout<<"Numbers after swaping: ";
  cout<<"a: "<<a<<"\n"<<"b: "<<b<<"\n";
  return 0;
}
