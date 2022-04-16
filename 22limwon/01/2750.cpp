#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    int input[N];

    for(int i=0; i<N; i++){
        cin >> input[i];
    }

    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(input[i] > input[j]){
                int tmp = input[i];
                input[i] = input[j];
                input[j] = tmp;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << input[i] << endl;
    }

    return 0;
}