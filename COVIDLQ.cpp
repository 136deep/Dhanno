#include<bits/stdc++.h>
using namespace std;

void fastscan(int &number);

int main()
{
	int t, n;

	fastscan(t);
	while(t--)
	{
		int count = 5;
		bool socialDistancing = true;
		fastscan(n);
		int A[100];
		for (int i = 0; i < n; i++)
		{	
			fastscan(A[i]);
			if(A[i] == 0)
				count++;
			
			if(A[i] == 1)
			{	
				if(count < 5)
					socialDistancing = false;
				count = 0;
			}
		}	
		cout<<(socialDistancing?"YES":"NO")<<endl;
	}
	return 0;
}

void fastscan(int &number)
{
	bool negative = false;
	register int c;
	
	number = 0;

	c = getchar();

	if(c == '-')
	{
		negative = true;
		c = getchar();
	}

	for(; (c > 47 && c < 58); c = getchar())
		number = number*10 + c - 48;

	if(negative)
		number *= -1;
}
