#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP
# include <iostream>
# include <string>
# include <iomanip>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class ContactClass
{
	public:
		ContactClass();
		int			addContact();
		void		showContacts(int count, ContactClass contacts[8]);
		void		previewContacts(int i, ContactClass contacts[8]);
		std::string	previewValue(std::string value);
	private:
		std::string			m_fields[11];
		static std::string	m_field_name[11];

};

#endif
