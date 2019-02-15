#include <vector>
#include<cstdio>
#include<iostream>
using namespace std;

/*vector可以理解成长度可变的数组*/

int main() {
	//1
	//vector<int> name;
	//vector<vector<int> >names1;	//两个维都可变长的二维数组
	//vector<int> names2[20];	//一维长度固定，二维长度可变

	//2
	vector<int> vi;
	vector<int>::iterator it;	//通过迭代器访问
	//vi[i]和*(vi.begin()+i)等价
	int i;
	for (int i = 1; i <= 5; i++)
		vi.push_back(i);
	cout<<vi[0]<<endl;//下标访问
	for (it = vi.begin(); it != vi.end(); it++) {	//只有vector和string允许vi.begin()+i这种写法
		cout << *it;
	}
	vi.pop_back();	//删除vi的尾元素
	for (i = 0; i < vi.size(); i++)
		cout << vi[i];
	cout << endl;
	vi.clear();		//清空vector中所有元素
	
	for(i=0;i<5;i++)
		vi.insert(vi.begin()+i, -i);		//insert(it,x)向vector的任一迭代器it处插入一个元素x,复杂度O(n)
	
	vi.erase(vi.begin() + 1);					//erase(it)删除迭代器处单个元素
	vi.erase(vi.begin() , vi.begin() + 3);	//erase(first,last) 删除[first, last)内的所有元素
	cout << vi[0]<<endl;

	//assign(first,last)
	//将区间[first,last)的元素赋值到当前的vector容器中，或者赋n个值为x的元素到vector容器中，这个容器会清除掉vector容器中以前的内容。
	vector<int> A(6, 100);
	vector<int> B(5, 200);
	int c[] = { 0,1,2,3};
	A.assign(c, c + 3);
	//A.assign(B.begin(), B.end());
	//A.assign(20,5);    //赋20个值为5的元素到vector容器中
	for (i = 0; i < A.size(); i++)
	{
		cout << A[i] << endl;
	}

	system("pause");
	return 0;
}