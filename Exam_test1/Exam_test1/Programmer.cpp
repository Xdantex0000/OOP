/***********************************************************************
 * Module:  Programmer.cpp
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:35:37
 * Purpose: Implementation of the class Programmer
 ***********************************************************************/

#include "Programmer.h"

////////////////////////////////////////////////////////////////////////
// Name:       Programmer::Programming()
// Purpose:    Implementation of Programmer::Programming()
// Return:     void
////////////////////////////////////////////////////////////////////////

Programmer::Programmer() : name(""), email(""){

}

Programmer::Programmer(string s1, string s2) {
	email = s1;
	name = s2;
}

Programmer::Programmer(const Programmer &obj) {
	email = obj.email;
	name = obj.name;
}

string Programmer::Name_get() {
	return name;
}
string Programmer::Email_get() {
	return email;
}
void Programmer::Name_set(string value) {
	name = value;
}
void Programmer::Email_set(string value) {
	email = value;
}

void Programmer::Programming(void)
{
   // TODO : implement
}