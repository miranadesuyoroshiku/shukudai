#include <iostream>

using namespace std;

void printGameBoard(char game_board[3][3]);
void checkGameStatus(char game_board[3][3], int step);

int main()
{
	int step = 0;
	char game_board[3][3] = {{'n', 'n', 'n'}, {'n', 'n', 'n'}, {'n', 'n', 'n'}};
	int x_coordinate;
	int y_coordinate;

	do
	{
		if (step % 2 == 0)
		{
			do
			{
				cout << "Please enter your x-coordinate: ";
				cin >> x_coordinate;
			} while (x_coordinate < 0 && x_coordinate > 2);
			do
			{
				cout << "Please enter your y-coordinate: ";
				cin >> y_coordinate;
			} while (y_coordinate < 0 && y_coordinate > 2);
			while (game_board[x_coordinate][y_coordinate] == 'n')
			{
				game_board[x_coordinate][y_coordinate] = 'X';
			}
		}
		else
		{
			do
			{
				cout << "Please enter your x-coordinate: ";
				cin >> x_coordinate;
			} while (x_coordinate < 0 && x_coordinate > 2);
			do
			{
				cout << "Please enter your y-coordinate: ";
				cin >> y_coordinate;
			} while (y_coordinate < 0 && y_coordinate > 2);
			while (game_board[x_coordinate][y_coordinate] == 'n')
			{
				game_board[x_coordinate][y_coordinate] = 'O';
			}
		}
		printGameBoard(game_board);
		checkGameStatus(game_board, step);
		step++;
	} while (step < 9);

	return 0;
}

void printGameBoard(char game_board[3][3])
{
	cout << "*---*---*---*" << endl;
	cout << "| " << game_board[0][0] << " | " << game_board[0][1] << " | " << game_board[0][2] << " |" << endl;
	cout << "*---*---*---*" << endl;
	cout << "| " << game_board[1][0] << " | " << game_board[1][1] << " | " << game_board[1][2] << " |" << endl;
	cout << "*---*---*---*" << endl;
	cout << "| " << game_board[2][0] << " | " << game_board[2][1] << " | " << game_board[2][2] << " |" << endl;
	cout << "*---*---*---*" << endl;
}

void checkGameStatus(char game_board[3][3], int step)
{
	bool game_status = false;
	char winner_code;
	for (int i = 0; i < 3; i++)
	{
		if (game_board[i][0] == game_board[i][1] && game_board[i][1] == game_board[i][2] && game_board[i][0] != 'n')
		{
			game_status = true;
			winner_code = game_board[i][0];
		}
		else if (game_board[0][i] == game_board[1][i] && game_board[1][i] == game_board[2][i] && game_board[0][i] != 'n')
		{
			game_status = true;
			winner_code = game_board[0][i];
		}
		else if (game_board[0][0] == game_board[1][1] && game_board[1][1] == game_board[2][2] && game_board[0][0] != 'n')
		{
			game_status = true;
			winner_code = game_board[0][0];
		}
		else if (game_board[0][2] == game_board[1][1] && game_board[1][1] == game_board[2][0] && game_board[0][2] != 'n')
		{
			game_status = true;
			winner_code = game_board[0][2];
		}
		else
		{
			game_status = false;
		}
		if (game_status == true)
		{
			break;
		}
	}
	if (game_status == true)
	{
		if (winner_code == 'X')
		{
			cout << "Player A wins!" << endl;
		}
		if (winner_code == 'O')
		{
			cout << "Player B wins!" << endl;
		}
	}
	if (game_status == false && step == 8)
	{
		cout << "Draw" << endl;
	}
}