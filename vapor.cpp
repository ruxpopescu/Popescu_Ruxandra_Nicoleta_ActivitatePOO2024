//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//class Vapor
//{
//private:
//	static int nrVapoare;
//	int capacitate;
//	int nrPersoane;
//	int* nrPasageri;
//	string numeVapor;//pentru denumire
//	int idVapor;//pentru a identifica vaporul
//
//public:
//	Vapor() {
//		this->capacitate = 0;
//		this->nrPersoane = 0;
//		this->nrPasageri = 0;
//		this->numeVapor = "noname";
//		this->idVapor = 0;
//	}
//
//	Vapor(int capacitate, int nrPersoane, int* nrPasageri, string numeVapor, int idVapor)
//	{
//		this->capacitate = capacitate;
//		this->nrPersoane = nrPersoane;
//		this->numeVapor = numeVapor;
//		this->idVapor = idVapor;
//		this->nrPasageri = new int[nrPersoane];
//		for (int i = 0; i < nrPersoane; i++) {
//			this->nrPasageri[i] = nrPasageri[i];
//		}
//	}
//
//	~Vapor() {
//		if (this->nrPasageri != nullptr) {
//
//			delete[]this->nrPasageri;
//		}
//	}
//
//	Vapor(const Vapor& v) {
//		this->capacitate = v.capacitate;
//		this->nrPersoane = v.nrPersoane;
//		this->numeVapor = v.numeVapor;
//		this->idVapor = v.idVapor;
//		this->nrPasageri = new int[v.nrPersoane];
//		for (int i = 0; i < v.nrPersoane; i++) {
//			this->nrPasageri[i] = v.nrPasageri[i];
//		}
//
//
//	}
//
//	Vapor operator=(const Vapor& v)
//	{
//		if (this != &v)
//		{
//			if (this->nrPasageri != nullptr)
//			{
//
//				delete[]this->nrPasageri;
//			}
//			this->capacitate = v.capacitate;
//			this->nrPersoane = v.nrPersoane;
//			this->numeVapor = v.numeVapor;
//			this->idVapor = v.idVapor;
//			this->nrPasageri = new int[v.nrPersoane];
//			for (int i = 0; i < v.nrPersoane; i++) 
//			{
//				this->nrPasageri[i] = v.nrPasageri[i];
//			}
//
//		}
//		return *this;
//	}
//
//
//	void afisare() {
//		cout << "Numarul de vapoare este: " << this->nrVapoare << endl;
//		cout << "Capacitatea vaporului este : " << this->capacitate << endl;
//		cout << "Numarul de persoane : " << this->nrPersoane << endl;
//		if (this->nrPasageri != 0) {
//			cout << "Nr de pasageri este :" << this->nrPasageri << endl;
//
//		}
//
//		else {
//			cout << "Nu sunt pasageri" << endl;
//		}
//
//		cout << "Numele vaporului este: " << this->numeVapor << endl;
//		cout << "Vaporul are id ul : " << this->idVapor << endl;
//
//	}
//
//	int getCapacitate(){
//		return this->capacitate;
//	}
//
//	string getNumeVapor() {
//		return this->numeVapor;
//	}
//
//	int getIdVapor() {
//		return this->idVapor;
//	}
//
//	void setCapacitate(int capacitate) {
//		this->capacitate = capacitate;
//	}
//
//	void setNumeVapor(string numeVapor) {
//		this->numeVapor = numeVapor;
//	}
//
//	void setIdVapor(int idVapor) {
//		this->idVapor = idVapor;
//	}
//
//	friend ostream& operator<<(ostream& o, Vapor v);
//	friend istream& operator>>(istream& i, Vapor v);
//
//
//};
//
//
//
//int Vapor :: nrVapoare = 3;
//
//ostream& operator<<(ostream& o, Vapor v) {
//	o << "numarul de vapoare : " << v.nrVapoare << endl;
//	o << "capacitate :" << v.capacitate << endl;
//	o << "numar pasageri: " << v.nrPasageri << endl;
//	o << "numar persone: " << v.nrPersoane << endl;
//	o << "nume vapor: " << v.numeVapor << endl;
//	o << "id vapor" << v.idVapor << endl;
//
//}
//
//istream& operator>>(istream& i, Vapor v) {
//	cout << "Numar vapoare: ";
//	i >> v.nrVapoare;
//
//	cout << "Capacitate:";
//	i >> v.capacitate;
//
//	cout << "Numar pasageri: ";
//	if (v.nrPasageri != nullptr)
//	{
//
//		delete[]v.nrPasageri;
//	}
//	for (int i = 0; i < v.nrPersoane; i++) {
//		cout << "Nr pasageri" << i + 1 << " ";
//		i >> v.nrPasageri[i];
//	}
//
//	cout << "Numar persoane: ";
//	i >> v.nrPersoane;
//
//	cout << "Nume vapor:";
//	i >> v.numeVapor;
//
//	cout << "ID vapor: ";
//	i >> v.idVapor;
//
//	
//}
//
//int main() {
//
//	Vapor v1;
//	v1.afisare();
//
//	Vapor v2(8, 10, new int[5] {1, 2, 3, 4, 5}, "Valuri", 5);
//	v2.afisare();
//
//	Vapor v3(v2);
//	v3. afisare();
//
//	cout << "Capacitatea vaporului este :" << v2.getCapacitate() << endl;
//	cout << "Numele vaporului: " << v2.getNumeVapor() << endl;
//	cout << "Id ul vaporului este :" << v2.getIdVapor() << endl;
//
//	v2.setCapacitate(10);
//	v2.afisare();
//
//	v2.setNumeVapor("Apa buna");
//	v2.afisare();
//
//	v2.setIdVapor(2);
//	v2.afisare();
//
//	v2 = v3;
//
//	cout << v3;
//	cin >> v3;
//
//	cout << endl << v3;
//
//
//
//}