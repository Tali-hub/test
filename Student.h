include "Person.h"
# include <string>
#include <iostream>
#include <typeinfo>

class Student : public Person{
    protected:
    int average;
    char institute[10];
    public:
    Student(): Person(),average(0),institute("Unknow"){};
    Student(const string& name, const string& id, const int& age,const int& avg,  const string& institute ):Person(name, id, age), average(avg), institute(institute) {};
    Student( const Student& other): Person(other){
        this->average=other.average;
        this->institute=other.institute;}
    ~Student(){
	cout << "Student::~Student" << endl;}

    void Print(){
        Person::Print();
        cout<< " Student AVG:"<< average <<endl;
        cout<< " Student Institute:"<< institute <<endl;
    }

}