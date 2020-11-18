//For players know how to play the game
#include <iostream>
using namespace std;

int main()
{
	char contin = 'C';
	while (contin != 'e' && contin != 'E') {
		if (contin == 'C')
		{
			cout << "In this game, there are 10 levels, each floor consists of a 5x5 plane." << endl;
			cout << "Use WASD to control and explore all elements in each floor." << endl;
			cout << "After cleaning each floor, you can upgrade the status with 'Dark matter' harvested." << endl;
			cout << "Stats: ATK, HP, SPD and DEX (increase 'Dark matter' drop" << endl;
			cout << "If you dies in a level, then you will respawn at that level again with the level reset." << endl;
			cout << "Press button C and then enter to keep on the tutorial." << endl;
			cout << "Press button E and then enter to skip the tutorial." << endl;
			cin >> contin;
			while (contin != 'c' && contin != 'C' && contin != 'e' && contin != 'E')
	        {
		        cout << "Please press the right button." << endl;
		        cout << "Press button C and then enter to keep on the tutorial." << endl;
		        cout << "Press button E and then enter to skip the tutorial." << endl;
		        cin >> contin;
	        }
		}

		if (contin == 'c' || contin == 'C')
		{
			cout << endl;
			cout << "OCOOO" << endl;
			cout << "OOAOO" << endl;
			cout << "OOOOO" << endl;
			cout << "OOOOC" << endl;
			cout << "XOOOO" << endl;
			cout << endl;
			cout << "The player (labelled X) is spawned at the bottom-left corner of the floor" << endl;
			cout << "The chests (labelled C) contain some 'Dark matter'." << endl;
			cout << "There are two situations when players meet Aliens (labelled A)." << endl;
			cout << "Press button C and then enter to keep on the tutorial." << endl;
			cout << "Press button E and then enter to skip the tutorial." << endl;
			cin >> contin;
			while (contin != 'c' && contin != 'C' && contin != 'e' && contin != 'E')
	        {
		        cout << "Please press the right button." << endl;
		        cout << "Press button C and then enter to keep on the tutorial." << endl;
		        cout << "Press button E and then enter to skip the tutorial." << endl;
		        cin >> contin;
	        }
		}

		if (contin == 'c' || contin == 'C')
		{
			cout << endl;
			cout << "NEGOTIATE or KILL" << endl;
			cout << "When the player successfully negotiated with the aliens, they drop some 'Dark matter'." << endl;
			cout << "When they are killed, they drop a lot more 'Dark matter'." << endl;
			cout << "REMINDER: It gets harder even impossible to negotiate next time." << endl;
			cout << endl;
			cout << "When you choose NEGOTIATE" << endl;
			cout << "Only when you have a chance, a hangman game pops up and you have to guess the right word." << endl;
			cout << "DEF: more guesses for the hangman game" << endl;
			cout << endl;
			cout << "Press button C and then enter to keep on the tutorial." << endl;
			cout << "Press button E and then enter to skip the tutorial." << endl;
			cin >> contin;
			while (contin != 'c' && contin != 'C' && contin != 'e' && contin != 'E')
	        {
		        cout << "Please press the right button." << endl;
		        cout << "Press button C and then enter to keep on the tutorial." << endl;
		        cout << "Press button E and then enter to skip the tutorial." << endl;
		        cin >> contin;
	        }
		}

		if (contin == 'c' || contin == 'C')
		{
			cout << endl;
			cout << "When you choose KILL" << endl;
			cout << "A floor consists of a 7x7 plane." << endl;
			cout << endl;
			cout << "OOOOOOF" << endl;
			cout << "OPOWOOO" << endl;
			cout << "OOOOWOO" << endl;
			cout << "OWOXOOO" << endl;
			cout << "OOOOOOO" << endl;
			cout << "OOOOOOO" << endl;
			cout << "OOOOOEO" << endl;
			cout << endl;
			cout << "The player (labelled X) is spawned in the middle of the floor." << endl;
			cout << "You can exit by running to the upper right corner (labelled F)." << endl;
			cout << "The enemy (labelled E) will be spawned at the leftmost or bottommost of the floor at first." << endl;
			cout << "The enemy tries to approach you. If your SPD is higher, the less chance it will move whenever the player moves." << endl;
			cout << "If the enemy touches you, then it will deal damage to you and respawn at the edges." << endl;
			cout << "Press button C and then enter to keep on the tutorial." << endl;
			cout << "Press button E and then enter to skip the tutorial." << endl;
			cin >> contin;
			while (contin != 'c' && contin != 'C' && contin != 'e' && contin != 'E')
	        {
		        cout << "Please press the right button." << endl;
		        cout << "Press button C and then enter to keep on the tutorial." << endl;
		        cout << "Press button E and then enter to skip the tutorial." << endl;
		        cin >> contin;
	        }
		}

		if (contin == 'c' || contin == 'C')
		{
			cout << endl;
			cout << "The walls (labelled W) are generated randomly on the map and not passable by the enemy nor you." << endl;
			cout << "One 'Energy point' (labelled P) is generated randomly on the map and will not be surrounded by walls." << endl;
			cout << "You need to touch the 'Energy point', then it will deal damage to the enemy. The higher ATK, the higher damage." << endl;
			cout << "There has two boss fights at Level 5 and Level 10." << endl;
			cout << "There are different endings depending on the number of aliens killed or negotiated." << endl;
			cout << "Press button C and then enter to start over the tutorial again." << endl;
			cout << "Press button E and then enter to start the adventure." << endl;
			cin >> contin;
			while (contin != 'c' && contin != 'C' && contin != 'e' && contin != 'E')
	        {
		        cout << "Please press the right button." << endl;
		        cout << "Press button C and then enter to keep on the tutorial." << endl;
		        cout << "Press button E and then enter to skip the tutorial." << endl;
		        cin >> contin;
	        }
		}
	}

	return 0;
}