class Interface {
public:
	virtual void apply(int *) = 0;
	virtual void print_board(int *) = 0;

};

class Board: public Interface{
public:
	Board();
	void apply(int *) {}
	void print_board(int *){}

protected:
	int boardA[16][16];
	int boardB[16][16];
	int boardC[16][16];
	int boardA1[16][16];
	int boardB1[16][16];

};

class Functions: public Board{
public:
	Functions() {}
	void apply(int*);
	void place(int board4[16][16], int board5[16][16]);
	void ef0(int*, int board[16][16]);
	void ef1(int*, int board[16][16]);
	void ef2(int*, int board[16][16]);
	void ef3(int*, int board[16][16], int board3[16][16]);
	void ef4(int*, int board[16][16], int board3[16][16]);
	void ef5(int*, int board5[16][16], int board[16][16]);
	void ef6(int*, int board5[16][16], int board[16][16]);
	void board_clear(int board[16][16]);
	void print_board(int *);
};

