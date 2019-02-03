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
	printf("str: %s\n", str2.c_str());		//��string��strʹ��c_str()��Ϊ�ַ�����
	
	//length()/size()����string�ĳ���
	cout << str.length() << str2.size() << endl;

	//1  .insert(pos, string)  O(n)
	//2  .insert(it, it2, it3)		itΪԭ�ַ�����������λ�� 
	str.insert(str.begin() + 1, str2.begin(), str2.end());
	cout <<"insert:"<< str<<endl;

	//1 .erase(it);  2  .erase(first, last);  3 .erase(pos, length)  O(n)
	str.erase(1, str2.length());
	cout << "erase:" << str<<endl;

	//clear()

	// substr(pos, len)	O(len)
	cout <<"substr(0,3): "<< str.substr(0, 3)<<endl;

	/* 
	1 .str.find(str2)   ��str2��str���Ӵ�ʱ����������str�е�һ�γ��ֵ�λ��
	��str2����str���Ӵ�������string::npos
	2. str.find(str2, pos)  ��str��pos��λ��ʼƥ��str2,����ֵ������ͬ
	O(nm), n��m�ֱ���str��str2�ĳ���
	*/
	str = "Fly me to the moon";
	str2 = "me";
	if (str.find(str2) != string::npos)
		cout << str.find(str2) << endl;

	/*
	1.   str.replace(pos, len, str2) ��str��posλ��ʼ������Ϊlen���Ӵ��滻Ϊstr2
	2.   str.replace(it1, it2, str2) ��str�ĵ�����[it1, it2)��Χ���Ӵ��滻Ϊstr2
	O(str.length())
	*/

	str = "Something has been happened. ";
	str2 = "will not";
	str.replace(10, 8, str2);
	cout << str.replace(str.begin()+str.find("hap"),str.begin()+str.length(),"happen again.");


	system("pause");
	return 0;
}