

#include <iostream>

int main()
{
	int num1;
	int	num2;
	int	num3;
	int	res;

	std::cout << "enter num1 :  ";
	std::cin >> num1;
	std::cout << "\nenter num2 :  ";
	std::cin >> num2;
	std::cout << "\nenter num3 :  ";
	std::cin >> num3;
	res = (num1 * num2) / num3;
	std::cout << "result : " << res;
	return 0;
}



#include <iostream>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
				std::cout<<(char)toupper(argv[i][j++]);
			std::cout<< " ";
			i++;
		}
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}