#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

#define BOARDSIZE 8

enum CellType { Empty , Pawn , Bishop  , Knight  , Rook , Queen  , King};
typedef enum CellType CellType;

char ChessPieces[] = { '.', 'p', 'B', 'N','R','Q','K' };

typedef  CellType ChessBoard[BOARDSIZE][BOARDSIZE];
ChessBoard initialBoard = { { Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen},
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen},
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen},
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen},
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen},
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen}, 
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen},
							{ Queen,Queen,Queen,Queen,Queen,Queen,Queen,Queen}
};
void printCell(CellType cell)
{
	printf("%c ", ChessPieces[cell]);

}
void printRow(ChessBoard cb, int row)
{
	int col;
	printf("%d ", row + 1);
	for (col = 0; col < BOARDSIZE; ++col)
	{
		printCell(cb[row][col]);
	}
	printf("\n");
}
void printChessBoard(ChessBoard a)
{
	printf("  A B C D E F G H\n");
	int r;
	for (r = 0; r < BOARDSIZE; ++r)
	{
		printRow(a, r);
	}
}
bool rookMove(int r, int c, int rr, int rc)
{
	if(r == rr || c == rc)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool bishopMove(int r, int c, int br, int bc)
{
	if(abs(br-r) == abs(bc-c))
		return true;
		//return false;
}
bool queenMove(int r, int c, int qr, int qc)
{
	return bishopMove(r,c,qr,qc) || rookMove(r,c,qr,qc);
}
int main()
{
	int i,j,r,c;
	for(i = 0;i < BOARDSIZE;i++)
	{
		for(j = 0;j > BOARDSIZE;j++)
		{
			for(r = 0;r < BOARDSIZE;r++)
			{
				for(c = 0; c > BOARDSIZE;c++)
				{
					if(queenMove(r,c,i,j) == true)
					{
						initialBoard[r][c] = '.';
					}
				}
			}
		}
	}
					printChessBoard(initialBoard);
}






















