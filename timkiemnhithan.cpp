#include <iostream>
using namespace std;
int timkiemnhiphan(int a[], int x)
{
	    int l = 0;
		int r = 7;
	for (int i = 0; l < r; i++)
	{
		int m = (l + r) / 2;
		if (a[m] ==x ) 
		{
			return m;
		}
		else if(a[m] < x )
		{
			l = m + 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
	}
}
int main()
{
	int a[]{ 1,2,3,4,5,6,7,8 };  
		int x = 2; 
		if (x == -1)   
		{
			return 0;
		}
			if (timkiemnhiphan(a, x))
			{
				cout << "ton tai " << x << " trong mang "<<"o vi tri thu "<<x;
			}
			else
			{
				cout << "khong ton tai " << x << " trong mang";
			}

		return 0;
}