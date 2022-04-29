#include <iostream>
using namespace std;


void fibonacci(int n);

int main()
{
	int n;


	cout << "Ile liczb?" << endl;
	cin >> n;


	fibonacci(n);

}

void fibonacci(int n)
{

	long long a = 0, b = 1;

	for (int i = 0; i < n; i++)
	{
		cout << b << " ";
		b += a;
		a = b - a;

	}
}
