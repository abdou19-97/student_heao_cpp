//address.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "address.h"


//the address constructor
Address::Address(){
   address1 = "123";
   address2 = "street Avenue";
   city3 = "City";
   state4 = "State";
   zip5 = "00000";

}
//the init method this will the address
void Address::init(std::string line1, std::string line2, std::string city, std::string state, std::string zip){
    
     
      
      Address::address1 = line1;      //set the address1
      
      
      Address::address2 = line2;        //set address2
       
      Address::city3 = city;           // set city
     
      Address::state4 = state;       //set state
     
      Address::zip5 = zip;          //set zip cod
      
      std::cout<<"Zip: " << zip << '\n';

   
   
      
}

//get the data of the address (address1, address2, city, state, and zip)
std::string Address::getAdd1(){

    return address1;                
}

std::string Address::getAdd2(){

    return address2;
}

std::string Address::getCity(){

    return city3;
}

std::string Address::getState(){

    return state4;
}

std::string Address::getZip(){

    return zip5;
}


