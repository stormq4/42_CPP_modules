/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 14:22:10 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/08/17 17:19:13 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );	
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
	
	private:
		std::string _target;

};

#endif
