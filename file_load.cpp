#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int load(int x[8])
{
	ifstream fin;
	fin.open("savefile"); //file that load in

	//file cannot open
	if (fin.fail())
	{
		cout << "Error in file opening!" << endl;
		exit(1);
	}

	//int x[8]; it represents the game status
	//load in game status from file
	for (int i = 0; i < 8; i++)
	{
		fin >> x[i];
	}

	fin.close();

	return 0;
}
