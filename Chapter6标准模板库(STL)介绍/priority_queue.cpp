#include<iostream>
#include<queue>
#include <string>

using namespace std;
/*优先队列底层是用堆实现的，队首元素是当前队列中优先级最高的元素
用途：解决一些贪心问题，优化Dijistra算法*/

struct fruit {
	string name;
	int price;
	friend bool operator < (fruit f1, fruit f2) {
		return f1.price > f2.price;		//优先队列默认将数字大的优先级高，这里把"<"重载为">"，将效果倒置
	}
}f1,f2,f3;

int main() {
	priority_queue<int> q;	//默认数字大的优先级高
	q.push(1);		//O(logn)
	q.push(4);
	q.push(3);
	q.push(20);
	q.pop();
	cout << q.top() <<" "<<q.size()<< endl;	//top()获得队首元素（即堆顶元素，使用前需用empty()判断优先队列是否为空

	priority_queue<int, vector<int>, greater<int> >pq;		//第二个参数是用来承载堆的容器，第三个参数默认是less<int>
	pq.push(6);
	pq.push(-1);
	pq.push(5);
	cout <<pq.top() <<  endl;

	priority_queue<fruit> fq;

	f1.name = "苹果";
	f1.price = 3;
	f2.name = "梨子";
	f2.price = 2;	
	f3.name = "桃子";
	f3.price = 4;
	fq.push(f1);
	fq.push(f2);
	fq.push(f3);

	cout << fq.top().name << " " << fq.top().price << endl;

	system("pause");
	return 0;
}