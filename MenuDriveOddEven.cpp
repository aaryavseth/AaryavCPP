#include <iostream>
#include <math.h>

using namespace std;

void evennos(int a, int b)
{
    if(a<b)
      for(int i=a; i<=b; i++)
        {
          if(i%2==0)
            cout<<i<<endl;
        }
    else if (a>b)
      for(int i=a; i>=b; i--)
        {
          if(i%2==0)
            cout<<i<<endl;
        }
    else if (a==b)
      cout<<"Please Enter Two Different Numbers";
    else
      cout<<"Invalid Option";
}
void oddnos(int a, int b)
{
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

void mult(int num)
{
  for(int i=1; i<=10; i++)
    {
      cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
}

void factors(int a)
{
  cout<<"Factors of "<<a<<":\n";
  int c=0;
  for(int i=1; i<=a; i++)
    {
      if(a%i==0){
        c+=1;
        cout<<i<<endl;
      }
    }
  cout<<a<<" has "<<c<<" Factors!";
}

void sumfac(int a)
{
  int s=0;
  for(int i=1; i<=a; i++)
    if(a%i==0){
      s+=i;
      }
  cout<<"\nThe Sum of the Factors of "<<a<<" is "<<s;
    
}

void rangesum(int a, int b)
{
  int s=0;
  if(a>b){
    for(int i=b;i<=a;i++)
      s+=i;
    cout<<"\n The Sum of the Numbers Between "<<b<<" and "<<a<<" is "<<s;
  }
  else if (a<b){
    for(int i=a;i<=b;i++)
      s+=i;
    cout<<"\n The Sum of the Numbers Between "<<a<<" and "   <<b<<" is "<<s;
  }
  else{
    cout<<"\nInvalid Numbers ";
  }

}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimesInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
}

int factorial(int a)
{
  int facstart=1;
  if(a<0)
    cout<<"Error. Non-negative Number Inputted";
  else {
    for(int i=1; i<=a; i++){
      facstart*=i;
    }
    
  }
  return facstart;
} 

void fibonnaci(int a)
{
  int t1=0;
  int t2=1;
  int termadd=0;
  if(a<1){
    cout<<"Invalid Number. Please Try Again!";
  }
  for(int i=1; i<a; i++){
    if(i==1){
      cout<<t1<<", ";
      continue;
    }
    else if(i==2){
      cout<<t2<<", ";
    }
    termadd = t1+t2;
    t1 = t2;
    t2 = termadd;
    cout<<termadd<<", ";
  }  
}

void sunnynum(int a)
{
  int g = a+1;
  double s = sqrt(g);
  // cout<<s<<endl<<floor(s);
  if(s-floor(s)==0)
    cout<<a<<" is a sunny number!";
  else
    cout<<a<<" is not a sunny number!";
  
}

void digisum(int a)
{
  int sum=0;

  while(a!=0){
    sum+=a%10;
    a=a/10;
  }

  cout<<"\nThe Sum of the Digits of "<<a<<" is "<<sum;
}

bool checkArmstrong(int num) {
    int originalNumber = num;
    int sum = 0;



    num = originalNumber;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit,3);
        num /= 10;
    }
    if (sum == originalNumber) {
      cout<<"\nThe Sum of the Cubes of the Digits in "<<originalNumber<<" is "<<sum;
      return true;
    } 
    else {
      return false;
    }
}

void revDig(int num) {
    int reversedNum = 0;
    int n1=num;
  
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    cout<<"The Reverse of "<<n1<<" is "<<reversedNum<<endl;
}

void armstronglist(int start, int end) {
  for(int i=start;i<=end;i++){
    checkArmstrong(i); 
  }
}

bool perfectsquare(int a) {
  int b = sqrt(a);
  if(b*b==a){
    return true;
  }
  else{
    return false;
  }
  
}

void squarelist(int start, int end){
  for(int i=start;i<=end;i++){
    if(perfectsquare(i)){
      cout<<i<<endl;
    }
  }
}

void pattern(int a){
  for(int i=1;i<=a;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void backwardpattern(int lines){
  for(int i=0; i<lines; i++){
    for(int j=0;j<lines-i-1;j++){
      cout<<" ";
    }

    for(int f=0;f<=i;f++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void pyramidpattern(int lines){
  for(int i=0; i<lines; i++){
    for(int j=0;j<lines-i-1;j++){
      cout<<" ";
    }
    for(int f=0; f<2*i+1; f++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void numberpyramid(int lines){
  for(int i=1; i<=lines; i++){
    for(int j=0; j<=lines-i-1;j++){
      cout<<" ";
    }
    for(int f=1; f<=i; f++){
      cout<<f;
    }
    for(int k=i-1;k>=1; k--){
      cout<<k;
    }
    cout<<endl;
  }
}

void alphabetpyramid(int lines){
  for(int i=1; i<=lines; i++){
    char ch='a';
    for(int j=0; j<=lines-i-1;j++){
      cout<<" ";
    }
    for(int k=1; k<=i; k++){
      cout<<ch;
      ch+=1;
    }
    ch=ch-2;
    for(int f=1;f<i;f++){
      cout<<ch;
      ch--;
    }
    cout<<endl;
  }
}

void coolpyramid(int lines) {
  // Upper half
  for(int i=1;i<=lines/2;i++){
    for(int j=i;j<(lines/2)+1;j++){
      cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=1; i<=lines; i++)
    cout<<"*";
  cout<<endl;
  // lower half
  for(int i=lines/2;i>=1;i--){ 
    for(int j=lines/2-i; j>=0; j--){ 
      cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void subnums();
void subpatterns();

int main() {
  while(true)
    {
    cout<<"\n\nMenu Driven Code!";
    cout<<"\n1. Operations on numbers ";
    cout<<"\n2. Pattern operations";
    cout<<"\n3. Exit";
    cout<<"\nEnter Your Choice: ";
    int ch;
    cin>>ch;
    switch(ch)
    {
      case 1:
        subnums();
        break;
      case 2:
        subpatterns();
      case 3:
         exit(0);
    }
  }
}


void subnums()
{
  while(true)
    {
      cout<<"\n\nO p e r a t i o n s  o n  N u m b e r s";
      cout<<"\n============================================";
      cout<<"\n1. Even Numbers";
      cout<<"\n2. Odd Numbers";
      cout<<"\n3. Multiplication Table of a Number";
      cout<<"\n4. Factors of a Number";
      cout<<"\n5. Sum of a Number's Factors";
      cout<<"\n6. Sum of the Numbers in a Given Range";
      cout<<"\n7. Check for a Prime Number";
      cout<<"\n8. Prime Numbers in a Given Range";
      cout<<"\n9. Calculate the Factorial";
      cout<<"\n10. Fibonacci Sequence for # of Terms";
      cout<<"\n11. Check if the Number is a Sunny Number";
      cout<<"\n12. Sum of Digits";
      cout<<"\n13. Armstrong";
      cout<<"\n14. Reverse of Digits";
      cout<<"\n15. List of Armstrong Numbers in a Given Range";
      cout<<"\n16. Check for a Perfect Square";
      cout<<"\n17. List of Perfect Squares in a Given Range"; 
      cout<<"\n18. Go back to main menu";
      cout<<"\nEnter Your Choice: ";
      int ch, a, b;
      cin>>ch;
      switch(ch)
        {
          case 1: 
            cout<<"\nPlease Enter the Starting Number: ";
            cin>>a;
            cout<<"\nPlease Enter the Last Number: ";
            cin>>b;
            evennos(a,b);
            break;

          case 2: 
            cout<<"\nPlease Enter the Starting Number: ";
            cin>>a;
            cout<<"\nPlease Enter the Last Number: ";
            cin>>b;
            oddnos(a,b);
            break;
          case 3: 
            int n;
            cout<<"Enter any number: ";
            cin>>n;
            mult(n);
            break;
          case 4:
            cout<<"Enter Any Number: ";
            cin>>a;
            factors(a);
            break;
          case 5:
            cout<<"Enter Any Number: ";
            cin>>a;
            sumfac(a);
            break;
          case 6:
            cout<<"Enter A Number: ";
            cin>>a;
            cout<<"Enter Another Number: ";
            cin>>b;
            rangesum(a,b);
            break;
          case 7:
            cout<<"Enter Any Number: ";
            cin>>a;
            if (isPrime(a)) {
                std::cout<<a<< " is a prime number." <<                       std::endl;
            } 
            else {
                std::cout <<a<< " is not a prime number."                 << std::endl;
            }
            break;
          case 8:
            cout<<"Enter Starting Number: ";
            cin>>a;
          cout<<"Enter End Number: ";
          cin>>b;
          findPrimesInRange(a, b);
          break;
          case 9:
            cout<<"Input a Non-negative Value: ";
            cin>>a;
          cout<<"The Factorial Value of "<<a<<" is "<<factorial(a);
            break;
          case 10:
            cout<<"Input a Non-negative Value: ";
            cin>>a;
            fibonnaci(a);
            break;
          case 11:
            cout<<"Input a Non-Negative Value: ";
            cin>>a;
            sunnynum(a);
            break;
          case 12:
            cout<<"Enter a Positive Value: ";
            cin>>a;
            digisum(a);
            break;
          case 13:
            cout<<"Enter a Number: ";
            cin>>a;
            if(checkArmstrong(a)){
              cout<<a<<" is an armstrong number!";
            }
            else {
              cout<<a<<" is not an armstrong number!";
            }
            break;
          case 14:
            cout<<"Enter a Number: ";
            cin>>a;
            revDig(a);
            break;
          case 15:
            cout<<"Enter the Starting Number: ";
            cin>>a;
            cout<<"Enter the Last Number: ";
            cin>>b;
            cout<<"The Armstrong Numbers in the List Are: ";
            armstronglist(a,b);
            break;
          case 16:
            cout<<"Enter Any Number: ";
            cin>>a;
            if(perfectsquare(a)){
              cout<<a<<" is a perfect square!";
            }
            else{
              cout<<a<<" is not a perfect square!";
            }
            break;
          case 17:
            cout<<"Enter the Starting Number: ";
            cin>>a;
            cout<<"Enter the Ending Number: ";
            cin>>b;
            squarelist(a,b);
            break;
          case 18:
            main();
        }  
    }
}

void subpatterns()
{
  while(true)
    {
      cout<<"\n\n P A T T E R N    O P E R A T I O N S";
      cout<<"\n=======================================";
      cout<<"\n1. Create a Pattern Depending on Lines";
      cout<<"\n2. Create a Pattern Depending on Lines (Backward)";
      cout<<"\n3. Create a Pattern Pyramid Style";
      cout<<"\n4. Create a Number Pyramid";
      cout<<"\n5. Create an Alphabet Pyramid";
      cout<<"\n6. Increase and Decrease Pyramid";
      cout<<"\n7. Go back to main menu";
      cout<<"\nEnter Your Choice: ";
      int ch, a;
      cin>>ch;
      switch(ch)
        {
          case 1:
            cout<<"Enter The Number of Rows: ";
            cin>>a;
            pattern(a);
            break;
          case 2:
            cout<<"Enter the Amount of Rows: ";
            cin>>a;
            backwardpattern(a);
            break;
          case 3:
            cout<<"Enter the Amount of Rows: ";
            cin>>a;
            pyramidpattern(a);
            break;
          case 4:
            cout<<"Enter the Amount of Rows: ";
            cin>>a;
            numberpyramid(a);
            break;
          case 5:
            cout<<"Enter the Amount of Rows: ";
            cin>>a;
            alphabetpyramid(a);
            break;
          case 6:
            int lines;
            cout<<"Enter the Amount of Lines: ";
            cin>>lines;
            coolpyramid(lines);
            break;
          case 7:
            main();
      }
    }
}