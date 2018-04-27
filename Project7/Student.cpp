#include"Students.h"

Student::Student()
{
	name = "";
	surname = "";
	age = 0;
	gender = "man";
	group = 0;
}

Student::Student(string name, string surname, int age, string gender, int group) {

	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->group = group;
}

Student::Student(const Student&obj) {
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->group = obj.group;
}
Student::~Student()
{}

void printStudents(Student *ss, int size) {
	
	for (int i = 0;i < size;i++) {
		cout << ss[i].name << "\t" << ss[i].surname << "\t" << ss[i].age << "\t" <<
			ss[i].gender  <<"\t" << ss[i].group<<endl;
	}
}

void printStudent(Student s) {	
		cout << s.name << "\t" << s.surname << "\t" << s.age << "\t" <<
			s.gender << "\t" << s.group << endl;
}

void operator >> (istream& in, Student &s) {
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');
	in >>s.age >> s.gender >> s.group;
}

bool operator==(string male, Student obj) {
	return(male == obj.gender);
}

bool operator==(int group, Student obj) {
	return(group == obj.group);
}

bool operator!=(string male, Student obj) {
	return(male != obj.gender);
}

bool operator>(int a, Student obj) {
	return(a> obj.age);
}

bool operator<(int a, Student obj) {
	return(a> obj.age);
}
bool Student:: operator<(Student obj) {
	return(this->age> obj.age);
}

bool Student:: operator>(Student obj) {
	return(this->age> obj.age);
}