 ///
 /// @file    location.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 04:48:55
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Location
{
private:
	int x;
	int y;
public:
	Location()
	{
		cout<<"无参构造函数被执行"<<endl;
	}
	Location(int x,int y)
	{
		this->x=x;
		this->y=y;
		cout<<"有参构造函数被执行"<<endl;
	}
	Location(const Location& location)
	{
		this->x=location.x;
		this->y=location.y;
		cout<<"拷贝构造函数被执行"<<endl;
	}

~Location()
{
  cout<<"x="<<this->x<<",y="<<this->y<<endl;
}
};

//模拟拷贝构造函数调用方式三
void setLocation（Location location）
{
	cout << "setLocation{}全局函数.."<<endl;
}
//模拟拷贝构造函数调用方式四
Location getLocation()
{
	cout <<"getLocation{} 全局函数.."<<endl;
	Location location(100,200);
	return location;
}


//研究拷贝函数的调用

int main()
{
	
	cout<<"方式一"<<endl;
	Loaction loc1(1,2);
	Loaction loc2=loc1;

	cout<<"方式二"<<endl;
	Location loc3(10,20);
	Loaction loc4(loc3);

	cout<<"方式三"<<endl;
	Loaction loc5(5,10);
	setLocation(loc5);

	cout <<"方式三"<<endl;
	Loaction loc5(5,10);
	setLocation(loc5);

	cout<<"方式四"<<endl;
	Loaction loc6;
	loc6=getLocation();
	Location loc7=getLocation();
}

