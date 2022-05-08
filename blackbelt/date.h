//date.h
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS
#include <string>

class Date{

    private:
       std::string month;
       std::string day;
       std::string year;

    public:
       Date();
       void init(std::string dob);
       std::string getMonth();
       std::string getDay();
       std::string getYear();

};//end the class

#endif



