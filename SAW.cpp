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
	
	double Az1y[5]={ (z1y[0]/mc1),(z1y[1]/mc2),(z1y[2]/mc3),(z1y[3]/mc4),(z1y[4]/mc5) };
	double Az2y[5]={ (z2y[0]/mc1),(z2y[1]/mc2),(z2y[2]/mc3),(z2y[3]/mc4),(z2y[4]/mc5) };
	double Az3y[5]={ (z3y[0]/mc1),(z3y[1]/mc2),(z3y[2]/mc3),(z3y[3]/mc4),(z3y[4]/mc5) };
	//rooor
	cout << endl<<endl;
	cout << "MASTRIS B :"<<endl;
	int abah1=0;
	do{
		cout << Az1y[abah1]<<" | ";
		abah1++;
	}while(abah1<5);cout<<endl;
	int abah2=0;
	do{
		cout << Az2y[abah2]<<" | ";
		abah2++;
	}while(abah2<5);cout<<endl;
	int abah3=0;
	do{
		cout << Az3y[abah3]<<" | ";
		abah3++;
	}while(abah3<5);cout<<endl;
	//the last
	double B1=5, B2=3, B3=4, B4=4, B5=2;
	cout << endl << "jadinya kayapa:"<<endl<< B1<<" | "<< B2<<" | "<< B3<<" | "<< B4<<" | "<< B5<<" | "<<endl;
	//r*w
	double ABz1y[5]={ (Az1y[0]*B1),(Az1y[1]*B2),(Az1y[2]*B3),(Az1y[3]*B4),(Az1y[4]*B5) };
	double ABz2y[5]={ (Az2y[0]*B1),(Az2y[1]*B2),(Az2y[2]*B3),(Az2y[3]*B4),(Az2y[4]*B5) };
	double ABz3y[5]={ (Az3y[0]*B1),(Az3y[1]*B2),(Az3y[2]*B3),(Az3y[3]*B4),(Az3y[4]*B5) };
	//r*w
	cout << endl<<endl;
	cout << "MASTRIS A * B :"<<endl;
	int anak1=0;
	do{
		cout << ABz1y[anak1]<<" | ";
		anak1++;
	}while(anak1<5);cout<<endl;
	
	int anak2=0;
	do{
		cout << ABz2y[anak2]<<" | ";
		anak2++;
	}while(anak2<5);cout<<endl;
	int anak3=0;
	do{
		cout << ABz3y[anak3]<<" | ";
		anak3++;
	}while(anak3<5);cout<<endl;
	//akhirnya
	double lan1[5]={ ABz1y[0]+ABz1y[1]+ABz1y[2]+ABz1y[3]+ABz1y[4] };
	double lan2[5]={ ABz2y[0]+ABz2y[1]+ABz2y[2]+ABz2y[3]+ABz2y[4] };
	double lan3[5]={ ABz3y[0]+ABz3y[1]+ABz3y[2]+ABz3y[3]+ABz3y[4] };	
	
}
