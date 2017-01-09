/* 
 * File:   Employee.h
 * Author: pauzchr
 *
 * Created on March 12, 2015, 10:37 AM
 */

#include "Employee.h"
#include <string.h>
#include <assert.h>
#include <iostream>     // needed for cout and cerr

using namespace std;

Employee::Employee(const char* name, const char* SSN, building b, const int cubicle, const double salary)
{
    assert( strlen(name) < NSIZE );
    strcpy( this->name, name );
    assert( strlen(SSN) < SSN_SIZE );
    strcpy( this->SSN, SSN );
    this->b = b;
    this->cubicle = cubicle;
    this->salary = salary;
}

void Employee::print() const
{
    cout << "Name: \t\t" << name << endl;
    cout << "SSN: \t\t" << SSN << endl;
    cout << "Building: \t";
    switch( b )
    {
        case warehouse:
            cout << "warehouse";
            break;
        case administration:
            cout << "administration";
            break;
        case research:
            cout << "research";
            break;
        case business:
            cout << "business";
            break;
        case maintenance:
            cout << "maintenance";
            break;
        default:
            cout << "other";
            break;  
    }
    cout << endl;
    cout << "Cubicle: \t" << cubicle << endl;
    cout << "Salary: \t$" << salary << endl;
}

Supervisor::Supervisor(const char* name, const char* SSN, building b, const int cubicle, 
                       const double salary, const char* department, section s, 
                       const int projects)
           :Employee( name, SSN, b, cubicle, salary)
{
    this->s = s;
    assert( strlen(department) < DSIZE);
    strcpy( this->department, department );
    this->projects = projects;
    
}

void Supervisor::print() const
{
    Employee::print();
    cout << "Section: \t";
    switch( s )
    {
        case executive:
            cout << "executive";
            break;
        case sales:
            cout << "sales";
            break;
        case marketing:
            cout << "marketing";
            break;
        case software:
            cout << "software";
            break;
        case engineering:
            cout << "engineering";
            break; 
    }
    cout << endl;
    cout << "Department: " << department << endl;
    cout << "Projects: \t" << projects << endl;
}