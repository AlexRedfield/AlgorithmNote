#include<string>
#include<iostream>

using namespace std;
int main() {
	string str = "abcd";
	string str2;
	string::iterator it=str.begin();
	int i;
	for (i = 0; i < str.length(); i++) {
		printf("%c%c ", str[i], *(it+i));
	}
	cin >> str2;
	cout << str+str2<<endl;
	printf("str: %s\n", str2.c_str());		//将string型str使用c_str()变为字符数组
	
	//length()/size()返回string的长度
	cout << str.length() << str2.size() << endl;

	//1  .insert(pos, string)  O(n)
	//2  .insert(it, it2, it3)		it为原字符串的欲插入位置 
	str.insert(str.begin() + 1, str2.begin(), str2.end());
	cout <<"insert:"<< str<<endl;

	//1 .erase(it);  2  .erase(first, last);  3 .erase(pos, length)  O(n)
	str.erase(1, str2.length());
	cout << "erase:" << str<<endl;

	//clear()

	// substr(pos, len)	O(len)
	cout <<"substr(0,3): "<< str.substr(0, 3)<<endl;

	/* 
	1 .str.find(str2)   当str2是str的子串时，返回其在str中第一次出现的位置
	若str2不是str的子串，返回string::npos
	2. str.find(str2, pos)  从str的pos号位开始匹配str2,返回值与上相同
	O(nm), n、m分别是str和str2的长度
	*/
	str = "Fly me to the moon";
	str2 = "me";
	if (str.find(str2) != string::npos)
		cout << str.find(str2) << endl;

	/*
	1.   str.replace(pos, len, str2) 把str从pos位开始、长度为len的子串替换为str2
	2.   str.replace(it1, it2, str2) 把str的迭代器[it1, it2)范围的子串替换为str2
	O(str.length())
	*/

	str = "Something has been happened. ";
	str2 = "will not";
	str.replace(10, 8, str2);
	cout << str.replace(str.begin()+str.find("hap"),str.begin()+str.length(),"happen again.");


	system("pause");
	return 0;
}