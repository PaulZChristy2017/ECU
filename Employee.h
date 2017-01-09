/* 
 * File:   Employee.h
 * Author: pauzchr
 *
 * Created on March 12, 2015, 10:37 AM
 */

//  First, consider header file Employee.h and its implementation
//  file Employee.cpp.  Declare a class named Employee in header
//  file Employee.h and write the implementation (code) for the
//  member functions in C++ source file Employee.cpp, similar to
//  what was done for example 9 with files Student.h and Student.cpp.
//  To get full credit you MUST only declare member function prototpyes
//  for class Employee in the header file Employee.h and put their
//  implementation (code) in file Employee.cpp.

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

//
//  Header file Employee.h contains the following enumerations.
//   enumeration  elements
//   building     warehouse, administration, research, business, maintenance, other
//   section      executive, sales, marketing, software, engineering

enum building { warehouse, administration, research, business, maintenance, other };
enum section { executive, sales, marketing, software, engineering };

//  Header file Employee.h defines the following integer constants.
//   constant    value      description
//   NSIZE          30      size of name string
//   SSN_SIZE       12      size of social security string
//   DSIZE          20      size of department string

const int NSIZE = 30;
const int SSN_SIZE = 12;
const int DSIZE = 20;

class Employee
{
public:
    
    void print() const;
    
    //  Class Employee has a single contructor that has the following 5 parameters.
    //  parameter   type            description
    //  name        const char*     employee name having up to NSIZE-1 characters
    //  SSN         const char*     social security number (with -) having exactly
    //                              11 characters
    //  b           building        a building enumeration value
    //  cubicle     const int       cubicle number
    //  salary      const double    salary
    
    Employee( const char* name, const char* SSN, building b, const int cubicle, const double salary);
    
private:
    
    //  Class Employee has the following 5 private member variables.
    //  type        variable       description
    //  char        SSN[SSN_SIZE]  social security number
    //  building    b              building
    //  int         cubicle        cubicle
    //  char        name[NSIZE]    name
    //  double      salary         salary
    
    char SSN[SSN_SIZE];
    building b;
    int cubicle;
    char name[NSIZE];
    double salary;
    
};

// Header file Employee.h will also contain a second class named
// Supervisor that is an inherited class.  Class Supervisor is
// inherited from class Employee.

//  The prototype of constructor Supervisor MUST be declared in
//  header file Employee.h and its implementation (code) MUST
//  be in implementaion file Employee.cpp, similar to what was
//  done in example 9 with the constructor for GradStudent.

class Supervisor: public Employee
{
public:
    
    void print() const;
    
    // Class Supervisor has a single contructor that has the following 8
    // parameters.
    //
    //  parameter   type            description
    //  name        const char*     employee name having up to NSIZE-1 characters
    //  SSN         const char*     social security number (with -) having exactly
    //                              11 characters
    //  b           building        a building enumeration value
    //  cubicle     const int       cubicle number
    //  salary      const double    salary
    //  department  const char*     department being supervised
    //  s           section         section being supervised (enumeration value)
    //  projects    const int       number of projects being supervised
    
    Supervisor( const char* name, const char* SSN, building b, const int cubicle, 
                const double salary, const char* department, section s, const int projects );
    
private:

    //  Class Supervisor has the following 3 private member variables.
    //  type        variable            description
    //  char        department[DSIZE]   department being supervised
    //  section     s                   section being supervised
    //  int         projects            number of projects being supervised
    
    char department[DSIZE];
    section s;
    int projects;
    
};

#endif	/* EMPLOYEE_H */

