#include <iostream>

using namespace std;
#include <locale.h> // veya C++ için <clocale>
int main() {
  setlocale(LC_ALL, "Turkish");
  int sayi = 0, rakam = 0;

  cout << "Sayi giriniz: ";
  cin >> sayi;

  if (sayi >= 100) {
    rakam = sayi / 100;
    switch (rakam) {
    case 1:
      cout << "yüz";
      break;
    case 2:
      cout << "ikiyüz";
      break;
    case 3:
      cout << "üçyüz";
      break;
    case 4:
      cout << "dörtyüz";
      break;
    case 5:
      cout << "beþyüz";
      break;
    case 6:
      cout << "altýyüz";
      break;
    case 7:
      cout << "yediyüz";
      break;
    case 8:
      cout << "sekizyüz";
      break;
    case 9:
      cout << "dokuzyüz";
      break;
    default:
      cout << "zzz ";
      break;
      
    }
        sayi= sayi-rakam*100;

}
    
    
	if (sayi >=10 ) {
    rakam = sayi / 10;
    switch (rakam) {
    case 1:
      cout << "on";
      break;
    case 2:
      cout << "yirmi";
      break;
    case 3:
      cout << "otuz";
      break;
    case 4:
      cout << "kýrk";
      break;
    case 5:
      cout << "elli";
      break;
    case 6:
      cout << "altmis";
      break;
    case 7:
      cout << "yetmiþ";
      break;
    case 8:
      cout << "seksen";
      break;
    case 9:
      cout << "doksan";
      break;
    case 0:
      cout << "";
      break;
    default:
      cout << "zzz ";
      break;
    
}
sayi =sayi-rakam*10;
	}
    
    if (sayi > 0) {
    rakam = sayi;
    switch (rakam) {
    case 1:
      cout << "bir";
      break;
    case 2:
      cout << "iki";
      break;
    case 3:
      cout << "üç";
      break;
    case 4:
      cout << "dört";
      break;
    case 5:
      cout << "beþ";
      break;
    case 6:
      cout << "altý";
      break;
    case 7:
      cout << "yedi";
      break;
    case 8:
      cout << "sekiz";
      break;
    case 9:
      cout << "dokuz";
      break;
    case 0:
      cout << "sýfýr";
      break;
    default:
      cout << "zzz";
      break;
    }
    
    
    
  }

  return 0;
}


