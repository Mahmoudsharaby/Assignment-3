#include "customer.hpp"
using namespace std;
 void customer :: setMecID(int num)
{
    MechaniclID=num;
}
void customer:: setappointment(int num1,int num2)
{
    slot.hours=num1;
    slot.mins=num2;
}
int customer::getMecID()
{
    return MechaniclID;
}
int customer ::  getappointhour()
{
    return slot.hours;
}
int customer:: getappointmins()
{
    return slot.mins;
}
bool customer :: operator == (customer &x)
 {
     if(slot.hours==x.getappointhour() || slot.mins==x.getappointmins())
     {
         return true;
     }
    else
        return false;
 }
bool customer :: operator >(customer &x)
{
    if(slot.hours>x.getappointhour() || slot.mins>x.getappointhour())
    {
        return true;
    }
    else
        return false;
}
bool customer :: operator <(customer &x)
{
    if(slot.hours<x.getappointhour()||slot.mins<x.getappointmins())
    {
        return true;
    }
    else
        return false;
}
