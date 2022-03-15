#include<iostream>
using namespace std;
int main()
{
	int *p;
	int i, j, t;
	p = new int[10];
	for (i = 0; i <= 9; i++)
		cin >> p[i];
	for (j = 0; j<9; j++)
	{
		for (i = 0; i<9-j; i++)
		{
			if (p[i]<p[i + 1])
			{
				t = p[i];
				p[i] = p[i + 1];
				p[i + 1] = t;

			}
		}
	}
	for (i = 0; i <= 9; i++)
		cout << p[i] << " ";
	delete[]p;
	return 0;
}

