#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
/*set翻译为集合，是一个内部自动有序（升序）且不含重复元素的容器*/
/*
multiset：处理元素不唯一的情况
unorded_set：用来处理只去重不排序的需求
*/

int main() {
	set<int> st;
	set<int>::iterator it;
	st.insert(5);	//insert(x)将x插入set容器中，并自动递增排序和去重，时间复杂度O(logn)
	st.insert(3);
	st.insert(3);
	st.insert(2);
	for (it = st.begin(); it != st.end(); it++) {
		cout << *it;		//不支持*(it+i)的访问方式
	}
	it = st.find(2);	//find(value)返回set中对应值为value的迭代器，O(logn)
	//erase(it);erase(value)
	//erase(first,last)
	//clear()
	cout << endl<<st.size();
	system("pause");
	return 0;
}