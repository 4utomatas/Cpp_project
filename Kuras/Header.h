#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <math.h>
#include <ctime>
//pagal kortele kiekviena men surenkama info kur aprasoma masinos kuro sanaudu savybes 
struct kuras {
    std::string data; //data pvz 201602                
    double  suma, //kokia is viso suma uz men
            sumaApmoketa,//kokia suma apmoketa
            virsytasLimitas,//suma - limitas
            km,    //kiek kilometru nuvaziuota
            litrai,//uzpilto kuro kiekis litrais
            start, //menesio pradzioje kuro likutis bake
            end;   //menesio gale kuro likutis bake
        int limit, //kuro sanaudu limitas
            cardNumber; // korteles numeris (paskutiniai 6 skaiciai) 
};
struct importas {
    std::string model,
        numberPlate;
    int cardNumber;
    double suma,
        km,
        litrai,
        start,
        end;
    bool vairuota;
};
//kuro tiekejas atsiuncia kiekvienos korteles pylimus su siais parametrais:
struct pylimai {
    long int cardNumber; //korteles numeris
    std::string group; //groupe pvz d01 ir kt 
    std::string date; //data ir laikas
    std::string location; //vieta
    std::string fuel; //dyzelinas ar benzinas
    double price; // of a litre
    double amount; // of fuel
    double total; //total price
};
class Kortele {
protected:
	int cardNumber; //kortele
    int limit; //limitas kuro sanaudu
	std::string group; //grupe
	std::string model; //marke 
	std::string name; // vardas
	std::string surname; //pavarde
	std::string numberPlate; //masinos numeris
	std::string city; //miestas  
    double  suma, //kiek is viso uz kura isleista
            sumaApmoketa, //kiek is viso uz kura sumoketa (padengta sumos)
            km, //kiek km nuvaziavo per men
            sumaMen, //kiek per men sumokejo
            litrai; //kiek litru kuro sudegino per men
public:
    pylimai p[500];
    kuras k[500];
    importas m;
	Kortele() {}
	//Kortele(int a, std::string a1, std::string b, std::string c, std::string d, std::string e, std::string f, int g) : cardNumber(a), group(a1), model(b), name(c), surname(d), numberPlate(e), city(f), limit(g) {}
    Kortele(int a, std::string b, std::string c, std::string d, std::string e, double f, double g, std::string h, int i, double j, double k, double l, std::string m) :
    cardNumber(a), name(b), surname(c), model(d), numberPlate(e), suma(f), sumaApmoketa(g), city(h), limit(i), sumaMen(j), km(k), litrai(l), group(m)  {}
    std::string getName() {
		return name;
	}
	std::string getSurname() {
		return surname;
	}
	std::string getNumberPlate() {
		return numberPlate;
	}
	std::string getCity() {
		return city;
	}
	std::string getModel() {
		return model;
	}
	std::string getGroup() {
		return group;
	}
    int getLimit() {
        return limit;
    }
	int getCardNumber() {
		return cardNumber;
	}
    double getKm() {
        return km;
    }
    double getSuma(){
        return suma;
    }
    double getLitrai(){
        return litrai;
    }
    double getSumaApmoketa() {
        return sumaApmoketa;
    }
    double getSumaMen() {
        return sumaMen;
    }
    void prideti(Kortele b, int & i);
    void naujinti(Kortele b);
};

//Is failo input.txt i masyva surasomos visos korteles
void uzpildymas(Kortele a[], int & kiekis_card);
void kurasUzpildymas(Kortele a[], int kiekis_kuras[], int kiekis_card, int & maxKuras);
void pylimaiUzpildymas(Kortele a[], int kiekis_pylimai[], int kiekis_card);
void pildyti(int kiekis_card, Kortele a[]);
void pasalinti(int & n, Kortele a[], int k);
std::string convert(System::String ^ text);
void rezultataiSpausdinti(Kortele a[], int kiekis_pylimai[], int kiekis_kuras[], int kiekis_card, int maxKuras);
void importuoti(Kortele a[], int kiekis_card);
void kurasFormuoti(Kortele a[], int kiekis_card, int kiekis_kuras[]);
void saugoti(Kortele a[], int kiekis_card);