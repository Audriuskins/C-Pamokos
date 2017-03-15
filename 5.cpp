//Skaičius sudaromas iš reikšminių ir nereikšminių (nulių) skaitmenų. Nustatykite, kiek
//natūraliajame keturženkliame skaičiuje yra reikšminių ir nereikšminių skaitmenų.
//
#include <iostream>
using namespace std;
int main() {
  int a, s1, s2, s3, s4, r, n;
  cout << "Iveskite keturzenkli skaiciu: ";
  cin >> a;
  s1 = a / 1000 % 10;
  s2 = a / 100 % 10;
  s3 = a / 10 % 10;
  s4 = a / 1 % 10;

  r = 0;
  n = 0;


  if (s1 <= 0) n++;
  else r++;
  if (s2 <= 0) n++;
  else r++;
  if (s3 <= 0) n++;
  else r++;
  if (s4 <= 0) n++;
  else r++;
  cout << "Reiksminiu skaiciu: " << r << endl;
  cout << "Nereiksminiu skaiciu: " << n << endl;
}
