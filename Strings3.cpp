#include <iostream>
using namespace std;

// Write a program to read the nameand marks in 3 subjects for n Students. Calculate and display total marks and average score by each student.

int main() {
  int n;
  cout<<"Enter the Number of Students: ";
  cin>>n;
  string names[n];
  int marks[n][3];
  for(int i=0;i<n;i++){
    cout<<"Enter the Name for Student "<<i+1<<": ";
    cin>>names[i];
    cout<<"Enter Marks for 3 Subjects for Student "<<i+1<<": ";
    for(int j=0;j<3;j++){
      cin>>marks[i][j];
    }
  }

  for(int i=0;i<n;i++){
    int totalMarks = 0;
    int avgScore;

    for(int j=0;j<3;j++){
      totalMarks+=marks[i][j];
    }

    avgScore = totalMarks/3;

    cout<<"Name: "<<names[i]<<endl;
    cout<<"Total Marks: "<<totalMarks<<endl;
    cout<<"Average Score: "<<avgScore<<endl;
  }
}