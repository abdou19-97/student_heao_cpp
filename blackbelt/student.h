//student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include <iostream>
#include <string>
#include "address.h"
#include "date.h"
class Student{
     //private member
     private:
       std::string fName;//first name
       std::string lName; //last name     
       Address* address;  //address     
       Date* dob; //date of birth
       Date* grad;//gradutation date
       float gpa; //gpa
       int credits;//credit hours completed
       
     public:
       Student(); //null construcotr
       ~Student(); //destructor
       void init(std::string);  //initialise all data member(set method)
       std::string getFullReport();  //get the full reprot method
       std::string getShortReport(); //get the short report method
       std::string alphabetReport(); //alphabet order method
       void swapData(int, int d); //swap student data
}; //end student

#endif

