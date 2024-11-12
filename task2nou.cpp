#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Laptop {
private:
	int memorieRam;
	int nrLaptopuri;
	string marca;
	int* pret;
	static int idLaptop;

public:

	Laptop() {
		this->memorieRam = 0;
		this->nrLaptopuri = 0;
		this->marca = "noname";
		this->pret = nullptr;
	}

	Laptop(int memorieRam, int nrLaptopuri, string marca, const int* pret) {
		this->memorieRam = memorieRam;
		this->nrLaptopuri = nrLaptopuri;
		this->marca = marca;
		this->pret = new int[nrLaptopuri];
		for (int i = 0; i < nrLaptopuri; i++) {
			this->pret[i] = pret[i];
		}
	}

	~Laptop() {
		if (this->pret != nullptr) {
			delete[]this->pret;
		}
	}



	void afisare() {
		cout << "Memorie Ram: " << this->memorieRam << endl;
		cout << "Numar laptopuri: " << this->nrLaptopuri << endl;
		cout << "Marca: " << this->marca << endl;
		if (this->pret != nullptr)
		{
			for (int i = 0; i < nrLaptopuri; i++) {
				cout << "Pret: " << this->pret[i] << " , " << endl;
			}
		}
		cout << endl;
		cout << "Id laptop: " << this->idLaptop << endl;
	}

};

int Laptop::idLaptop = 0;

class Telefon {
private:
	int nrGB;
	int nrTelefoane;
	string marca;
	float* pret;
	static int idTelefon;

public:

	Telefon() {
		this->nrGB = 0;
		this->nrTelefoane = 0;
		this->marca = "noname";
		this->pret = nullptr;
	}

	Telefon(int nrGB, int nrTelefoane, string marca, const float* pret) {
		this->nrGB = nrGB;
		this->nrTelefoane = nrTelefoane;
		this->marca = marca;
		this->pret = new float[nrTelefoane];
		for (int i = 0; i < nrTelefoane; i++) {
			this->pret[i] = pret[i];
		}
	}

	~Telefon() {
		if (this->pret != nullptr) {
			delete[]this->pret;
		}
	}

	void afisare1() {
		cout << "GB:  " << this->nrGB << endl;
		cout << "Numar telefoane: " << this->nrTelefoane << endl;
		cout << "Marca: " << this->marca << endl;
		if (this->pret != nullptr)
		{
			for (int i = 0; i < nrTelefoane; i++) {
				cout << "Pret: " << this->pret[i] << " , " << endl;
			}
		}
		cout << endl;
		cout << "Id laptop: " << this->idTelefon << endl;
	}

};

int Telefon::idTelefon = 0;

int main() {

	Laptop l1;
	l1.afisare();

	Laptop l2(12, 3, "HP", new int[2] {30, 40});
	l2.afisare();

	Telefon t1;
	t1.afisare1();

	Telefon t2(256, 4, "Samsung", new float[3] {10, 20, 30});
	t2.afisare1();



}
