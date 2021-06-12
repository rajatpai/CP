#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	int pos = 0;
	for(int i = s.size()-1; i > 0; i--){
		if(s[i-1] <  s[i]){
			pos = i;
			break;
		}
	}
	
	sort(s.begin()+pos,s.end());
	swap(s[pos], s[pos-1]);
	
	for(auto i:s) 
		cout << i;
}