//#define _CRT_SECURE_NO_WARNING
//#include<iostream>
//
//using namespace std;
//
//class Sejur {
//private: 
//	int idSejur;
//	string destinatie;
//	float pretBaza;
//	int nrExcursiiOptionale;
//	float* pretExcursie;
//	int idAvion;
//	int nrPersoane;
//
//public:
//	Sejur() {
//		this->idSejur = 0;
//		this->destinatie = nullptr;
//		this-> pretBaza = 0;
//		this->nrExcursiiOptionale = 0;
//		this->pretExcursie = 0;
//		this->idAvion = 0;
//		this->nrPersoane = 0;
//
//
//	}
//
//	Sejur(int idSejur, string destinatie, int nrExcursiiOptionale, float* pretExcursie, int idAvion, int nrPersoane) {
//		this->idSejur = idSejur;
//		this->destinatie = destinatie;
//		this->nrExcursiiOptionale = nrExcursiiOptionale;
//		this->pretBaza = pretBaza;
//		this->idAvion = idAvion;
//		this->nrPersoane = nrPersoane;
//		this->pretExcursie = new float[pretBaza];
//		for (int i = 0; i < pretBaza; i++) {
//			this->pretExcursie[i] = pretExcursie[i];
//		}
//
//	}
//
//	Sejur(const Sejur& s) {
//		this->idSejur = s.idSejur;
//		this->destinatie = s.destinatie;
//		this->nrExcursiiOptionale = s.nrExcursiiOptionale;
//		this->pretBaza = s.pretBaza;
//		this->idAvion = s.idAvion;
//		this->nrPersoane = s.nrPersoane;
//		this->pretExcursie = new float[s.pretBaza];
//		for (int i = 0; i <s.pretBaza; i++) {
//			this->pretExcursie[i] = s.pretExcursie[i];
//		}
//	}
//
//
//
//};
