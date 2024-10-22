#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:AForm("PresidentialPardonForm", 25, 5),_target("no target"){

}
PresidentialPardonForm::~PresidentialPardonForm(){

}
PresidentialPardonForm::PresidentialPardonForm(std::string target)
:AForm("PresidentialPardonForm", 25, 5),_target(target){

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
:AForm("PresidentialPardonForm", 25, 5),_target(rhs._target){

}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const{
	checkRequiremenetsForExecuting(executor);
	std::cout<<_target<<" has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	if (&rhs == this){
		return (*this);
	}
	_target = rhs._target;
	return (*this);
}