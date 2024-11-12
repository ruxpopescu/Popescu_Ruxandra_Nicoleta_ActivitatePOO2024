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

	Laptop(const Laptop& l) {
		this->memorieRam = l.memorieRam;
		this->nrLaptopuri = l.nrLaptopuri;
		this->marca = l.marca;
		this->pret = new int[l.nrLaptopuri];
		for (int i = 0; i < l.nrLaptopuri; i++) {
			this->pret[i] = l.pret[i];
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

	int getMemorieRam() {
		return this->memorieRam;
	}

	void setMemorieRam(int memorieRam) {
		if (memorieRam > 0) {
			this->memorieRam = memorieRam;
		}
	}

	int getnrLaptopuri() {
		return this->nrLaptopuri;
	}

	void setNrLaptopuri() {
		if (nrLaptopuri > 0) {
			this->nrLaptopuri = nrLaptopuri;
		}
	}

	Laptop operator=(const Laptop& l) {
		if (this != &l) {
			this->memorieRam = l.memorieRam;
			this->nrLaptopuri = l.nrLaptopuri;
			this->marca = l.marca;
			this->pret = new int[l.nrLaptopuri];
			for (int i = 0; i < l.nrLaptopuri; i++) {
				this->pret[i] = l.pret[i];
			}
			return *this;
		}
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

	Telefon(const Telefon& t) {
		this->memorieRam = t.memorieRam;
		this->nrLaptopuri = t.nrLaptopuri;
		this->marca = t.marca;
		this->pret = new int[t.nrLaptopuri];
		for (int i = 0; i < t.nrLaptopuri; i++) {
			this->pret[i] = t.pret[i];
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

	int getNrGB() {
		return this->nrGB;
	}

	void setNrGB(int nrGB) {
		if (nrGB > 0) {
			this->nrGB = nrGB;
		}
	}

	int getnrTelefoane() {
		return this->nrTelefoane;
	}

	void setNrTelefoane() {
		if (nrTelefoane > 0) {
			this->nrTelefoane = nrTelefoane;
		}
	}

	Telefon operator=(const Telefon& t) {
		if (this != &t) {
			this->memorieRam = t.memorieRam;
			this->nrLaptopuri = t.nrLaptopuri;
			this->marca = t.marca;
			this->pret = new int[t.nrLaptopuri];
			for (int i = 0; i < t.nrLaptopuri; i++) {
				this->pret[i] = t.pret[i];
			}
			return*this;
		}
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

	Laptop l3(l2);
	l3.afisare();

	Telefon t3(t2);
	t3.afisare1();

	cout << "Memoria RAM este " << l2.getMemorieRAM() << endl;
	cout << "Numarul de laptopuri este : " << l2.getNrLaptopuri() << endl;

	l2.setMemorieRAM(23);
	l2.afisare();
	l2.setNrLaptopuri(20);
	l2.afisare();


	cout << "Numarul GB este : " << t2.getNrGB() << endl;
	cout << "Numarul de telefoane este: " << t2.getNrTelefoane() << endl;

	t2.setNrGB(128);
	t2.afisare1();
	t2.setNrTelefoane(10);
	t2.afisare1();

	l2 = l3;
	t2 = t3;

}
