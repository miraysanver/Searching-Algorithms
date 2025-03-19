#include<iostream>
using namespace std;
int main()
{// selection sort ile dizi sıralanır
	int A[5] = { 4,6,2,3,8 };
	int gecici;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (A[i] > A[j])
			{
				gecici = A[i];
				A[i] = A[j];
				A[j] = gecici;
			}
		}
	}

	// binary search kısmı
	int aranan;
	cout << " aranan elemani giriniz " << endl;
	cin >> aranan;
	int enkucukindis = 0, enbuyukindis = 4; // dizinin en küçük ve en büyük indisleri bulunur
	int bulunanindis = -1;// ekrana sonuç yazılırken bulunan indise ihtiyaç var -1 verdik çünkü zaten indis 0 dan başlıyor ve bu değeri alamaz

	while (enkucukindis <= enbuyukindis)//en küçük indisle en büyük indis eşitlenene kadar toplayıp bölme işlemi yapılır
	{
		int ortadakiindis = (enkucukindis + enbuyukindis) / 2;// orta eleman bulunur aranan sayının bu ortadaki indisten büyük ya da küçük olma durumuna bakılır
		if (A[ortadakiindis] == aranan) // ortadaki indis elemanı ile aranannın aynı olup olmadığı kontrol edilir
		{
			bulunanindis = ortadakiindis; // eğer aynı ise bulunan indise o indis atanır ekrana yazmak için
			break;
		}
		else if (A[ortadakiindis] < aranan)// ortadaki indis elemanı aranandan küçükse
		{
			enkucukindis = ortadakiindis + 1; // en küçük indis sınırı ortadaki indise 1 indis daha ekleyerek küçültülür
		}								      // ortadakine 1 ekledik çünkü ortadaki de aranandan küçük 
		else
		{
			enbuyukindis = ortadakiindis - 1;// eğer ortadaki indisin elemanı aranandan büyükse ortadaki indisten 1 çıkarılarak sınır küçültülür
		}									 // ortadakinden 1 çıkardık çünkü aranan ortadakinden de küçük onu başta konrtol ettik
	}
	if (bulunanindis != -1) // aranan değer bulunduysa bulunan indis değeri değişeceğinden -1 e eşit değilse şartı koyduk böylece aranan bulunmuş demektir
	{
		cout << " aranan sayi " << bulunanindis << ". indiste bulundu " << endl;
	}
	else  // bulunan indisin değeri değişmediyse yani -1 e eşitse aranan sayi bulunamamıştır bu ekrana yazılır
	{
		cout << " aranan sayi dizide bulunamadi " << endl;
	}
	return 0;
}
