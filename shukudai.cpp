// shukudai due date 11/10/2021
// this will be a tic-tac-toe game

#include <iostream>

using namespace std;

int main()
{
	// prepare the variables
	int step_count = 0;  // for players' count ==> even: player1, odd: player2
	int max_step = 8;    // the max step for this game could be
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
	cout << "Please enter the name for the first player: ";
	cin >> player0;
	cout << "Please enter the name for the second player: ";
	cin >> player1;



	return 0;
}











