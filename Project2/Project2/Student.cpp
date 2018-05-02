#include "Student.h"
#include <iostream>

int Student::studentCount = 0;

Student::Student(std::string n) {
	name = n;
	studentCount++;
}

int Student::getStudentCount() {
	return studentCount;
}

void Student::sayHello() const {
	std::cout << "HELLO I AM A STUDENT" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Student& s) {
	os << "STUDENT: " << s.getName();
	return os;
}