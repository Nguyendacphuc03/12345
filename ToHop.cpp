#include<iostream>
using namespace std;
int GiaiThua(int x)
{
	int s=1;
	if(x==0)
	return 1;
	else
	for(int i=1 ; i<=x ;i++){
	s=s*i;}
	return s;
}
int main()
{
	int n, k, C;
	cout << " \nnhap n và k cua to hop chap k cua n " <<endl;
	cout << "k = " ; cin >> k;
	cout << "n = " ; cin >> n;
	C=GiaiThua(n)/(GiaiThua(k)*GiaiThua(n-k));
	cout << "to hop chap "<<k<<" cua "<<n<<" la : " <<C;
}
