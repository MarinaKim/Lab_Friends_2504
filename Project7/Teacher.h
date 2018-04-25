#pragma once
#include"Library.h"
class teacher {
private:
	string name;
	string surname;
	int age;
	string gender;
	string cafedra;
public:
	teacher();
	teacher(string name, string surname, int age, string gender, string cafedra);
	teacher(const teacher &obj);
	virtual ~teacher(){}
};