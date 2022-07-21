#include <iostream>

using namespace std;

int rec_fact (int N) {
    if (N == 0) {
        return 1;
    } else {
        return N * rec_fact(N-1);
    }
}

int main () {
    int N;

    cin >> N;
    cout << rec_fact(N) << endl;

    return 0x0;
}