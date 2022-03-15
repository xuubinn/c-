#include<iostream>
#include<cstring>
using namespace std;
int hanshu(int c1,int c2)
{
	 int c3;
	 c3=(c1+c2);
     return c3;
}
float hanshu(float v1,float v2)
{
	 float v3;
 	 v3=(v1+v2);
     return v3;
}
char* hanshu(char* b1,char* b2)
{	
	
	 return strcat(b1,b2);
}
int  main()
{    int a,b;
     float x,y;
     char s1[50],s2[20];
     cin>>a>>b;
     cin>>x>>y;
     cin>>s1>>s2;
     cout<<hanshu(a,b)<<endl;
     cout<<hanshu(x,y)<<endl;
     char* ret=hanshu(s1,s2);
     cout<<ret<<endl;
     return 0;
}