#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class Person {
protected:
	string name;
	long id;
	int age;
public:
	Person() :name("Unknown"), id(123456789), age(0) {};
	Person(string NAME, long ID, int AGE) {
		if (NAME.length() <= 10) {
			name = NAME;
			id = ID;
			age = AGE;
		}
		else {
			cout << "error" << endl;
			exit(1);
		}
	}
	void PersonInit() {
		cout << "Person:" << endl << "Name:";
		cin >> name;
		cout << "ID:";
		cin >> id;
		cout << "Age:";
		cin >> age;
	}
	void Print()const {
		cout <<"Person details:"<<endl<< "Name:" << name << endl << "ID:" << id << endl << "Age:" << age << endl;
	}
};