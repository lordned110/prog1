#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

map<string, int> buy;
int main(int argc, char* argv[])
{
	ifstream fin("lista.txt");
	if (!fin.is_open()) {
		cout << "Nem sikerult megnyitni a lista.txt file-t" << endl;
		return 0;
	}
	string n;
	int max=0;
	while (getline(fin, n))
	{
		stringstream ss(n);
		string darab, termek;
		getline(ss, darab, ' ');
		getline(ss, termek, ' ');
		int db;
		db = stoi(darab);
		if (max < db) max=db;
		if (buy[termek]) buy[termek] += 1;
		else buy[termek] = 1;
	}
ofstream fout("output.txt");

for (auto x : buy)
fout << x.first << " " << x.second * 100 / max << "%\n";
	return 0;
}
