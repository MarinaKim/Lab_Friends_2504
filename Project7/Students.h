#ifndef _STUDENT_H_ 
#define _STUDENT_H_
#include"Library.h"
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
	Student(const Student&obj);//copy, ����� �� ������, �.�. �� ���� �� ���������

	virtual ~Student();

	friend void printStudents(Student*ss, int size);

	//����������� �������� �����
	friend void operator >> (istream& in, Student &s); // ����� �������� ������ istream void, �.�. Student �������� �� ������ � ����� �������� �����
														   //istream ������������� ��������� ������, �� �.�. ���������� &, ����� ������������ void

	friend bool operator==(string male, Student obj);
	friend bool operator!=(string male, Student obj);
	friend bool operator>(int a, Student obj);
	friend bool operator<(int a, Student obj);
	bool operator<(Student obj);
	bool operator>(Student obj);
};

#endif