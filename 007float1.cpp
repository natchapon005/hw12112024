#include <iostream>
using namespace std;
int main (){
    float price1 =10.0/3.0;
    float scale = 100000e6;
    double price2 = 10./3.0;
    long double price3= 10.0/3.0;
    cout.precision (30);
    cout << price1 << endl;
    cout << scale << endl;
    cout<< price2<< endl;
    cout<< price3<< endl;
return 0;
}