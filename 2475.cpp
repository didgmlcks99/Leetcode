#include <iostream>

using namespace std;

#define N 5

int main(){
    int input[N];

    for(int i=0; i<N; i++){
        cin >> input[i];
    }

    int tot_tmp = 0;

    for(int i=0; i<N; i++){
        tot_tmp += (input[i] * input[i]);
    }

    int ans = tot_tmp % 10;

    cout << ans << endl;

    return 0x0;
}
