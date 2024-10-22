#include "Bureaucrat.hpp"
#include <iostream>

int main(){
    //test 1
    {
        //decrementing grade of a 150 grade Bureuacart
        std::cout<<"*************test1*************\n";
		std::cout<<"decrementing a grade of a 150 grade bcrat"<<"\n";
        Bureaucrat bcrat("150 grade bcrat",150);
        try{
            std::cout<<bcrat.getName()<<": \t";
            std::cout<<"Before: "<<bcrat.getGrade()<<"\t";
            bcrat.decrementGrade();
            std::cout<<"After: "<<bcrat.getGrade()<<"\n";
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
        std::cout<<"*******************************\n";
		std::cout<<"\n";
	}
	//test2
	{
        //incrementing grade of a 150 grade Bureuacart
        std::cout<<"*************test2*************\n";
		std::cout<<"incrementing a grade of a 150 grade bcrat"<<"\n";
        Bureaucrat bcrat("150 grade bcrat",150);
        try{
            std::cout<<bcrat.getName()<<": \t";
            std::cout<<"Before: "<<bcrat.getGrade()<<"\t";
            bcrat.incrementGrade();
            std::cout<<"After: "<<bcrat.getGrade()<<"\n";
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
        std::cout<<"*******************************\n";
		std::cout<<"\n";
    }
    //test3
    {
        //incrementing grade of a 10 grade Bureuacart for ten times
        std::cout<<"*************test3*************\n";
		std::cout<<"incrementing a grade of 10 grade bureaucrat for ten times"<<"\n";
        Bureaucrat bcrat10Grade("10grade",10);
        try{
            std::cout<<bcrat10Grade.getName()<<": \t";
            for(int i=0;i<10;i++){
                bcrat10Grade.incrementGrade();
            }
        }catch(std::exception& e){
            std::cerr<<e.what();
        }
        std::cout<<"*******************************\n";
		std::cout<<"\n";
    }
    //test4
    {
        //test for operator <<
        std::cout<<"*************test4*************\n";
        Bureaucrat bcrat10Grade("10grade",10);
		std::cout<<bcrat10Grade;
        std::cout<<"*******************************\n";
		std::cout<<"\n";
    }
}