#include"iostream"
#include"conio.h"
using namespace std;
int sum(int a , int b);
int main(){
	int a ;
	int b ;
	char nhap = 'N';
	do{
	cout<< "nhap vao a: ";
	cin >>a;
	cout <<"nhap vao b:";
	cin>>b;
	cout << "tong la :"<<sum(a,b)<<endl;
	cout << "ban co muon tiep tuc hay khong: (Y/N)";
	cin>> nhap;
	if(nhap == 'N'|| nhap =='n') break; // neu la n hoac N thi thoat vogn lap
	}
	while(1);// dk lun dung d? thuc hien ? trong vong lap
	}
int  sum(int a ,int b)
{
	return (a + b);
}
