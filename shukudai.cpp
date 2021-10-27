// shukudai due date 11/10/2021
// this will be a tic-tac-toe game

#include <iostream>

using namespace std;

int main()
{
	// prepare the variables
	int step_count = 0;  // for players' count ==> even: player1, odd: player2
	int max_step = 9;    // the max step for this game could be
	bool status = true;  // for the gaming win or lose, true means not winning
	bool filled = false; // for the game board filled or not, false means it has capacity
						 // filled is related with the comparison of step_count and max_step
	string option = "";  // will ask player for options of play or quit then make decision

	// players will enter their name
	string player0 = "";
	string player1 = "";

	// players' coordinate
	int player0_x = 0;
	int player0_y = 0;
	int player1_x = 0;
	int player1_y = 0;

	// greeting lines and get players' name from players
	cout << "Hello, welcome to the tic-tac-toe developed by Mirana." << endl;
	cout << "The first player will start game." << endl;
	cout << "The game will ask you to enter the x and y coordinate of your choice. The upper-top corner is (0, 0).\nThe center point is (1, 1), and the right-bottom corner is (1, 1), etc." << endl;
	cout << "Please enter the name for the first player: ";
	cin >> player0;
	cout << "Please enter the name for the second player: ";
	cin >> player1;

	// print the empty game board
	// *---*---*---*
	// |   |   |   |
	// *---*---*---*
	// |   |   |   |
	// *---*---*---*
	// |   |   |   |
	// *---*---*---*
	int lines = 7;
	string horizontal_grid = "*---*---*---*\n";
	string horizontal_box = "|   |   |   |\n";
	string single_vertical_grid = "|";
	for (int i = 0; i < lines; i++)
	{
		if (i % 2 == 0)
		{
			cout << horizontal_grid;
		}
		else
		{
			cout << horizontal_box;
		}
	}

	/*
	// game playing...
	while (status && !filled)
	{
		for (int i = 0; i < max_step; i++)
		{
			if (i % 2 == 0)
			{
				cout << player0 << ", please enter the x and y coordinate of your choice: ";
				cin >> player0_x >> player0_y;
			}
			else
			{
				cout << player1 << ", please enter the x and y coordinate of your choice: ";
				cin >> player1_x >> player1_y;
			}
			// print the game board
		}
	}
	*/

	return 0;
}











