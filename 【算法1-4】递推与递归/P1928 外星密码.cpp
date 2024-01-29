#include <iostream>
#include <string>
using namespace std;

string expand()
{
	string key = "", x;//key即解压后的密码，x为下一层解压后的密码
	char c;
	int num;//记录本层的密码需要重复几次
	
	while(cin>>c)//输入小技巧
	{
		if(c == '[')//如果读到左中括号
		{
			cin>>num;//输入需要重复的次数
			x = expand();//解压下一层
			
			while(num--)//将x重复num次
				key += x;
		}
  
		else 
  			if(c == ']')//如果是右中括号
				return key;//返回这层的密码
			else //如果都不是
  				key += c;//不参与下一层的解压，直接加上
	}
}

int main(void)
{
	cout<<expand();//输出
	return 0;//完美AC~
}