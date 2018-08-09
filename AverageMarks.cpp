#include <iostream>
using namespace std;
class Student
{
  int sum=0, i;
  int marks[5];
  float avg;
public:
  void get();
  void disp();
  void average();
};
void Student :: get()
{
  cout<<"Enter you marks for five subjects: \n";
  for (i=0; i<5; i++)
    cin>>marks[i];
}
void Student :: average()
{
  for (i=0; i<5; i++)
    sum=sum+marks[i];
  avg=sum/5;
  cout<<"Your average: "<<avg;
}
int main()
{
  Student s;
  s.get();
  s.average();
  return 0;
}
