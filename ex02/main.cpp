#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    //test 1
    {
		//1 grade bureacrat to exectue a ShrubberyCreationForm
        std::cout<<"*************ShrubberyCreationForm test*************\n";
		Bureaucrat bcrat("1 grade bcrat",1);
		ShrubberyCreationForm form("test1");
        try{
			bcrat.signForm(form);
			bcrat.exectueForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
    //test2
    {
		//1 grade bureacrat to exectue a RobotomyRequestForm
        std::cout<<"*************RobotomyRequestForm test*************\n";
		Bureaucrat bcrat("1 grade bcrat",1);
		RobotomyRequestForm form("test2");
        try{
			bcrat.signForm(form);
			bcrat.exectueForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
    //test3
    {
		//1 grade bureacrat to exectue a PresidentialPardonForm
        std::cout<<"*************PresientialPardonForm test*************\n";
		Bureaucrat bcrat("1 grade bcrat",1);
		PresidentialPardonForm form("test3");
        try{
			bcrat.signForm(form);
			bcrat.exectueForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
	//test4
    {
		//1 grade bureacrat to exectue a unsigned PresidentialPardonForm
        std::cout<<"*************Unsigned PresientialPardonForm test*************\n";
		Bureaucrat bcrat("1 grade bcrat",1);
		PresidentialPardonForm form("test4");
        try{
			bcrat.exectueForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
	//test5
    {
		//150 grade bureacrat to exectue a PresidentialPardonForm
        std::cout<<"*************bcrat with low grade to sign is trying to excute PresientialPardonForm*************\n";
		Bureaucrat bcrat("150 grade bcrat",150);
		PresidentialPardonForm form("test5");
        try{
			bcrat.signForm(form);
			bcrat.exectueForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
	//test6
    {
		//25 grade bureacrat to exectue a PresidentialPardonForm
        std::cout<<"*************bcrat with a low grade to excute is trying to execute PresientialPardonForm*************\n";
		Bureaucrat bcrat("25 grade bcrat",25);
		PresidentialPardonForm form("test6");
        try{
			bcrat.signForm(form);
			bcrat.exectueForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
}