/***********************************************************************
 * Module:  System.h
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:38:04
 * Purpose: Declaration of the class System
 ***********************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

#if !defined(__Exam_System_h)
#define __Exam_System_h

class Manager;

class System
{
public:
	System(); // Constructor
	System(string); // Incialization
	System(const System &obj); // Copying
   
	string System_name_get();
	void System_name_set(string);

	bool Check_money_amount(void);

   Manager* manager;

protected:
private:
   string system_name;


};

#endif