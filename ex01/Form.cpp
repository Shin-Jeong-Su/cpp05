#include <iostream>
#include "Form.hpp"

Form::Form()
:_name("noNameForm"), _signed(false), _requiredGradeToSign(150), _requiredGradeToExecute(150){

}
Form::Form(std::string name, int requiredGradeToSign, int requiredGradeToExcute)
:_name(name), _signed(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExcute){
	if (requiredGradeToSign < 0 || requiredGradeToExcute < 0){
		throw(GradeTooHighException());
	}
	if (requiredGradeToSign >150 || requiredGradeToExcute > 150){
		throw(GradeTooLowException());
	}
}
Form::Form(const Form& rhs)
:_name(rhs._name),_signed(rhs._signed),_requiredGradeToSign(rhs._requiredGradeToSign),_requiredGradeToExecute(rhs._requiredGradeToExecute){

}
Form::~Form(){

}

std::string			Form::getName() const{
	return (_name);
}
bool		Form::getSigned() const{
	return (_signed);
}
int			Form::getRequiredGradeToSign() const{
	return (_requiredGradeToSign);
}
int			Form::getRequiredGradeToExecute() const{
	return (_requiredGradeToExecute);
}
void		Form::beSigned(const Bureaucrat& bureaucrat){
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

Form&	Form::operator=(const Form& rhs){
	if (&rhs==this){
		return (*this);
	}
	_signed=rhs._signed;
	return (*this);
}
std::ostream& operator<<(std::ostream& os, const Form& rhs){
	os<<"Form: "<<rhs.getName()<<", ";
	os<<"is signed: "<<rhs.getSigned()<<", ";
	os<<"required grade to sign: "<<rhs.getRequiredGradeToSign()<<", ";
	os<<"required grade to executed: "<<rhs.getRequiredGradeToExecute()<<"\n";
	return (os);
}