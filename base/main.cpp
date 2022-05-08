#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "date.h"
#include "address.h"
#include "student.h"

int main(){
    
    std::ifstream infile("student.dat"); //opening th student.dat file
   
    std::ofstream fullReport("fullReport.txt");  //outputing the fullreport for each student 
    std::ofstream shortReport("shortReport.txt"); //outputing the first and last name for each student
    std::string str;
    int i = 0;
    Student *s = new Student[50]; //requesting the array of the student on the heap

    if(infile.is_open()){                     //checking if the file is open
        
       while(getline(infile, str)){         //looping in the input file
      
        
        s[i].init(str);     //call the init method in student class
   
        fullReport<<s[i].getFullReport();       //calling getFullReport method
        shortReport<<s[i].getShortReport();    //calling getShortReport
        i++;
        
        fullReport<<'\n';
        shortReport<<'\n';
        
   }
  } 
  //closing the file   
  infile.close();
  fullReport.close();
  shortReport.close();
  delete[] s;     //delete the array to avoid the leak
   


      
}

