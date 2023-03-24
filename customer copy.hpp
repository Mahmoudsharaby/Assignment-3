#ifndef customer_hpp
#define customer_hpp
#include <stdio.h>
#include <iostream>
#include "Person.hpp"
using namespace std;
class customer : public Person
{
private:
    int MechaniclID;
    appointment slot;
public:
    void setMecID(int num);
    void setappointment(int num1,int num2);
    int getMecID();
    int  getappointhour();
    int  getappointmins();
    bool operator == (customer &x);
    bool operator >(customer &x);
    bool operator <(customer &x);
};
#endif /* customer_hpp */
