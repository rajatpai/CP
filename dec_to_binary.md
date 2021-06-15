# Finding binary representation of a given number


```
#include<bits/stdc++.h>
using namespace std;

 
int main(){
	//finding the binary form of 10
	int i = 10;
	string s = bitset<32>(i).to_string();		//OUTPUT -> 00000000000000000000000000001010
	s = s.substr(s.find('1'));			//find the 1st occurance of 1
	cout << s;					//OUTPUT -> 1010
}
```
[Run Code](https://ideone.com/1eterN)
