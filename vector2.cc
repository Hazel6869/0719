 ///
 /// @file    vector2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 06:04:58
 ///
// vector的应用 之数据的存入和输出
#include <iostream>
#include<stdio.h>
#include<vector>
//using std::cout;
//using std::endl;
using namespace std;

int main()
{
	int i=0;
	vector<int> v;
	for(i=0;i<10;i++)
	{
		v.push_back(i);//把元素一个一个 的存入到vector中
	}
	for(i=0;i<v.size();i++)//v.size()表示vector存入的元素的个数
	{
      cout<<v[i]<<" ";//把元素打印出来
	}
	cout<<endl;
	return 0;
}



