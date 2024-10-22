#include <iostream>
#include "AForm.hpp"

AForm::AForm(std::string name, int requiredGradeToSign, int requiredGradeToExcute)
:_name(name), _signed(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExcute){
	if (requiredGradeToSign < 0 || requiredGradeToExcute < 0){
		throw(GradeTooHighException());
	}
	if (requiredGradeToSign >150 || requiredGradeToExcute > 150){
		throw(GradeTooLowException());
	}
}
AForm::~AForm(){

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
void		AForm::beSigned(const Bureaucrat& bureaucrat){
	if (_requiredGradeToSign < bureaucrat.getGrade()){
		std::cout<<bureaucrat.getName()<<" couldn't sign "<<_name<<" because bureaucrat's grade is too low\n";
		throw GradeTooLowException();
	}
	if (_signed == true){
		std::cout<<bureaucrat.getName()<<" couldn't sign "<<_name<<" because it is already signed\n";
		throw AlreadySignedExceptionToSign();
	}
	_signed = true;
}
void		AForm::checkRequiremenetsForExecuting(const Bureaucrat& executor) const{
	if (_signed==false){
		throw FormIsntSignedExceptionToExecute();
	}
	if (executor.getGrade() > _requiredGradeToExecute){
		throw GradeTooLowExceptionToExcetue();
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs){
	std::cout<<"Form: "<<rhs.getName()<<", ";
	std::cout<<"is signed: "<<rhs.getSigned()<<", ";
	std::cout<<"required grade to sign: "<<rhs.getRequiredGradeToSign()<<", ";
	std::cout<<"required grade to executed: "<<rhs.getRequiredGradeToExecute()<<"\n";
	return (os);
}