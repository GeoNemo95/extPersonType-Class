#pragma once
#include <iostream>
#include <string>
#include "addressType.h"
#include "dateType.h"
#include "personType.h"

using namespace std;

class extPersonType {
  private:
    personType person;
    addressType address;
    dateType birthdate;
    string phoneNumber; 
    string relationship;
  public:
    extPersonType(string first = "", string last = "", int month = 1, int day = 1, int year = 1900, string street = "", string city = "", string state = "XX", int zip = 10000, string phone = "", string rel = "None") : person(first, last), address(street, city, state, zip), birthdate(month, day, year), phoneNumber(phone), relationship(rel){
      
    };
    void setPhoneNumber(string phone){phoneNumber = phone;}
    void setRelationship(string rel){relationship = rel;}
    string getPhoneNumber(){return phoneNumber;}
    string getRelationship(){
      if(relationship == "Family" || relationship == "Friend" || relationship == "Business"){
        return relationship;
      }
      else{
        return "";
      }
    };
    int getBirthMonth(){return birthdate.getMonth();}
    void print(){
      person.print();
      birthdate.print();
      address.print();
      cout << phoneNumber << endl << getRelationship() << endl;
    }
    
};