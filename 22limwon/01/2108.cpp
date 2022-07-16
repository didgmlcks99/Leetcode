#include <iostream>
#include <cmath>
#include <algorithm>
#define MAX 8001
using namespace std;

int N;
int input[MAX] = {0,};
int cnt[MAX] = {0,};
float mean;
int median, mode, diff;
int modes[MAX];

int main(){
    cin >> N;

    // sum
    float sum = 0;
    for(int i=0; i<N; i++){
        cin >> input[i];
        sum += input[i];
    }
    

    // mean
    mean = sum / (float)N;
    mean = round(mean);
    if(mean == 0) mean = 0;

    sort(input, input + N);

    int pre_num = -4001;
    int mode_idx = 0;
    int max = -4001;
    for(int i=0; i<N; i++){
        // count
        if(input[i] == pre_num) cnt[i] += (cnt[i-1]+1);
        else cnt[i] += 1;  
        pre_num = input[i];

        // modes
        if(cnt[i] > max){
            max = cnt[i];
            modes[0] = input[i];
            mode_idx = 0;
        }else if(cnt[i] == max){
            modes[++mode_idx] = input[i];
        }
    }

    if(mode_idx == 0) mode = modes[0];
    else mode = modes[1];
    
    // median
    median = input[(N/2)];

    diff = input[N-1] - input[0];

    cout << mean << endl;
    cout << median << endl;
    cout << mode << endl;
    cout << diff << endl;

    return 0x0;
}