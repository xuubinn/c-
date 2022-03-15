
//头文件
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
public:
	void set(char *, float);
	char name[100];
	float score;
};

//  成员函数
//#include"tr.h"
void Student::set(char *n, float x)
{
	strcpy(name, n);
	score = x;
	cout << "Name:" << name << ' ' << "Score:" << score;
}


//主函数
//#include"tr.h"
int main()
{
	Student a;
	char n[100];
	float x;
	cin >> n >> x;
	a.set(n, x);
	return 0;
}

