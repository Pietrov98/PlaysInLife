#include "functions.h"
#include <iostream>

void Functions::place(int board4[16][16], int board5[16][16])
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			board4[i][j] = board5[i][j];
		}
	}
}

void Functions::ef0(int* rules, int  board[16][16])
{
	for (int i = rules[0]; i <= rules[2]; i++)
	{
		for (int j = rules[1]; j <= rules[3]; j++)
		{
			board[i][j] = 0;
		}

	}

}

void Functions::ef1(int* rules, int board[16][16])
{
	for (int i = rules[0]; i <= rules[2]; i++)
	{
		for (int j = rules[1]; j <= rules[3]; j++)
		{
			board[i][j] = 1;
		}

	}
}

void Functions::ef2(int* rules, int board[16][16])
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (board[i][j] == 0)
				board[i][j] = 1;
			else
				board[i][j] = 0;
		}

	}
}

void Functions::ef3(int* rules, int board[16][16], int board3[16][16])
{
	int k = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			board3[i][j] = board[i][j];
		}

	}

	for (int i = rules[0]; i <= rules[2]; i++)
	{
		for (int j = rules[1]; j <= rules[3]; j++)
		{
			k = 0;
			if (board[i][j] == 1)
			{
				if (board[(i + 1 + 16) % 16][(j - 1 + 16) % 16] == 1)
					k++;
				if (board[(i + 1 + 16) % 16][(j + 16) % 16] == 1)
					k++;
				if (board[(i + 1 + 16) % 16][(j + 1 + 16) % 16] == 1)
					k++;
				if (board[(i + 16) % 16][(j - 1 + 16) % 16] == 1)
					k++;
				if (board[(i + 16) % 16][(j + 1 + 16) % 16] == 1)
					k++;
				if (board[(i - 1 + 16) % 16][(j - 1 + 16) % 16] == 1)
					k++;
				if (board[(i - 1 + 16) % 16][(j + 16) % 16] == 1)
					k++;
				if (board[(i - 1 + 16) % 16][(j + 1 + 16) % 16] == 1)
					k++;
				if (k == 1 || k == 4 || k == 5 || k == 6 || k == 7 || k == 8)
					board3[i][j] = 0;
			}
		}

	}
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			board[i][j] = board3[i][j];
		}

	}
}

void Functions::ef4(int* rules, int board[16][16], int board3[16][16])
{
	int k = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			board3[i][j] = board[i][j];
		}

	}
	for (int i = rules[0]; i <= rules[2]; i++)
	{
		for (int j = rules[1]; j <= rules[3]; j++)
		{
			k = 0;
			if (board[i][j] == 0)
			{
				if (board[(i + 1 + 16) % 16][(j - 1 + 16) % 16] == 1)
					k++;
				if (board[(i + 1 + 16) % 16][(j + 16) % 16] == 1)
					k++;
				if (board[(i + 1 + 16) % 16][(j + 1 + 16) % 16] == 1)
					k++;
				if (board[(i + 16) % 16][(j - 1 + 16) % 16] == 1)
					k++;
				if (board[(i + 16) % 16][(j + 1 + 16) % 16] == 1)
					k++;
				if (board[(i - 1 + 16) % 16][(j - 1 + 16) % 16] == 1)
					k++;
				if (board[(i - 1 + 16) % 16][(j + 16) % 16] == 1)
					k++;
				if (board[(i - 1 + 16) % 16][(j + 1 + 16) % 16] == 1)
					k++;
				if (k == 3)
					board3[i][j] = 1;
				else board3[i][j] = 0;
			}
			else
				board3[i][j] = 0;
		}

	}
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			board[i][j] = board3[i][j];
		}

	}
}


void Functions::ef5(int* rules, int board5[16][16], int board[16][16])
{

		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 16; j++)
			{
				if (board[i][j] != board5[i][j])
					board[i][j] = 1;
				else if (board[i][j] == board5[i][j])
					board[i][j] = 0;
			}
		}
}

void Functions::ef6(int* rules, int board5[16][16], int board[16][16])
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (board5[i][j] == 1)
				board[i][j] = 1;
			else if (board5[i][j] == 0)
				board5[i][j] = 0;

		}

	}
}

void Functions::board_clear(int board[16][16])
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			board[i][j] = 0;
		}
	}
}
