#include <iostream>
#include <string>
#include <vector>



using namespace std;

int resuelve(int n)
{
	int suma = 0;
	if (n < 10)
	{
		cout << n;
		return n;
	}
	else
	{
		suma = resuelve(n / 10) + n % 10;
		cout << " + " << n % 10;
		return suma;
	}
	
}


int main()
{
	int n;
	std::cin >> n;
	int x;
	while (n > -1)
	{
		x = resuelve(n);
		cout << " = " << x << endl;
		std::cin >> n;

	}
	/*
	string n;
	getline(cin, n);
	while (n != "-1")
	{
		cout << resuelve(n) << endl;
		getline(cin, n);
	}
	*/
	return 0;
}