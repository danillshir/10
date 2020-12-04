#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	ifstream f("f.txt");
	ofstream oh("h.txt");
	string a;
	while (f.peek() != EOF)
	{
		getline(f, a);
		oh << a << endl;
	}
	f.close();
	oh.close();
	ifstream g("g.txt");
	ofstream of("f.txt");
	while (g.peek() != EOF)
	{
		getline(g, a);
		of << a << endl;
	}
	g.close();
	of.close();
	ifstream h("h.txt");
	ofstream og("g.txt");
	while (h.peek() != EOF)
	{
		getline(h, a);
		og << a << endl;
	}
	h.close();
	og.close();
	return 0;
}