#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "\nnhap vao 4 so nguyen tu ban phim " <<endl;
	cout << " a = " ; cin >> a; 
	cout << " b = " ; cin >> b;
	cout << " c = " ; cin >> c;
	cout << " d = " ; cin >> d;
	cout << " so lon nhat trong 4 so nhap vao tu ban phim la " << max(max(a,b),max(c,d)) << endl;
}

