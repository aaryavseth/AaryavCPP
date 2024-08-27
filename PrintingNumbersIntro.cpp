#include <iostream>

using namespace std;

int main() {
  // Counting Down From 10
  for(int i=10; i>=1; i--)
    cout<<i<<endl;

  // Skip Counting By Twos Up Until 20
  for(int i=20; i>=1; i-=2)
    cout<<i<<endl;

  // Print the Even Numbers From 1-50
  cout<<"\nEven Numbers From 1-50\n";
  for(int i=1; i<=50; i++)
    {
      if(i%2==0)
        cout<<i<<endl;
    }
}