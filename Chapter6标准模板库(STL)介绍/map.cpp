#include<map>
#include<iostream>
/*C++ 11��׼���ӵ�unordered_map����ɢ�д���map�ڲ��ĺ����ʵ��
��������ֻӳ�䲻��key����������ٶȱ�map��ö�*/
using namespace std;
int main() {
	map<char, int> mp;
	map<char, int>::iterator it;
	/*���ַ��ʷ�ʽ���±�͵�����*/
	mp['m'] = 10;
	mp['b'] = 20;
	mp['a'] = 30;
	for (it = mp.begin(); it != mp.end(); it++)
		printf("%c:%d\n", it->first, it->second);	//first�ǵ�ǰӳ��ļ���second�ǵ�ǰӳ���ֵ
	//map���Լ���С�����˳���Զ�����

	//find(key) ���ؼ�Ϊkey��ӳ��ĵ�������O(logn)��nΪmap��ӳ��ĸ���
	it = mp.find('a');
	cout << it->first << it->second;

	//erase(it)		erase(key)
	//erase(first, last)

	//size()����map��ӳ��Ķ���
	//clear()���map������Ԫ��

	system("pause");
	return 0;
}