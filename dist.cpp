#include <iostream>
using namespace std;
class dist
{
private:
  int km, m;
public:
  void get()
  {
    cout<<"Enter the distance in kilometers: "<<endl;
    cin>>km;
    cout<<"Enter the distance in meters: "<<endl;
    cin>>m;
  }
  void add(dist d1, dist d2)
  {
    km=d1.km + d2.km;
    m=d1.m + d2.m;
    if (m>=1000)
      {
        km=d1.km + d2.km + (m/1000);
        m=m%1000;
      }
  }
  void disp()
  {
    cout<<km<<" kilometers and "<<m<<" meters"<<endl;
  }
};
int main()
{
   dist a, b, c;
   a.get();
   b.get();
   c.add(a,b);
   cout<<"Sum of the distances are: "<<endl;
   c.disp();
   return 0;
}
