#include <iostream>

void	UpperCaseString(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			std::cout << static_cast <char>(*str);
		else
			std::cout << static_cast <char>(*str - 32);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			UpperCaseString(argv[i]);
	std::cout << std::endl;
	return (0);
}