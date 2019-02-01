//#pragma warning(disable:4996)	
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//冒泡排序
void bubbleSort(int *A, int n) {
	for (int i = 1; i < n; i++)		//进行n-1轮
		for (int j =0; j <=  n - i - 1; j++) {		//每一轮中将A[0]~A[n-1-i]中的最大值冒到末端
			if (A[j] > A[j+1]) {
				swap(A[j], A[j + 1]);
			}
		}
}
	
void bubbleSort2(int *A, int n) {
	for (int i = 1; i < n; i++)		
		for (int j = n - 1 ; j >=i ; j--) {	//每一轮中将A[i]~A[n-1]中的最小值冒到前端
			if (A[j -1] > A[j]) {
				swap(A[j], A[j - 1]);
			}
		}
}

//选择排序
void selectSort(int* A ,int n) {
	for (int i = 0; i < n; i++) {		//每一轮将A[i]~A[n]中的最小值与A[i]交换
		int k = i;
		for (int j = i; j < n; j++)	//找出A[i]~A[n]中最小值的下标k
			if (A[j] < A[k])
				k = j;
		swap(A[i], A[k]);
	}
}

//插入排序
void insertSort(int* A, int n) {
	for (int i = 1; i < n; i++) {		//每一轮将A[i]插入到数组前面已有序的部分
		int j = i;
		int temp = A[i];
		while (j >= 1 && temp < A[j - 1]) {
			A[j] = A[j - 1];
			j--;
		}
		A[j] = temp;
	}
}

int main() {
	int A[] = { 1,9,2,8,5,7,4,6,3 };
	int n = sizeof(A) / sizeof(A[0]);		//获取数组长度
	bubbleSort(A, n);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	//system("pause");
	return 0;
}