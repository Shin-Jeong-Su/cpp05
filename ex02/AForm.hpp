#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _requiredGradeToSign;
        const int           _requiredGradeToExecute;

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
    public:
		AForm(std::string name, int requiredGradeToSign, int requiredGradeToExcute);
		virtual ~AForm();

		std::string		getName() const;
		bool			getSigned() const;
		int				getRequiredGradeToSign() const;
		int				getRequiredGradeToExecute() const;
		bool			beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(const Bureaucrat& executor) const=0;
};
std::ostream& operator<<(std::ostream& os, const Form& rhs);
#endif