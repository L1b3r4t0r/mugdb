#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;
using namespace std::tr1;
namespace parser{
	class parsing{
	public:
		static __declspec(dllexport) cmatch parsename(string dbfile);
		static __declspec(dllexport) string read(string filename);
	};
}