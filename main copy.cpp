#include <iostream>
#include <cstring>
#include "Person.hpp"
#include "customer.hpp"
#include "mechanic.hpp"
#include "classqueue.h"
#include <fstream>
using namespace std;
int main()
{
    mechanic m1[3];
    string name;
    int age;
    int id;
    ifstream file;
    file.open("mechanic.txt");
    while(!file.eof())
    {
        for(int i=0;i<3;i++)
        {
            file >> name;
            file >> age;
            file >> id;
            m1[i].setname(name);
            m1[i].setage(age);
            m1[i].setID(id);
            
        }
    }
    file.close();
    customer e[5];
    string name2;
    int ages;
    int hour;
    int min;
    ifstream file2;
    file2.open("customer.txt");
    while(!file2.eof())
    {
        for(int r=0;r<5;r++)
        {
            file2 >> name2;
            file2 >> ages;
            file2 >> hour;
            file2 >> min;
            e[r].setname(name2);
            e[r].setage(ages);
            e[r].setappointment(hour,min);
        }
    }
    file2.close();
    int z=0;
    for(int j=0;j<5;j++)
    {
        
        if(j>=3)
        {
            
               if(m1[z].isavailable(e[j].getappointhour(),e[j].getappointmins())== 1)
               {
                   m1[z].setappoint(e[j].getappointhour(),e[j].getappointmins());
                   e[j].setMecID(z);
                   z++;
               }
                else
                {
                    if(m1[z+1].isavailable(e[j].getappointhour(),e[j].getappointmins())== 1)
                    {
                        m1[z].setappoint(e[j].getappointhour(),e[j].getappointmins());
                        e[j].setMecID(z+1);
                        z++;
                    }
                }
               
            }
        else
        {
            if(m1[j].isavailable(e[j].getappointhour(),e[j].getappointmins())==1)
            {
                m1[j].setappoint(e[j].getappointhour(),e[j].getappointmins());
                e[j].setMecID(j);
                
            }
            
            else{
                    cout << "There is no mechanic available for " << e[j].getname() << endl;
                
                }
        }
    }
    
 Queue <customer> s;
    for(int k=0;k<5;k++)
    {
        customer temp;
        for(int u=0;u<5;u++)
        {
            if(e[k] < e[u])
            {
                temp=e[k];
                e[k]=e[u];
                e[u]=temp;
            }
        }
           
    }
    for(int i=0;i<5;i++)
    {
        s.Enqueue(e[i]);
    }
    
    for(int a=0;a<5;a++)
    {
        customer m[5];
        m[a]= s.Dequeue();
        cout << "MR." << m[a].getname() << " at the appointment " << m[a].getappointhour() << ":" << m[a].getappointmins() << " to the mechanic " << m1[m[a].getMecID()].getname() << endl;
    }
}

    

