/***********************************************************************
 * Module:  Manager.h
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:37:15
 * Purpose: Declaration of the class Manager
 ***********************************************************************/
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

#if !defined(__Exam_Manager_h)
#define __Exam_Manager_h

class Programmer;
class Ideas_generator;
class Investor;

class Manager
{
public:
	Manager(); // Basic constructor
	Manager(int, string, string); // Incialization constructor
	Manager(const Manager &obj); // Copying

	int Idea_number_get();
	string Name_get();
	string Email_get();
	void Idea_number_set(int);
	void Name_set(string);
	void Email_set(string);

   void Req_making(void);
   void Contact_Investor(void);
   void Taking_idea(void);
   void Contact_programmer(void);

   Programmer* programmer;
   Ideas_generator* ideas_generator;
   Investor* investor;

protected:
private:
   vector<string> idea_list;
   int idea_number;
   string name;
   string email;


};

#endif