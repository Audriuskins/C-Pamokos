#include <iostream>
using namespace std;
int main() {
  int nr, m;
  cout << "Iveskite metus: ";
  cin >> m;

  if (m < 1896) cout << "Siais metais olimpiada neegzistavo.";
  else {
    nr = ((m - 1896) / 4) + 1;
    cout << "Olimpiados numeris: " << nr;

  }
}
