#include "io.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
namespace io{
	bool wr::save(string filename, string content){
		ofstream iop(filename);
		if (iop.is_open()){
			iop << content;
			iop.close();
			return true;
		}
		else
		{
			return false;
		}
	}
}