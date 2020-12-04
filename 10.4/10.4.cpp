#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "rus");
	ifstream in("f.txt");
	string str;
	string max;
	while (in.peek() != EOF)
	{
		getline(in, str);
			if (str.length() > max.length())
				max = str;
	}
	cout << "Самая длинная строка:" << max << " Длина строки равна: " << max.length() << "\n";
	in.close();
	system("pause");
	return 0;
}