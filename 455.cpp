#include <iostream>
#include <vector>

using namespace std;

void swap(int * a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(vector<int>&  arr, int low, int high){

	int pivot = arr[high];
	int i = (low - 1); // index of smaller element and indicates the right position of p

	// if current element is smaller than the pivot
	for(int j=low; j<=high-1; j++){
		if(arr[j] > pivot){
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quickSort(vector<int>& arr, int low, int high){
	if(low < high){
		
		// partition index
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}

void printVector(vector<int>& g){
	for(int i=0; i<g.size(); i++){
		cout << g[i] << " ";
	} cout << endl;
}

class Solution{
	public:
		int findContentChildren(vector<int>& g, vector<int>& s){

			quickSort(g, 0, g.size()-1);
			quickSort(s, 0, s.size()-1);

			int j = 0;

			for(int i=0; i<g.size(); i++){
				if(j == s.size()) break;
				if(g[i] <= s[j]){
					j++;
				}
			}

			return j;
		}
};

int main(){
	
	Solution solution;

	vector<int> g{10, 9, 8, 7};
	vector<int> s{5, 6, 7, 8};

	int answer = solution.findContentChildren(g, s);
	cout << answer << endl;

	return 0;
}
