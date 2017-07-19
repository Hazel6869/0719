 ///
 /// @file    vector1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 05:53:37
 ///
//vector的简单运用 
#include <iostream>
#include<vector>
//using namespece std;
using std::cout;
using std::endl;

int main()
{
	vector<int>a;
	int b=5;
	a.push_back(b);
    cout<<a[0]<<endl;
	
	return 0;
}
