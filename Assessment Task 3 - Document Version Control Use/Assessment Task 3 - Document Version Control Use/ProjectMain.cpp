#include "ProjectMain.h"

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello World" << endl;

	cout << "Please enter name" << endl;

	string input = "";
	cin >> input;

	cout << "Hello " << input.c_str() << endl;

	return 0;
}