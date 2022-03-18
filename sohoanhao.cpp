#include<iostream>
using namespace std;
int KTSHH(int x)
{
	int tong = 0;
	for (int i=1; i<x; i++)
		if (x%i == 0)
			tong +=i;
	if (tong==x)
		return 1;
	return 0;
}
int SNT(int y)
{
	for (int i=2 ; i<y ;i++)
		if(y%i==0)
		return 0;
	return 1;
}
int main()
{ int n;
	cout << " Nhap vao so nguyen n : ";
	cin >>n ;
	cout << " Cac so hoan hao trong pham vi "<<n<<" la: "<<endl;
	for (int i=1;i<=n;i++)
		if (KTSHH(i)==1)
		cout<<i<<"\t";
	cout << endl;
	cout << " cac so nguyen to trong pham vi " << n << " la: " << endl;
	for(int j=1 ; j<=n ; j++)
		if(SNT(j)==1)
		cout << j << "  ";
return 0;
}
