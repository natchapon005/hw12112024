#include <iostream>
using namespace std;
int main(){
    float price =10.10134;
    float scale = 10 e6;
    cout . setf (ios_base::fixed, ios_base ::floatfield );// ทศนิยม 6ตำแหน่ง
    cout << price * scale << endl;
    //float มี3แบบ float doble , long double
    cout << sizeof (float)<<endl;
     cout << sizeof (double) <<endl;
     cout << sizeof (longdouble) <<endl;
    return 0;
}