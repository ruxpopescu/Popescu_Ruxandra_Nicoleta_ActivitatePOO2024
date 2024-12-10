//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//
//class Magazin {
//private:
//	string oras;
//	int nrAngajati;//
//	float* salarii;
//	float suprafata;//
//	const int anDeschidere;
//	static int impozitM2;
//
//public:
//	Magazin() :anDeschidere(2024), nrAngajati(0) {
//
//		this->oras = "bucuresti";
//		this->nrAngajati = 2;
//		this->suprafata = 50;
//		this->salarii = NULL;//NULL e echivalent 0, nullptr
//
//	}
//
//	Magazin(string oras, int nrAngajati, float suprafata, int an) :anDeschidere(an) {
//
//		this->oras = oras;
//		this->nrAngajati = nrAngajati;
//		this->suprafata = suprafata;
//		this->salarii = new float[nrAngajati];
//		for (int i = 0; i < nrAngajati; i++) {
//			this->salarii[i] = 2000 + i;
//		}
//
//	}
//
//	Magazin(const Magazin& m):anDeschidere(m.anDeschidere) {  //&=referinta la adresa de memorie, fiind referinta constanta a clasei(in acest caz magazin)
//
//		this->oras = m.oras;
//		this->nrAngajati = m.nrAngajati;
//		this->salarii = new float[m.nrAngajati];
//		for (int i = 0; i < m.nrAngajati; i++) {
//			this->salarii[i] = m.salarii[i];
//		}
//		this->suprafata = m.suprafata;
//
//	}     // ":" - lista de initializare a constrcutorului(cu atributul constant)
//
//	Magazin operator=(const Magazin& m) {
//		if (this != &m) {
//			if (this->salarii)
//			{
//				delete[]this->salarii;
//			}
//			this->oras = m.oras;
//			this->nrAngajati = m.nrAngajati;
//			this->salarii = new float[m.nrAngajati];
//			for (int i = 0; i < m.nrAngajati; i++) {
//				this->salarii[i] = m.salarii[i];
//			}
//			this->suprafata = m.suprafata;
//
//		}
//		return *this;
//	}
//
//	Magazin operator+(Magazin m)const {
//		Magazin temp = *this;
//		temp.suprafata = this->suprafata + m.suprafata;
//		return temp;
//	}
//
//	Magazin operator+=(Magazin m) {
//		this->suprafata += m.suprafata;
//		return *this;
//	}
//
//	Magazin operator+(float suprafata) const {
//		Magazin magazin = *this;
//		magazin.suprafata = this->suprafata + suprafata;
//		return magazin;
//	}
//
//
//	~Magazin() {
//		if (this->salarii) {
//			delete[]this->salarii;
//		}
//	}
//
//	int getNrAngajati() {
//		return this->nrAngajati;
//	}
//
//	void setNrAngajati(int nrAngajati, float * salarii) {
//		if (nrAngajati > 0) {
//			this->nrAngajati = nrAngajati;
//			if (this->salarii != NULL) {
//				delete[]this->salarii;
//			}
//			this->salarii = new float[nrAngajati];
//			for (int i = 0; i < nrAngajati; i++) {
//				this->salarii[i] = salarii[i];
//			}
//		}
//	}
//
//	float getSuprafata() {
//		return this->suprafata;
//	}
//
//	void setSuprafata(float suprafataNoua) { //suprafataNoua e un simgur nume, putem pune orice, dpoar suprafata
//		if (suprafata > 0) {
//			this->suprafata = suprafata;
//		}
//	}
//
//	float* getSalarii() {
//		return this->salarii;
//	}
//
//	float getSalariu(int index) {
//		if (index >= 0 && index < this->nrAngajati) {
//			return this->salarii[index];
//		}
//	}
//
//	void afisare() {
//		cout << "oras:" << this->oras << endl;
//		cout << "numar angajati:" << this->nrAngajati << endl;
//		cout << "suprafata:" << this->suprafata << endl;
//		cout << "an deschidere:" << this->anDeschidere << endl;
//		cout << "impozit pe patrat:" << this->impozitM2 << endl;
//	}
//
//
//	float calculeazaSuprafataMedie() {
//		if (this->nrAngajati != 0) {
//			return this->suprafata / this->nrAngajati;
//
//		}
//
//		else {
//			return 0;
//		}
//
//	}
//	static void modificaImpozit(int impozit) {
//		if (impozit > 0) {
//			Magazin::impozitM2 = impozit;
//		}
//
//	}
//	static float calculeazaSuprafataTotala(Magazin* vector, int nrMagazine)
//	{
//		float suma = 0;
//		for (int i = 0; i < nrMagazine; i++) {
//			suma + vector[i].suprafata;
//		}
//		return suma;
//
//	}
//
//	friend Magazin operator+(float suprafataNoua, Magazin magazin);
//
//	friend ostream& operator<< (ostream& o, Magazin m);
//
//	friend istream& operator>> (istream& i, Magazin& m);
//};
//
//
//
//int Magazin::impozitM2 = 2;
//
//Magazin operator+(float suprafataNoua, Magazin magazin) {
//	Magazin magazin1 = magazin;
//	magazin1.suprafata += suprafataNoua;
//	return magazin;
//
//}
//
//ostream & operator<< (ostream& o, Magazin m){
//	o << "oras:" << m.oras << endl;
//	o << "numar angajati:" << m.nrAngajati << endl;
//	o << "suprafata:" << m.suprafata << endl;
//	o << "an deschidere:" << m.anDeschidere << endl;
//	o << "impozit pe patrat:" << m.impozitM2 << endl;
//
//}
//
//istream& operator>> (istream& i, Magazin& m) {
//	cout << "Oras: ";
//	i >> m.oras;
//	cout << "Nr angagati";
//	i >> m.nrAngajati;
//	if (m.salarii != NULL) {
//		delete[]m.salarii;
//	}
//	for (int i = 0; i < m.nrAngajati; i++) {
//		cout << "Salariul" << i + 1 << " ";
//		i >> m.salarii[i];
//	}
//
//
//	cout << "Suprafata";
//	i >> m.suprafata;
//	
//	cout << "Impozit: ";
//	i >> m.impozitM2;
//}
//
//
//
//int main() {
//
//	Magazin m1;
//	cout << m1.getNrAngajati() << endl;
//	m1.setNrAngajati(6, new float[6]{2,5,4,8,6,3});//initializare in line
//	cout << m1.getNrAngajati() << endl;
//
//	Magazin m2("Bucuresti", 3, 80, 2019);
//	//cout << m2.getSalarii() << endl;//va returna adresa 00000254A33261E0 intrucat e pointer
//	cout << m2.getSalarii()[1] << endl;//va returna 2001cum trebuie!!!
//	cout << m2.getSalariu(1) << endl;
//	m2.setNrAngajati(5, new float[5]{5,8,3,9,4});
//
//	cout << m2.getSalariu(3) << endl;
//
//	Magazin* vector = new Magazin[100];
//	delete[]vector;// se apeleaza de 100 de ori
//
//	Magazin m3(m2);
//	Magazin m4 = m2;
//
//	m4 = m3;
//
//	m4 = m2 + m3;
//	
//	m4 += m2;
//
//	m4 = m2 + 20.0f;
//
//	m4 = 30.0f + m2;
//
//	cout << m4;
//	cin >> m4;
//
//	cout << endl << m4;
//
//	return 765756;
//};
//
////cand avem alocari dinamice. ovligatoriu detsructor si constructor de copiere!!
//
////tip returnat nume(lista parametri)