#include<iostream>
#include<string>
using namespace std;

void longest(string name[] , int n)
{
	string l = "";
	for(int i =0;i<n; i++)
	{
		if(name[i].length() > l.length() )
		{
			l = name[i];
		}
	}
	cout<<l<<endl;
}

void rotate(int a[], int n,  int p )
{
	int q,i, t;
	t=0;
	
	while(t<p)
	{
		i=0;
		q = a[i];
		for( int j =0; j<n-1; j++)
		{
			
			int temp= a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			if(a[n]==0)
			{
				a[n] = q;
			}
		}
		t++;
	}
	cout<<"Rotated array : "<<endl;
	for(int k= 0; k<n; k++)
	{
		cout<<a[k]<<" ";
	}
} 

int main()
{
//	string n[] = {"g" , "geeks", "geeksfor", "geeksforg", "ge"};
//	longest(n,5);

	int arr[5] = {1,2,3,4,5};
	rotate(arr, 5, 2);
	return 0;
}

