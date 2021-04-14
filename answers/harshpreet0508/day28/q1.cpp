// Divide numbers 1..n into two sets of equal sum

#include <bits/stdc++.h>
using namespace std;


void find(int n)
{
	
	if (n <= 2) 
	{
		cout << "NO";
		return;
	}

	
	int v = (n*(n+1)) / 2;
	
	
	if(v & 1)
	{
	    cout<<"NO";
	    return;
	}

	
	vector<int> v1,v2;

	
	if (!(n & 1)) 
	{

		int t = 1;
		int st = 1;
		int l = n;
		while (st < l) 
		{
			if (t) 
			{
				v1.push_back(st);
				v1.push_back(l);
				t = 0;
			}
			else 
			{
				v2.push_back(st);
				v2.push_back(l);
				t = 1;
			}
			st++;
			l--;
		}
	}

	
	else 
	{
		int r = v / 2;
		bool v3[n + 1];
		
		for (int i=1;i<=n;i++)
			v3[i] = false;

		v3[0] = true;

		for (int i=n;i>=1;i--) 
		{
			if (r > i) 
			{
				v1.push_back(i);
				v3[i] = true;
				r-=i;
			}

			else 
			{
				v1.push_back(r);
				v3[r] = true;
				break;
			}
		}

		
		
		for (int i=1; i<=n;i++) {
			if (!v3[i])
				v2.push_back(i);
		}
	}

	cout<<"\nYes\n";
	cout << "Size of subset 1 is: ";
	cout << v1.size() << "\n";
	cout << "Elements of the subset are: ";
	for (auto c : v1)
		cout << c << " ";

	cout << endl;

	cout << "Size of subset 2 is: ";
	cout << v2.size() << "\n";
	cout << "Elements of the subset are: ";
	for (auto c : v2)
		cout << c << " ";
}

int main()
{

	int n;
	cin>>n;

	find(n);
	return 0;
}
