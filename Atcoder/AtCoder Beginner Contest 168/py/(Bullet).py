from math import gcd
from collections import defaultdict as d
n=int(input())
m=10**9+7
s=d(lambda:[0,0])
p=-1
for i in range(n):
    a,b=map(int,input().split())
    if a==b==0:p+=1
    else:
        g=gcd(a,b)
        a=a//g
        b=b//g
        if a<0 or a==0<b:a,b=-a,-b
        if b<0:s[(-b,a)][1]+=1
        else:s[(a,b)][0]+=1
q=1
for i in s:
    k,l=s[i]
    q=q*(pow(2,k,m)+pow(2,l,m)-1)%m
print((q+p)%m)