//V01 - Hinh tron duoc tao boi Tam va Ban kinh
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;

class Diem
{
	private:
		int x;
		int y;
	public:
		Diem();
		Diem(int h, int t);
		void Nhap();
		void Xuat();
		float KhoangCach(Diem); 
};

class HinhTron:public Diem
{
	protected:
		Diem tam;
		float bk;
		float dt;
		float cv;
	public:
		HinhTron();
		HinhTron(Diem t, float r);
		void Nhap();
		void Xuat();
		void TinhDT();
		void TinhCV();
		
};


int main()
{
	HinhTron ht;
	ht.Nhap();
	ht.Xuat();
	ht.TinhCV();
	ht.TinhDT();
	
	//...them code??
	
	getch(); //Dung xem KQ
	return 1; //hoac return 0;
}

Diem::Diem()
{
	x=y=0;
}
Diem::Diem(int h, int t)
{
	x=h; y=t;
}

void Diem::Nhap()
{
	cout<<("\n Nhap x:"); cin>>x;
	cout<<("\n Nhap y:"); cin>>y;
}

void Diem::Xuat()
{
	cout<<"("<<x<<","<<y<<")"; //(3,5)
}

float Diem::KhoangCach(Diem P)
{
	return sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y));
}

//Hinh tron
HinhTron::HinhTron()
{
	Diem tam(0,0);
	bk=0;
	dt=cv=0;
}

//Hinh tron
HinhTron::HinhTron(Diem t, float r)
{
	tam=t;
    bk=r;
    //..code?
}

void HinhTron::Nhap()
{
	cout<<"\n Nhap tam hinh tron"; tam.Nhap();
	cout<<"\n Nhap ban kinh: "; cin>>bk;
	dt=3.14*bk*bk;
	cv=2*bk*3.14;
}

void HinhTron::Xuat()
{
    cout<<"Tam: "; tam.Xuat();
	cout<<endl<<"Ban kinh: "<< bk <<endl;
}

void HinhTron::TinhCV()
{
	cv=2*bk*3.14;
    cout<<"\nChu vi hinh tron: " << cv;
}
	
void HinhTron::TinhDT()
{
	dt=3.14*bk*bk;
	cout<<"\nDien tich hinh tron: " << dt;
}

















