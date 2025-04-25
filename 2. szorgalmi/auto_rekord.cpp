#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Car {
    string plate;
    string brand;
    string type;
    int year;
};

vector<Car> db{
{ "MNP-135", "Toyota", "Yaris", 2012 },
{ "QRT-246", "Honda", "Accord", 2016 },
{ "STV-357", "Ford", "Mondeo", 2017 },
{ "WXZ-468", "BMW", "X3", 2019 },
{ "YAC-579", "Audi", "Q5", 2020 },
{ "BDE-680", "Mercedes", "GLA200", 2021 },
{ "CFG-791", "Volkswagen", "Passat", 2015 },
{ "DHI-802", "Hyundai", "i30", 2013 },
{ "EJK-913", "Nissan", "Juke", 2014 },
{ "FLM-024", "Kia", "Ceed", 2016 },
{ "GNO-135", "Mazda", "3", 2018 },
{ "HPR-246", "Chevrolet", "Cruze", 2017 },
{ "IQS-357", "Subaru", "Legacy", 2015 },
{ "JTU-468", "Tesla", "Model S", 2022 },
{ "KVC-579", "Volvo", "V60", 2020 },
{ "LWD-680", "Peugeot", "508", 2019 },
{ "MXE-791", "Renault", "Clio", 2012 },
{ "NYF-802", "Fiat", "Tipo", 2013 },
{ "OZG-913", "Opel", "Corsa", 2014 },
{ "PAH-024", "Seat", "Ibiza", 2011 }
};

int main(int argc, char* argv[])
{
    cout << "Rendszam: ";
    string p;
    cin >> p;
    bool check = false;
    for (Car i : db)
        if (i.plate == p)
        {
            cout << "A keresett auto: Marka: "<<i.brand<<", Tipus: "<<i.type<<", Evjarat: "<<i.year;
            check = true;
            break;
        }
    if (!check) cout << "A keresett rendszam nem letezik / Nem tartalmazza az adatbazis";

    return 0;
}










