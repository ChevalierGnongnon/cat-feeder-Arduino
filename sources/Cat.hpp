#ifndef CAT_HPP
# define CAT_HPP
# include "Tag.hpp"

class Cat{
	private :
		char	_name[16];
		Tag		_tag;
	public :
		Cat(Tag tag, char *name);
		~Cat();
};

#endif