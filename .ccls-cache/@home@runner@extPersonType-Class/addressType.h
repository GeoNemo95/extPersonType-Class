#pragma once
#include <iostream>
#include <string>
using namespace std;

class addressType{
  private:
    string street;
    string city;
    string state;
    int zip;
  public:
    addressType(string xstreet = "", string xcity = "", string xstate = "XX", int xzip = 10000): street(xstreet), city(xcity), state(xstate), zip(xzip){};
    void setAddress(string xstreet, string xcity, string xstate, int xzip){
      street = xstreet;
      city = xcity;
      setState(xstate);
      setZipcode(xzip);
    };
    void setStreet(string xstreet){street = xstreet;}
    void setCity(string xcity){city = xcity;}
    void setState(string xstate){
      if(xstate.length() != 2){
        state = "XX";
      }
      else{
        state = xstate;
      }
    }
    void setZipcode(int xzip){
      if (xzip > 11111 && xzip < 99999){
        zip = xzip;
      }
      else {
        zip = 10000;
      }
    }
    string getStreet(){return street;}
    string getCity(){return city;}
    string getState(){return state;}
    int getZip(){return zip;}
    void print(){
      cout << street << endl << city << ", " << state << " " << zip << endl;
    }
};