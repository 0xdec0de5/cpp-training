#include <iostream>

int main()
{
	char outer_index = 'A';

	while (outer_index <= 'C') 
	{
		int inner_index = 1;
		while (inner_index <= 5)
		{
			std::cout << "Parent, " << outer_index << " Child, " << inner_index << std::endl;
			inner_index++;
		}
		outer_index++;
	}

	return 0;
}