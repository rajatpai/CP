'''
#include<bits/stdc++.h>
using namespace std;

 
int main(){
	//finding the binary form of 10
	int i = 10;
	string s = bitset<32>(i).to_string();
	s = s.substr(s.find('1'));
	cout << s;
}
'''