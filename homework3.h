#include <iostream>
using namespace std;
void Menu()
{
	cout<<"     ����ѡ�����¹���"<<endl;
    cout<<"     *******************************"<<endl; 
	cout<<"     1����ʾ4��ͬѧ�Ĵ��źͳɼ��б�"<<endl;
	cout<<"     2����4��ƽ����                "<<endl;
	cout<<"     3����4���ܷ� "<<endl;
	cout<<"     4����ѯĳͬѧ�ķ���   "<<endl;
	cout<<"     5��ͳ�Ƽ�����      "<<endl;
	cout<<"     6���˳�                       "<<endl;
	cout<<"     *******************************"<<endl; 
	cout<<"     ������(1-6)ѡ��        ";
}
void Mark(char c1,double a,char c2,double b,char c3,double c,char c4,double d)
{
	cout<<" ����1 �ɼ��� ����"<<endl;                         
	cout<<"ѧ��"<<"     "<<"�ɼ� "<<endl; 
	cout<<c1<<"        "<<a<<endl;
    cout<<c2<<"        "<<b<<endl;
	cout<<c3<<"        "<<c<<endl;
	cout<<c4<<"        "<<d<<endl;
}

double Average(double a,double b,double c,double d) 
{
	double average;
	cout<<"����2 ƽ���� ����"<<endl;
	average=(a+b+c+d)/4;
	return (average);
}

double Sum(double a,double b,double c,double d) 
{
	double sum;
	cout<<"����3 �ܷ� ����"<<endl; 
	sum=a+b+c+d;
	return (sum);
}

void Search(char c1,double a,char c2,double b,char c3,double c,char c4,double d)
{
	cout<<"����4 ��ѯ�ɼ� "<<endl;
    cout<<"������ѧ�����ţ�";
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
	cout<<"�������Ծ�����:     "; 
	cin>>h; 
	double arr[4];    //����һ������ ����Ϊ4 
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
		cout<<"������Ϊ100%"<<endl;
	else if (y==3)
		cout<<"������Ϊ75%"<<endl;
	else if (y==2)
		cout<<"������Ϊ50%"<<endl; 
	else if (y==1)
		cout<<"������Ϊ25%"<<endl;
	else
		cout<<"��������"<<endl; 	
}

int large(double x, double y)  //�˴��Զ�����һ������ �������� ����ϵͳ�е�ͳ�Ƽ����ʹ��� 
{
	int flag;
	if (x>=y)
	    flag=1;
	else 
	    flag=0;
	return(flag);
}
