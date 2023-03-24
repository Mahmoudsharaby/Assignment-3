#ifndef mechanic_hpp
#define mechanic_hpp
#include <stdio.h>
#include <iostream>
#include "Person.hpp"
using namespace std;
class mechanic: public Person
{
private:
    int counter=0;
    appointment array[5];
public:
    bool isavailable(int hour, int min);
    void setcounter();
    void setappoint(int x,int y);
    int getcounter();
    int gethours(int x);
    int getmins(int x);
};
#endif /* mechanic_hpp */
