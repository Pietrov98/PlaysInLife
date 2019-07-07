#include "functions.h"
#include <iostream>


Board::Board()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			this->boardA[i][j] = 0;
			this->boardB[i][j] = 0;
			this->boardC[i][j] = 0;
			this->boardA1[i][j] = 0;
			this->boardB1[i][j] = 0;
		}
	}
}

void Functions::apply(int* rules)
{



	if (rules[5] == 0)
	{
		if (rules[4] == 0)
			ef0(rules, this->boardA);
		else if (rules[4] == 1)
			ef1(rules, this->boardA);
		else if (rules[4] == 2)
			ef2(rules, this->boardA);
		else if (rules[4] == 3)
			ef3(rules, this->boardA, this->boardC);
		else if (rules[4] == 4)
			ef4(rules, this->boardA, this->boardC);
		else if (rules[4] == 5)
			ef5(rules, this->boardB1, this->boardA);
		else if (rules[4] == 6)
			ef6(rules, this->boardB1, this->boardA);
		if (rules[4] == 5 || rules[4] == 6)
		{
			for (int i = 0; i < 16; i++)
			{
				for (int j = 0; j < 16; j++)
				{
					this->boardB1[i][j] = this->boardA[i][j];
				}
			}
		}
	}

	if (rules[5] == 1)
	{
		if (rules[4] == 0)
			ef0(rules, this->boardB);
		else if (rules[4] == 1)
			ef1(rules, this->boardB);
		else if (rules[4] == 2)
			ef2(rules, this->boardB);
		else if (rules[4] == 3)
			ef3(rules, this->boardB, this->boardC);
		else if (rules[4] == 4)
			ef4(rules, this->boardB, this->boardC);
		else if (rules[4] == 5)
			ef5(rules, this->boardB1, this->boardB);
		else if (rules[4] == 6)
			ef6(rules, this->boardB1, this->boardB);
		if (rules[4] == 5 || rules[4] == 6)
		{
			for (int i = 0; i < 16; i++)
			{
				for (int j = 0; j < 16; j++)
				{
					this->boardB1[i][j] = this->boardB[i][j];
				}
			}
		}
	}

}

void Functions::print_board(int* rules)
{
	if (rules[5] == 0)
	{
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 16; j++)
			{

				std::cout << this->boardA[i][j];
			}
			std::cout << std::endl;
		}
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 16; j++)
			{

				std::cout << this->boardB[i][j];
			}
			std::cout << std::endl;
		}
	}
}
