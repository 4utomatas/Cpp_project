#include "Header.h"
//Duomenu gavimas is failo korteles.txt
void uzpildymas(Kortele a[], int & kiekis_card)
{
    std::ifstream fd;
    fd.open("korteles.txt");
	//tikrinama ar ne tuscias failas
	if (!fd)
		return;
	fd.close();
    fd.open("korteles.txt");
    int i = 0;
	int cardNumber;
	std::string group, model, name, surname, numberPlate, city, temp;
    int limit;
    double suma, suma2, l_suma, l_km, l_litrai;
	for (; !fd.eof();)
	{
        getline(fd, name, '\t');
        getline(fd, surname, '\t');
        getline(fd, model, '\t');
        getline(fd, numberPlate, '\t');
        fd >> cardNumber;
        fd >> suma; 
        fd >> suma2;
        fd.ignore(2, '\t');
        getline(fd, city, '\t');
        fd >> limit;
        fd.ignore(80, '\n');
        Kortele b(cardNumber, name, surname, model, numberPlate, suma, suma2, city, limit, l_suma, l_km, l_litrai, "Visi");
		a[i] = b;
		i++;
	}
	//kiek yra zmoniu
	kiekis_card = i;
	fd.close();
}
//prideda nauja vartotoja i  masyva a
void Kortele::prideti(Kortele b, int & i)
{
    cardNumber = b.getCardNumber();
    group = b.getGroup();
    model = b.getModel();
    name = b.getName();
    surname = b.getSurname();
    numberPlate = b.getNumberPlate();
    city = b.getCity();
    limit = b.getLimit();
    suma = b.getSuma();
    sumaApmoketa = b.getSumaApmoketa();
    km = b.getKm();
    sumaMen = b.getSumaMen();
    litrai = b.getLitrai();
    i++;
}
//atnaujina reiksmes a masyve
void Kortele::naujinti(Kortele b)
{
    cardNumber = b.getCardNumber();
    group = b.getGroup();
    model = b.getModel();
    name = b.getName();
    surname = b.getSurname();
    numberPlate = b.getNumberPlate();
    city = b.getCity();
    limit = b.getLimit();
    suma = b.getSuma();
    sumaApmoketa = b.getSumaApmoketa();
    km = b.getKm();
    sumaMen = b.getSumaMen();
    litrai = b.getLitrai();
}
//Konvertuoja String to string
std::string convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
//pasalina pasirinkta eilute k is masyvo a
void pasalinti(int & n, Kortele a[], int k)
{
    for (int i = k; i < n; i++)
    {       
        a[i] = a[i + 1];
    }
    n--;
}
//Duomenu gavimas apie atliktus pylimus struktura k
void pylimaiUzpildymas(Kortele a[], int kiekis_pylimai[], int kiekis_card)
{
    std::ifstream fd;
    fd.open("ataskaitaLTU.txt");
    //tikrinama ar ne tuscias failas
    if (!fd)
        return;
    fd.close();
    fd.open("ataskaitaLTU.txt");
    int j = 0;
    long long int cardNumber;
    std::string group; 
    std::string date; 
    std::string location;
    std::string fuel;
    double price;
    double amount;
    double total;
    std::string temp;
    for (; !fd.eof();)
    {
        fd >> cardNumber;
        fd.ignore(20, '\t');
        getline(fd, group, '\t');
        getline(fd, date, '\t');
        getline(fd, temp, '\t');
        getline(fd, location, '\t');
        getline(fd, temp, '\t');
        getline(fd, temp, '\t');
        getline(fd, fuel, '\t');
        fd >> price;
        fd >> amount;
        fd >> total;
        fd.ignore(100, '\n');
        j++;

        //tikrinama ar kortele sutampa ir tada priskiriama tam zmogui tas pylimas
        cardNumber = cardNumber % 1000000;
        if (fuel == "Decto Dyzelinas" || fuel == "Dyzelinas" || fuel == "efekt Dyzelinas" || fuel == "ecto Dyzelinas" || fuel == "95ectoplus Benz" || fuel == "SND" || fuel == "AdBlue priedas" || fuel == "95ecto Benzinas")
        {
            for (int i = 0; i < kiekis_card; i++)
            {
                int asd = a[i].getCardNumber();
                if (asd == cardNumber)
                {
                    a[i].p[kiekis_pylimai[i]].group = group;
                    a[i].p[kiekis_pylimai[i]].date = date;
                    a[i].p[kiekis_pylimai[i]].location = location;
                    a[i].p[kiekis_pylimai[i]].fuel = fuel;
                    a[i].p[kiekis_pylimai[i]].price = price;
                    a[i].p[kiekis_pylimai[i]].amount = amount;
                    a[i].p[kiekis_pylimai[i]].total = total;
                    kiekis_pylimai[i]++;
                    break; 
                }
            }
        }
    }
    fd.close();
}
//uzpildo kuro masyva(priskiria kortelems kiekvieno menesio reiksmes) a.k
void kurasUzpildymas(Kortele a[], int kiekis_kuras[], int kiekis_card, int & maxKuras)
{
    std::ifstream fd;
    fd.open("kuras.txt");

    //tikrinama ar ne tuscias failas
    if (!fd)
        return;
    else fd.close();

    fd.open("kuras.txt");
    int i = 0;
    std::string data, temp;
    double suma = 0, virsytasLimitas = 0, km = 0, litrai = 0, start = 0, end = 0;
    int cardNumber= 0, limit = 0;
    for (; !fd.eof();)
    {
        getline(fd, data, '\t');
        fd >> cardNumber;
        fd >> suma;
        fd >> virsytasLimitas;
        fd >> limit;

        //fd.ignore(10, '\t');

        fd >> km;
        fd >> litrai;
        fd >> start;
        fd >> end;
        fd.ignore(80, '\n');
        i++;

        for (int j = 0; j < kiekis_card; j++)
        {
            int asd = a[j].getCardNumber();
            if (asd == cardNumber)
            {
                a[j].k[kiekis_kuras[j]].cardNumber = cardNumber;
                a[j].k[kiekis_kuras[j]].data = data;
                a[j].k[kiekis_kuras[j]].suma = suma;
                a[j].k[kiekis_kuras[j]].virsytasLimitas = virsytasLimitas;
                a[j].k[kiekis_kuras[j]].limit = limit;
                a[j].k[kiekis_kuras[j]].km = km;
                a[j].k[kiekis_kuras[j]].litrai = litrai;
                a[j].k[kiekis_kuras[j]].start = start;
                a[j].k[kiekis_kuras[j]].end = end;
                if (a[j].k[kiekis_kuras[j]].suma >= a[j].k[kiekis_kuras[j]].limit)
                {
                    a[j].k[kiekis_kuras[j]].sumaApmoketa = a[j].k[kiekis_kuras[j]].limit;
                }
                else {
                    a[j].k[kiekis_kuras[j]].sumaApmoketa = a[j].k[kiekis_kuras[j]].suma;
                }
                kiekis_kuras[j]++;
                if (kiekis_kuras[j] > maxKuras)
                    maxKuras = kiekis_kuras[j];
                break;
            }
        }
    }
    fd.close();
}
//importas visada vienas kiekvienai masinai a.m
void importuoti(Kortele a[], int kiekis_card)
{
        std::ifstream fd;
        fd.open("importas.txt");

        //tikrinama ar ne tuscias failas
        if (!fd)
            return;
        else fd.close();

        fd.open("importas.txt");
        int i = 0;
        std::string model, numberPlate;
        int cardNumber = 0;
        double suma = 0,
            km = 0,
            litrai = 0,
            start = 0,
            end = 0;
        for (; !fd.eof();)
        {
            getline(fd, model, '\t');
            getline(fd, numberPlate, '\t');
            fd >> cardNumber;
            fd >> suma;
            fd >> km;
            fd >> litrai;
            fd >> start;
            fd >> end;
            fd.ignore(80, '\n');
            i++;
               
            for (int j = 0; j < kiekis_card; j++)
            {
                if (!a[j].m.vairuota)
                    a[j].m.vairuota = false;
                int asd = a[j].getCardNumber();
                if (asd == cardNumber)
                {
                    a[j].m.cardNumber = cardNumber;
                    a[j].m.suma = suma;
                    a[j].m.km = km;
                    a[j].m.litrai = litrai;
                    a[j].m.start = start;
                    a[j].m.end = end;
                    a[j].m.vairuota = true;
                    break;
                }
            }                       
        }
        fd.close();
}
//spausdina ataskaita apie menesio kuro sanaudas a.k pagal data
void rezultataiSpausdinti(Kortele a[], int kiekis_pylimai[], int kiekis_kuras[], int kiekis_card, int maxKuras)
{
    //dabartinis laikas
    /*
    now->tm_year + 1900 metai
    now->tm_mon + 1 menuo
    now->tm_mday diena
    */
    time_t t = time(0);   // get time now
    struct tm * now = localtime(&t);
    int metaiMenuo = ( ( now->tm_year + 1900 ) * 100 ) + now->tm_mon;
    std::ofstream fr;
    std::string temp = "kurasAtaskaita";
    temp.append(std::to_string(metaiMenuo));
    temp.append(".txt");
    fr.open(temp);
    fr  << "Data" << "\t" << "Kortele" << "\t" << "Suma" << "\t" << "Virsytas Limitas" 
        << "\t" << "Limitas" << "\t"  << "KM" << "\t" << "Litrai"
        << "\t" << "Start" << "\t" << "End" << std::endl;
    for (int j = 0; j < maxKuras + 1; j++)
    {
        for (int i = 0; i < kiekis_card; i++)
        {
            if (a[i].k[j].data.compare(std::to_string(metaiMenuo)) == 0)
            {
                fr << a[i].k[j].data << "\t" << a[i].k[j].cardNumber 
                    << "\t" << a[i].k[j].suma
                    << "\t" << a[i].k[j].virsytasLimitas << "\t" << a[i].k[j].limit 
                    << "\t" <<  a[i].k[j].km << "\t" << a[i].k[j].litrai
                    << "\t" << a[i].k[j].start << "\t" << a[i].k[j].end << std::endl;
            }
        }
    }
    fr.close();
}
//suformuoja menesio ataskaita (sitas menuo - 1) pagal importas.txt
void kurasFormuoti(Kortele a[], int kiekis_card, int kiekis_kuras[])
{
    time_t t = time(0);   // get time now
    struct tm * now = localtime(&t);
    int metaiMenuo = ((now->tm_year + 1900) * 100) + now->tm_mon;
    for (int j = 0; j < kiekis_card; j++)
    {
        if (a[j].m.vairuota == true)
        {
            a[j].k[kiekis_kuras[j]].cardNumber = a[j].getCardNumber();
            a[j].k[kiekis_kuras[j]].data = std::to_string(metaiMenuo);
            a[j].k[kiekis_kuras[j]].suma = a[j].m.suma;
           
            a[j].k[kiekis_kuras[j]].limit = a[j].getLimit();
            if (a[j].k[kiekis_kuras[j]].suma >= a[j].k[kiekis_kuras[j]].limit)
            {
                a[j].k[kiekis_kuras[j]].sumaApmoketa = a[j].k[kiekis_kuras[j]].limit;
            }
            else {
                a[j].k[kiekis_kuras[j]].sumaApmoketa = a[j].k[kiekis_kuras[j]].suma;
            }
            

            double virsytasLimitas = 0;
            if (a[j].k[kiekis_kuras[j]].suma >= a[j].k[kiekis_kuras[j]].limit)
                virsytasLimitas = a[j].k[kiekis_kuras[j]].suma - a[j].k[kiekis_kuras[j]].limit;
            a[j].k[kiekis_kuras[j]].virsytasLimitas = virsytasLimitas; 

            a[j].k[kiekis_kuras[j]].km = a[j].m.km;
            a[j].k[kiekis_kuras[j]].litrai = a[j].m.litrai;
            a[j].k[kiekis_kuras[j]].start = a[j].m.start;
            a[j].k[kiekis_kuras[j]].end = a[j].m.end;
            kiekis_kuras[j]++;
        }
        else {
            a[j].k[kiekis_kuras[j]].cardNumber = 0;
            a[j].k[kiekis_kuras[j]].data = "corrupted";
            a[j].k[kiekis_kuras[j]].suma = 0;
            a[j].k[kiekis_kuras[j]].sumaApmoketa = 0;
            a[j].k[kiekis_kuras[j]].virsytasLimitas = 0;
            a[j].k[kiekis_kuras[j]].limit = 0;
            a[j].k[kiekis_kuras[j]].km = 0;
            a[j].k[kiekis_kuras[j]].litrai = 0;
            a[j].k[kiekis_kuras[j]].start = 0;
            a[j].k[kiekis_kuras[j]].end = 0;
            kiekis_kuras[j]++;
        }
    }
}
//issaugo i korteliu txt faila pakeitimus
void saugoti(Kortele a[],int kiekis_card){

    std::ofstream fr("korteles.txt");
    for (int i = 0; i < kiekis_card; i++)
    {
        fr << a[i].getName();
        fr << "\t";
        fr << a[i].getSurname();
        fr << "\t";
        fr << a[i].getModel();
        fr << "\t";
        fr << a[i].getNumberPlate();
        fr << "\t";
        fr << a[i].getCardNumber();
        fr << "\t";
        fr << a[i].getSuma();
        fr << "\t";
        fr << a[i].getSumaApmoketa();
        fr << "\t";
        fr << a[i].getCity();
        fr << std::endl;
    }
    fr.close();
}