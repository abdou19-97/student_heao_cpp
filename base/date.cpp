//date.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "date.h"
//constructor
Date::Date(){
    month = month;
    day = day;
    year = year;
}

//set mothd
void Date::init(std::string dob){
        
         std::stringstream ss(dob);   //using stringstream for the getline
          
         
          std::getline(ss, dob, '/');   //using getline to srprate by slash
          Date::month = dob;
          ss.clear();              

          
          std::getline(ss, dob, '/');   
          Date::day = dob;
          ss.clear();

          std::getline(ss, dob, '/');
          Date::year = dob;
          ss.clear();        
          
        
                 


}

//get methods 
std::string Date::getMonth()
{
   return month;
}

std::string Date::getDay()
{
   return day;
}

std::string Date::getYear()
{
   return year;
}

