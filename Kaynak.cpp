#include <iostream>
#include <stdio.h>
using namespace std;

string tasitTurleri[3] = { "Minibus", "Araba", "Kamyon" };
double saatlikUcretler[3] = { 3,1.5,4.5 };
int tasitKodu;
bool devam = false;
char islemDevami;
double ucret = 0;
double parkSaati = 0;

void Listele() {
	int i = 0;
	for (i; i < 3; i++) {
		cout << "    " << i << "               " << (string)tasitTurleri[i] << "               " << (double)saatlikUcretler[i] << endl;
	}
}


int main() {
	int k = 0, j = 1;
	for (k; k < j; k++) {
		cout << "Tasit Tur No       " << "Tasit Turu       " << "Saatlik Ucret" << endl;
		Listele();
		cout << "Islem yapmak istediginiz aracin kodu: ";
		cin >> tasitKodu;
		cout << "Kac saat park etti?: ";
		cin >> parkSaati;

		ucret = parkSaati * (double)saatlikUcretler[tasitKodu];
		cout << "Odenecek Ucret: " << ucret << endl << "Yapmak istediginiz baska islem var mý? [E/H] ";
		cin >> islemDevami;
		if (islemDevami == 'E') {
			j++;
		}
		else if (islemDevami == 'H') {
			return 0;
		}
		else {
			cout << "Yanlis bir deger girdiniz!" << endl;
		}
	}
	return 0;
}