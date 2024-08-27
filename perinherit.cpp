#include <iostream>
using namespace std;

class Person{
  int id;
  char name[100];
  public:
    void getp();
    void displayp();
};

void Person::getp()
{
  cout<<"\n\nEnter ID: "; cin>>id;
  cin.get();
  cout<<"Enter Name: "; cin.getline(name,100);
}

void Person::displayp()
{
  cout<<"\nID: "<<id;
  cout<<"\nName: "<<name;
}

class Student:private Person
{
  char grade[10];
  int fees;
  int marks[3];
  int tot;
  float avg;
  void calc(){
    for(int i=0;i<3;i++){
      tot+=marks[i];
    }
    avg=(float)tot/3;
  }
public:
  void getstud();
  void disps();
};

void Student::getstud()
{
  getp();
  cout<<"Enter Grade: "; cin>>grade;
  cout<<"Enter Fees: "; cin>>fees;
  cout<<"Enter Marks in 3 Subjects: ";
  for(int i=0;i<3;i++){
    cin>>marks[i];
  }
  calc();
}

void Student::disps()
{
  displayp();
  cout<<"\nGrade: "<<grade;
  cout<<"\nFees: "<<fees;
  for(int i=0;i<3;i++){
    cout<<"\nMarks in Subject "<<i+1<<": "<<marks[i];
    cout<<"\nTotal Score: "<<tot;
    cout<<"\nAverage Score: "<<avg;
  }
}

class Employee:public Person{
  int salary;
  string job;
public:
  void getemp();
  void dispe();
};

void Employee::getemp(){
  getp();
  cout<<"Enter Salary: ";cin>>salary;
  cout<<"Enter Job: ";cin>>job;
}

void Employee::dispe(){
  displayp();
  cout<<"\nSalary: "<<salary;
  cout<<"\nJob: "<<job;
}

int main() {
  Student S;
  Employee E;
  S.getstud();
  S.disps();
  E.getemp();
  E.dispe();
}
