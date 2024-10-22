#pragma once
#include <iostream>

using namespace std;

class dateType{
  private:
    int dMonth;
    int dDay;
    int dYear;
  public:
    dateType(int month = 1, int day = 1, int year = 1900) : dMonth(month), dDay(day), dYear(year){};
    void setDate(int month, int day, int year){
      if (month > 12 || month < 1 || day > 31 || day < 1 || year < 1900){
        dMonth = 1;
        dDay = 1;
        dYear = 1900;
        cout << "Invalid date, resetting to 1/1/1990" << endl;
      }
      else if (getDaysinMonth(month, year) == 30){
        if (day > 30){
          dDay = 1;
          cout << "Invalid date, resetting to 1/1/1990" << endl;
        }
        else{
          dMonth = month;
          dDay = day;
          dYear = year;
        }
      }
      else if (getDaysinMonth(month, year) == 29){
        if (day > 29 || isLeapYear(year) == false){
          dDay = 1;
          cout << "Invalid date, resetting to 1/1/1990" << endl;
        }
        else{
          dMonth = month;
          dDay = day;
          dYear = year;
        }
      }
      else if (getDaysinMonth(month, year) == 28){
        if (day > 28){
          dDay = 1;
          cout << "Invalid date, resetting to 1/1/1990" << endl;
        }
        else{
          dMonth = month;
          dDay = day;
          dYear = year;
        } 
      }
      else{
        dMonth = month;
        dDay = day;
        dYear = year;
      }
    };
    int getDay(){return dDay;}
    int getMonth(){return dMonth;}
    int getYear(){return dYear;}
    bool isLeapYear(int year){
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        //cout << "testing year" << year << endl;
        return true;
      }
      else {
        return false;
      } 
    }
    int getDaysinMonth(int month, int year){
      if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
      }
      else if (month == 4 || month == 6 || month == 9 || month == 11){
          return 30;
      }
      else if (month == 2 && isLeapYear(year) == true){
          return 29;
      }
      else if (month == 2 && isLeapYear(year) == false){
          return 28;
      }
      else
          return 0;
      }
    void print(){
      cout << dMonth << "/" << dDay << "/" << dYear << endl;
    }
};
