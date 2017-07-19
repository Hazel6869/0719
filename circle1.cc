 ///
 /// @file    circle1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 04:18:07
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Circle
{
private:
	double r;//圆类的半径属性
public:
		Circle(int a,int b)
		{
			cout<<"有参构造函数被执行"<<endl;
		}
		void setR(double r)// 设置圆的半径
		{
			this->r=r;
		}
		double getR()
		{
			return this->r;
		}
};

int main()
{
   //有参构造函数调用方式之一
   Circle circle(1,2);
   //有参构造函数调用方式二：程序员手工直接调用构造方法
 
 // Circle circle2=Circle(1,2);
  Circle circle1(2,3);
  circle1.setR(2);
  cout<<circle1.getR()<<endl;
  return 0;
}

	
