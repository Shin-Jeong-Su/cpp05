#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:AForm("RobotomyRequestForm", 72, 45){

}
RobotomyRequestForm::~RobotomyRequestForm(){

}
RobotomyRequestForm::RobotomyRequestForm(std::string target)
:AForm("RobotomyRequestForm", 72, 45),_target(target){

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
:AForm("RobotomyRequestForm", 72, 45),_target(rhs._target){

}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	checkRequiremenetsForExecuting(executor);
	std::cout<<"Drilling noises...\n";
	std::srand(static_cast<unsigned int>(std::time(0)));
	switch(std::rand() % 2){
		case(0):
			std::cout<<_target<<" has been robotomized\n";
			break;
		case(1):
			std::cout<<"robotomy failed\n";
			break;
	}
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
	if (&rhs == this){
		return (*this);
	}
	_target = rhs._target;
	return (*this);
}