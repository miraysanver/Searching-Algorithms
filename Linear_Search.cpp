#include<iostream>
using namespace std;
int main()
{
	int A[5] = { 67,90,34,62,45 };
	bool bulundu = false;
	int aranan;
	cout << " aradiginiz degeri giriniz " << endl;
	cin >> aranan;
	for (int i = 0; i < 5; i++)
	{
		if (A[i] == aranan)
		{
			cout << " aranan deger " << i + 1 << ". siradadair " << endl;
			bulundu = true;
			break;
		}
	}
	if (!bulundu)
	{
		cout << " aradiginiz deger bulunamadi " << endl;
	}
	return 0;
}
