#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat():_name("noName"),_grade(150){
    std::cout<<"Bureaucrat()\n";
}
Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name),_grade(grade){
    if ()
    std::cout<<"Bureaucrat(name, grade)\n";
}
Bureaucrat::Bureaucrat(const Bureaucrat& rhs) :_name(rhs._name),_grade(rhs._grade){
    std::cout<<"Bureaucrat(const Bureaucrat& rhs)\n";
}
Bureaucrat::~Bureaucrat(){
    std::cout<<"~Bureaucrat()\n";
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
std::string Bureaucrat::getName(){
    return (_name);
}
int         Bureaucrat::getGrade(){
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
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
    if (this == &rhs){
        return (*this);
    }
    _name=rhs._name;
    _grade=rhs._grade;
    return (*this);
}