// Вычислите a^4 , использовав не более двух операций умножения.
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Введите число: ";
	cin >> a;
	a = a * a;
	a = a * a;
	cout << "a^4 равно: " << a << endl;
}
