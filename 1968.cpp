#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int input[N];
    int cnt = 0;

    for(int i=0; i<N; i++){
        cin >> input[i];

        int flag = 0;
        for(int j=1; j<input[i]; j++){
            if((input[i] % j) == 0 && j!= 1){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
        }

        if(flag == 1) cnt++;
    }

    cout << cnt << endl;

    return 0x0;
}