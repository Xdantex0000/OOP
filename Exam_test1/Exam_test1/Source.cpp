#include <iostream>
#include <string>
#include "System.h"
#include "Investor.h"
#include "Manager.h"
#include "Ideas_generator.h"
#include "Programmer.h"

using namespace std;

void operator == (Investor in1, Investor in2) {
	in1 = in2;
}

int main() {
	// Example
	System *sys = new System();
	Investor *in = new Investor();
	sys->manager->investor->Name_set("Vasya");
	cout << sys->manager->investor->Name_get() << endl;
	in = sys->manager->investor;
	cout << in->Name_get() << endl;

	cout << "Programm works correctly"<<endl;
	system("pause");
	return 0;
}