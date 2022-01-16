#include "pilib.h"


int numberOfPeople = 10;

double ages[numberOfPeople];

double [] check_ages(double [] ages, int limit) {
double tmp;
int i;
double underaged[numberOfPeople], limitaged[numberOfPeople], overaged[numberOfPeople];
for(i = 0; i < limit; i = i + 1) {
tmp = ages[i];

if(tmp < limit) 
{
writeString("You are underaged");

underaged[i] = tmp;
}
else if(tmp == limit) 
{
writeString("You are on the limit");

limitaged[i] = tmp;
}
else {
writeString("You are overaged");

overaged[i] = tmp;
}


}
return ages;
}

int main() {
int limit, i = 0;
double age;
double fixed[10];
limit = readInt();
writeString("Fill the array with ages");
while(i < numberOfPeople && limit > 0) {
age = readReal();

writeString("The age you entered is: ");

writeReal(age);

ages[i] = age;

i = i + 1;
}
fixed = check_ages(ages, limit);
}
