#include<map>
#include<iostream>
#include <string>
/*C++ 11��׼���ӵ�unordered_map����ɢ�д���map�ڲ��ĺ����ʵ��
��������ֻӳ�䲻��key����������ٶȱ�map��ö�*/
using namespace std;
int main() {
	map<string, int> mp;
	map<string, int>::iterator it;

	mp.insert(make_pair("David", 60));
	mp.insert(pair<string, int>("Claire", 95));		
	mp.insert(map<string, int>::value_type("Bob", 80));
	mp["Alex"] = 85;
	// ǰ���ַ����������ظ���ʱ���������ᱨ�����һ�ֻḲ���ظ��ļ�

	for (it = mp.begin(); it != mp.end(); it++)
		printf("%s:%d\n", it->first.c_str(), it->second);	//first�ǵ�ǰӳ��ļ���second�ǵ�ǰӳ���ֵ
	//map���Լ���С�����˳���Զ�����

	//find(key) ���ؼ�Ϊkey��ӳ��ĵ�������O(logn)��nΪmap��ӳ��ĸ���
	it = mp.find("Alex");
	cout << it->first<< it->second<<endl;		//����������
	cout << mp["Alex"];		//�±����

	//erase(it)		erase(key)
	//erase(first, last)

	//size()����map��ӳ��Ķ���
	//clear()���map������Ԫ��

	system("pause");
	return 0;
}