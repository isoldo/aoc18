#include <iostream>
#include <vector>
#include <map>

int main()
{
	int sum = 0;
	int curr;
	std::map<int, unsigned int> frequencies;
	std::vector<int> input;
	while ( std::cin >> curr )
	{
		input.push_back(curr);
		sum += curr;
		++frequencies[sum];
		if ( 2 == frequencies[sum] )
		{
		//	std::cout << sum << std::endl;
			break;
		}
	}

	int done = 0;
	while(!done)
	{
		for (int i=0; !done && i<input.size(); ++i)
		{
			sum += input[i];
			++frequencies[sum];
			if ( 2 == frequencies[sum])
			{
				std::cout << "sum " << sum << std::endl;
				done = 1;
			}
		}
	}
	return 0;
}
