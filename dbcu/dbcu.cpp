// kwat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "io.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
using namespace io;
int _tmain(int argc, wchar_t* argv[])
{
	system("@echo off");
	system("cls");
	system("title dbcu");
	string fn, dbp, dt;
	cout << "database creation utility\n" << "\ndbname:";
	cin >> fn;
	cout << "\ndatabase password: ";
	cin >> dbp;
	cout << "\ninitial data: ";
	cin >> dt;
	system("cls");
	cout << "check the info: " << fn << "\n" << dbp << "\n" << dt << "\n" << "ps: you CAN'T change this info later on this setup" << "\nyou are sure of this data please confirm: (y or n) :";
	string confirm;
	cin >> confirm;
	if (confirm == "y" || "true" || "yes")
	{
		stringstream ss;
		cout << "\nbuilding at path can take some time please be patient...\n";
		ss << "#dbname{" << fn << "}\n#password{" << dbp << "}\n#data\n{\n" << dt << "\n}";
		string fc = ss.str();
		stringstream dbf;
		dbf << fn << ".dbset";
		string fnf = dbf.str();
		if (wr::save(fnf, fc))
		{
			cout << "\ndone";
		}
		else
		{
			cout << "failed";
		}
		system("pause");
	}
	else
	{
		system("pause");
	}
	system("exit");
}
