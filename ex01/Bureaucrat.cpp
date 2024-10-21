#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():_name("noName"),_grade(150){
    // std::cout<<"Bureaucrat()\n";
}
Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name){
    // std::cout<<"Bureaucrat(name, grade)\n";
	if (grade < 0)
		throw(GradeTooHighException());
	if (grade >150)
		throw(GradeTooLowException());
	_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& rhs) :_name(rhs._name),_grade(rhs._grade){
    // std::cout<<"Bureaucrat(const Bureaucrat& rhs)\n";
}
Bureaucrat::~Bureaucrat(){
    // std::cout<<"~Bureaucrat()\n";
}

void       Bureaucrat::setName(std::string name){
    _name=name;
}
void        Bureaucrat::setGrade(int grade){
    if (grade<1){
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade>150){
        throw Bureaucrat::GradeTooLowException();
    }
    _grade=grade;
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
	if (form.beSigned(*this)){
		std::cout<<_name<<" signed "<<form.getName()<<"\n";
		return ;
	}
	std::cout<<_name<<" couldn't sign "<<form.getName()<<" because it is already signed\n";
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