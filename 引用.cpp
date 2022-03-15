/*Description
主函数框架如下面代码所示，其功能是，找出键盘输入数据的最大值和最小值，请按照程序框架编写被调函数并完善整个程序。


要求：不得使用指针。除了填空和函数声明外，不允许改写主程序其他部分*/

#include<iostream>
using namespace std;
void f(int a[10],int &x,int &y);
int main()
{
	int  a[10],i,max,min;	
	for(i=0; i<=9; i++) 
    cin>>a[i];
	f(a,max,min);                                      //调用函数，将10个数据中的最大值和最小值分别存入max和min中，只填写一条语句 
    cout<<"Max is "<<max<<",Min is "<<min<<endl;
    return  0;
}
void f(int a[10],int &x,int &y)
{  
	x=y=a[0];
	int i;
	for(i=0; i<=9; i++) 
	{ x=x>a[i]?x:a[i];
	y=y<a[i]?y:a[i];}
}


/*ut
输入10个整数

Output
输出最大值和最小值

Sample Input
5 1 6 2 7 9 8 0 4 3
Sample Output
Max is 9,Min is 0*/