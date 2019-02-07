import math, decimal
decimal.getcontext().prec = 200
a, b, c = map(int,input().split())
s = decimal.Decimal((a+b+c)/2)
S = decimal.Decimal(math.sqrt(s*(s-a)*(s-b)*(s-c))) # 헤론의 공식
R = decimal.Decimal((a*b*c)/S/4) # 사인정리
r = decimal.Decimal(S/s) # S = 1/2r(a+b+c)
d = decimal.Decimal(R-2*r) # 오일러 정리
if d < 0.000000001:
	d = decimal.Decimal(0)
else:
	d = decimal.Decimal(math.sqrt(R*(R-2*r)))
k = decimal.Decimal(R+r); # 외심에서 내린 수선의 합은 x+y+z = R+r
print(format(S,'.13f'))
print(format(R,'.13f'))
print(format(r,'.13f'))
print(format(d,'.13f'))
print(format(k,'.13f'))
