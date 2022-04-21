/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sde-quai <sde-quai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 10:32:19 by sde-quai      #+#    #+#                 */
/*   Updated: 2022/04/21 15:27:56 by sde-quai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
	
		Contact(void);
		~Contact(void);
		char	*FirstName;
		char	*LastName;
		char	*NickName;
		char	*PhoneNumber;
	
	private :
		char	*DarkestSecret;
	
	
};
