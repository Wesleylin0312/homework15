#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int hour,min,sec,time,x,y;
	cout<<"��J�A���ɶ�"<< endl;
	cout<<"�p��:";
	cin>>hour;
	cout<<"����:";
	cin>>min;
	cout<<"���:";
	cin>>sec;
	x=hour*3600;
	y=min*60;
	time=x+y+sec;
	if(time<25200) 
	{
		cout<<"�٨S�W��"<<endl; 
	}
	else if (time>61200)
	{
		cout<<"��ǤF�A�n��"<<endl;	
	} 
	else
	{
		cout<<"�b�W���ٷQ�h����"<<endl; 
	}
	system("pause");
	return 0;
}
