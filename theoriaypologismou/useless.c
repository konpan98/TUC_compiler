#include "pilib.h"


const int N = -100;

int a, b;

int c = 5;

int result;

int cube(int i) {
c = i;
return i * i * i;
}

int add(int n, int k) {
int j;
j = (N - n) + cube(k);
writeInt(j);
return j;
}

int main() {
a = readInt();
b = readInt();
add(a, b);
}
