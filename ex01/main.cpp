#include "Bureaucrat.hpp"
#include <iostream>

int main(){
    //test 1
    {
		//150 grade bureacrat is trying to sign a form that require 150 grade to sign and execute
        std::cout<<"\e[0;33m*************test1*************\e[0m\n";
        std::cout<<"\e[0;32m150 grade bureacrat is trying to sign a form that require 150 grade to sign and execute\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("150 grade bcrat", 150);
		Form form("150 form", 150, 150);

		std::cout<<bcrat;
		std::cout<<form;

		bcrat.signForm(form);

        std::cout<<"\e[0;33m*******************************\e[0m\n";
		std::cout<<"\n";
    }
    //test2
    {
		//10 grade bureacrat is trying to sign a form that require 1 grade to sign and execute
        std::cout<<"\e[0;33m*************test2*************\e[0m\n";
        std::cout<<"\e[0;32m*************10 grade bureacrat is trying to sign a form that require 1 grade to sign and execute*************\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("10 grade bcrat", 10);
		Form form("1 form", 1, 1);

		std::cout<<bcrat;
		std::cout<<form;

		bcrat.signForm(form);

        std::cout<<"*******************************\n";
		std::cout<<"\n";
    }
    //test3
    {
		//10 grade bureacrat is trying to sign a form that require 15 grade to sign and execute
        std::cout<<"\e[0;33m*************test3*************\e[0m\n";
        std::cout<<"\e[0;32m*************10 grade bureacrat is trying to sign a form that require 15 grade to sign and execute*************\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("10 grade bcrat",10);
		Form form("15 form", 15, 15);

		std::cout<<bcrat;
		std::cout<<form;

		bcrat.signForm(form);

        std::cout<<"*******************************\n";
		std::cout<<"\n";
    }
    //test4
    {
		//10 grade bureacrat is trying to sign a form twice that require 15 grade to sign and execute
        std::cout<<"\e[0;33m*************test3*************\e[0m\n";
        std::cout<<"\e[0;32m*************10 grade bureacrat is trying to sign a form twice that require 15 grade to sign and execute*************\e[0m\n";
		std::cout<<"\n";

		Bureaucrat bcrat("10 grade bcrat",10);
		Form form("15 form", 15, 15);

		std::cout<<bcrat;
		std::cout<<form;

		bcrat.signForm(form);
		bcrat.signForm(form);

        std::cout<<"*******************************\n";
		std::cout<<"\n";
    }
}