/*#include<iostream>

using namespace std;

class Angajat {

public:
	string nume;
	int varsta;
	float* salariu;
	int vechime;
	const int nrDepartament;
	static int idAngajat;

	Angajat() : nrDepartament(3) {

		this->nume = "Popescu";
		this->varsta = 24;
		this->vechime = 3;
		this->salariu = NULL;
	}

	Angajat(string nume, int varsta, int vechime, int nr) :nrDepartament(nr) {

		this->nume = nume;
		this->varsta = varsta;
		this->vechime = vechime;
		for (int i = 0; i < vechime; i++) {
			this->salariu[i] = 3000 + i;
		}

	}

	Angajat(const Angajat& a) :nrDepartament(a.nrDepartament) {
		this->nume = a.nume;
		this->varsta = a.varsta;
		this->vechime = a.vechime;
		this->salariu = new float[a.vechime];
		for (int i = 0; i < a.vechime; i++) {
			this->salariu[i] = a.salariu[i];
		}

	}

	~Angajat() {
		if (this->salariu) {
			delete[]this->salariu;
		}
	}

	int getVechime() {
		return this->vechime;
	}

	void setVechime(int vechimeMare) {
		if (vechime > 0) {
			this->vechime = vechime;
		}
	}

	float* getSalariu() {
		return this->salariu;
	}

	float getSalariu(int index) {
		if (index >= 0 && index < this->vechime) {
			return this->salariu[index];
		}
	}

	void afisare() {

		cout << "nume" << this->nume << endl;
		cout << "varsta" << this->varsta << endl;
		cout << "vechime" << this->vechime << endl;
		cout << "nr departament" << this->nrDepartament << endl;
		cout << "Id angajat" << this->idAngajat << endl;
	}

	static void modificaIdAngajat(int IdAngajat) {
		if (idAngajat > 3) {
			Angajat::idAngajat = idAngajat;
		}
	}


};

int Angajat::idAngajat = 3;

int main() {
	Angajat a1;
	a1.afisare();

	Angajat a2("Ionescu", 36, 6, 2);
	a2.afisare();

	Angajat::modificaIdAngajat(4);
	a1.modificaIdAngajat(5);

	Angajat a3;
	cout << a3.getSalariu() << endl;
	

} */


/* #define _CRT_SECURE_NO_WARNINGS
#include<iostream>;

using namespace std;

class Yacht {
private:
	static int nrYachturi;
	int capacitate;
	int nrPersoaneImbarcate;
	int* varstaPasageri;
	string nume;

	Yacht() {
		this->capacitate = 1000;
		this->nrPersoaneImbarcate = 700;
		this->nume = "Cruela";
		this->varstaPasageri = NULL;
	}

	Yacht(int capacitate, int nrPersoaneImbarcate, string nume) {
		this->capacitate = capacitate;
		this->nrPersoaneImbarcate = nrPersoaneImbarcate;
		this->nume = nume;
		for (int i = 0; i < nrPersoaneImbarcate; i++) {
			this->varstaPasageri[i] = 20 + i;
		}

	}

	Yacht(const Yacht& y) {
		this->capacitate = y.capacitate;
		this->nrPersoaneImbarcate = y.nrPersoaneImbarcate;
		this->nume = y.nume;
		for (int i = 0; i < nrPersoaneImbarcate; i++) {
			this->varstaPasageri[i] = y.varstaPasageri[i];
		}
	}

	~Yacht() {
		if (this->varstaPasageri) {

			delete[]this->varstaPasageri;
		}
	}


	void afisare(){
		cout << capacitate << this->capacitate << endl;
		cout << nrPersoaneImbarcate << this->nrPersoaneImbarcate << endl;
		cout << nrYachturi << this->nrYachturi << endl;
		cout << nume << this->nume << endl;
		cout << varstaPasageri << this->varstaPasageri << endl;
	}


	int main() {

	}

};*/


/*#include <iostream>

using namespace std;

class Angajat {
public:
	string nume;
	float* salariu;
	int varsta;
	static int idAngajat;
	const int nrDepartament;

	Angajat() : nrDepartament(3) {
		this->nume = "Popescu";
		this->varsta = 33;
		this->salariu = NULL;
	}

	Angajat(string nume, int varsta, int nr) : nrDepartament(nr) {
		this->nume = nume;
		this->varsta = varsta;
		this->salariu = new float[varsta];
		for (int i = 0; i < varsta; i++) {
			this->salariu[i] = 2000 + i;
		}
	}

	Angajat(const Angajat& a) : nrDepartament(a.nrDepartament) {
		this->nume = a.nume;
		this->varsta = a.varsta;
		this->salariu = new float[a.varsta];
		for (int i = 0; i < varsta; i++) {
			this->salariu[i] = a.salariu[i];
		}

	}

	~Angajat() {
		if (this->salariu) {
			delete[]this->salariu;
		}
	}

	};*/

