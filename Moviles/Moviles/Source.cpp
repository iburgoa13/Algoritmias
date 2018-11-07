#include <iostream>


using namespace std;


bool esbalanceado(int &pi, int &di, int& pd, int &dd)
{
	bool balanceoIz = true;
	bool balanceoDer = true;
	int ppi, ddi, ppd, ddd;
	if (pi == 0)
	{
		std::cin >> ppi >> ddi >> ppd >> ddd;

		balanceoIz = esbalanceado(ppi, ddi, ppd, ddd);
		pi = ppi + ppd;
	}
	 if (pd == 0)
	{
		std::cin >> ppi >> ddi >> ppd >> ddd;
		balanceoDer = esbalanceado(ppi, ddi, ppd, ddd);
		pd = ppd + ppi;
	}
	else 
	{
		return  (pi*di == pd * dd);
	}
	return balanceoDer && balanceoIz && (pi*di == pd * dd);
	/*
	 if (pi == 0)
	{
		std::cin >> ppi >> ddi >> ppd >> ddd;
		balanceoIz= esbalanceado(ppi, ddi, ppd, ddd);
		pi = ppi*ddi;//(ppi + ppd) / 2;
	//	return balanceoIz;
	}
	 if (pd == 0)
	{
		std::cin >> ppi >> ddi >> ppd >> ddd;
		balanceoDer = esbalanceado(ppi, ddi, ppd, ddd);
		/*pi = pi * di + pd * dd;
		pd = ppd*ddd;
	//	return balanceoDer;
	}
	 if (pi != 0 && pd != 0)
	 {
		 int k = pi * di;
		 return (k) == (pd * dd);
	 }
	
	return balanceoDer && balanceoIz && (pi*di==pd*dd);
	*/
}


int main()
{
	int pi, di, pd, dd;
	std::cin >> pi >> di >> pd >> dd;
	while (pi != 0 || di != 0 || pd != 0 || dd != 0)
	{
		if (esbalanceado(pi, di, pd, dd))
		{
			cout << "SI" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		std::cin >> pi >> di >> pd >> dd;
	}
	return 0;
}