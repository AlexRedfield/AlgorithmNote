#pragma warning(disable:4996)	
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//—°‘Ò≈≈–Ú
void selectSort(int* A ,int n) {
	for (int i = 0; i < n; i++) {
		int k = i;
		for (int j = i; j < n; j++)
			if (A[j] < A[k])
				k = j;
		int temp = A[i];
		A[i] = A[k];
		A[k] = temp;
	}
}

//≤Â»Î≈≈–Ú
void insertSort(int* A, int n) {

}

int main() {
	int A[] = { 1,9,2,8,5,7,4,6,3 };
	int n = sizeof(A) / sizeof(A[0]);
	selectSort(A, n);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	system("pause");
	return 0;
}