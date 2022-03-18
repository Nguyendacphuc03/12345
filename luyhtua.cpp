#include<iostream>
using namespace std;
int P(int x, int y)
{
	int s=1;
	for(int i=1 ; i<=y ; i++)
	s=s*x;
	return s;
}
int main()
{
	int a, n;
	cout << "\nnhap a va n vao tu ban phim " << endl;
	cout << " a = " ;cin >> a;
	cout << " n = " ;cin >> n;
	cout <<a<<"^"<<n<<" = " << P(a,n);
	return 0;
}
