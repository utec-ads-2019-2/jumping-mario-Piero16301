#include <iostream>
#include <vector>
//#include <experimental/iterator>

using namespace std;

int highJumps(vector <int> bloques) {

    int total = 0;
    int size = bloques.size();

    for (int i = 0; i < (size-1); i++) {
        int last = bloques.back();
        bloques.pop_back();
        int last_1 = bloques.back();
        if (last_1 < last || last_1 > last) {
            total += (last_1 < last) ? 1 : 0;
        } else {
            total += 0;
        }
    }

    return total;

}

int lowJumps(vector <int> bloques) {

    int total = 0;
    int size = bloques.size();

    for (int i = 0; i < (size-1); i++) {
        int last = bloques.back();
        bloques.pop_back();
        int last_1 = bloques.back();
        if (last_1 < last || last_1 > last) {
            total += (last_1 > last) ? 1 : 0;
        } else {
            total += 0;
        }
    }

    return total;

}

int main() {

    //copy(numeros.begin(), numeros.end(), experimental::make_ostream_joiner(cout, " "));

    int iteraciones;
    cin >> iteraciones;
    vector <vector <int>> jumps;
    for (int i = 0; i < iteraciones; i++) {
        int blocks;
        vector <int> bloques;
        cin >> blocks;
        for (int j = 0; j < blocks; j++) {
            int height;
            cin >> height;
            bloques.push_back(height);
        }
        jumps.push_back(bloques);
    }
    // Enviar datos a función
    for (int k = 0; k < iteraciones; k++) {
        cout << "Case " << k+1 << ": " << highJumps(jumps[k]) << ' ' << lowJumps(jumps[k]) << '\n';
    }

}
