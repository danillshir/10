#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	ifstream in("f.txt");
	string str;
	int c = 0;
	char v;
	cout << "Vvedite bukvu:";
	cout << "\n";
	cin >> v;
	while (in.peek() != EOF)
	{
		getline(in, str);
		if (str[0]==v)
		{
			c++;
		}
	}
	cout << c << " strok nachinaetsa s bukvi " << v;
	cout << "\n";
	in.close();
	system("pause");
	return 0;
}