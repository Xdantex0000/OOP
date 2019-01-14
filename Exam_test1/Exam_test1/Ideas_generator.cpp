/***********************************************************************
 * Module:  Ideas_generator.cpp
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:37:48
 * Purpose: Implementation of the class Ideas_generator
 ***********************************************************************/

#include "Ideas_generator.h"

////////////////////////////////////////////////////////////////////////
// Name:       Ideas_generator::Making_Idea()
// Purpose:    Implementation of Ideas_generator::Making_Idea()
// Return:     void
////////////////////////////////////////////////////////////////////////

Ideas_generator::Ideas_generator() : name(""), email("") {

}

Ideas_generator::Ideas_generator(string s1, string s2) {
	email = s1;
	name = s2;
}

Ideas_generator::Ideas_generator(const Ideas_generator &obj) {
	email = obj.email;
	name = obj.name;
}

string Ideas_generator::Name_get() {
	return name;
}
string Ideas_generator::Email_get() {
	return email;
}
void Ideas_generator::Email_set(string value) {
	email = value;
}
void Ideas_generator::Name_set(string value) {
	name = value;
}

void Ideas_generator::Making_Idea(void)
{
   // TODO : implement
}
