//Žinomi kvadratinės lygties ax2 + bx + c = 0 koeficientai a, b ir c. Parašykite programą,
//kuri išspręstų šią lygtį.

#include <iostream>
#include <cmath>
using namespace std;
int main() {

  int a, b, c, x1, x2, d;

  cout << "a koeficientas: " << '\n';
  cin >> a;
  cout << "b koeficientas: " << '\n';
  cin >> b;
  cout << "c koeficientas: " << '\n';
  cin >> c;

  if(a > 0 && b > 0 && c > 0)
  {
      d = (b ^ 2) - (4 * a * c); // diskriminanto formule
      cout << "Diskriminantas:  " << d << endl;
      if(d > 0) // jeigu diskriminantas didesnis uz nuli..
      {
          cout << "2 sprendiniai" << endl;
          x1 = (-b + sqrt(d)) / (2 * a); // x1
          x2 = (-b - sqrt(d)) / (2 * a); // x2
          cout << "x1 = " << x1 << endl;
          cout << "x2 = " << x2 << endl;
      }
          else if(d == 0)
      {
          cout << "Lygtis turi du sprendinius:" << endl;
          x1 = (-b / (2 * a));
          cout << "x1 = " << x1 << endl;
      }
      else
      {
          cout << "Lygtis sprendiniu neturi." << endl;
      }
      cout << '\n' << endl;
  }
}
