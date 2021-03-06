#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool check(int x1, int y1, int x2, int y2)
{
	if (x1 == x2 || y1 == y2) return true;
	else if (x1 == y1 && x2 == y2) return  true;
	else if ((x1 - y1) == (x2 - y2)) return true;
	else if ((x1 + y1) == (x2 + y2)) return true;
	return false;
}
int main()
{
	int a[10000][2];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (check(a[i][0], a[i][1], a[j][0], a[j][1]) == true)
			{
				cout << "yes";
				return 0;
			}
		}
	}
	cout << "nono";
	return 0;
}