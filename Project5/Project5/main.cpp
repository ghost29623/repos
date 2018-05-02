#include <iostream>
#include <string>
#include "NewsLetter.h"
using namespace std;

int main() {
	Newsletter local("Local Happenings");
	local.addSubscriber("Zelda");
	local.addSubscriber("Yvette");
	local.addSubscriber("Xavier");
	Newsletter csueb("Cal State East Bay News");
	csueb.addSubscriber("Adam");
	csueb.addSubscriber("Bella");
	csueb.addSubscriber("Carlotta");
	csueb.display();
}