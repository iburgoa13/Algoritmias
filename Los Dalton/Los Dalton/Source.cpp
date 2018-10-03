#include <iostream>
using namespace std;



void resuelve(int n)
{
	int k,comparador ;
	int cont1 = 1,cont2=1;
	bool dalton = true;
	cin >> k;
	comparador = k;
	n = n - 1;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k > comparador && dalton && cont1==1)
		{
			comparador = k;
			//cont1++;
			cont2 = 0;
		}
		else if (k < comparador && dalton && cont2 ==1)
		{
			comparador = k;
			//cont2++;
			cont1 = 0;
		}
		else
		{
			dalton = false;
		}
		

	}
	if (dalton)
	{
		cout << "DALTON" << endl;
	}
	else
	{
		cout << "DESCONOCIDOS" << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		resuelve(n);
		cin >> n;
	}
	return 0;
}