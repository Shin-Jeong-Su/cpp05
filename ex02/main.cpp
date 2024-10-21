#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(){
    //test 1
    {
		//test for 150 grade bureacrat to sign a form that has 150 grade to sign and excute
        std::cout<<"*************test for 150 grade Form*************\n";
		Bureaucrat bcrat("150 grade bcrat",150);
		Form form("150 form",150,150);
        try{
			bcrat.signForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
    //test2
    {
		//test for 10 grade bureacrat to sign a form that has 1 grade to sign and excute
        std::cout<<"*************test for 1 grade Form*************\n";
		Bureaucrat bcrat("10 grade bcrat",10);
		Form form("1 form",1,1);
        try{
			bcrat.signForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
    //test3
    {
		//test for 10 grade bureacrat to sign a form that has 15 grade to sign and excute
        std::cout<<"*************test for 1 grade Form*************\n";
		Bureaucrat bcrat("10 grade bcrat",10);
		Form form("15 form",15,15);
        try{
			bcrat.signForm(form);
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
}