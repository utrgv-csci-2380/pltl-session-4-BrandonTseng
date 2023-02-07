#include <string.h>
#include <iostream>
using namespace std;

class Student{
   public:
    string name;
    int id;
    int grades[3];
};

//Part 1
// Function prototype for inputting
void inputStudent(Student* stuPtr);
// TODO: Function prototype for printing
void printStudent(Student* stuPtr);

// Main function
int main(){
  // Part 1
  // instantitating a Student object
  Student stu;
  // defining a pointer for the Student object
  Student *studentPtr = &stu;

  // NOTE: you could send studentPtr OR &stu
  // inputtung from the keyboard into the instance
  inputStudent(&stu);
  // TODO: print the object
  cout << endl;
  printStudent(&stu);
  


  return 0;
}
// end of main

//TODO: Function defintions//
// Part 1
void inputStudent(Student *stuPtr){
  cout << "Enter your name: "; 
  cin >> stuPtr->name;
  cout << "Enter your id between 0 and 100 : ";
  cin >> stuPtr->id;
  for(int i = 0; i < 3; i++){
      cout << "Enter a grade: ";
      cin >> stuPtr->grades[i];
  }

}

// Part 2
void printStudent(Student *stuPtr){
  cout << "Name: " << stuPtr->name << endl;
  cout << "Your student id is " << stuPtr->id << endl;
  for(int i = 1; i <= 3; i++){
    cout << "Grade " << i << ": " << stuPtr->grades[i] << endl;
  }


}

