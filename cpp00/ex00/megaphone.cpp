

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	int 	i;
	int		j;
	j = 1;
	i = 0;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] >= 97 && argv[j][i] <= 122)
				argv[j][i] = (argv[j][i] - 32);
			std::cout <<  argv[j][i];
			i++;
		}
		i = 0;
		j++;
	}
	std::cout << '\n';
	return (0);
}
