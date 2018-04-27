#include"Teacher.h"

teacher::teacher() {
	this->name = "";
	this->surname = "";
	this->age = 0;
	this->gender = "";
	this->cafedra = "";
}

teacher::teacher(string name, string surname, int age, string gender, string cafedra) {
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->cafedra = cafedra;
}

teacher::teacher(const teacher &obj) {
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->cafedra = obj.cafedra;
}

void print(teacher* ts, int size){
	for (int i = 0;i < size;i++) {
		cout << ts[i].name << ts[i].surname << ts[i].age << ts[i].cafedra << endl;
	}}

void printTeacher(teacher ts) {
	
		cout << ts.name << ts.surname << ts.age << ts.cafedra << endl;
}

istream & operator >> (istream& in, teacher& obj) {
	string s;
	getline(in, s, '\n');
	getline(in, obj.name, '\\');
	getline(in, obj.surname, '\\');
	in >> obj.age >>obj.gender;
	getline(in, obj.surname, ' ');
	getline(in, obj.cafedra, '\\');
	return in;
}

bool operator==(teacher obj, string cafedra) {
	return (obj.cafedra == cafedra);
}
bool operator>(teacher obj, teacher obj1) {
	return (obj.age > obj1.age);
}

bool operator<(teacher obj, teacher obj1) {
	return (obj.age < obj1.age);
}