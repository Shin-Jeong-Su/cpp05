#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& rhs);

        std::string _name;
        int         _grade;

        Bureaucrat& operator=(const Bureaucrat& rhs);

        class   GradeTooHighException:public std::exception{
            public:
                const char* what() const throw(){
                    return ("\e[0;31mError: GradTooHigh\e[0m\n");
                }
        };
        class   GradeTooLowException:public std::exception{
            public:
                const char* what() const throw(){
                    return ("\e[0;31mError: GradTooLow\e[0m\n");
                }
        };
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        void        setName(std::string name);
        void        setGrade(int grade);
        std::string getName()const;
        int         getGrade()const;
        void        incrementGrade();
        void        decrementGrade();
		void		signForm(Form& form);

};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);
#endif