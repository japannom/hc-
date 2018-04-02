#include <iostream>
using namespace std ;

 main(){
 	struct mathang{
 		char ten[10][20];
 		int sluong[10];
 		float gia[30];
 		
	 };
	 struct mathang mh;
	 int n,i,j;
	 float tg;
	 cout << "bn mat hang: ";
	 cin>>n;
	 for (i =1;i <=n ;i++){
	 	cout<< "nhap ten mat hang ";
	 	fflush(stdin);
	 	gets(mh.ten[i]);
	 	cout<<"nhap so luong mat hang ";
	 	cin>> mh.sluong[i];
	 	cout <<"nhap gia cua mat hang ";
	 	cin>> mh.gia[i];
	 }
	 cout<< "cac loai mat hang da nhap\n";
	 for(int i = 1; i <=n ;i ++)
	 {
	 	cout << "ten mat hang: " << mh.ten[i] << endl;
	 	cout << "so luong mat hang"<<mh.sluong[i]<< endl;
	 	cout << "gia cua mat hang "<< mh.gia[i]<<endl;
	 }
	 tg 
	 
 	
 }

