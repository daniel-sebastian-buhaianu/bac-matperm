#include <iostream>
#define NMAX 9
using namespace std;
int main()
{
	int a[NMAX][NMAX], n, i, j;
	cout << "n = "; cin >> n;
	cout << "Introdu " << n << " numere din intervalul [0, 10]:\n";
	for (j = 0; j < n; j++)
		cin >> a[0][j];
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n-1; j++)
			a[i][j] = a[i-1][j+1];
		a[i][j] = a[i-1][0];
	}
	cout << "Tabloul obtinut:\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
