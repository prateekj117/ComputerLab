#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
    //Enter the number of rows in the square matrix
	cin >> n;

    /*Allocating memory in heap using malloc.*/
    int *arr = (int *)malloc(n * n * sizeof(int));

    //Enter the array.
    for (int i = 0; i <  n; i++) {
		for (int j = 0; j < n; j++) {
        	cin >> *(arr + i*n + j);
		}
	}

	/*Algorithm for printing array elements in the required pattern*/
	for (int i=0; i<(2*n)-1; i++) {
		if(i<n) {
			for(int j=0; j<i+1; j++) {
				if(i%2 == 0) {
					cout << *(arr + (i-j)*n + j) << " ";
				}
				else {
					cout << *(arr + j*n + (i-j)) << " ";
				}
			}
		}
		else {
			for(int j=1; j<=((2*n)-i-1); j++) {
				if(i%2 == 0) {
					cout << *(arr + (n-j)*n + (i-n+j)) << " ";
				}
				else {
					cout << *(arr + (i-n+j)*n + (n-j)) << " ";
				}
			}
		}
	}
	cout << "\n";
	return 0;
}
