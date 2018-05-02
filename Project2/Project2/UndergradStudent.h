#pragma once
#include "Student.h"

class UndergradStudent : public Student {
public:
	UndergradStudent(std::string);
	void sayHello() const;
};