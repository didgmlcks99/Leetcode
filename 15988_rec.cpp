#include <iostream>
#include <cstdlib>

using namespace std;

int fun(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return fun(n-1) + fun(1);
    }else if(n==3){
        return fun(n-2) + fun(n-1) + fun(1);
    }
    return (fun(n-1) + fun(n-2) + fun(n-3));
}
int main() {
    int cnt;

    cin >> cnt;

    int* input = (int*)malloc(cnt * sizeof(int));
    int* result = (int*)malloc(cnt * sizeof(int));

    if (!input) {
        cout << "Memory Allocation Failed";
        exit(1);
    }

    for(int i=0; i<cnt; i++){
        cin >> input[i];
    }

    for(int i=0; i<cnt; i++){
        result[i] = fun(input[i]);
    }

    for(int i=0; i<cnt; i++){
        cout << result[i] << endl;
    }

    free(input);
    free(result);
    
    return 0x0;
}
