#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__


class Contact
{
	private :
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
		int		id;
	public :
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
		Contact(void);
		~Contact(void);
		int get_id();
		void	set_first_name(std::string	first_n);
		void	set_last_name(std::string	last_name);
		void	set_nickname(std::string	nickname);
		void	set_phone_number(std::string	phone_number);
		void	set_darkest_secret(std::string	darkest_secret);
		void	set_id(int idd);

};

class PhoneBook
{
	private :
		Contact info[8];
	public :
		Contact *get_info();
};


#endif