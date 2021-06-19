/******************************************************************************

Coder :         rajath_pai
date :          17/05/2020
Contest :       AtCoder Beginner Contest 168
problem :       B - ... (Triple Dots)
link :          atcoder.jp/contests/abc168

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std;

#define w(x)            int x;  cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,a,b)       for(int i = a; i < b; i++)
//int tc = 0;
//printf("Case #%d: %d\n",tc,);

/*
    string binary = bitset<8>(input number).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();   //binary to decimal
    cout<<decimal<<"\n";
*/

int main(){
    FIO;
    //w(t)
       //tc++;
       int k;
       string s;
       cin >> k>>s;
       if(s.length() > k){
           fo(i,0,k){
               cout<<s[i];
           }
           cout<<"...";
       }
       else{
           cout<<s;
       }
        
    return 0;
}
