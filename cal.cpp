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
};
int cal::add(int x,int y){
	return x+y;
}
int main(){
	cal obj;
	cout<<"add is"<<obj.add(4,6)<<endl;
	return 0;
}
