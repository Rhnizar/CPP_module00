

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::cout<<argv[1];
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout<<"\n";
	return 0;
}