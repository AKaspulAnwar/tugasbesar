#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//test gan
	double z1y[5]={4,5,4,3,3}, z2y[5]={3,4.3,4,3}, z3y[5]={3,4,2,2,2};
	//masukan gan
	cout << "MASTRIS A :"<<endl;
	int mama1=0;
	do{
		cout << z1y[mama1]<<" | ";
		mama1++;
	}while(mama1<5);cout<<endl;
	int mama2=0;
	do{
		cout << z2y[mama2]<<" | ";
		mama2++;
	}while(mama2<5);cout<<endl;
	int mama3=0;
	do{
		cout << z3y[mama3]<<" | ";
		mama3++;
	}while(mama3<5);cout<<endl;
	//cukup dulu
	double mc1=max(z1y[0],max(z2y[0],z3y[0])),
	mc2=max(z1y[1],max(z2y[1],z3y[1])),
	mc3=max(z1y[2],max(z2y[2],z3y[2])),
	mc4=max(z1y[3],max(z2y[3],z3y[3])),
	mc5=max(z1y[4],max(z2y[4],z3y[4]));
	
	double Rz1y[5]={ (z1y[0]/mc1),(z1y[1]/mc2),(z1y[2]/mc3),(z1y[3]/mc4),(z1y[4]/mc5) };
	double Rz2y[5]={ (z2y[0]/mc1),(z2y[1]/mc2),(z2y[2]/mc3),(z2y[3]/mc4),(z2y[4]/mc5) };
	double Rz3y[5]={ (z3y[0]/mc1),(z3y[1]/mc2),(z3y[2]/mc3),(z3y[3]/mc4),(z3y[4]/mc5) };
	//rooor
	cout << endl<<endl;
	cout << "MASTRIS B :"<<endl;
	int abah1=0;
	do{
		cout << Rz1y[abah1]<<" | ";
		abah1++;
	}while(abah1<5);cout<<endl;
	int abah2=1;
}
