#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int b = 0,h = 0;
	int amount;
	int numbers[1000] = {};
	int crat6[1000] = {};
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		cin >> numbers[i];
	}
	for (int a = 0; a < amount; a++)
	{
		if (numbers[a] % 10 == 6)
		{
			crat6[b] = numbers[a];
			b++;
		}
	}

	for (int e = 0; e < amount; e++)
	{
		if (crat6[e] != 0)
		{
			h++;
		}
	}

	cout << "Количество чисел, оканчивающихся на 6 : " << h;
}