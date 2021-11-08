#include <iostream>

using namespace std;

class Odl
{
	public:
		float x,y;
		float a = 0.621371;
		float b = 3280.84;
		double przeliczanie()
		{
			y=x;
			x=x*a;
			y=y*b;
		}
	void wczytaj()
	{
	cout<<"podaj odleglosc w systemie SI(jednostki km 1km=0.001m): ";
	cin>>x;	
	}
	void wypisz()
	{
	cout<<"wartosc w milach angielskich: "<<x;
	cout<<"wartosc w stopach angielskich: "<<y;
	}	
		
	void metryczka()
	{
		cout<<"Autor: "<<endl;
		cout<<"\t Eryk Grzebieniak"<<endl;
		cout<<"\t 3cg"<<endl;
	}	
};

int main()
{
	Odl *w_ok;
	w_ok = new Odl;
	w_ok->metryczka();
	w_ok->wczytaj();
	w_ok->przeliczanie();
	w_ok->wypisz();
	
	delete w_ok;
	return 0;
}
