#include <iostream>
using namespace std;
class bubble
{
  int array[10],n,i;
  public:
    void get();
    void sort();
};
void bubble :: get()
{
  cout<<"Enter the number of elements(not more than 10): ";
  cin>>n;
  cout<<"Enter the elements \n";
  for (i=0; i<n; i++)
    cin>>array[i];
}
void bubble :: sort()
{
  int t,j;
  for (i=0; i<n; i++)
  {
    for (j=0; j<n-i; j++)
    {
      if(array[j]>array[j+1])
      {
        t=array[j];
        array[j]=array[j+1];
        array[j+1]=t;
      }
    }
  }
  cout<<"\nArray after sorting:";
  for (i=0; i<n; i++)
    cout<<"\n"<<array[i];
}
int main()
{
  bubble oj;
  oj.get();
  oj.sort();
  return 0;
}
