#pragma once
#include "Library.h"
#include "Students.h"
#include "Teacher.h"

class Student;
class teacher;

class Exam {
	string subject;
	string teacher_sname;
	string student_sname;
	double grade;
public:
	Exam() = default;
	Exam(string, string, string, double);
	Exam(string, Student sobj, teacher tobj, double);
	Exam(const Exam&);
	void create_exam(string Subject, Student sobj, teacher tobj,double grade);
	virtual ~Exam();

	//friend istream& operator >> (istream& in, );
	friend void printExam(Exam*, int);
	friend void printExamen(Exam es);

	friend bool operator==(Exam obj, double gr);
};
