#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm{
	private:
		std::string	_target;
	public:
				PresidentialPardonForm();
		virtual	~PresidentialPardonForm();
				PresidentialPardonForm(std::string target);
				PresidentialPardonForm(const PresidentialPardonForm& rhs);

		virtual void	execute(const Bureaucrat& executor) const;

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
};
#endif