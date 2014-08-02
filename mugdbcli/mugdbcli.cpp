//just started this file;
#include "stdafx.h"
#include "io.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
using namespace io;
int _tmain(int argc, _TCHAR* argv[])
{
	string line;
	while (getline(cin, line))
	{
		istringstream command(line);
		string cmd;
		command >> cmd;

	}
}

