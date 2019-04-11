#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int hour,min,sec,time,x,y;
	cout<<"輸入你的時間"<< endl;
	cout<<"小時:";
	cin>>hour;
	cout<<"分鐘:";
	cin>>min;
	cout<<"秒數:";
	cin>>sec;
	x=hour*3600;
	y=min*60;
	time=x+y+sec;
	if(time<25200) 
	{
		cout<<"還沒上課"<<endl; 
	}
	else if (time>61200)
	{
		cout<<"放學了，爽啦"<<endl;	
	} 
	else
	{
		cout<<"在上課還想去哪啊"<<endl; 
	}
	system("pause");
	return 0;
}
