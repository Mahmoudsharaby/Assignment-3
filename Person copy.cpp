#include "Person.hpp"
#include <string>
using namespace std;
Person :: Person()
{
    Name="";
    ID=0;
    Age=0;
}
void Person :: setname(std::string n)
{
        Name=n;
}
void Person :: setID(int num)
{
    ID=num;
}
void Person :: setage(int num)
{
    Age=num;
}
string Person :: getname()
{
    return Name;
}
int Person :: getID()
{
    return ID;
}
int Person :: getage()
{
    return Age;
} void Person :: printinfo()
{
    cout << "The name:" << Name << "The Age:" << Age << "The ID:" << ID << endl;
}
