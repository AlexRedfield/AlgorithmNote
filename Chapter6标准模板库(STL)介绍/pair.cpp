#include<iostream>
#include<utility>
using namespace std;
/*用途：
1.用来替代二元结构体及其构造函数
2.作为map的键值对来进行插入
*/
int main() {
	pair<int, int>p1(5, 10);
	pair<int, int> p2(5,15);
	pair<int, int> p3(10, 5);
	if (p1 < p2) cout << "p1<p2\n" << endl;	//先以first小心作为标准，first相等时在判断second

	system("pause");
	return 0;
}