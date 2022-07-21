#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> conn[], int u, int v){
	conn[u].push_back(v);
	conn[v].push_back(u);
}

void printGraph(vector<int> adj[], int V){
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

int DFS(vector<int> conn[], int visited[], int v){

	visited[v] = 1;
	int cnt = 1;

	for (auto x : conn[v]){
		if (visited[x] != 1){
			cnt += DFS(conn, visited, x);
		}
	}	

	return cnt;
}

int main(){
    int com_N, con_N;

    cin >> com_N;
    cin >> con_N;

	vector<int> conn[com_N+1];

	for(int i=0; i<con_N; i++){
		int u, v;
		cin >> u >> v;

		addEdge(conn, u, v);
	}
	
	int visited[com_N+1] = {0,};

	int cnt = DFS(conn, visited, 1) - 1;

	cout << cnt << endl;

    return 0x0;
}
