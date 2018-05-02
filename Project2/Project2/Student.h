#pragma once
#pragma once

#include <string>

class Student {
private:
	static int studentCount;
	std::string name;
public:
	Student(std::string n);
	std::string getName() const { return name; }
	void sayHello() const;
	static int getStudentCount();
	friend std::ostream& operator<<(std::ostream& os, const Student& s);
};