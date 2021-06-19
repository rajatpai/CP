import math
a,b,h,m = map(int,input().split())

ans = abs((60*h+m)*360/720-(m*360/60))
c = math.cos(math.radians(ans))
print((a**2+b**2-2*a*b*c)**(1/2))
