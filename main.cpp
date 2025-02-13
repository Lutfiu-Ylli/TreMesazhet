#include <iostream>
using namespace std;

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
    int zgjedhja;
    char vazhdo;

    do {
        cout << "Zgjidh nje kategori motivimi (1-Pune, 2-Mireqenie, 3-Motivim): ";
        cin >> zgjedhja;

        if (zgjedhja < 1 || zgjedhja > 3) {
            cout << "Zgjedhje e pavlefshme!" << endl;
            continue;
        }

        shfaqMesazh(zgjedhja);

        cout << "Deshiron te vazhdosh? (P/J): ";
        cin >> vazhdo;

    } while (vazhdo == 'P' || vazhdo == 'p');

    cout << "Fund." << endl;

    return 0;
}
