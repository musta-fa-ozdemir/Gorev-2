#include <iostream>

using namespace std;
#include <locale.h> // veya C++ i�in <clocale>
int main() {
  setlocale(LC_ALL, "Turkish");
  int sayi = 0, rakam = 0;

  cout << "Sayi giriniz: ";
  cin >> sayi;

  if (sayi >= 100) {
    rakam = sayi / 100;
    switch (rakam) {
    case 1:
      cout << "y�z";
      break;
    case 2:
      cout << "ikiy�z";
      break;
    case 3:
      cout << "��y�z";
      break;
    case 4:
      cout << "d�rty�z";
      break;
    case 5:
      cout << "be�y�z";
      break;
    case 6:
      cout << "alt�y�z";
      break;
    case 7:
      cout << "yediy�z";
      break;
    case 8:
      cout << "sekizy�z";
      break;
    case 9:
      cout << "dokuzy�z";
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
      cout << "k�rk";
      break;
    case 5:
      cout << "elli";
      break;
    case 6:
      cout << "altmis";
      break;
    case 7:
      cout << "yetmi�";
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
      cout << "��";
      break;
    case 4:
      cout << "d�rt";
      break;
    case 5:
      cout << "be�";
      break;
    case 6:
      cout << "alt�";
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
      cout << "s�f�r";
      break;
    default:
      cout << "zzz";
      break;
    }
    
    
    
  }

  return 0;
}


