#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public AForm{
	private:
		std::string	_target;
	public:
				ShrubberyCreationForm();
		virtual	~ShrubberyCreationForm();
				ShrubberyCreationForm(std::string target);
				ShrubberyCreationForm(const ShrubberyCreationForm& rhs);

		virtual void	execute(const Bureaucrat& executor) const;

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
};
#endif