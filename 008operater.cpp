#include <iostream> 
using namespace std;
int main(){
    float boymoney;
    float grilmoney;
    cout << "Enter Boy money = ";
    cin >> boymoney;
    cout << "Enter girl money = ";
    cin  >> grilmoney;
    cout.setf(ios_base::fixed, ios_base :: floatfield);
    cout.precision(15);
    cout << "\noperatre + =" << boymoney + grilmoney;
    cout << "\noperatre - =" << boymoney - grilmoney;
    cout << "\noperatre * =" << boymoney * grilmoney;
    cout << "\noperatre / =" << boymoney / grilmoney;
    return 0;

}