// Arithmetic Operations
// Addition +
// Subtraction -
// Multiplication *
// Division /
// Remainder %
// Power ^

#include <iostream>
#include <math.h>

using namespace std;
int main() {
  // cout << "Hello World!\n";
  int num1, num2;
  cout<<"Enter Any Number (Num1): ";
  cin>>num1;
  cout<<"Enter Any Number (Num2): ";
  cin>>num2;
  int sum=num1+num2;
  cout<<"\nThe sum of "<<num1<<" and "<<num2<<" is "<<sum;
  cout<<"\nDifference: "<<num1-num2;
  cout<<"\nProduct: "<<num1*num2;
  cout<<"\nQuotient: "<<num1/num2;
  cout<<"\nRemainder: "<<num1%num2;
  cout<<"\nPower: "<<pow(num1,num2);
}