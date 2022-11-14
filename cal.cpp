#include<iostream>
using namespace std;
class cal{
	private:
		int x,y;
	public:
		cal(){
			x=5;
			y=10;
		}
		int add(int,int);
		int sub(int,int);
		int mul(int,int);
		int div(int,int);
};
int cal::add(int x,int y){
	return x+y;
}
int cal::sub(int x,int y){
	return x-y;
}
int cal::mul(int x,int y){
	return x*y;
}
int cal::div(int x,int y){
	return x/y;
}
int main(){
	cal obj;
	cout<<"add is "<<obj.add(4,6)<<endl;
	cout<<"sub is "<<obj.sub(6,4)<<endl;
	cout<<"mul is "<<obj.mul(4,6)<<endl;
	cout<<"div is "<<obj.div(8,4)<<endl;
	return 0;
}
