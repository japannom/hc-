#include"iostream"
using namespace std;

main()
{
	int n ;
	int gt=1;
	cout<< "nhap vao n:";

	cin>> n ;
	for (int i =1 ; i <= n ; i ++)
	{
		gt *=i;
		
	}
	cout<< "giai thua la "<<gt;
}
