/***********************************************************************
 * Module:  Manager.cpp
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:37:15
 * Purpose: Implementation of the class Manager
 ***********************************************************************/

#include "Programmer.h"
#include "Ideas_generator.h"
#include "Investor.h"
#include "Manager.h"

////////////////////////////////////////////////////////////////////////
// Name:       Manager::Req_making()
// Purpose:    Implementation of Manager::Req_making()
// Return:     void
////////////////////////////////////////////////////////////////////////

Manager::Manager() : programmer(new Programmer()), investor(new Investor()), ideas_generator(new Ideas_generator()), email(""), name(""), idea_number(0) {

}

Manager::Manager(int in, string s1, string s2) {
	idea_number = in;
	email = s1;
	name = s2;
}

Manager::Manager(const Manager &obj) {
	idea_number = obj.idea_number;
	email = obj.email;
	name = obj.name;
}

int Manager::Idea_number_get() {
	return idea_number;
}
string Manager::Name_get() {
	return name;
}
string Manager::Email_get() {
	return email;
}
void Manager::Idea_number_set(int value) {
	idea_number = value;
}
void Manager::Name_set(string value) {
	name = value;
}
void Manager::Email_set(string value) {
	email = value;
}

void Manager::Req_making(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Manager::Contact_Investor()
// Purpose:    Implementation of Manager::Contact_Investor()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Manager::Contact_Investor(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Manager::Taking_idea()
// Purpose:    Implementation of Manager::Taking_idea()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Manager::Taking_idea(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Manager::Contact_programmer()
// Purpose:    Implementation of Manager::Contact_programmer()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Manager::Contact_programmer(void)
{
   // TODO : implement
}