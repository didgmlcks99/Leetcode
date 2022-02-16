#include <iostream>
#include <cstdlib>
#include <list>
#include <algorithm>

using namespace std;

struct plate{
    struct plate* left;
    int n;
    struct plate* right;
};

int main(void){
    int i, j, m;
    int N, d, k, c;
    int max, coup, g;

    cin >> N >> d >> k >> c;

    struct plate* s = (struct plate*)malloc(N * sizeof(struct plate));

    for(i=0; i<N; i++){
        cin >> s[i].n;
        if(i==N-1){
            s[i].left = &s[i-1];
            s[i].right = &s[0];
        }else if(i==0){
            s[i].left = &s[N-1];
            s[i].right = &s[i+1];
        }
        else{
            s[i].left = &s[i-1];
            s[i].right = &s[i+1];
        }
    }

    cout << endl;

    max = 0;
    for(i=0; i<N; i++){
        coup = 1;
        g = 0;
        j = 0;

        struct plate* walk = &s[i];
        while(j<k){
            struct plate* check = walk;
            g = check->n;
            for(m=0; m<j; m++){
                if(g != check->left->n){
                    check = check->left;
                }else{
                    g = -1;
                    break;
                }
            }
            
            if(g == -1) break;
            if(walk->n == c) coup = 0;

            cout << walk->n << " ";
            walk = walk->right;
            j++;
        }cout << endl;

        if(coup == 1) j++;
        if(j > max) max = j;
    }

    cout << max << endl;

    return 0x0;
}