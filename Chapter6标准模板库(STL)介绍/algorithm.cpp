#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {

	int x = -1, y = 2;
	cout << max(x, y) << " " << min(x, y)<<endl;
	cout << abs(x) << " " << abs(y) << endl;
	swap(x, y);
	cout << x << " " << y << endl;


	//reverse(it1, it2)
	int a[10] = { 1,2,3,8,7,6 };
	reverse(a, a + 4);			//数组指针
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";
	cout << endl;
	string str = "abcdefghijk";
	reverse(str.begin(), str.end());		//容器迭代器
	cout << str << endl;

	//next_permutation(start, end)
	int b[10] = { 3,2,1};
	do {
		printf("%d %d %d\n", b[0], b[1], b[2]);
	} while (next_permutation(b, b + 3));

	//fill(start, end, value)
	fill(b, b + 3, 10);
	printf("%d %d %d\n", b[0], b[1], b[2]);

	//sort(start, end, cmd(可选))
	//stable_sort(start, end, cmd(可选))

	//lower_bound(first, last, val)  upper_bound(first, last, val)用来寻找数组或容器里
	//的[first, last)范围第一个值 大于等于  / 大于 val的元素的位置，返回该位置的指针或迭代器  O(log(last-first))
	//没有满足条件的元素时，返回可以插入该元素的位置的指针或迭代器
	int c[10] = { 1,2,2,3,3,3,5,5,5,5 };
	printf("%d %d\n", lower_bound(c, c + 10, 3)-c, upper_bound(c, c + 10, 3)-c);
	printf("%d\n", lower_bound(c, c + 10, 6) - c);
	system("pause");
	return 0;
}