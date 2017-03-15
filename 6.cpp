// Parašykite programą, kuri suskaičiuotų, kiek penkiaženkliame skaičiuje yra lyginių ir
// nelyginių skaičių. Raskite nelyginių skaičių sumą, lyginių sandaugą.
//
#include <iostream>
using namespace std;
int main() {
  int a, s1, s2, s3, s4, s5, l, nl, nlsum, lsan;
  cout << "Iveskite penkiazenkli skaiciu: ";
  cin >> a;

  s1 = a / 10000 % 10;
  s2 = a / 1000 % 10;
  s3 = a / 100 % 10;
  s4 = a / 10 % 10;
  s5 = a / 1 % 10;

  l = 0;
  nl = 0;
  nlsum = 0;
  lsan = 1;

  if (s1 % 2 == 0) {
    l++;
    lsan = lsan * s1 - 1;
  }
  else {
    nl++;
    nlsum = nlsum + s1;
  }
  if (s2 % 2 == 0) {
    l++;
    lsan = lsan * s2;
  }
  else {
    nl++;
    nlsum = nlsum + s2;
  }
  if (s3 % 2 == 0) {
    l++;
    lsan = lsan * s3;
  }
  else {
    nl++;
    nlsum = nlsum + s3;
  }
  if (s4 % 2 == 0) {
    l++;
    lsan = lsan * s4;
  }
  else {
    nl++;
    nlsum = nlsum + s4;
  if (s5 % 2 == 0) {
      l++;
      lsan = lsan * s5;
  }
  else {
      nl++;
      nlsum = nlsum + s5;
  }

  cout << "Lyginiu skaiciu yra: " << l << endl;
  cout << "Nelyginiu skaiciu yra: " << nl << endl;
  cout << '\n';
  cout << "Nelyginiu skaiciu suma: " << nlsum << endl;
  cout << "Lyginiu skaiciu sandauga: " << lsan << endl;
  }
}
