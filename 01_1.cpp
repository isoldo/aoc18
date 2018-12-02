#include <iostream>
#include <map>

int main()
{
	unsigned int sum = 0;
	int curr;
	while ( std::cin >> curr )
	{
		sum += curr;
	}
	printf("%u\r\n", sum);
	return 0;
}
