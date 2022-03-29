#include <iostream>

using namespace std;

class extension
{
private:
	int b = 0, h = 0,amount;
	int numbers[1000] = {};
	int crat6[1000] = {};
public:
	void sort();
	void count();
	void output();
};

void extension::sort()
{
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
}

void extension::count()
{
	for (int e = 0; e < amount; e++)
	{
		if (crat6[e] != 0)
		{
			h++;
		}
	}
}

void extension::output()
{
	cout << "Количество чисел, оканчивающихся на 6 : " << h;
}

int main()
{
	setlocale(LC_ALL, "");
	extension x;
	x.sort();
	x.count();
	x.output();
}
