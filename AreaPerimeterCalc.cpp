#include <iostream>

using namespace std;

int main() {
  while(true)
  {
  cout <<"\nArea & Perimeter Calculator";
  cout<<"\n1. Circle";
  cout<<"\n2. Rectangle";
  cout<<"\n3. Square";
  cout<<"\n4. Triangle";
  cout<<"\n5. Exit";
  cout<<"\nEnter Your Choice of Operation (1-5): ";
  int ch;
  cin>>ch;
  switch(ch)
  {
    case 1: {
              float r;
              cout<<"\nEnter Radius: ";cin>>r;
              const float pi=3.14;
              float ar=pi*r*r;
              float peri=pi*r*2;
              cout<<"\nArea: "<<ar;
              cout<<"\nCircumference: "<<peri;
              break;   
            }
    case 2: {
              float l,b;
              cout<<"\nEnter Length: ";cin>>l;
              cout<<"\nEnter Width: ";cin>>b;
              float ar=l*b;
              float peri=2*(l+b);
              cout<<"\nArea: "<<ar;
              cout<<"\nPerimeter: "<<peri;
              break;
            }
    case 3: {
              float s;
              cout<<"\nEnter Side Length: ";cin>>s;
              float ar=s*s;
              float peri=4*s;
              cout<<"\nArea: "<<ar;
              cout<<"\nPerimeter: "<<peri;
              break;
            }
    case 4: {
      float b,h,x,y;
      cout<<"\nEnter Base: ";cin>>b;
      cout<<"\nEnter Height: ";cin>>h;
      cout<<"\nEnter Side Length 1: ";cin>>x;
      cout<<"\nEnter Side Length 2: ";cin>>y;
      float ar=(h*b)/2;
      float peri=x+y+b;
      cout<<"\nArea: "<<ar;
      cout<<"\nPerimeter: "<<peri;
      break;
    }
    case 5:
      exit(0);
    default:
      cout<<"Incorrect Choice Entered";
            }
  }
}