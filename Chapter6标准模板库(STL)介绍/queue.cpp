#include<iostream>
#include<queue>
using namespace std;
/*push() pop() empty() size()*/
int main() {
	queue<int> q;
	int i;
	for (i = 0; i <= 5; i++) {
		q.push(i);
	}
	printf("%d %d\n", q.front(), q.back());		//���ʶ��׺Ͷ�βԪ��
	for (i = 0; i <= 3; i++) {
		q.pop();
	}
	printf("%d\n", q.front());		//���ʶ��׺Ͷ�βԪ��
	system("pause");
	return 0;
}