#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(){
    //test 1
    {
        //decrementing grade of a 150 grade Bureuacart
        std::cout<<"*************test for a 150 grade bureaucrat*************\n";
        Bureaucrat bcrat("150 grade bcrat",150);
        try{
            std::cout<<"decrementing a grade of a 150 grade bcrat"<<"\n";
            std::cout<<bcrat.getName()<<": \t";
            std::cout<<"Before: "<<bcrat.getGrade()<<"\t";
            bcrat.decrementGrade();
            std::cout<<"After: "<<bcrat.getGrade()<<"\n";
        }catch(std::exception& e){
            std::cout<<e.what();
        }
		std::cout<<"\n";
	}
	//test2
	{
        //incrementing grade of a 150 grade Bureuacart
        std::cout<<"*************test for a 150 grade bureaucrat*************\n";
        Bureaucrat bcrat("150 grade bcrat",150);
        try{
            std::cout<<"incrementing a grade of a 150 grade bcrat"<<"\n";
            std::cout<<bcrat.getName()<<": \t";
            std::cout<<"Before: "<<bcrat.getGrade()<<"\t";
            bcrat.incrementGrade();
            std::cout<<"After: "<<bcrat.getGrade()<<"\n";
        }catch(std::exception& e){
            std::cout<<e.what();
        }
		std::cout<<"\n";
    }
    //test3
    {
        //incrementing grade of a 10 grade Bureuacart for ten times
        std::cout<<"*************test for 10 grade bureaucrat*************\n";
        Bureaucrat bcrat10Grade("10grade",10);
        try{
            std::cout<<"incrementing a grade of 10 grade bureaucrat for ten times"<<"\n";
            std::cout<<bcrat10Grade.getName()<<": \t";
            for(int i=0;i<10;i++){
                bcrat10Grade.incrementGrade();
            }
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
}