#pragma once
#include"Library.h"
#include "Exam.h"
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
	string getSname() { return surname; }

	virtual ~teacher(){}

	friend class Exam;

	friend istream & operator >> (istream& in, teacher& obj);
	friend void print(teacher*, int size);
	friend bool operator==(teacher, string cafedra);
	friend bool operator>(teacher, teacher);
	
};