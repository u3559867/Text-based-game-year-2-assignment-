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
			cout << "After cleaning each floor, you can upgrade the status with 'Dark matter' harvested. And the progress is then saved." << endl;
			cout << "Stats: ATK, HP, SPD and DEX (increase 'Dark matter' drop" << endl;
			cout << "If you die in a level, you lose." << endl;
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
			cout << "REMINDER: It may be impossible to negotiate with them once you have killed some of them." << endl;
			cout << endl;
			cout << "When you choose NEGOTIATE" << endl;
			cout << "Only when you have a chance, a hangman game pops up and you have to guess the right word." << endl;
			cout << "HP: more guesses for the hangman game" << endl;
			cout << "SPD: more time between guesses for the hangman game" << endl;
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
			cout << "OPO2OOO" << endl;
			cout << "OOOO3OO" << endl;
			cout << "O1OXOOO" << endl;
			cout << "OOOOOOO" << endl;
			cout << "OOOOOOO" << endl;
			cout << "OOOOOEO" << endl;
			cout << endl;
			cout << "The player (labelled X) is spawned in the middle of the floor." << endl;
			cout << "You can exit by running to the upper right corner (labelled F). You cannot exit once the alien is damaged." << endl;
			cout << "The enemy (labelled E) will be spawned at the leftmost of the floor at first." << endl;
			cout << "The enemy tries to approach you." << endl;
			cout << "If the enemy touches you, then it will deal damage to you and respawn at the bottom left." <<endl;
			cout << "If your SPD is higher, the less chance its attack will be effective." << endl;
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
			cout << "Walls (labelled 1-4, which represents the wall strength) are generated randomly on the map and not passable by the enemy nor the player." << endl;
			cout << "However, the player can weaken the wall by walking into them (wall strength -1)" << endl;
			cout << "When the wall strength is 0, the wall is demolished." << endl;
			cout << "One 'Energy point' (labelled P) is generated randomly on the map and will not be surrounded by walls." << endl;
			cout << "One 'Weakness point' (labelled W) is generated randomly on the map, then it will deal damage to the enemy. The higher the ATK, the higher the damage." << endl;
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
