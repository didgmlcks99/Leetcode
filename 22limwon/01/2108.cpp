#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    // sum
    int input[N];
    int sum = 0;
    for(int i=0; i<N; i++){
        cin >> input[i];
        sum += input[i];
    }

    // mean
    int mean = sum / N;
    if(mean < 0) mean *= -1;

    // sort
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(input[i] > input[j]){
                int tmp = input[i];
                input[i] = input[j];
                input[j] = tmp;
            }
        }
    }

    // median
    int median = input[(N/2)+1];

    // count initiate
    int cnt[input[N-1]+1];
    for(int i=0; i<input[N-1]+1; i++){
        cnt[i] = 0;
    }

    // count
    for(int i=0; i<N; i++){
        cnt[input[i]] += 1;
    }

    // mode
    int mode = -1;
    int max = -1;
    for(int i=0; i<input[N-1]+1; i++){
        if(cnt[i] > max){
            max = cnt[i];
            mode = i;
        }
    }

    cout << mean << endl;
    cout << median << endl;
    cout << mode << endl;

    return 0x0;
}