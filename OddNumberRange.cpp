#include <iostream>

using namespace std;

int main() {
  int a,b;
  cout<<"This Code Shows the Odd Numbers Between a Given Range!";
  cout<<"\nPlease Enter the Starting Number: ";
  cin>>a;
  cout<<"\nPlease Enter the Last Number: ";
  cin>>b;
  if(a<b)
    for(int i=a; i<=b; i++)
      {
        if(i%2==1)
          cout<<i<<endl;
      }
  else if (a>b)
    for(int i=a; i>=b; i--)
      {
        if(i%2==1)
          cout<<i<<endl;
      }
  else if (a==b)
    cout<<"Please Enter Two Different Numbers";
  else
    cout<<"Invalid Option";
    
}