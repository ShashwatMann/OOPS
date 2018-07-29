#include <iostream>
using namespace std;
class time
{
private:
  int hr, min;
public:
  void get()
  {
    cout<<"Enter the time in hours: "<<endl;
    cin>>hr;
    cout<<"Enter the time in minutes: "<<endl;
    cin>>min;
  }
  void add(time t1, time t2)
  {
    hr=t1.hr + t2.hr;
    min=t1.min + t2.min;
    if (min>=60)
      {
        hr=t1.hr + t2.hr + (min/60);
        min=min%60;
      }
  }
  void disp()
  {
    cout<<hr<<":"<<min<<endl;
  }
};
int main()
{
   time a, b, c;
   a.get();
   b.get();
   c.add(a,b);
   cout<<"Sum of time: "<<endl;
   c.disp();
   return 0;
}
