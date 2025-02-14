#include <iostream>
using namespace std;

/*
    Projekt: Program Motivues
    Përshkrimi: Ky program ofron mesazhe motivuese për përdoruesin bazuar në kategorinë që zgjedh.
    Përdoruesi mund të zgjedhë mesazhe për punë, mirëqenie ose motivim të përgjithshëm.
    
    Anëtarët e grupit:
    - Floreta Haliti
    - Ylli Lutfiu
    - Yll Konjusha
    - Urim Demaj
*/

// Funksion për të shfaqur mesazhet motivuese bazuar në zgjedhjen e përdoruesit
void shfaqMesazh(int zgjedhja) {
    if (zgjedhja == 1) {
        cout << "Mesazh motivues per pune: 'Puna e palodhur sjell sukses!'" << endl;
    } else if (zgjedhja == 2) {
        cout << "Mesazh motivues per mireqenie: 'Shendeti dhe lumturia jane pasuria me e madhe!'" << endl;
    } else if (zgjedhja == 3) {
        cout << "Mesazh i pergjithshem motivues: 'Besimi ne veten tende eshte celesi i suksesit!'" << endl;
    }
}

int main() {
    int zgjedhja; // Variabla për të ruajtur zgjedhjen e përdoruesit
    char vazhdo;  // Variabla për të kontrolluar vazhdimin e programit

    do {
        // Shfaqja e opsioneve për përdoruesin
        cout << "Zgjidh nje kategori motivimi (1-Pune, 2-Mireqenie, 3-Motivim): ";
        cin >> zgjedhja;

        // Kontrollo nëse zgjedhja është e vlefshme
        if (zgjedhja < 1 || zgjedhja > 3) {
            cout << "Zgjedhje e pavlefshme!" << endl;
            continue; // Rikthehu në fillim të ciklit
        }

        // Thirrja e funksionit për të shfaqur mesazhin motivues
        shfaqMesazh(zgjedhja);

        // Pyet përdoruesin nëse dëshiron të vazhdojë
        cout << "Deshiron te vazhdosh? (P/J): ";
        cin >> vazhdo;

    } while (vazhdo == 'P' || vazhdo == 'p'); // Vazhdon nëse përdoruesi shtyp 'P' ose 'p'

    cout << "Fund." << endl; // Fundi i programit

    return 0;
}
