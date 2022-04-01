#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 1;
	int mwd;

	cout << "Podaj a:";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;



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
	cout << "Najwiekszy --> " << a << endl;


}
