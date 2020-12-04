#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream g("g.txt");
	string str;
	int c = 0;
	while (in.peek() != EOF)
	{
		getline(in, str);
		for (int i = 0; i<str.size(); i++)
		{
			c++;
		}
		g << str << " " << c << endl;
		c = 0;
	}
	cout << "\n";
	in.close();
	g.close();
	return 0;
}