#ifndef __INTERN_H__
#define __INTERN_H__

#include <string>
#include <exception>
#include "AForm.hpp"

class Intern
{
	private:
		class FormNameExceptionToMakeForm:public std::exception{
			const char*	what() const throw(){
				return ("\e[0;31mErorr: Can't make form, there is not matched with the form name\e[0m\n");
			}
		};
	public:
		Intern();
		Intern(const Intern& rhs);
		~Intern();

		AForm*	makeForm(std::string formName, std::string formTarget);

		Intern& operator=(const Intern& rhs);
};
#endif