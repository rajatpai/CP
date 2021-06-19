#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <set>
#include <sstream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define rep(i, n) for (int i = 0; i < n; ++i)
#define reps(i, s, n) for (int i = s; i < n; i++)
#define debug(s, param) std::cerr << s << param << std::endl;

using namespace std;
using ll = long long;
using pi = pair<int, int>;
using pl = pair<ll, ll>;

const int INF = 1e9;
const ll INFL = 1e18;
const ll MOD = 1000000007;

int main() {
  long double a, b, h, m; cin >> a >> b >> h >> m;
  long double aAngle = 30 * h + 30 * (m / 60);
  long double bAngle = 360 * (m / 60);
  long double diffAngle = abs(aAngle - bAngle);
  if ((long double)360 - diffAngle < diffAngle) diffAngle = (long double)360 - diffAngle;
  long double cosAB = cos(diffAngle * M_PI / (long double)180);
  cout << fixed << setprecision(15) << sqrt(a * a + b * b - (long double)2 * a * b * cosAB) << endl;
  return 0;
}
