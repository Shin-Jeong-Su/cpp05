#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
		Form();
		Form(const Form& rhs);

        const std::string   _name;
        bool                _signed;
        const int           _requiredGradeToSign;
        const int           _requiredGradeToExecute;

		Form&	operator=(const Form& rhs);

		class	GradeTooHighException:public std::exception{
			public:
				const char* what() const throw(){
					return ("\e[0;31mError: GradeTooHigh\e[0m\n");
				}
		};
        class   GradeTooLowException:public std::exception{
            public:
                const char* what() const throw(){
                    return ("\e[0;31mError: GradTooLow\e[0m\n");
                }
        };
		class	AlreadySignedExceptionToSign:public std::exception{
			public:
				const char* what() const throw(){
                    return ("\e[0;31mError: AlreadySigned\e[0m\n");
				}
		};
    public:
		Form(std::string name, int requiredGradeToSign, int requiredGradeToExcute);
		~Form();

		std::string		getName() const;
		bool			getSigned() const;
		int				getRequiredGradeToSign() const;
		int				getRequiredGradeToExecute() const;
		void			beSigned(const Bureaucrat& bureaucrat);
};
std::ostream& operator<<(std::ostream& os, const Form& rhs);
#endif