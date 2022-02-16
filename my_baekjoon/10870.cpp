#include <iostream>

using namespace std;

int rec_fib (int N) {
    if (N == 0) {
        return 0;
    } else if (N == 1) {
        return 1;
    } else {
        return rec_fib(N-2) + rec_fib(N-1);
    }
}
int main () {
    int N;

    cin >> N;
    cout << rec_fib(N) << endl;

    return 0x0;
}