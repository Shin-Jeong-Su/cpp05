#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <exception>

class Bureaucrat{
    private:
        std::string _name;
        int         _grade;
        class   GradeTooHighException:public std::exception{
            public:
                const char* what() const throw(){
                    return ("Error: GradTooHigh");
                }
        };
        class   GradeTooLowException:public std::exception{
            public:
                const char* what() const throw(){
                    return ("Error: GradTooHigh");
                }
        };
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& rhs);
        ~Bureaucrat();
        void        setName(std::string name);
        void        setGrade(int grade);
        std::string getName();
        int         getGrade();
        void        incrementGrade();
        void        decrementGrade();
        Bureaucrat& operator=(const Bureaucrat& rhs);
};

#endif