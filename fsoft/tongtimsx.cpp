#include "iostream"
using namespace std;
main(){
	int n , sum,min =0, max =0;
	cin>> n ; 
	int  a [n];
	for (int i = 0 ; i <= n ; i ++)
	
	{
		cout<< "nhap cac phan tu cua mang ";
		cin >>  a[ i ];
		sum +=a[i];
			if( min>a [i])
		{
			min = a[i];
		}
	}
	cout<< "tong la "<< sum ;
	cout<< "\nmax = "<< max;
	for(int i = 0; i <=n ; i ++){
	
	}
	cout<< "\nmin  = "<< min ;
	
    
	
	
}
