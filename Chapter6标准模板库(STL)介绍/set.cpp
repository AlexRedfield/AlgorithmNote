#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
/*set����Ϊ���ϣ���һ���ڲ��Զ����������Ҳ����ظ�Ԫ�ص�����*/
/*
multiset������Ԫ�ز�Ψһ�����
unorded_set����������ֻȥ�ز����������
*/

int main() {
	set<int> st;
	set<int>::iterator it;
	st.insert(5);	//insert(x)��x����set�����У����Զ����������ȥ�أ�ʱ�临�Ӷ�O(logn)
	st.insert(3);
	st.insert(3);
	st.insert(2);
	for (it = st.begin(); it != st.end(); it++) {
		cout << *it;		//��֧��*(it+i)�ķ��ʷ�ʽ
	}
	it = st.find(2);	//find(value)����set�ж�ӦֵΪvalue�ĵ�������O(logn)
	//erase(it);erase(value)
	//erase(first,last)
	//clear()
	cout << endl<<st.size();
	system("pause");
	return 0;
}