// #include <iostream>
// #include <deque>

// using namespace std;

// void sequence(deque<int> tree, deque<int> nums, int M){
//     if(nums.size() == M){
//         int tmp = 0;
//         for(int i=0; i<nums.size(); i++){
//             cout << nums[i];
//             if(i+1 != nums.size()) cout << " ";
//             else cout << endl;
//         }
//     }else{
//         int size = tree.size();
        
//         deque<int>::iterator it = tree.begin();
//         for(int i=0; i<size; i++){
//             int tmp = tree[i];
//             tree.erase(tree.begin()+i);

//             nums.push_back(tmp);

//             sequence(tree, nums, M);

//             tree.insert(tree.begin()+i, tmp);
//             nums.pop_back();
//         }
//     }
// }

// int main(){
//     int N, M;
//     cin >> N >> M;

//     deque<int> tree;
//     for(int i=0; i<N; i++){
//         tree.push_back(i+1);
//     }

//     deque<int> nums;
//     sequence(tree, nums, M);

//     return 0x0;
// }

#include <iostream>
#define MAX 9
using namespace std;

int n,m;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int cnt)
{
    if(cnt == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0);
}