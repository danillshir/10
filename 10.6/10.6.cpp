#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	ofstream l("h.txt");
	while (in.peek() != EOF)
	{
		int n;
		in >> n;
		if (n % 2 == 0)
		{
			out << n << endl;
		}
		else if (n % 2 == 1)
		{
			l << n << endl;
		}
	}
	in.close();
	out.close();
	l.close();
	return 0;
}