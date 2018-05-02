#include "Student.h"
#include "UndergradStudent.h"
#include <iostream>

int main() {
	Student joe("joe");
	Student jane("jane");
	UndergradStudent joey("joey");

	std::cout << Student::getStudentCount() << std::endl;

	std::cout << jane << std::endl;
	jane.sayHello();

	std::cout << joey << std::endl;
	joey.sayHello();

	Student* janet = new UndergradStudent("janet");
	janet->sayHello();

	system("pause");

}