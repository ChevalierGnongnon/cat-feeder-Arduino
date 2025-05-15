
#ifndef CATFEEDER_HPP
# define CATFEEDER_HPP


// Utils
void	ft_strcopy(char *src, char *copy);
int		ft_strlen(char *src);

class Tag{
	

};

// classes
class Cat{
	private :
		char	_name[16];
		Tag		_tag;
	public :
		Cat(Tag tag, char *name);
		~Cat();
};

#endif