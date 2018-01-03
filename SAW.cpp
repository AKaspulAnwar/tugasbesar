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
	do{
		cout << Rz2y[abah2]<<" | ";
		abah2++;
	}while(abah2<5);cout<<endl;
	int abah3=2;
	do{
		cout << Rz3y[abah3]<<" | ";
		abah3++;
	}while(abah3<5);cout<<endl;
	//the last
	double w1=5, w2=3, w3=4, w4=4, w5=2;
	cout << endl << "jadinya kayapa:"<<endl<< w1<<" | "<< w2<<" | "<< w3<<" | "<< w4<<" | "<< w5<<" | "<<endl;
	//r*w
	double RWz1y[5]={ (Rz1y[0]*w1),(Rz1y[1]*w2),(Rz1y[2]*w3),(Rz1y[3]*w4),(Rz1y[4]*w5) };
	double RWz2y[5]={ (Rz2y[0]*w1),(Rz2y[1]*w2),(Rz2y[2]*w3),(Rz2y[3]*w4),(Rz2y[4]*w5) };
	double RWz3y[5]={ (Rz3y[0]*w1),(Rz3y[1]*w2),(Rz3y[2]*w3),(Rz3y[3]*w4),(Rz3y[4]*w5) };
	//r*w
	cout << endl<<endl;
	cout << "MASTRIS A * B :"<<endl;
	int anak1=0;
	do{
		cout << RWz1y[anak1]<<" | ";
		anak1++;
	}while(anak1<5);cout<<endl;
	
	int anak2=1;
	do{
		cout << RWz2y[anak2]<<" | ";
		anak2++;
	}while(anak2<5);cout<<endl;
	int anak3=2;
	
}
