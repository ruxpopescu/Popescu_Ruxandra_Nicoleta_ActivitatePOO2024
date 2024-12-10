//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//class Prajitura {
//private:
//	char* denumire;
// 
//	int nrCalorii;
//	int nrIngrediente;
//	float* gramajIngrediente;
//	bool esteVegana;
//	static int tva;
//	float greutate;
//
//public:
//
//	Prajitura() {
//		this->denumire = nullptr;
//		this->nrCalorii = 0;
//		this->nrIngrediente = 0;
//		this->gramajIngrediente = nullptr;
//		this->esteVegana = false;
//		this->greutate = 0;
//
//	}
//
//	Prajitura(const char* denumire, int nrCalorii, int nrIngrediente, const float* gramajIngrediente, bool esteVegana, float greutate  ) {
//		this->nrCalorii = nrCalorii;
//		this->nrIngrediente = nrIngrediente;
//		this->esteVegana = esteVegana;
//		this->greutate = greutate;
//		this->denumire = new char[strlen(denumire) + 1];
//		strcpy_s(this->denumire, strlen(denumire) + 1, denumire);
//		this->gramajIngrediente = new float[nrIngrediente];
//		for (int i = 0; i < nrIngrediente; i++) {
//			this->gramajIngrediente[i] = gramajIngrediente[i];
//		}
//	}
//
//	~Prajitura() {
//		if (this->denumire != nullptr) {
//			delete[]this->denumire;
//		}
//
//		if (this->gramajIngrediente != nullptr) {
//			delete[]this->gramajIngrediente;
//		}
//}
//	Prajitura(const Prajitura& p) {
//		this->nrCalorii = p.nrCalorii;
//		this->nrIngrediente = p.nrIngrediente;
//		this->esteVegana = p.esteVegana;
//		this->greutate = p.greutate;
//		this->denumire = new char[strlen(p.denumire) + 1];
//		strcpy_s(this->denumire, strlen(p.denumire) + 1,p.denumire);
//		this->gramajIngrediente = new float[p.nrIngrediente];
//		for (int i = 0; i < p.nrIngrediente; i++) {
//			this->gramajIngrediente[i] = p.gramajIngrediente[i];
//		}
//
//
//	}
//
//	float getGreutate() {
//		return this->greutate;
//	}
//
//	void setGreutate(float greutate) {
//		if (greutate > 0) {
//			this->greutate = greutate;
//		}
//	}
//
//
//	int getTva() {
//		return this->tva;
//	}
//
//	static void setTva(int tva) {   ///!!!de intrebat
//		if (tva > 0) {
//			Prajitura::tva = tva;
//		}
//	}
//
//	void afisare() {
//
//		if (this->denumire != nullptr) {
//			cout << "Denimirea prajiturii este" << this->denumire << endl;
//		}
//		else {
//			cout << "Nu avem prajitura " << endl;
//		}
//
//		cout << "Numarul de calorii este :" << this->nrCalorii << endl;
//		cout << "Prajitura are : " << this->nrIngrediente << " ingrediente " << endl;
//
//		if (this->gramajIngrediente != nullptr) {
//			for (int i = 0; i < nrIngrediente; i++) {
//				cout << "Numarul gramajului de ingrediente este : " << this->gramajIngrediente[i] << " , ";
//			}
//			
//		}
//
//		cout << endl;
//
//		cout << "TVA ul prajiturii este : " << this->tva << endl;
//		cout << "Greutatea prajiturii este : " << this->greutate << endl;
//	}
//
//	float getTotalGramaj() {
//
//		float gramajTotal = 0;
//
//		if (this->gramajIngrediente != nullptr) {
//
//			for (int i = 0; i < nrIngrediente; i++) {
//				gramajTotal += gramajIngrediente[i];
//			}
//		}
//
//		else {
//			return 0;
//		}
//
//		return gramajTotal;
//	}
//
//
//	Prajitura operator = (const Prajitura& p)
//	{
//		if (this != &p)
//		{
//			delete[]this->denumire;
//			delete[]this->gramajIngrediente;
//			this->nrCalorii = p.nrCalorii;
//			this->nrIngrediente = p.nrIngrediente;
//			this->esteVegana = p.esteVegana;
//			this->greutate = p.greutate;
//			this->denumire = new char[strlen(p.denumire) + 1];
//			strcpy_s(this->denumire, strlen(p.denumire) + 1, p.denumire);
//			this->gramajIngrediente = new float[p.nrIngrediente];
//			for (int i = 0; i < p.nrIngrediente; i++)
//			{
//				this->gramajIngrediente[i] = p.gramajIngrediente[i];
//			}
//			return *this;
//		}
//	}
//
//};
//
//	int Prajitura :: tva = 1;
//
//int main() {
//
//	Prajitura p1;
//	p1.afisare();
//
//	Prajitura p2("zana", 100, 4, new float[4] {10, 20, 30, 40}, true, 2.4);
//	p2.afisare();
//
//	Prajitura p3(p2);
//	p3.afisare();
//
//	cout << "Greutatea este: " << p2.getGreutate() << endl;
//	cout << "Tva ul este " << p2.getTva() << endl;
//
//	p2.setGreutate(2.3);
//	p2.afisare();
//
//	p2.setTva(3);
//	p2.afisare();
//
//	cout << "Gramajul total este :" << p3.getTotalGramaj();
//
//
//	p1 = p2;
//	p1.afisare();
//
//}


