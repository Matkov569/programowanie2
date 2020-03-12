#include <iostream>
#include <string>
using namespace std;

class klasa {
public:
	string profil;
	int *rocznik;
		klasa() {
			profil = "";
			rocznik = nullptr;
		};
		klasa(string p, int *r) :profil(p), rocznik(r) {
			cout << "Utworzono klase " << profil << "/" << *rocznik << endl;
		};
};

class oddzial {
public:
	string profil;
	int* rocznik;
		oddzial(string p, int *r):profil(p),rocznik(r) {
			cout << "Utworzono oddzial " << profil << "/" << *rocznik << endl;

		};
		oddzial(const oddzial &org){
			profil = org.profil;
			rocznik = new int;
			*rocznik = *org.rocznik;
			cout << "Skopiowano oddzial " << profil << "/" << *rocznik << endl;
		};
};

void info(oddzial &source) {
	cout << "INFO>>"<<endl<<" typ: oddzial"<<endl<<" wartosc: " << source.profil << "/" << *(source.rocznik) << endl << " adres: " << source.rocznik << endl << endl;
};
void info(klasa &source) {
	cout << "INFO>>" << endl << " typ: klasa" << endl << " wartosc: " << source.profil << "/" << *(source.rocznik) << endl << " adres: " << source.rocznik << endl << endl;
};
int main() {
	int R1 = 1999;
	int R2 = 2000;
	int* wsk1 = &R1;
	int* wsk2 = &R2;

	//klasa* I1 = new klasa("Inf", wsk1);
	//klasa* I2 = I1;

	//oddzial* O1 = new oddzial("Inf", wsk2);
	//oddzial* O2 = new oddzial(*O1);
	//
	//cout<<endl;

	//info(*I1);
	//info(*I2);
	//info(*O1);
	//info(*O2);

	klasa I1("Inf", wsk1);
	klasa I2(I1);

	oddzial O1("Inf", wsk2);
	oddzial O2(O1);
	
	cout<<endl;

	info(I1);
	info(I2);
	info(O1);
	info(O2);

	/*cout << I1.rocznik << endl;
	cout << I2.rocznik << endl;
	cout << O1.rocznik << endl;
	cout << O2.rocznik << endl;*/


	getchar();
	return 0;
}






