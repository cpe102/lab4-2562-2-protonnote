#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x,y,e=2.71828;
    cout << "Enter x = ";
    cin >> x;
    y = 3*pow(x,3)+2*e+pow(2,(2*x+1))+pow(pow(x,2)+1,0.5);
    cout << "Result y = " << y ;
    return 0;
}
