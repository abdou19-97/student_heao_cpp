//address.h
#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS
#include <iostream>
#include <string>
//#include "student.h"
class Address{
     private:
       std::string address1;
       std::string address2;    //private member of the address class
       std::string city3;
       std::string state4;
       std::string zip5;
     
     public:
       Address();    //constructor
       void init(std::string line1, std::string line2, std::string city, std::string state, std::string zip); //set method
       std::string getAdd1();  
       std::string getAdd2();   //get methods
       std::string getCity();
       std::string getState();
       std::string getZip();
   

};//end Address class


#endif
