/*Description
ĳС��5�ˣ�ÿ���������ݣ����������䡢����������������Щ�˵����ݣ���С���ƽ���ּ��ɼ�����ߵ�����
˵��������ͷ�����������

Input
��������5���˵�����

Output
���ƽ���ּ��ɼ�����ߵ�����
ע����̨���ݿ��Ա�֤ƽ������һ��������û��С��

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