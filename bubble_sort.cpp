#include<iostream>
using namespace std;

void input(int a[],int n)
	{
		int i = 0; 

		for(i = 0;i<n;i++)
			{
				cout<<"Enter a number "<<endl; 
				cin>>a[i];


			}
	}

void disp(int a[],int n)
	{ 
		cout<<"The array is "<<endl; 
		for(int i = 0;i<n;i++)
			{
				cout<<"\t"<<a[i]; 
			}
	}

int B_sort(int a[],int n)
	{
		int i,j,temp; 
		for(i = 0;i<n-1;i++)
			{
				for(j = 0;j<n-1-i;j++)
					{
						if(a[j] > a[j+1])	
							{
								temp = a[j]; 
								a[j] = a[j+1]; 
								a[j+1] = temp; 
							}
					}
			}
		return 0; 
	}

int main()
	{
		#define fixed_size 40 
		int size; 
		cout<<"Enter The length of the array"<<endl; 
		cin>>size; 
		int a[fixed_size]; 
		input(a,size);
		B_sort(a,size);
		disp(a,size); 
		return 0; 
	}