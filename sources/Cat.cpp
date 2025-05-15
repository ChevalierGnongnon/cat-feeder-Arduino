#ifndef CAT_HPP
# define CAT_HPP
# include "Tag.hpp"

class Cat{
	private :
		const char	_name[16];
		Tag			_tag;
		int			_weight;
	public :
		Cat(Tag tag, char *name, int weight);
		~Cat();
};

#endif