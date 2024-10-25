#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Chitara {
public:
	string culoare;
	char* nume;
	string tip;
	const int nrCorzi;
	static int idInstrument;

	Chitara() :nrCorzi(idInstrument++) {
		this->culoare = "negru";
		this->nume = new char[strlen("Harley") + 1];
		strcpy(this->nume, "Harley");
		this->tip = "Acustica";
	}

	Chitara(const char* nume, string culoare) : nrCorzi(idInstrument++) {
		this->culoare = culoare;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->tip = "Acustica";
	}

	Chitara(const char* nume, string tip, const string culoare) : nrCorzi(idInstrument++) {
		this->culoare = culoare;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->tip = tip;
	}

	void afisare1() {
		cout << "culoare:" << this->culoare << endl;
		cout << "nume:" << this->nume << endl;
		cout << "tip:" << this->tip << endl;
		cout << "Numar corzi:" << this->nrCorzi << endl;
		cout << "Id Instrument" << this->idInstrument << endl;
	}

	~Chitara() {
		delete[] nume;
	}


};
int Chitara::idInstrument = 0;


class Pian {
public:
	string culoare;
	char* nume;
	string tip;
	const int nrClape;
	static int idInstrument;

	Pian() :nrClape(idInstrument++) {
		this->culoare = "Alb";
		this->nume = new char[strlen("Yamaha") + 1];
		strcpy(this->nume, "Yamaha");
		this->tip = "Acustica";
	}

	Pian(const char* nume, string culoare) : nrClape(idInstrument++) {
		this->culoare = culoare;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->tip = "Digital";
	}
	Pian(const char* nume, string tip, const string culoare) : nrClape(idInstrument++) {
		this->culoare = culoare;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->tip = tip;
	}


	void afisare2() {
		cout << "culoare:" << this->culoare << endl;
		cout << "nume:" << this->nume << endl;
		cout << "tip:" << this->tip << endl;
		cout << "Numar clape:" << this->nrClape << endl;
		cout << "Id instrument" << this->idInstrument << endl;
	}

	~Pian() {
		delete[] nume;
	}
};
int Pian::idInstrument = 0;

class Toba {
public:
	char* nume;
	string tip;
	int nrTobe;
	const float diametru;
	static int idInstrument;

	Toba() : diametru(idInstrument++) {
		this->tip = "toba bas";
		this->nume = new char[strlen("Millenium") + 1];
		strcpy(this->nume, "Millenium");
		this->nrTobe = 3;
	}

	Toba(const char* nume, string tip) : diametru(idInstrument++) {
		this->tip = tip;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->nrTobe = 4;

	}

	Toba(const char* nume, string tip, int nrTobe) : diametru(idInstrument++) {
		this->nrTobe = nrTobe;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->tip = tip;
	}



	void afisare3() {
		cout << "nume:" << this->nume << endl;
		cout << "tip:" << this->tip << endl;
		cout << "Diameteru:" << this->diametru << endl;
		cout << "Id instrument" << this->idInstrument << endl;
	}

	~Toba() {
		delete[] nume;
	}
};
int Toba::idInstrument = 0;


int main() {

	Chitara c1;
	c1.afisare1();
	Chitara c2("Fender", "rosu");
	c2.afisare1();
	Chitara c3("Fender", "Electric", "rosu");
	c3.afisare1();

	Pian p1;
	p1.afisare2();
	Pian p2("Steinway", "negru");
	p2.afisare2();
	Pian p3("Steinway", "Grand", "negru");
	p3.afisare2();

	Toba t1;
	t1.afisare3();
	Toba t2("Pearl", "toba bas");
	t2.afisare3();
	Toba t3("Pearl", "toba bas", 3);
	t3.afisare3();



}