#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm: public AForm{
	private:
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& rhs);

		void	operator=(const ShrubberyCreationForm& rhs);
};
#endif