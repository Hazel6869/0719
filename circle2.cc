 ///
 /// @file    circle2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-07-19 04:37:04
 ///
 
#include <iostream>
#define pai 3.14
using std::cout;
using std::endl;

class Circle
{

private:
	double r;
public:
	Circle(int r)//有参构造函数
   {
	   this->r=r;
	   cout<<"有参构造函数被执行"<<endl;
   }
   double getS()
   {
	   return pai*this->r*this->r;
   }
};

int main()
{
	Circle cir(1);
	double s=cir.getS();
	cout<<s<<endl;
	return 0;
}
