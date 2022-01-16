#include "pilib.h"


int gcd(int a, int b) {
int i;
for(i = a; i >= 1; i = i - 1) {
if(a % i == 0 && b % i == 0) 
break;
}
return i;
}

int main() {
int x, y = -1;
writeString("GCD program");
x = readInt();
y = readInt();
if(y == x) 
y = x;
else if(x < y) 
y = gcd(x, y);
else y = gcd(y, x);


writeString("gcd found");
writeInt(y);
}
