#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
int main(){
    Bureaucrat bcratDefault;
    // Bureaucrat bcratHightGrade();
        // std::cout<<
    try{
        std::cout<<bcratDefault.getGrade();
    }catch(std::exception& e){
        std::cout<<e.what();
    }
}