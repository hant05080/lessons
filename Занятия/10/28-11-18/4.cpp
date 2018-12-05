// Определите, сколько в графе концевых вершин
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

	int res = 0;

	for (int i = 0; i < m; ++i)
	{
		int s = 0;
		for (int j = 0; j < n; ++j)
		{
			int a;
			input >> a;
			s += a;
		}
		if (!s)
			res++;
	}

	cout << res << endl;
}
