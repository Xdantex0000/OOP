/***********************************************************************
 * Module:  System.cpp
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:38:04
 * Purpose: Implementation of the class System
 ***********************************************************************/

#include "Manager.h"
#include "System.h"

////////////////////////////////////////////////////////////////////////
// Name:       System::Check_money_amount()
// Purpose:    Implementation of System::Check_money_amount()
// Return:     bool
////////////////////////////////////////////////////////////////////////

System::System() : manager(new Manager()), system_name("") {

}

System::System(string s) {
	system_name = s;
}

System::System(const System &obj) {
	system_name = obj.system_name;
}

string System::System_name_get() {
	return system_name;
}
void System::System_name_set(string value) {
	system_name = value;
}

bool System::Check_money_amount(void)
{
   // TODO : implement
	return false;
}