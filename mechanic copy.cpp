#include "mechanic.hpp"
using namespace std;
bool mechanic ::isavailable(int hour, int min)
{
    int x=1;
    for(int i=0;i<counter;i++)
    {
        if(array[i].hours == hour && array[i].mins== min)
        {
            x=0;
        }
        else
            continue;
    }
    return x;
}
void mechanic:: setcounter()
{
    counter++;
}
void mechanic:: setappoint(int x,int y)
{
    array[counter].hours=x;
    array[counter].mins=y;
    counter++;
}
int mechanic::getcounter()
{
    return counter;
}
int mechanic::gethours(int x)
{
    return array[x].hours;
}
int mechanic::getmins(int x)
{
    return array[x].mins;
}
