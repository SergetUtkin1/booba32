#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, sum = 0, cnt = 0;
	cout << "Введите кол-во вводимых чисел: \n";
	cin >> N;
	cout << "Вводите " << N << " чисел: \n";
	while (N>0)
	{
		int temp;
		cin >> temp;
		if (temp % 2 == 0)
		{
			sum += temp;
		}
		else
		{
			cnt += 1;
		}
		N -= 1;
	}
	cout << "Сумма четных чисел: " << sum << endl << "Кол-во нечетных чисел: " << cnt;
}