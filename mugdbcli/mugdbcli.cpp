//just started this file;
#include "stdafx.h"
#include "io.h"
#include "parser.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
using namespace mug;
int _tmain(int argc, _TCHAR* argv[])
{
	string line;
	while (getline(cin, line))
	{
		istringstream command(line);
		string cmd;
		command >> cmd;
		if (cmd == "parse")
		{
			string filename;
			cout << "file name";
			cin >> filename;
			parser::parsing::parsename(filename);
		}
	}
}

