#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include "AForm.hpp"
#include <string>

class PresientialPardonForm: public AForm{
	private:
	public:
		PresientialPardonForm();
		~PresientialPardonForm();
		PresientialPardonForm(std::string target);
		PresientialPardonForm(const PresientialPardonForm& rhs);

		void	operator=(const PresientialPardonForm& rhs);
};
#endif