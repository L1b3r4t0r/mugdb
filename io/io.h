//this is the input output simplified interface dll
#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
using namespace std;
namespace mug{
	class io
	{
	public:
		static __declspec(dllexport) bool save(string filename, string content);
		static __declspec(dllexport) string read(string filename);
	};
}