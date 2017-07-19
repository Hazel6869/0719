 ///
 /// @file    vector4.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 06:36:21
 ///
//vector 的应用之二维数组
#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;
//using std::cout;
//using std::endl;

int main()
{
	int i=0,j=0;
	//下面是定义一个二维数组，有10行，每一行用一个vector来
	//存储这一行的数据，所以每一行的长度是可以变化的v
	//之所以用到vector<int>(0)是对vector进行初始化，否则不能对存入元素
	
   vector<vector<int>> Array(10,vector<int>(0));
   for(j=0;j<10;j++)
   {
	   for(i=0;i<9;i++)
	   {
		   Array[j].push_back(i);
	   }
   }

  for(j=0;j<10;j++)
  {
	  for(i=0;i<Array[j].size();i++)
	  {
		  cout<<Array[j][i]<<" ";
	  }
	  cout<<endl;
  }
}
