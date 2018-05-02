#include "UndergradStudent.h"
#include <iostream>

UndergradStudent::UndergradStudent(std::string n) : Student(n) {

}

void UndergradStudent::sayHello() const {
	std::cout << "HEY I'M AN UNDERGRAD" << std::endl;
}