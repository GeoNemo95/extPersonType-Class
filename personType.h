#pragma once
#include <iostream>
#include <string>

using namespace std;

class personType{
  private:
    string firstName;
    string lastName;
  public:
    personType(string xfirstName = "", string xlastName = "") : firstName(xfirstName), lastName(xlastName){};
    void setFirstName(string xfirstName){firstName = xfirstName;}
    void setLastName(string xlastName){lastName = xlastName;}
    string getFirstName(){return firstName;}
    string getLastName(){return lastName;}
    void print(){
      cout << firstName << " " << lastName << endl;
    }
};