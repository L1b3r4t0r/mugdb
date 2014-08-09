#include "io.h"
namespace mug{
	bool io::save(string filename, string content){
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
	string io::read(string filename){
		ifstream iop(filename);
		if (iop.is_open()){
			string line;
			string content;
			return content;
			while (iop.good())
			{
				iop >> content;
			}
			return content;
			iop.close();
		}
		else
		{
			return false;
		}
	}
}