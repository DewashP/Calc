#include <iostream>
#include <cmath>
#include <cstdlib> 

using namespace std;

double add(double val1, int val2 ){
    return val1+val2;
}
double subtract(double val1, int val2 ){
    return val1-val2;
}
double mult(double val1, int val2 ){
    return val1*val2;
}
double divide(double val1, int val2 ){
    return val1/val2;
}

//Simple Calculator app
int main (){ 

short input; 
double val1;
int val2; 

//Interface
cout << "What would you like to do: " << endl;
cout << "1. Add"<< endl;
cout << "2. Subtract"<< endl;
cout << "3. Multiply"<< endl;
cout << "4. Divide"<< endl;
cout << "5. Square"<< endl;
cout << "6. Root"<< endl;
cout << "7. Mischief"<< endl;
cin >> input;

//funcs
if (input == 1)  {
cout << "First Number and Second Number: "<< endl;
cin >>val1;
cin >>val2;
cout << add(val1,val2);
}
else if (input == 2)  {
cout << "First Number and Second Number: "<< endl;
cin >>val1;
cin >>val2;
cout << subtract(val1,val2);
}
else if (input == 3)  {
cout << "First Number and Second Number: "<< endl;
cin >>val1;
cin >>val2;
cout << mult(val1,val2);
}
else if (input == 4)  {
cout << "First Number and Second Number: "<< endl;
cin >>val1;
cin >>val2;
cout << divide(val1,val2);
}
else if (input == 5)  {
cout << "What number are you squaring: "<< endl;
cin >> val1;
val2=val1;
cout << val1*val2;
}
else if (input == 6)  {
cout << "What number are you rooting: "<< endl;
cin >> val1;
cout << sqrt(val1);
}
else if (input == 7)  {
cout << "why did u think a calculator would have a mischief option?";
}


return 0;
}

