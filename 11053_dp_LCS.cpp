#include <iostream>
#include <cstdlib>

#define MAX 1000

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int l(int *A, int *B, int m, int n){
    int L[m+1][n+1];

    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){

            if(i==0 || j==0){
                L[i][j] = 0;
            }else if(A[i-1] == B[j-1]){
                if(j-1>0){
                    if(B[j-1] > B[j-2]){
                        L[i][j] = L[i-1][j-1] + 1;
                    }else{
                        L[i][j] = max(L[i-1][j], L[i][j-1]);
                    }
                }else{
                    L[i][j] = L[i-1][j-1] + 1;
                }
            }else{
                L[i][j] = max(L[i-1][j], L[i][j-1]);
            }
        }
    }

    return L[m][n];
}

int main(void){
    int N;
    cin >> N;

    int* B = (int*)malloc(MAX * sizeof(int));

    for(int i=0; i<N; i++){
        cin >> B[i];
    }

    int* A = (int*)malloc(MAX * sizeof(int));

    for(int i=0; i<N; i++){
        A[i] = B[i];
    }

    heapSort(B, N);

    int result = l(A, B, N, N);

    cout << result;

    return 0x0;
}