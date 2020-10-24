#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class Employee : public Person {
private:
	   string name;
	   int ID;
private:
	Employee(): name("N/A"),ID(0){
	}
	~Employee() {
	}
};