#include <iostream>
using namespace std;

struct DOB {
  int day;
  int month;
  int year;
};

struct stud {
  string admno;
  string name;
  string mobile;
  DOB dob; 
};

int main() {
  stud s[2];
  for(int i = 0; i < 2; i++) {
    cout<<"Enter Details (admno/name/mobile/day/month/year) for "<<i+1<<" student(s):\n";
    cout<<"Enter Admission no. : ";
    getline(cin, s[i].admno);
    cout<<"Enter Name: "; 
    getline(cin, s[i].name);
    cout<<"Enter mobile no. : ";
    getline(cin, s[i].mobile);
    cout<<"Enter day of birth: ";
    cin>>s[i].dob.day;
    cout<<"Enter month of birth: ";
    cin>>s[i].dob.month;
    cout<<"Enter year of birth: ";
    cin>>s[i].dob.year;
    cin.get();
  }

  for(int i = 0; i < 2; i++) {
    cout<<"\nEntered Information for "<<i+1<<" student(s):\n";
    cout<<s[i].admno<<"#"<<s[i].name<<"#"<<s[i].mobile;
    cout<<"#"<<s[i].dob.day<<"/"<<s[i].dob.month<<"/"<<s[i].dob.year<<"\n";
  }
}
