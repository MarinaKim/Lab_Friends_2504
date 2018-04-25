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
