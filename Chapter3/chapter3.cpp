#pragma warning(disable:4996)
#include<iostream>
#include<cstdio>
#include<cstring>

int main() {
	patb9();

	system("pause");
	return 0;
}

//˵����
void patb9(){

	char str[90];
	gets_s(str);
	int length = strlen(str);
	char ans[90][90] = { 0 };
	int num = 0, len = 0;	//�ֱ�Ϊ���ʸ������������ʳ���
	for (int i = 0; i < length; i++) {
		if (str[i] != ' ') {
			ans[num][len++] = str[i];
		}
		else {
			ans[num][len] = '\0';
			num++;
			len = 0;
		}
	}
	//�������ÿ������
	for (int i = num; i >= 0; i--) {
		printf("%s", ans[i]);
		if (i != 0) printf(" ");
	}

	/*
//��������
	char str[100];
	fgets(str, 99, stdin);
	//�������鳤�ȼ�������β����
	int length = strlen(str) - 1;
	int begin = 0, end = length - 1;
	//�������
	for (int i = end; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			//���ʿ�ʼΪ�ո��һλ
			begin = i + 1;
			//ѭ������õ���
			for (int j = begin; j <= end; j++)
			{
				printf("%c", str[j]);
			}
			printf(" ");
			//����ĩβΪ�ո�ǰһλ
			end = i - 1;
		}
	}
	//�����һ������
	for (int i = 0; i <= end; i++)
	{
		printf("%c", str[i]);
	}
	*/
}
//���Ĵ�
void cu5901() {
	char c[260];
	while (gets_s(c)) {
		int len = strlen(c);
		bool flag=true;
		for (int i = 0; i < len / 2; i++) {
			if (c[i] != c[len - i - 1])
				flag = false;
		}

		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
//D���Ƶ�A+B
void patb22() {
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[40], num=0;
	do {
		ans[num++] = sum % d;
		sum /= d;
	} while (sum != 0);
	for (int i = num - 1; i >= 0; i--) {
		printf("%d", ans[i]);
	}
	printf("\n");
	
}

//�ж��Ƿ�����
bool isLeap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
//���ڲ�ֵ
void cu1928() {
	int month[13][2] = {
		{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
	};
	int date1, date2;
	while (scanf("%d %d", &date1, &date2) != EOF) {
		int y1, y2, m1, m2, d1, d2;
		//��date1��date2�����佻��
		if (date1 > date2) {
			date1 += date2;
			date2 = date1 - date2;
			date1 -= date2;
		}
		y1 = date1 / 10000, y2 = date2 / 10000;
		m1 = date1 % 10000 / 100, m2 = date2 % 10000 / 100;
		d1 = date1 % 100, d2 = date2 % 100;
		int diff = 1;
		while (y1 != y2 || m1 != m2 || d1 != d2) {
			diff++;
			if (++d1 == month[m1][isLeap(y1)]+1) {
				d1 = 1;
				m1++;
			}
			if (m1 == 13) {
				m1 = 1;
				y1++;
			}
		}
		printf("%d\n", diff);
	}


}

//�����˲�������(3n+1)����
void patb1() {
	int n;
	scanf("%d", &n);
	int step = 0;
	while (n != 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = (3 * n + 1) / 2;
		step++;
	}
	printf("%d\n", step);
}

//�ھ�������ļ�ǿ
void patb32() {
    int school[100001] = { 0 };
	int n, schID, score, max, k;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d%d", &schID, &score);
		school[schID] += score;
	}
	k = 1, max = -1;
	for (int i = 0; i <= n; i++) {
		if (school[i] > max) {
			max = school[i];
			k = i;
		}
    }
	printf("%d %d", k, max);
}

//��x
void cu1934() {
	const int maxn = 210;
	int a[maxn] = { 0 };
	int n,x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);	
	}
	scanf("%d", &x);
	int i;				//�±�
	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d\n", i);
			break;
		}
	}
	if (i == n)
		printf("-1\n");
}

//���¹ۺ�һ���̣��������Σ�
void patb36() {
	int col,row;
	char c;
	scanf("%d %c", &col,&c);
	row = int(ceil(double(col) / 2));
	//��һ��
	for (int i = 0; i < col; i++) {
		printf("%c", c);
	}
	printf("\n");

	for (int i = 0; i < row - 2; i++) {
		printf("%c", c);
		for (int j = 0; j < col-2; j++) {
			printf(" ");
		}
		printf("%c\n", c);
	}
	for (int i = 0; i < col; i++) {
		printf("%c", c);
	}
	printf("\n");
}

