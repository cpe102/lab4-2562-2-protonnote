#include<iostream>
#include<cmath>
using namespace std;

float findDistance(float u,float a,float t){
  float s = u*t+0.5*a*pow(t,2);
  return s;
}

int main(){
  float s = findDistance(1.5,-1,2);
  cout << "S = " << s;
  return 0;
}
