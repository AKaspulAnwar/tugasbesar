#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//test gan
	double z1y[4]={4,4,3,3}, z2y[4]={3,3,4,3}, z3y[4]={4,2,2,2};
	//masukan gan
	cout << "MASTRIS A :"<<endl;
	int mama1=0;
	do{
		cout << z1y[mama1]<<" | ";
		mama1++;
	}while(mama1<4);cout<<endl;
	int mama2=0;
	do{
		cout << z2y[mama2]<<" | ";
		mama2++;
	}while(mama2<4);cout<<endl;
	int mama3=0;
	do{
		cout << z3y[mama3]<<" | ";
		mama3++;
	}while(mama3<4);cout<<endl;
}
