#include <iostream>
using namespace std;

int main() {
  const int n=10;
  string s[n];
  int x;
  cout<<"Enter # of Elements: ";
  cin>>x;
  cin.get();
  for(int i=0;i<x;i++){
    cout<<"Enter any String: ";
    getline(cin,s[i]);
  }
  for(int i=0;i<x;i++)
    cout<<"\nEntered String: "<<s[i];
}