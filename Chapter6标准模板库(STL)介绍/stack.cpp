#include<iostream>
#include<stack>
using namespace std;
/*��;��ģ��ʵ�ֵݹ�*/
int main() {
	stack<int> s;
	s.push(100);
	if(!s.empty())
	cout << s.top() << "size:" << s.size()<<endl;
	s.pop();
	cout << "size:" << s.size();
	system("pause");
	return 0;
}