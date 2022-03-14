/*Description
某小组5人，每人三项数据：姓名、年龄、分数，键盘输入这些人的数据，求小组的平均分及成绩最高者的数据
说明：年龄和分数都是整数

Input
键盘输入5个人的数据

Output
输出平均分及成绩最高者的数据
注：后台数据可以保证平均分是一个整数，没有小数

Sample Input
aaa  18  90
bbb  19  80
ccc  19  80
ddd  18  60
eee  18  70
Sample Output
76
aaa,18,90
*/
#include<stdio.h>
struct f
{
char m[9];
int n1;
int g;
}a[5];
int main()
{
	int i;
    int sn=0,p,max=0;
		for(i=0;i<5;i++)
		scanf("%s %d %d",&a[i].m,&a[i].n1,&a[i].g);
for(i=0;i<5;i++)
		sn+=a[i].g;
		p=sn/5;
for(i=0;i<5;i++)
		if(a[i].g>a[max].g)
			max=i;
		printf("%d\n",p);
		printf("%s,%d,%d",a[max].m,a[max].n1,a[max].g);
		return 0;
}