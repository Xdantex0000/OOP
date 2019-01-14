/***********************************************************************
 * Module:  Ideas_generator.h
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:37:48
 * Purpose: Declaration of the class Ideas_generator
 ***********************************************************************/
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
#if !defined(__Exam_Ideas_generator_h)
#define __Exam_Ideas_generator_h

class Ideas_generator
{
public:
	Ideas_generator(); // Basic constructor
	Ideas_generator(string, string); // Incialization
	Ideas_generator(const Ideas_generator &obj); // Copying
	
	string Name_get();
	string Email_get();
	void Email_set(string);
	void Name_set(string);

	void Making_Idea(void);

protected:
private:
   vector<string> Idea;
   string name;
   string email;


};

#endif