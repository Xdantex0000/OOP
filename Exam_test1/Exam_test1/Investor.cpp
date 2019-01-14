/***********************************************************************
 * Module:  Investor.cpp
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:35:03
 * Purpose: Implementation of the class Investor
 ***********************************************************************/

#include "Investor.h"

////////////////////////////////////////////////////////////////////////
// Name:       Investor::Check_agree()
// Purpose:    Implementation of Investor::Check_agree()
// Return:     bool
////////////////////////////////////////////////////////////////////////

Investor::Investor() : total_money(0), startup_money(0), agreement(false), name(""), email("") {

}

Investor::Investor(double d, bool b, int in ,string s1, string s2) {
	total_money = d;
	agreement = b;
	startup_money = in;
	email = s1;
	name = s2;
}

Investor::Investor(const Investor &obj) {
	total_money = obj.total_money;
	agreement = obj.agreement;
	startup_money = obj.startup_money;
	email = obj.email;
	name = obj.name;
}


int Investor::Startup_money_get() {
	return startup_money;
}
string Investor::Name_get() {
	return name;
}
string Investor::Email_get() {
	return email;
}
bool Investor::Agreement_get() {
	return agreement;
}
double Investor::Total_money_get() {
	return total_money;
}
void Investor::Startup_money_set(int mon) {
	startup_money = mon;
}
void Investor::Name_set(string value) {
	name = value;
}
void Investor::Email_set(string value){
	email = value;
}
void Investor::Agreement_set(bool value) {
	agreement = value;
}
void Investor::Total_money_set(double value) {
	try {
		total_money = value;
	}
	catch(double){
		cout << "You entered not double";
	}

}

bool Investor::Check_agree(void)
{
   // TODO : implement
	return false;
}

////////////////////////////////////////////////////////////////////////
// Name:       Investor::Giving_money()
// Purpose:    Implementation of Investor::Giving_money()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Investor::Giving_money(void)
{
   // TODO : implement
}