#include <iostream>
#include "homework3.h"
using namespace std;
int main()
{
	char A,B,C,D; 
	double a,b,c,d;
	int password,i;
    cout<<"************************************"<<endl; 
	cout<<"*    ��ӭʹ��ѧ���ɼ�����ϵͳ1.2   *"<<endl;
	cout<<"* С��8  �����2003��  2020.11.12  *"<<endl;
	cout<<"************************************"<<endl; 
	cout<<"�������¼����:    ";
	for(i=1;i<=3;i++)
	{
        cin>>password;
		if(password==123)
		    break; 
		else if(i==3)
		{ 
			cout<<"�������3�� �� "<<endl;
			system("pause");
			return 0;
	    }
	    else
	        cout<<"������� �������룺 "; 	    
    }
	cout<<"�ɹ����� ������4��ͬѧ�Ĵ��źͳɼ�:"<<endl;
    cin>>A>>a>>B>>b>>C>>c>>D>>d;        //����ѧ�����ż��ɼ�
	cout<<" �ɼ��Ѿ��ɹ�¼��"<<endl;
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
	

 
