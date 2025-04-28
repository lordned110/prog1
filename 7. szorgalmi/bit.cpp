#include<bits/stdc++.h>
using namespace std;int main(){string s,r;getline(cin,s);for(char c:s)if(isalpha(c))r+=tolower(c);cout<<(r==string(r.rbegin(),r.rend())?"P\n":"N\n");int n;cin>>n;vector<int>v(n);for(int&x:v)cin>>x;sort(v.begin(),v.end());for(int x:v)cout<<x<<' ';}
