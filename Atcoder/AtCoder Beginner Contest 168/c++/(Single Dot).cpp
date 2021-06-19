#include<bits/stdc++.h>
using namespace std;
using UL=unsigned int;
using LL=long long;
using ULL=unsigned long long;
#define rep(i,n) for(int i=0; i<(n); i++)

struct Line{
 LL l,r,x;
 bool operator<(const Line& r)const{ return x < r.x; }
};

int H,W;
LL X[999], Y[999];
LL Xp[1000], Yp[1000];

Line HL[1000];
Line VL[1000];

int G[2001][2001];

int main(){
 scanf("%d%d",&W,&H);
 rep(i,W) scanf("%lld%lld%lld",&VL[i].l,&VL[i].r,&VL[i].x);
 rep(i,H) scanf("%lld%lld%lld",&HL[i].x,&HL[i].l,&HL[i].r);
 sort(HL,HL+H);
 sort(VL,VL+W);

 rep(i,H-1) Y[i] = HL[i+1].x - HL[i].x;
 rep(i,H) Yp[i] = HL[i].x;
 rep(i,W-1) X[i] = VL[i+1].x - VL[i].x;
 rep(i,W) Xp[i] = VL[i].x;

 rep(y,H*2+1)rep(x,W*2+1){
  G[x][y] = 0;
  if(y&x&1) G[x][y] = -1;
 }
 rep(y,H)rep(x,W-1){
  if(HL[y].l <= Xp[x] && Xp[x+1] <= HL[y].r)
   G[x*2+2][y*2+1] = -1;
  if(Xp[x] == Xp[x+1]) G[x*2+2][y*2+1] = -1;
 }
 rep(x,W)rep(y,H-1){
  if(VL[x].l <= Yp[y] && Yp[y+1] <= VL[x].r)
   G[x*2+1][y*2+2] = -1;
  if(Yp[y] == Yp[y+1]) G[x*2+1][y*2+2] = -1;
 }

 int sx=0,sy=0;
 rep(x,W-1) if(Xp[x]<=0 && 0<=Xp[x+1]) sx = x*2+2;
 if(Xp[W-1]<0) sx = W*2;
 rep(y,H-1) if(Yp[y]<=0 && 0<=Yp[y+1]) sy = y*2+2;
 if(Yp[H-1]<0) sy = H*2;

 queue<pair<int,int>> Q;
 Q.push({sx,sy});
 while(Q.size()){
  int px = Q.front().first;
  int py = Q.front().second; Q.pop();
  if(G[px][py]) continue;
  G[px][py] = 1;
  Q.push({px-1,py});
  Q.push({px+1,py});
  Q.push({px,py-1});
  Q.push({px,py+1});

  if(px==0 || py==0 || px==W*2 || py==H*2){
   cout<<"INF"<<endl; return 0;
  }
 }

 LL ans = 0;
 rep(x,W-1) rep(y,H-1){
  if(G[x*2+2][y*2+2] == 1) ans += X[x]*Y[y];
 }

 cout<<ans<<endl;

 return 0;
}
