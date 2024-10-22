#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
:_name("noName"),_grade(150){

}
Bureaucrat::Bureaucrat(std::string name, int grade)
:_name(name){
	if (grade < 1)
		throw(GradeTooHighException());
	if (grade >150)
		throw(GradeTooLowException());
	_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
:_name(rhs._name),_grade(rhs._grade){

}
Bureaucrat::~Bureaucrat(){

}

void       Bureaucrat::setName(std::string name){
    _name = name;
}
void        Bureaucrat::setGrade(int grade){
    if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    _grade = grade;
}
std::string Bureaucrat::getName()const{
    return (_name);
}
int         Bureaucrat::getGrade()const{
    return (_grade);
}
void        Bureaucrat::incrementGrade(){
    if (_grade == 1){
        throw Bureaucrat::GradeTooHighException();
    }
    _grade--;
}
void        Bureaucrat::decrementGrade(){
    if (_grade == 150){
        throw Bureaucrat::GradeTooLowException();
    }
    _grade++;
}
void		Bureaucrat::signForm(Form& form){
	form.beSigned(*this);
	std::cout<<_name<<" signed "<<form.getName()<<"\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
    if (this == &rhs){
        return (*this);
    }
    _name=rhs._name;
    _grade=rhs._grade;
    return (*this);
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs){
    std::cout<<rhs.getName()<<", bureaucrat grade "<<rhs.getGrade()<<".\n";
    return(os);
}