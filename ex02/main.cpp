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
        std::cout<<"\e[0;7m*************test1*************\e[0m\n";
        std::cout<<"\e[0;32m1 grade bureacrat to exectue a ShrubberyCreationForm\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("1 grade bcrat",1);
		ShrubberyCreationForm form("test1");

		std::cout<<bcrat;
		std::cout<<form;
		std::cout<<"\n";

		bcrat.signForm(form);
		bcrat.exectueForm(form);

        std::cout<<"\e[0;7m*******************************\e[0m\n";
		std::cout<<"\n";
    }
    //test2
    {
		//1 grade bureacrat to exectue a RobotomyRequestForm
        std::cout<<"\e[0;7m*************test2*************\e[0m\n";
        std::cout<<"\e[0;32m1 grade bureacrat to exectue a RobotomyRequestForm\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("1 grade bcrat",1);
		RobotomyRequestForm form("test2");

		std::cout<<bcrat;
		std::cout<<form;
		std::cout<<"\n";

		bcrat.signForm(form);
		bcrat.exectueForm(form);

        std::cout<<"\e[0;7m*******************************\e[0m\n";
		std::cout<<"\n";
    }
    //test3
    {
		//1 grade bureacrat to exectue a PresidentialPardonForm
        std::cout<<"\e[0;7m*************test3*************\e[0m\n";
        std::cout<<"\e[0;32m1 grade bureacrat to exectue a PresidentialPardonForm\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("1 grade bcrat",1);
		PresidentialPardonForm form("test3");

		std::cout<<bcrat;
		std::cout<<form;
		std::cout<<"\n";

		bcrat.signForm(form);
		bcrat.exectueForm(form);

        std::cout<<"\e[0;7m*******************************\e[0m\n";
		std::cout<<"\n";
    }
	//test4
    {
		//1 grade bureacrat to exectue a unsigned PresidentialPardonForm
        std::cout<<"\e[0;7m*************test4*************\e[0m\n";
        std::cout<<"\e[0;32m1 grade bureacrat to exectue a PresidentialPardonForm\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("1 grade bcrat",1);
		PresidentialPardonForm form("test4");

		std::cout<<bcrat;
		std::cout<<form;
		std::cout<<"\n";

		bcrat.exectueForm(form);

        std::cout<<"\e[0;7m*******************************\e[0m\n";
		std::cout<<"\n";
    }
	//test5
    {
		//150 grade bureacrat to exectue a PresidentialPardonForm
        std::cout<<"\e[0;7m*************test5*************\e[0m\n";
        std::cout<<"\e[0;32m150 grade bureacrat to exectue a PresidentialPardonForm\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("150 grade bcrat",150);
		PresidentialPardonForm form("test5");

		std::cout<<bcrat;
		std::cout<<form;
		std::cout<<"\n";

		bcrat.signForm(form);
		bcrat.exectueForm(form);

        std::cout<<"\e[0;7m*******************************\e[0m\n";
		std::cout<<"\n";
    }
	//test6
    {
		//25 grade bureacrat to exectue a PresidentialPardonForm
        std::cout<<"\e[0;7m*************test6*************\e[0m\n";
        std::cout<<"\e[0;32m25 grade bureacrat to exectue a PresidentialPardonForm\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("25 grade bcrat",25);
		PresidentialPardonForm form("test6");

		std::cout<<bcrat;
		std::cout<<form;
		std::cout<<"\n";

		bcrat.signForm(form);
		bcrat.exectueForm(form);

        std::cout<<"\e[0;7m*******************************\e[0m\n";
		std::cout<<"\n";
    }
}