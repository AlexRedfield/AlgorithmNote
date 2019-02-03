#include<iostream>
#include<queue>
#include <string>

using namespace std;
/*���ȶ��еײ����ö�ʵ�ֵģ�����Ԫ���ǵ�ǰ���������ȼ���ߵ�Ԫ��
��;�����һЩ̰�����⣬�Ż�Dijistra�㷨*/

struct fruit {
	string name;
	int price;
	friend bool operator < (fruit f1, fruit f2) {
		return f1.price > f2.price;		//���ȶ���Ĭ�Ͻ����ִ�����ȼ��ߣ������"<"����Ϊ">"����Ч������
	}
}f1,f2,f3;

int main() {
	priority_queue<int> q;	//Ĭ�����ִ�����ȼ���
	q.push(1);		//O(logn)
	q.push(4);
	q.push(3);
	q.push(20);
	q.pop();
	cout << q.top() <<" "<<q.size()<< endl;	//top()��ö���Ԫ�أ����Ѷ�Ԫ�أ�ʹ��ǰ����empty()�ж����ȶ����Ƿ�Ϊ��

	priority_queue<int, vector<int>, greater<int> >pq;		//�ڶ����������������ضѵ�����������������Ĭ����less<int>
	pq.push(6);
	pq.push(-1);
	pq.push(5);
	cout <<pq.top() <<  endl;

	priority_queue<fruit> fq;

	f1.name = "ƻ��";
	f1.price = 3;
	f2.name = "����";
	f2.price = 2;	
	f3.name = "����";
	f3.price = 4;
	fq.push(f1);
	fq.push(f2);
	fq.push(f3);

	cout << fq.top().name << " " << fq.top().price << endl;

	system("pause");
	return 0;
}