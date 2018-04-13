#include"iostream"

using namespace std ;

main (){
	string  tsv;
	 float dt ,dh ,dl;
	 float  dtb ;
	cout <<"nhap ten sinh vien ";
//	getline(cin,tsv);
	cin >>tsv ;
	cout<< "nhap  diem mon toan ";
	cin>>dt ;
	cout << "nhap diem mon ly ";
	cin>> dl ;
	cout <<"nhap diem mon hoa ";
	cin >>dh;
	dtb= (dt + dl + dh )/3;
		cout << dtb;
	if (dtb > 8 )
		cout<< "xuat sac ";
		else if (dtb>=7)
		cout<< "gioi ";
		else if(dtb>=6 )
		cout << "kha ";
		else if (dtb >=5)
		cout<< "tb ";		
		else if (dtb <5)
		cout <<"yeu ";

	

	
}
