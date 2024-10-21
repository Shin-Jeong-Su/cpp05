#include <iostream>
#include "Form.hpp"

Form::Form()
:_name("noNameForm"), _signed(false), _requiredGradeToSign(150), _requiredGradeToExecute(150){
    // std::cout<<"Form()\n";
}
Form::Form(std::string name, int requiredGradeToSign, int requiredGradeToExcute)
:_name(name), _signed(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExcute){
    // std::cout<<"Form(name, requiredGradeToSign, requiredGradeToExectue)\n";
	if (requiredGradeToSign < 0 || requiredGradeToExcute < 0){
		throw(GradeTooHighException());
	}
	if (requiredGradeToSign >150 || requiredGradeToExcute > 150){
		throw(GradeTooLowException());
	}
}
Form::Form(const Form& rhs)
:_name(rhs._name),_signed(rhs._signed),_requiredGradeToSign(rhs._requiredGradeToSign),_requiredGradeToExecute(rhs._requiredGradeToExecute){
    // std::cout<<"Form(const Form& rhs)\n";
}
Form::~Form(){
    // std::cout<<"~Form()\n";
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
bool		Form::beSigned(const Bureaucrat& bureaucrat){
	if (_requiredGradeToSign < bureaucrat.getGrade()){
		throw GradeTooLowException();
	}
	_signed=true;
	return (true);
}

Form&	Form::operator=(const Form& rhs){
	if (&rhs==this){
		return (*this);
	}
	_signed=rhs._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& rhs){
	std::cout<<"Form name: "<<rhs.getName()<<"\n";
	std::cout<<"is signed: "<<rhs.getSigned()<<"\n";
	std::cout<<"required grade to sign: "<<rhs.getRequiredGradeToSign()<<"\n";
	std::cout<<"required grade to excuted: "<<rhs.getRequiredGradeToExecute()<<"\n";
	return (os);
}