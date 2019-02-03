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
	printf("%d %d\n", q.front(), q.back());		//访问队首和队尾元素
	for (i = 0; i <= 3; i++) {
		q.pop();
	}
	printf("%d\n", q.front());		//访问队首和队尾元素
	system("pause");
	return 0;
}