#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int _tmain()
{
	string cmd;
	while (cmd != "exit")
	{
		cout << "\n>";
		cin >> cmd;
		if (cmd == "fc")
		{
			cout << "parent width: ";
			double pw, ew, res;
			cin >> pw;
			cout << "element width: ";
			cin >> ew;
			res = (pw - ew) / 2;
			cout << res << "px is the width you want\n";
			system("pause");
			system("cls");
		}
		if (cmd == "orc")
		{
			cout << "parent width: ";
			double pw, ew, res;
			cin >> pw;
			cout << "element width: ";
			cin >> ew;
			res = ew/2;
			cout << res << "% is the width you want\n if you want follow this snippet:\n.element{\n  position: absolute;\n  left: " << res << "%\n}\n";
			system("pause");
			system("cls");
		}
		if (cmd == "info"){
			{
				cout << "developer: matheus silva\n github.com/matheusxaviersi";
			}
		}
	}
}
