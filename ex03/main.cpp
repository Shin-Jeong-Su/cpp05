#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void chl(void){
	system("leaks a.out");
}
int main(){
    //test 1
    {
		//Intern make ShrubberyCreationForm
        std::cout<<"*************Intern is trying to make ShrubberyCreationForm*************\n";
		Intern	intern;
		AForm	*form;
        try{
			form = intern.makeForm("shrubbery creation","test1");
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
		delete form;
    }
    //test 2
    {
		//Intern make RobotomyRequestForm
        std::cout<<"*************Intern is trying to make RobotomyRequestForm*************\n";
		Intern intern;
		AForm	*form;
        try{
			form = intern.makeForm("robotomy request","test2");
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
		delete form;
    }
    //test 3
    {
		//Intern make PresidentialPardonForm
        std::cout<<"*************Intern is trying to make PresidentialPardonForm*************\n";
		Intern intern;
		AForm	*form;
        try{
			form = intern.makeForm("presidential pardon","test3");
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
		delete form;
    }
    //test 4
    {
		//Intern make unkownform
        std::cout<<"*************Intern is trying to make unexsistent Form*************\n";
		Intern intern;
		AForm	*form;
        try{
			form = intern.makeForm("unexistentform","test4");
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
    }
	// chl();
}