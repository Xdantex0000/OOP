/***********************************************************************
 * Module:  Investor.h
 * Author:  Xdant
 * Modified: 14 ρ³χνÿ 2019 π. 15:35:03
 * Purpose: Declaration of the class Investor
 ***********************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

#if !defined(__Exam_Investor_h)
#define __Exam_Investor_h

class Investor
{
public:
	Investor(); // Base constructor
	Investor(double, bool, int, string, string); // Incialization
	Investor(const Investor &obj); // Copying

   bool Check_agree(void);
   void Giving_money(void);

   int Startup_money_get();
   string Name_get();
   string Email_get();
   bool Agreement_get();
   double Total_money_get();

   void Startup_money_set(int);
   void Name_set(string);
   void Email_set(string);
   void Agreement_set(bool);
   void Total_money_set(double);


   Investor& operator++ ()
   {
	   startup_money += 100;
	   return *this;
   }

protected:
private:
   double total_money;
   bool agreement;
   int startup_money;
   string name;
   string email;


};

#endif