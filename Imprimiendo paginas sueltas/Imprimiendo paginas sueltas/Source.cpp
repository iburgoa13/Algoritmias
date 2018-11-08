#include <iostream>
#include <vector>
using namespace std;




void resuelve(const vector<int> &v)
{
	int i = 0;
	int primero = v.at(i);
	bool ultimo = false;
	int cont = 0;
	while (i < v.size() - 1)
	{
		if (i < v.size() - 1)
		{
			if (v.at(i) == v.at(i + 1) - 1)
			{
				cont++;
			}
			else if ((v.at(i) != v.at(i + 1) - 1) && cont == 0 && i < v.size() - 1)
			{
				cout << v.at(i) << ",";
				primero = v.at(i+1);
				cont = 0;
			}
			else if ((v.at(i) != v.at(i + 1) - 1) && cont != 0 && i < v.size() - 1)
			{
				cout << primero << "-" << v.at(i) << ",";
				primero = v.at(i+1);
				cont = 0;
			}
		}
		i++;
	}
	if (v.size() > 1)
	{
		if (v.at(i) == v.at(i - 1) + 1 && cont == 0 && v.size() > 1)
		{
			cout << v.at(i - 1) << "-" << v.at(i) << endl;
		}
		else if (v.at(i) == v.at(i - 1) + 1 && cont >= 1)
		{
			cout << primero << "-" << v.at(i) << endl;
		}
		else if (v.at(i) != v.at(i - 1) + 1 && cont == 0 && v.size() > 1)
		{
			cout << v.at(i) << endl;
		}
	}
	if (v.size() == 1)
	{
		cout << v.at(i) << endl;
	}
}

int main()
{
	int n;
	std::cin >> n;
	vector<int> v;
	while (n != 0)
	{
		v.emplace_back(n);
		std::cin >> n;
		while (n != 0)
		{
			v.emplace_back(n);
			std::cin >> n;
		}
		resuelve(v);
		std::cin >> n;
		v.clear();
	}
	return 0;
}