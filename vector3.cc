 ///
 /// @file    vector3.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 06:16:33
 ///
 //用v.begin()和v.end来得到vctor的开始和结束地址的指针位置
#include <iostream>
#include<vector>
//using std::cout;
//using std::endl;
using namespace std;

int main()
{
	vector<int> v;
	int i;
	for(i=0;i<v.size();i++)
	{
       v[i]=i;
	}
	vector<int>::iterator iter;//  申明vector容器的迭代器
	//用来遍历或者指向容器里的元素的
	for(iter=v.begin();iter!=v.end();iter++)
	{
		cout <<*iter<<endl;
	}
	return 0;
}
