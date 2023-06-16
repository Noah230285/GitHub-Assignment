#include "ProjectMain.h"

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	// Edited On Github
	
	cout << "Hello World" << endl;

	cout << "Please enter name" << endl;

	string input = "";
	cin >> input;

	cout << "Hello " << input.c_str() << endl;

	cout << "Im thinking of a number between 1 and 5, what am i thinking of?" << endl;

	srand(time(NULL));

	int i = rand() % 5 + 1;
	while (true)
	{
		cin >> input;
		bool isInt = true;

		for (int i = 0; i < strlen(input.c_str()); i++)
			if (!isdigit(input.c_str()[i]))
				isInt = false;

		if(isInt)
			if (stoi(input) == i)
				break;

		cout << "try again" << endl;
	}
	cout << "Thats right!" << endl;

	return 0;
}
