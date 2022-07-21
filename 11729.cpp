#include <iostream>

using namespace std;


int rec_hanoi(int N, int from, int to, int aux) {
    if (N == 1) {
        cout << from << " " << to << endl;
        return 1;
    }

    rec_hanoi(N-1, from, aux, to);
    cout << from << " " << to << endl;
    rec_hanoi(N-1, aux, to, from);

    return 0x0;
}

int main () {
    int N;

    cin >> N;

    cout << rec_hanoi(N, 1, 3, 2) << endl;

    return 0x0;
}