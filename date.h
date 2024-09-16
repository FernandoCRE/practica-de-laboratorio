#include <iostream>

using namespace std;

class Date {
public:
    explicit Date(int m, int d, int y) 
        :day(d),year(y){
            setMonth(m);
        }

    // get y set
    int getDay() const{
        return day;
    }

    int getMonth() const{
        return month;
    }

    int getYear() const{
        return year;
    }

    

    void setMonth(int m){
        if(m >= 1 && m <= 12) {
            month = m;
        }else{
            month=1;
        }
    }



    void displayDate() const {
        cout << "la fecha es " << month << "/" << day << "/" << year << endl;
    } 

          
    
private:
    
    int day{1};
    int month{1};
    int year{1900};

};