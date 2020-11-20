#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;

int save(int x[8])
{
	ofstream fout;
	fout.open("savefile"); //file that stored in

	//file cannot open
	if (fout.fail())
	{
		cout << "Error in file opening!" << endl;
		exit(1);
	}
	
	//int x[8]; it represents the game status
	//store game status
	for(int i = 0; i < 8; i++)
	{
		fout << x[i];
		fout <<" ";
	}
    
	fout.close();

	return 0;
}
