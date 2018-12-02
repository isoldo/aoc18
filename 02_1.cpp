#include <iostream>

int main()
{
	std::string input;
	unsigned int twos = 0;
	unsigned int threes = 0;

	while (std::cin >> input)
	{
		int have_two = 0;
		int have_three = 0;
		int cnt['z' - 'a'+1] = {0};
		std::cout << input << std::endl;
		for (int i=0; i<input.length(); ++i)
		{
			int ix = input[i] - 'a';
			++cnt[ix];
			std::cout << input[i] << " " << cnt[ix] << std::endl;
		}

		for (int i=0; i<('z' - 'a'+1); ++i)
		{
			if (0 == have_two && cnt[i] == 2)
			{
				++twos;
				have_two = 1;
				std::cout << "h2" << std::endl;
			}
			else if (0 == have_three && cnt[i] == 3)
			{
				++threes;
				have_three = 1;
				std::cout << "h3" << std::endl;
			}
		}
		std::cout << twos << " " << threes << std::endl; 
	}
	std::cout << twos*threes << std::endl;
	return 0;
}
