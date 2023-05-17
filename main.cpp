#include <iostream>
#include <vector>
#include <locale.h>
#include <string>

namespace rencista {
std::string ile_lat(int lata) {
    return lata != 1 ? lata <= 4 ? " lata" : " lat" : " rok";
}
int ile_zostalo_lat(char plec,int wiek) {
    return plec == 'k' || plec == 'K' ? 60 - wiek : 65 - wiek;
}
void czy_emeryt() {
    char plec;
    int wiek;
    std::cout << "Licznik wieku emerytalnego \n Jesteś kobietą (k) czy meżczyzną (m)?\n";
    std::cin >> plec;
 //   system("cls");
    if(!std::cin.fail()) {
    std::cout << "Ile masz lat? ";
    std::cin >> wiek;
    int jaki_wiek_emeryt = plec == 'k' ? 60 : 65;
    !std::cin.fail() ? wiek >= jaki_wiek_emeryt ? plec == 'k' ? std::cout << "Jesteś już emerytką!" : std::cout << "Jesteś już emerytem!" : std::cout << "Zostało Ci " << ile_zostalo_lat(plec,wiek) << ile_lat(ile_zostalo_lat(plec,wiek)) << " do emeretury!"  : std::cout << "Nie prawidłowe dane wejściowe!";
    std::cout << std::endl;
    } else {
        std::cout << "Nie prawidłowe dane";
    }
}
}

int main() {
    rencista::czy_emeryt();
    return 0;
}
