#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using P = pair<int,int>;
using P2 = pair<ll,P>;
#define INF 1001001001
#define LINF (1LL<<60)
#define F first
#define S second
template<class T> inline bool chmax(T& a, T b){ if(a<b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b){ if(a>b){ a=b; return 1; } return 0; }

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > to(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    to[a-1].push_back(b-1);
    to[b-1].push_back(a-1);
  }
  int start = 0;
  queue<int> q;
  vector<int> parent(n, -1);
  parent[0] = 0;
  q.push(start);
  while(!q.empty()) {
    int x = q.front();q.pop();
    for (int nxt : to[x]) {
      if (parent[nxt] != -1) continue;
      parent[nxt] = x;
      q.push(nxt);
    }
  }
  bool flag = true;
  rep(i, n-1) if (parent[i] == -1) flag = false;
  if (flag) {
    cout << "Yes" << endl;
    rep(i, n-1) cout << parent[i+1]+1 << endl;
  } else {
    cout << "No" << endl;
  }
}
