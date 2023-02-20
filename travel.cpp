#include <iostream>
#include <math.h>
using namespace std;


int main() {

  int speed,time,distance;
  cout << "what is speed of the had it vehicle in mph ? "; cin >> speed;
  cout << "How many hours has is travel ? "; cin >> time;
  cout << "Hours distance Travels ";
  cout << "-----------\n" ;
  for(int i = 1;i<=time;i++)
  {
    distance = speed * i;
    cout <<  distance << "\n" ;

  }


  return 0;
}