#include <iostream>
using namespace std;
class student
{
  char name[20];
  int roll;
  public:
    void get();
    void disp();
};
class result : public student
{
  float per, mp, mc, mm;
  public:
    void get();
    void disp();
};
void student :: get()
{
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the roll number of the student (numericals): " ;
    cin>>roll;
}
void student :: disp()
{
  cout<<"Name: "<<name<<endl;
  cout<<"Roll Number: "<<roll<<endl;
}
void result :: get()
{
  cout<<"Enter the marks of the student in physics: ";
  cin>>mp;
  cout<<"Enter the marks of the student in chemistry: ";
  cin>>mc;
  cout<<"Enter the marks of the student in mathematics: ";
  cin>>mm;
}
void result :: disp()
{
  cout<<"Marks in Physics: "<<mp<<endl;
  cout<<"Marks in Chemistry: "<<mc<<endl;
  cout<<"Marks in Maths: "<<mm<<endl;
  per=(mp+mc+mm)/3;
  cout<<"Your percentage is: "<<per<<endl;
}
int main()
{
  result r;
  r.student::get();
  r.result::get();
  r.student::disp();
  r.result::disp();
  return 0;
}
