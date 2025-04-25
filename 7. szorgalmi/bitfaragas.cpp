#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
string normal(string& s) {
    string r;
    for (char c : s) if (isalpha(c)) r += tolower(c);
    return r;
}
bool pal(string& s) {
    string t = normal(s);
    return  equal(t.begin(), t.begin() + t.size() / 2, t.rbegin());
}
int main() {
    string s;
    cout << "Szöveg: ";
    getline(cin, s);
    cout << (pal(s) ? "Palindróm.\n" : "Nem palindróm.\n");
    int n;
    cout << "Elemek száma: ";
    cin >> n;
    vector<int> v(n);
    cout << "Számok: ";
    for (int& x : v)  cin >> x;
    sort(v.begin(),v.end());
    cout << "Rendezve: ";
    for (int x : v)  cout << x << " ";
    cout << "\n";
}
