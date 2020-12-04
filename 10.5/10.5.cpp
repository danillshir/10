#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "rus");
	ifstream in("f.txt");
	string str;
	int c = 0;
	char v;
	cout << "Введите букву:";
	cout << "\n";
	cin >> v;
	while (in.peek() != EOF)
	{
		getline(in, str);
		if (str[0] == v)
		{
			c++;
			cout << c << " Строка: " << str << "\n";
		}
	}
	cout << "\n";
	in.close();
	system("pause");
	return 0;
}