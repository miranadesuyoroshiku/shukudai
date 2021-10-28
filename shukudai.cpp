// shukudai due date 11/10/2021
// this will be a tic-tac-toe game

#include <iostream>

using namespace std;

int main()
{
	// prepare the variables
	int step_count = 0;  // for players' count ==> even: player1, odd: player2
	int max_step = 9;    // the max step for this game could be
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

	// prepare the horizontal grids during gaming
	string horizontal_grid_0 = horizontal_grid;
	string horizontal_grid_1 = horizontal_grid;
	string horizontal_grid_2 = horizontal_grid;

	// game playing...
	while (!filled)
	{
		// ask user for location and sketch the current game board
		for (int i = 0; i < max_step; i++)
		{
			// ask user for location
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

			// increment the step count
			step_count++;
			filled = (step_count < max_step) ? false : true;


			// modify the horizontal_grid_0, horizontal_grid_1, horizontal_grid_2 accordingly
			// i is an important value
			// using for loop or if decision with concatnation???



			// print the game board
			for (int i = 0; i < lines; i++)
			{
				if (i % 2 == 0)
				{
					cout << horizontal_grid;
				}
				else
				{
					switch (i)
					{
					case 1:
						// print the first horizontal grid
						cout << horizontal_grid_0;
						break;
					case 3:
						// print the second horizontal grid
						cout << horizontal_grid_1;
						break;
					case 5:
						// print the third horizontal grid
						cout << horizontal_grid_2;
						break;
					}
				}
			}
		}
	}

	return 0;
}











