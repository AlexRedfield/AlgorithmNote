#include<map>
#include<iostream>
/*C++ 11标准增加的unordered_map，以散列代替map内部的红黑树实现
用来处理只映射不按key排序的需求，速度比map快得多*/
using namespace std;
int main() {
	map<char, int> mp;
	map<char, int>::iterator it;
	/*两种访问方式：下标和迭代器*/
	mp['m'] = 10;
	mp['b'] = 20;
	mp['a'] = 30;
	for (it = mp.begin(); it != mp.end(); it++)
		printf("%c:%d\n", it->first, it->second);	//first是当前映射的键，second是当前映射的值
	//map会以键从小到大的顺序自动排序

	//find(key) 返回键为key的映射的迭代器，O(logn)，n为map中映射的个数
	it = mp.find('a');
	cout << it->first << it->second;

	//erase(it)		erase(key)
	//erase(first, last)

	//size()返回map中映射的对数
	//clear()清空map中所有元素

	system("pause");
	return 0;
}