#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
ifstream fin("db.txt");

struct Dog {
	string faj;
	string name;
	int ev;
	string color;
};

int main(int argc, char* argv[])
{
	vector<Dog> kutya;
	string n;
	while (getline(fin, n))
	{
		stringstream ss(n);
		string faj, nev, k, szin;
		getline(ss, faj, ',');
		getline(ss, nev, ',');
		getline(ss, k, ',');
		getline(ss, szin, ',');
		int ev;
		ev = stoi(k);
		Dog d;
		d.faj = faj;
		d.name = nev;
		d.ev = ev;
		d.color = szin;
		kutya.push_back(d);
	}
	bool futtatas = true;
	while(futtatas)
	{
		cout << "Mi alapjan keressel kutyat?(faj,nev,eletkor,szin) ";
		string tipus;
		cin >> tipus;
	if(tipus == "faj")
	{
		cout << "Milyen fajtat keresel? ";
		string type;
		cin >> type;
		bool check = false;
		for (Dog i : kutya)
		{
			if (i.faj == type) { cout << "A kutya neve: " << i.name << ", eletkora: " << i.ev << ", szine: " << i.color<<endl;check = true; }
		}
		if (!check) cout << "Ilyen kutya faj nincs az adatbazisban\n";
	}
	else if (tipus == "nev")
	{
		cout << "Mi a neve a kutyanak? ";
		string neve;
		cin >> neve;
		bool check = false;
		for (Dog i : kutya)
		{
			if (i.name == neve) { cout << "A kutya faja: " << i.faj << ", eletkora: " << i.ev << ", szine: " << i.color << endl;check = true; }
		}
		if (!check) cout << "Ilyen kutya nev nincs az adatbazisban\n";
	}
	else if (tipus == "eletkor")
	{
		int kor;
		cout << "Hany evest keressel? ";
		cin >> kor;
		bool check = false;
		for (Dog i : kutya)
		{
			if (i.ev == kor) { cout << "A kutya faja: " << i.faj << ", neve: " << i.name << ", szine: " << i.color << endl;check = true; }
		}
		if (!check) cout << "Ilyen kutya eletkor nincs az adatbazisban\n";
	}
	else if (tipus == "szin")
	{
		string col;
		cout << "Milyen szinut keresel? ";
		cin >> col;
		bool check = false;
		for (Dog i : kutya)
		{
			if (i.color == col) { cout << "A kutya faja: " << i.faj << ", neve:" << i.name << ", eletkora: " << i.ev << endl;check = true; }
		}
		if (!check) cout << "Ilyen kutya szin nincs az adatbazisban\n";
	}
	else
		cout << "ilyen lehetoseg nincs" << endl;
	
	cout << "Szeretnel mast beolvasni? y/n ";
	char v;
	cin >> v;
	if (v == 'n') futtatas = false;
	else if (v != 'y') {
		cout << "nem ervenyes bemenet";
		break;
	}
	}

	
	return 0;
}
