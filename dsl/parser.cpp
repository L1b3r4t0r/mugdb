#include "parser.h"
using namespace std;
namespace parser{
	string parsing::read(string filename){
		ifstream iop(filename);
		if (iop.is_open()){
			string content;
			iop >> content;
			iop.close();
			return content;
		}
		else
		{
			return false;
		}
	}
	cmatch parsing::parsename(string dbfile){
		string str = parsing::read(dbfile);
		regex reg("#name{\"(.+)\"}");
		cmatch res;
		regex_search(str.c_str(), res, reg);
		return res;
	}
}