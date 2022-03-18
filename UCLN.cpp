#include<iostream>
using namespace std;
int UCLN(int x, int y)
{
	while(x!=y){
	if(x>y) x=x-y;
	else y=y-x;}
	return x;
}
int main()
{
	int a, b, c, d;
	cout << " \nnhap vao 4 so tu ban phim : " <<endl;
	cout << " a = " ; cin >> a;
	cout << " b = " ; cin >> b;
	cout << " c = " ; cin >> c;
	cout << " d = " ; cin >> d;
	cout << "UCLN cua "<<a<<", "<<b<<", "<<", "<<c<<", "<<d<< " la : "<<UCLN(UCLN(a,b),UCLN(c,d));
}
