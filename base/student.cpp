//student.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "address.h"
#include "date.h"

//the null constructor
Student::Student(){
  fName = "George";
  lName = "Washington";
  credits = 0;
  gpa = 0.0;
  dob = new Date(); //requesting memory allocation for date class on the heap using new oprator
  address = new Address(); //requesting memory allocation for address class on the heap
  grad = new Date();   //same with graduation date
  
} 

//the destructor
Student::~Student(){
   delete dob;        
   delete grad;       //using delete to free the heap so to avoid memory leak
   delete address;
}



//init method
void Student::init(std::string str){
       
    //using string stream to read the data in the line
    //and convert int string if needed
    std::stringstream convert(str);
    std::stringstream ss;
     
    std::string line;
    
    
    //temporary strings that will read address 
    std::string line1;
    std::string line2;
    std::string city;
    std::string state;
    std::string zip;

         //using getline to sprate with comma
         getline(convert, line, ',');
         
         fName = line; //last name
         //clear the converter
         convert.clear();
         
         std::cout<< "fname: " << line << '\n';
          
         getline(convert, line, ',');
         lName = line; //first name
         convert.clear();
         
         std::cout<< "Lname: " << line << '\n';
                
         getline(convert, line1, ','); //address line1
         
         convert.clear();
         
     
         getline(convert, line2, ',');  //address line2
        
         convert.clear();
         
      
         getline(convert, city, ','); //city
        
         convert.clear();
         
         getline(convert, state, ','); //state
         
         convert.clear();
         
         
         getline(convert, zip, ','); //zip code

         address->init(line1, line2, city, state, zip); //rejoining the data of the address
         convert.clear();
         
      
         getline(convert, line, ',');
         
         dob->init(line);  //the birthday
         convert.clear();
         
         std::cout<< "\nstudent dob: " << line <<'\n';
            
         getline(convert, line, ',');
        
         grad->init(line); //graduation date
         convert.clear();
         std::cout<< "\nstudent grad: " << line <<'\n';
   
         
         getline(convert, line, ',');
         ss.clear();
         ss<<line;  //converting the int gpa to a string using the stringstream
         ss>>gpa;
        
         convert.clear();
       
         
         std::cout<< "\nstudent gpa: " << line  << "," << gpa <<'\n';

         getline(convert, line);
         ss.clear(); 
         ss<<line;
         ss>>credits;         //converting the credit hours from int to string
         convert.clear();
         
         
         
        
         std::cout<< "\nstudent credit: " << line << "," << credits <<'\n';
                  
	
        
      
} 
 
//get the full report of the student

std::string Student::getFullReport(){
         
       
       
             //getting the first and last name sprated by comma
             std::string fReport = fName + "," + lName + ",";
             
            //creating a temporary string to convert int to string
             std::string temp;
             std::stringstream ss;
            
             std::cout<< "print add1: " << fReport << '\n';
             fReport += address->getAdd2() + ",";            
             std::cout<< "print add1: " << fReport << '\n';     //getting the data of the address
                                                                // for each student
             fReport += address->getCity() + ",";
             fReport += address->getState() + ",";
             fReport += address->getZip() + ",";

             fReport += dob->getMonth() + "/";
             fReport += dob->getDay() + "/";                   //getting the birth date for each student
             fReport += dob->getYear() + ",";

             fReport += grad->getMonth() + "/";
             fReport += grad->getDay() + "/";                 //geting the graduation date for each student
             fReport += grad->getYear() + ",";
             
             ss<<gpa;
             ss>>temp;
             fReport += temp + ",";
             ss.clear();                                        //using the temporary string to convert both
                                                                //gpa and credit to string
             ss<<credits;                                   
             ss>>temp;
             fReport += temp;

      
            return fReport;
       


     
      

} 

std::string Student::getShortReport(){

       std::string temp2;
       
       temp2 = fName + "," + lName;
        
       return temp2;


}

