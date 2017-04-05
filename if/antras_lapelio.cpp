#include <iostream>
using namespace std;
int main() {
  int a, s1, s2, s3, s4, s5, s6, ben;
  ben = 0;
  cout << "Iveskite sesiazenkli skaiciu: ";
  cin >> a;

  s1 = a / 100000 % 10;
  s2 = a / 10000 % 10;
  s3 = a / 1000 % 10;
  s4 = a / 100 % 10;
  s5 = a / 10 % 10;
  s6 = a / 1 % 10;

  if(s1 != 3 && s1 != 5) ben = ben * 10 + s1;
  if(s2 != 3 && s2 != 5) ben = ben * 10 + s2;
  if(s3 != 3 && s3 != 5) ben = ben * 10 + s3;
  if(s4 != 3 && s4 != 5) ben = ben * 10 + s4;
  if(s5 != 3 && s5 != 5) ben = ben * 10 + s5;
  if(s6 != 3 && s6 != 5) ben = ben * 10 + s6;

  cout << "Skaicius be trejetu ir penketu: " << ben;


}
