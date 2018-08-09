#include<iostream>
using namespace std;
class Area
{
  int s, l, b;
  float r;
  public:
    int area(int s)
    {
      return (s*s);
    }
    int area(int l, int b)
    {
      return (l*b);
    }
    float area(float r)
    {
      return (3.14*r);
    }
};
int main()
{
  int c, s, l, b;
  float r;
  Area x;
  do
  {
    cout<<"\nEnter your choice: \n";
    cout<<"1. Square \n"<<"2. Rectangle \n"<<"3. Circle \n"<<"4. Exit\n";
    cin>>c;
    if(c==1)
    {
      cout<<"Enter the side of the sqaure: ";
      cin>>s;
      cout<<x.area(s);
    }
    else if(c==2)
    {
      cout<<"Enter the length of the rectangle: ";
      cin>>l;
      cout<<"Enter the breadth of the rectangle: ";
      cin>>b;
      cout<<x.area(l,b);
    }
    else if(c==3)
    {
      cout<<"Enter the radius of the circle: ";
      cin>>r;
      cout<<x.area(r);
    }
    else if(c==4)
      break;
    else
      cout<<"Invalid Choice";
  } while(c!=4);
  return 0;
}
