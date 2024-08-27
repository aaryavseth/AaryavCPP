#include <iostream>
using namespace std;

class employee
{
  int empno;
  string name;
  string desig;
  int salary;
  int total;
  int deduc;
  int net;
  void calc(){
    total=salary*12;
    deduc = (total/10);
    net = total-deduc;
  }
  public:
    void getemp(){
      cout<<"\nEnter Empno: "; cin>>empno;
      cout<<"Enter Name: "; cin>>name;
      cout<<"Enter Designation: "; cin>>desig;
      cout<<"Enter Monthly Salary: "; cin>>salary;
      calc();
    }
    void dispemp(){
      cout<<"\n\nEmpno: "<<empno;
      cout<<"\nName: "<<name;
      cout<<"\nDesignation: "<<desig;
      cout<<"\nMonthly Salary: "<<salary;
      cout<<"\nAnnual Salary: "<<total;
      cout<<"\nDeduction: "<<deduc;
      cout<<"\nNet Salary: "<<net;
    }
};

int main() {
  employee e[3];
  for(int i=0;i<3;i++)
    e[i].getemp();
  for(int i=0;i<3;i++)
    e[i].dispemp();
}

// create a class employee 
// empno
// name
// designation
// salary (per month)
// calculate() -> annual salary, deduction as 10% of annual salary
// getemp() to read data 
// dispemp() to display the data