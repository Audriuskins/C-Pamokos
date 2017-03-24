

//9. Ant popieriaus lapo užrašyti keturi natūralieji skaičiai: A, B, C, D. Po to du iš jų buvo
//nutrinti (juos žymėsime nuliais). Reikia atstatyti nutrintuosius skaičius, jeigu žinoma, kad
//yra likęs bent vienas iš skaičių A ir B ir kad skaičiai tenkino šitokias lygybes: C = A + B
//ir D = A*B. Parašykite programą šiam uždaviniui spręsti.


#include <iostream>
using namespace std;
int main() {
  int a, b, c, d;
  cout << "A = ?: ";
  cin >> a;
  cout << "B = ?: ";
  cin >> b;
  cout << "C = ?: ";
  cin >> c;
  cout << "D = ?: ";
  cin >> d;
  cout << "---" << endl;
  if(a == 0 && c == 0){
    a = d / b;
    c = a + b;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    cout << "D = " << d << endl;
  }
  if(a == 0 && d == 0){
    a = c - b;
    d = a * b;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    cout << "D = " << d << endl;
  }
  if(b == 0 && c == 0){
    b = d / a;
    c = a + b;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    cout << "D = " << d << endl;
  }
  if(b == 0 && d == 0){
    b = c - a;
    d = a * b;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    cout << "D = " << d << endl;
  }
}
