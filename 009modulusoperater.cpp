#include <iostream>//%ตัวแสดงเศษ
using namespace std;
int main(){
//
float x ;
//x =7 % 2;
// b = 9 % 5;
int Hr,Min;
const int Fixmins=60;
cout <<"Enter Hours  = ";
cin >> Hr;
cout << "Enter minutes = ";
cin  >> Min;
Hr = Hr + Min/Fixmins;//*
Min = Min % Fixmins;//*
cout << Hr << " Hr: "<< Min<< " Mins " << endl;

return 0;
}
