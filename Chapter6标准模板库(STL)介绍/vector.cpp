#include <vector>
#include<cstdio>
#include<iostream>
using namespace std;

/*vector�������ɳ��ȿɱ������*/

int main() {
	//1
	//vector<int> name;
	//vector<vector<int> >names1;	//����ά���ɱ䳤�Ķ�ά����
	//vector<int> names2[20];	//һά���ȹ̶�����ά���ȿɱ�

	//2
	vector<int> vi;
	vector<int>::iterator it;	//ͨ������������
	//vi[i]��*(vi.begin()+i)�ȼ�
	int i;
	for (int i = 1; i <= 5; i++)
		vi.push_back(i);
	cout<<vi[0]<<endl;//�±����
	for (it = vi.begin(); it != vi.end(); it++) {	//ֻ��vector��string�����д��
		cout << *it;
	}
	vi.pop_back();	//ɾ��vi��βԪ��
	for (i = 0; i < vi.size(); i++)
		cout << vi[i];
	cout << endl;
	vi.clear();		//���vector������Ԫ��
	
	for(i=0;i<5;i++)
		vi.insert(vi.begin()+i, -i);		//insert(it,x)��vector����һ������it������һ��Ԫ��x,���Ӷ�O(n)
	
	vi.erase(vi.begin() + 1);					//erase(it)ɾ��������������Ԫ��
	vi.erase(vi.begin() , vi.begin() + 3);	//erase(first,last) ɾ��[first, last)�ڵ�����Ԫ��
	cout << vi[0];
	system("pause");
	return 0;
}