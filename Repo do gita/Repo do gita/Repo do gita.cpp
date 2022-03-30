#include <iostream>
using namespace std;

int main()
{
	int lp = 0;
	int p = 2;
	int n;
	int d;
	bool Tak = true;

	cout << "Ile liczb ma byc ";
	cin >> n;

	while (lp < n)
	{
		Tak = true;
		for (int i = 2; i <= p - 1; i++)
		{
			if (p % i == 0)
			{
				Tak = false;
				
			}
		
		}
		if (Tak == true)
		{
			cout << p << endl;

			lp = lp + 1;
		}

		p = p + 1;

	}

	

}
