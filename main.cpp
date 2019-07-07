#include "functions.h"
#include <iostream>
#include <string>

int main()
{
	int rules[6];
	int i = 0, j = 0;
	Functions F;
	Interface *G1 = &F;
	std::cin >> rules[0] >> rules[1] >> rules[2] >> rules[3] >> rules[4] >> rules[5];
	do
	{
		if (rules[0] > 15 || rules[0] < 0 || rules[1] > 15 || rules[1] < 0 || rules[2] > 15 || rules[2] < rules[0] || rules[3] > 15 || rules[3] < rules[1] || rules[4] > 6 || rules[4] < 0 || rules[5] < 0 || rules[5] > 1)
		{
			i++;
		}
		G1->apply(rules);

	}while(std::cin >> rules[0] >> rules[1] >> rules[2] >> rules[3] >> rules[4] >> rules[5] && i < 1);

	G1->print_board(rules);

}
