#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <ctime>

using namespace std;

int RandomNumber() { return (std::rand() % 100); }

void print(vector <int> a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

int searchmiel(vector <int> a)
{
	int min = a[0];
	int miel = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] % 2 == 0 && a[i] < min)
		{
			min = a[i];
			miel = i;
		}
	}
	return miel;
}

int main()
{
	vector <int> a;
	srand(time(0));
	for (int i = 0; i < 10; i++)
		a.push_back(RandomNumber());
	print(a);
	int miel = searchmiel(a);
	int temp = a[0];
	a[0] = a[miel];
	a[miel] = temp;
	print(a);
	return 0;
	}