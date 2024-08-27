#include <iostream>
using namespace std;

int main() {
  const int size=10;
  int a[size][size];
  int r,c;
  cout<<"Enter Number of Rows: ";
  cin>>r;
  cout<<"Enter Number of Columns: ";
  cin>>c;
  cout<<"Enter Elements of the Array: ";
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>a[i][j];
    }
  cout<<"The Entered Array Is\n";
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        cout<<a[i][j]<<"  ";
      }
      cout<<"\n";
    }
  }
}