/***********************************************************************
 * Module:  Programmer.h
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:35:37
 * Purpose: Declaration of the class Programmer
 ***********************************************************************/
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
#if !defined(__Exam_Programmer_h)
#define __Exam_Programmer_h

class Programmer
{
public:
	Programmer();
	Programmer(string, string);
	Programmer(const Programmer &obj);

	string Name_get();
	string Email_get();
	void Name_set(string);
	void Email_set(string);

   void Programming(void);

protected:
private:
   string name;
   string email;
   vector<string> requirements_list;


};

#endif