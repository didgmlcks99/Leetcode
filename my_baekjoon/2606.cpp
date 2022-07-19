#include <iostream>

using namespace std;

int main(){
    int com_N, con_N;

    cin >> com_N;
    cin >> con_N;

    int connection[con_N][2];

    for(int i=0; i<con_N; i++){
        cin >> connection[i][0] >> connection[i][1];
    }

    int v_cnt = 0;
    int curr = 0;

    for(int i=0; i<con_N; i++){
        if(connection[i][0] == 1){

        }
    }

    return 0x0;
}
