#include "Cat.hpp"
#include "utils.cpp"

Cat::Cat(Tag tag, char *name){
	ft_strcopy(name, this->_name);
	this->_tag = tag;
}