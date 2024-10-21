#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(){
    //test 1
    {
        std::cout<<"*************test for a default bureaucrat*************\n";
        Bureaucrat bcratDefault;
        //decrementing a grade of Default Bureuacart
        try{
            std::cout<<"decrementing a grade of bcratDefault"<<"\n";
            std::cout<<bcratDefault.getName()<<": \t";
            std::cout<<"Before: "<<bcratDefault.getGrade()<<"\t";
            bcratDefault.decrementGrade();
            std::cout<<"After: "<<bcratDefault.getGrade()<<"\n";
        }catch(std::exception& e){
            std::cout<<e.what();
        }
        //incrementing a grade of Default Bureuacart
        try{
            std::cout<<"incrementing a grade of bcratDefault"<<"\n";
            std::cout<<bcratDefault.getName()<<": \t";
            std::cout<<"Before: "<<bcratDefault.getGrade()<<"\t";
            bcratDefault.incrementGrade();
            std::cout<<"After: "<<bcratDefault.getGrade()<<"\n";
        }catch(std::exception& e){
            std::cout<<e.what();
        }
    }
    //test2
    {
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