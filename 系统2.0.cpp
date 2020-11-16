#include <iostream>
#include "homework3.h"
using namespace std;
int main()
{
	char A,B,C,D; 
	double a,b,c,d;
	int password,i;
    cout<<"************************************"<<endl; 
	cout<<"*    欢迎使用学生成绩管理系统1.2   *"<<endl;
	cout<<"* 小组8  计算机2003班  2020.11.12  *"<<endl;
	cout<<"************************************"<<endl; 
	cout<<"请输入登录密码:    ";
	for(i=1;i<=3;i++)
	{
        cin>>password;
		if(password==123)
		    break; 
		else if(i==3)
		{ 
			cout<<"密码错误3次 爬 "<<endl;
			system("pause");
			return 0;
	    }
	    else
	        cout<<"密码错误 重新输入： "; 	    
    }
	cout<<"成功登入 请输入4个同学的代号和成绩:"<<endl;
    cin>>A>>a>>B>>b>>C>>c>>D>>d;        //输入学生代号及成绩
	cout<<" 成绩已经成功录入"<<endl;
    while(1)
	{ 
	    Menu();
	    int x;
		cin>>x;  
		switch(x)
		{
			case 1: Mark(A,a,B,b,C,c,D,d);                   break;			        
	  	   	case 2: cout<<Average(a,b,c,d)<<endl;            break;
	   	 	case 3: cout<<Sum(a,b,c,d)<<endl;                break;
	   	 	case 4: Search(A,a,B,b,C,c,D,d);                 break;
			case 5: PassRate(A,a,B,b,C,c,D,d);               break; 
		    case 6: return 0;                                break;
	    } 
	    	system("pause");
	    	system("cls");
		}	
    system("pause");
    return 0;
}
	

 
