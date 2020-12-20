// proga.cpp

#include <iostream>
using namespace std;
const int i = 2;
int mas[i];

int main()
{
	setlocale(LC_ALL, "rus");
	mas[0] = 2;
	mas[1] = 5;
	mas[2] = -4;
	int z = 0;
	for (int i = 0; i < 2; i++)
	{
		if (mas[i] > 0)
			z = z + 1;
	}
	cout << "количество положительных числел ="<< z;
	cout << "Change";
	return 0;
}
