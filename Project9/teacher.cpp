#include "teacher.h"

teacher::teacher()
{
	surname = "";
	name = "";
	age = 0;
	gender = "";
	pulpit = "";
}

teacher::teacher(string surname, string name, int age, string gender, string pulpit)
{
	this->surname = surname;
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->pulpit = pulpit;
}


teacher::teacher(const teacher & obj)
{
	this->surname = obj.surname;
	this->name = obj.name;
	this->age = obj.age;
	this->gender = obj.gender;
	this->pulpit = obj.pulpit;
}


 void printInfoTeachers(teacher *t, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << t[i].surname << "\t" << t[i].name << "\t" << t[i].age << "\t"
			<< t[i].gender << "\t" << t[i].pulpit << endl;
	}
}