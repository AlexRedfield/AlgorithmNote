#include<map>
#include<iostream>
#include <cstring>
/*C++ 11标准增加的unordered_map，以散列代替map内部的红黑树实现
用来处理只映射不按key排序的需求，速度比map快得多*/
using namespace std;
int main() {
	map<string, int> mp;
	map<string, int>::iterator it;

	mp.insert(pair<string, int>("Claire", 95));		//pair可换为make_pair
	mp.insert(map<string, int>::value_type("Bob", 80));
	mp["Alex"] = 85;
	// 前两种方法当出现重复键时，编译器会报错；最后一种会覆盖重复的键

	for (it = mp.begin(); it != mp.end(); it++)
		printf("%s:%d\n", it->first.c_str(), it->second);	//first是当前映射的键，second是当前映射的值
	//map会以键从小到大的顺序自动排序

	//find(key) 返回键为key的映射的迭代器，O(logn)，n为map中映射的个数
	it = mp.find("Alex");
	cout << it->first.c_str() << it->second<<endl;		//迭代器访问
	cout << mp["Alex"];		//下标访问

	//erase(it)		erase(key)
	//erase(first, last)

	//size()返回map中映射的对数
	//clear()清空map中所有元素

	system("pause");
	return 0;
}