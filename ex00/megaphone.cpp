#include <cctype>
#include <iostream>
#include <string>

void	megaphone(std::string input)
{
	size_t	i;

	i = 0;
	while (i < input.length())
	{
		input[i] = toupper(input[i]);
		i++;
	}
	std::cout << input;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			megaphone(argv[i]);
			if (i == argc - 1)
				std::cout << "\n";
			i++;
		}
	}
	return (0);
}
