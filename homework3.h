#include <iostream>
using namespace std;
void Menu()
{
	cout<<"     现请选择以下功能"<<endl;
    cout<<"     *******************************"<<endl; 
	cout<<"     1、显示4个同学的代号和成绩列表"<<endl;
	cout<<"     2、求4人平均分                "<<endl;
	cout<<"     3、求4人总分 "<<endl;
	cout<<"     4、查询某同学的分数   "<<endl;
	cout<<"     5、统计及格率      "<<endl;
	cout<<"     6、退出                       "<<endl;
	cout<<"     *******************************"<<endl; 
	cout<<"     请输入(1-6)选择：        ";
}
void Mark(char c1,double a,char c2,double b,char c3,double c,char c4,double d)
{
	cout<<" 功能1 成绩表 如下"<<endl;                         
	cout<<"学生"<<"     "<<"成绩 "<<endl; 
	cout<<c1<<"        "<<a<<endl;
    cout<<c2<<"        "<<b<<endl;
	cout<<c3<<"        "<<c<<endl;
	cout<<c4<<"        "<<d<<endl;
}

double Average(double a,double b,double c,double d) 
{
	double average;
	cout<<"功能2 平均分 如下"<<endl;
	average=(a+b+c+d)/4;
	return (average);
}

double Sum(double a,double b,double c,double d) 
{
	double sum;
	cout<<"功能3 总分 如下"<<endl; 
	sum=a+b+c+d;
	return (sum);
}

void Search(char c1,double a,char c2,double b,char c3,double c,char c4,double d)
{
	cout<<"功能4 查询成绩 "<<endl;
    cout<<"请输入学生代号：";
	char d1; 
	cin>>d1;
    if (d1==c1) 
	    cout<<a<<endl;
	else if (d1==c2)
	    cout<<b<<endl;
	else if (d1==c3) 
	    cout<<c<<endl;
	else 
	    cout<<d<<endl;             
}

void PassRate(char c1,double a,char c2,double b,char c3,double c,char c4,double d)
{
    int h,y,i,r;
	int large(double,double);            
	cout<<"请输入试卷满分:     "; 
	cin>>h; 
	double arr[4];    //定义一个数组 长度为4 
    arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	arr[3]=d;
	y=0;
    h=0.6*h;
	for (i=0; i<=3; i++)
	{
		if ((r=large(arr[i],h)==1)) 
			y=y+1;
	}
	if (y==4)
		cout<<"及格率为100%"<<endl;
	else if (y==3)
		cout<<"及格率为75%"<<endl;
	else if (y==2)
		cout<<"及格率为50%"<<endl; 
	else if (y==1)
		cout<<"及格率为25%"<<endl;
	else
		cout<<"无人生还"<<endl; 	
}

int large(double x, double y)  //此处自定义了一个函数 作用如下 用于系统中的统计及格率功能 
{
	int flag;
	if (x>=y)
	    flag=1;
	else 
	    flag=0;
	return(flag);
}
