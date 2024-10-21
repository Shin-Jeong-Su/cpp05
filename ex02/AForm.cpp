#include <iostream>
#include "AForm.hpp"

AForm::AForm(std::string name, int requiredGradeToSign, int requiredGradeToExcute)
:_name(name), _signed(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExcute){
    // std::cout<<"AForm(name, requiredGradeToSign, requiredGradeToExectue)\n";
	if (requiredGradeToSign < 0 || requiredGradeToExcute < 0){
		throw(GradeTooHighException());
	}
	if (requiredGradeToSign >150 || requiredGradeToExcute > 150){
		throw(GradeTooLowException());
	}
}
AForm::~AForm(){
    // std::cout<<"~AForm()\n";
}

std::string			AForm::getName() const{
	return (_name);
}
bool		AForm::getSigned() const{
	return (_signed);
}
int			AForm::getRequiredGradeToSign() const{
	return (_requiredGradeToSign);
}
int			AForm::getRequiredGradeToExecute() const{
	return (_requiredGradeToExecute);
}
bool		AForm::beSigned(const Bureaucrat& bureaucrat){
	if (_requiredGradeToSign < bureaucrat.getGrade()){
		throw GradeTooLowException();
	}
	_signed=true;
	return (true);
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs){
	std::cout<<"AForm name: "<<rhs.getName()<<"\n";
	std::cout<<"is signed: "<<rhs.getSigned()<<"\n";
	std::cout<<"required grade to sign: "<<rhs.getRequiredGradeToSign()<<"\n";
	std::cout<<"required grade to excuted: "<<rhs.getRequiredGradeToExecute()<<"\n";
	return (os);
}