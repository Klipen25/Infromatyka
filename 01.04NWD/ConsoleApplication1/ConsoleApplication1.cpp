#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 1;
	int nww;

	cout << "Podaj a:";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;

	int iloczyn = b * a;

	while (a != b)
	{
		if (a < b)
		{
			b -= a;
		}
		else
		{
			a -= b;
		}


	}
	nww = iloczyn / a;

	cout << "Najwiekszy --> " << a << endl;
	cout << "Nww to -->" << nww << endl;

}
