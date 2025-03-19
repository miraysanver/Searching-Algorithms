#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int dizi[5] = { 6,9,3,5,1 };
	int aranan;
	cout << " aranan sayiyi giriniz " << endl;
	cin >> aranan;
	int adim = sqrt(5);
	int onceki = 0;
	while (dizi[min(adim, 5) - 1] < aranan)
	{
		onceki = adim;
		adim += sqrt(5);
		if (onceki >= 5)
		{
			cout << " sayi dizide bulunamadi " << endl;
			return 0;
		}
	}
	while (dizi[onceki] < aranan)
	{
		onceki++;
		if (onceki == min(adim, 5))
		{
			cout << " sayi dizide bulunamadi " << endl;
			return 0;
		}
	}
	if (dizi[onceki] == aranan)
	{
		cout << " sayi " << onceki << ". indiste bulundu " << endl;
	}
	else
	{
		cout << " sayi dizide bulunamadi " << endl;
	}
	return 0;
}
