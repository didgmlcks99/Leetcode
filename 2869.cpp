#include <iostream>

using namespace std;

int main(){
    int A, B, V;

    cin >> A >> B >> V;

    int days = 1;
    int pos = 0;

    // while(pos < V){
    //     pos += A;
    //     if(pos >= V) break;
    //     pos -= B;
    //     days++;
    // }

    // int x = V-B;
    // int y = A-B;
    // while(y<x){
    //     y += (A-B);
    //     days++;
    // }

    int x = V-B;
    int y = A-B;
    int z = x/y;

    if(x%y != 0){
        z+=1;
    }

    cout << z << endl;
    // cout << days << endl;
    
    return 0x0;
}