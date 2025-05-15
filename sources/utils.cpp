int ft_strlen(char *str){
	int i = 0;

	while (str[i]){
		i++;
	}
	return (i);
}

void	ft_strcopy(char *src, char *copy){
	int len = ft_strlen(src);
	int i;

	if (len > 15){
		for (i = 0; i < 14; i++){
			copy[i] = src[i];
		}
		copy[i] = '.';
		copy[i + 1] = '\0';
	}
	else {
		for (i = 0; i < len; i++){
			copy[i] = src[i];
		}
		copy[i] = '\0';
	}
}