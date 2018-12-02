#include <iostream>
#include <vector>
#include <set>

bool sortby2(const std::string &a, const std::string &b)
{
	if (a.length() < 2)
		return true;
	if (b.length() < 2)
		return true;
	return a[1] < b[1]; 
}

int main()
{
	std::vector<std::string> input;
	std::vector<std::string> working;
	std::string curr;

	while (std::cin >> curr)
	{
		input.push_back(curr);
	}

	for (int pos=0; pos < input[0].length(); ++pos)
	{
		// remove every letter and see if there is a match
		std::set<std::string> mod;
		std::string tmp;

		for (int i=0; i<input.size(); ++i)
		{
			tmp = input[i];
			tmp.erase(pos,1);

			if ( mod.find(tmp) != mod.end() )
			{
				std::cout << tmp << std::endl;
				break;
			}
			mod.insert(tmp);
		}
	}
	return 0;
}
