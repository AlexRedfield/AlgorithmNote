#include<iostream>
#include<utility>
using namespace std;
/*��;��
1.���������Ԫ�ṹ�弰�乹�캯��
2.��Ϊmap�ļ�ֵ�������в���
*/
int main() {
	pair<int, int>p1(5, 10);
	pair<int, int> p2(5,15);
	pair<int, int> p3(10, 5);
	if (p1 < p2) cout << "p1<p2\n" << endl;	//����firstС����Ϊ��׼��first���ʱ���ж�second

	system("pause");
	return 0;
}