#include <iostream>
#include <string>
using namespace std;
const string s = "SI";
const string no = "NO";


bool resuelve(int n)
{
	int variable = -1;
	int numero;
	bool prueba = true;
	for (int i = 0; i < n; i++)
	{
		cin >> numero;
		if (numero > variable)
		{
			variable = numero;
		}
		else { prueba = false; }
	}
	return prueba;
}


int main()
{

	int n;
	cin >> n;
	while (n != 0)
	{
		if (resuelve(n))
		{
			cout << s << endl;
		}
		else { 
			cout << no << endl;
		}
		cin >> n;
	}
	return 0;
}