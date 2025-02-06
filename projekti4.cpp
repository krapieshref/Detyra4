#include <iostream>
#include <iomanip>

using namespace std;

void menaxhoNotat();


int main() {

    menuKryesore();

    return 0;

}



// Funksioni per menaxhimin e notave
void menaxhoNotat() {
    int zgjedhja;
    do {
        cout << "\n--- Menaxho studentet dhe notat ---\n";
        cout << " Kthehu te Menu-ja kryesore\n";
        cout << "Zgjedhni: ";
        cin >> zgjedhja;
        cout << endl;

        switch (zgjedhja) {
        case 1: {

            break;
        }
              break;
        }
        
           
        case 5: cout << "Kthyer tek Menuja kryesore...\n"; break;
        default: cout << "Zgjedhje jo valide. Provoni perseri.\n";
    }
} while (zgjedhja != 5);
}



