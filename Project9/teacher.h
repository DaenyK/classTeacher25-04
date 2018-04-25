#ifndef _TEACHER_H_
#define _TEACHER_H_
#include "Headers.h"

class teacher
{
private:
	string surname;
	string name;
	int age;
	string gender;
	string pulpit;

public:
	teacher();
	teacher(string surname, string name, int age, string gender, string pulpit);
	teacher(const teacher & obj);
	virtual ~teacher() {};

	friend void printInfoTeachers(teacher *t, int size);


	//(=, !=, <>) � ������� ������������� �������.

	//	friend bool operator=()
};


#endif