// Считайте содержимое файла и выведите матрицу на экран
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input ("matrix.txt");

	if (!input)
	{
		cout << "Ошибка загрузки файла" << endl;
		return 0;
	}
	
	int m, n;
	input >> m >> n;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int a;
			input >> a;
			cout << a << ' ';
		}
		cout << endl;
	}
}
