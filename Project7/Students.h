#ifndef _STUDENT_H_ 
#define _STUDENT_H_
#include"Library.h"
#include"Exam.h"
//enum male{man,woman};
class Student {
//private:
	string name;
	string surname;
	int age;
	string gender;
	int group;

public:
	//constructors
	Student();//default
	Student(string name, string surname, int age, string gender, int group);
	Student(const Student&obj);//copy, можно не писать, т.к. он есть по умолчанию

	string getSname() { return surname; }
	virtual ~Student();

	friend class Exam;

	friend void printStudents(Student*ss, int size);
	friend void printStudent(Student*s);
	//перегружаем оператор ввода
	friend void operator >> (istream& in, Student &s); // можно написать вместо istream void, т.к. Student передаем по ссылке и можем изменять сразу
											   //istream подразумевает изменения внутри, но т.к. используем &, можно использовать void
	friend bool operator==(string male, Student obj);
	friend bool operator!=(string male, Student obj);
	friend bool operator>(int a, Student obj);
	friend bool operator<(int a, Student obj);
	bool operator<(Student obj);
	bool operator>(Student obj);	
};

#endif