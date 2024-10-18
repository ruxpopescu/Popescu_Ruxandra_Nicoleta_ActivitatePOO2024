#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


class Magazin {
public:
	string oras;
	int nrAngajati;
	float suprafata;
	const int anDeschidere; 
	static int impozitM2;





	Magazin() :anDeschidere(2024) {

		this->oras = "bucuresti";
		this->nrAngajati = 2;
		this->suprafata = 50;

	}

	
	Magazin(string oras, int nrAngajati, float suprafata, int an) :anDeschidere(an) {  

		this->oras = oras;
		this->nrAngajati = nrAngajati;
		this->suprafata = suprafata;

	}

	void afisare() {
		cout << "oras:" << this->oras << endl;
		cout << "numar angajati:" << this->nrAngajati << endl;
		cout << "suprafata:" << this->suprafata << endl;
		cout << "an deschidere:" << this->anDeschidere << endl;
		cout << "impozit pe patrat:" << this->impozitM2 << endl;
	}

	
	float calculeazaSuprafataMedie() {
		if (this->nrAngajati != 0) {
			return this->suprafata / this->nrAngajati;

		}

		else {
			return 0;
		}

	}       
	static void modificaImpozit(int impozit) {
		if (impozit > 0) {
			Magazin::impozitM2 = impozit;
		}

	}
	static float calculeazaSuprafataTotala(Magazin* vector, int nrMagazine)
	{
		float suma = 0;
		for (int i = 0; i < nrMagazine; i++) {
			suma + vector[i].suprafata;
		}
		return suma;

	}      

};




int Magazin::impozitM2 = 2;
int main() {


	Magazin m1;
	m1.afisare();

	Magazin m2("iasi", 7, 200, 2019);
	m2.afisare();

	Magazin* pointer = new Magazin("timisoara", 4, 120, 2022);
	
	pointer->afisare();

	cout << "suprafata medie per angajat este de :" << pointer->calculeazaSuprafataMedie() << endl;

	int nrMagazine = 3;   
	Magazin* vector = new Magazin[nrMagazine];


	for (int i = 0; i < nrMagazine; i++) {
		cout << "vector\n";
		vector[i].afisare(); // imi mai ramane doar sa accesez prin.


	}
	
	Magazin::modificaImpozit(3);
	m1.modificaImpozit(4);

	cout << "suprafata totala:" << Magazin::calculeazaSuprafataTotala(vector, nrMagazine) << endl;

	delete[]vector;
	delete pointer;
};