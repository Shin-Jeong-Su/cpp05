#include <iostream>
#include <string>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){

}
Intern::Intern(const Intern& rhs){
	if (&rhs == this){
		;
	}
}
Intern::~Intern(){

}

AForm*	Intern::makeForm(std::string formName, std::string formTarget){
	std::string	formTable[3]={"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm*		form;
	int			pos;

	for(pos=0; pos<3; pos++){
		if (formName==formTable[pos])
			break;
	}
	if (pos == 3){
		throw FormNameExceptionToMakeForm();
	}
	switch(pos){
		case(0):{
			form = new ShrubberyCreationForm(formTarget);
			break;
		}
		case(1):{
			form = new RobotomyRequestForm(formTarget);
			break;
		}
		case(2):{
			form = new PresidentialPardonForm(formTarget);
			break;
		}
	}
	std::cout<<"Intern creates "<<formName<<"\n";
	return (form);
}

Intern& Intern::operator=(const Intern& rhs){
	if (&rhs==this){
		return (*this);
	}
	return (*this);
}