#include <iostream>
using namespace std;
int  main (){
   const int pi =3.14;//const
   const float pii=3.14;// float
   int r;
    cout << pi << endl;
    cout <<pii <<endl;
    cout <<"....................\n";
    cout<<"\n";
    cout <<"Enter value of radius =";
    cin >> r;
    cout <<"Area of circle = "<<pii*r*r <<endl;
    cout << "circumference = " <<2*pii*r  <<endl;
    return 0;    
}