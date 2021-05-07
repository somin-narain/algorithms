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

void I_sort(int a[],int n)
	{
		int i,j,temp; 

		for(i = 0;i<n;i++)
			{
				temp = a[i];
				j = i - 1; 
				while(a[j] > temp && j >= 0)
					{
						a[j+1] = a[j]; 
						j = j -1;
					}  
					a[j + 1] = temp;
			}
	}
	
	

int main()
	{
		#define fixed_size 40 
		int size; 
		cout<<"Enter The length of the array"<<endl; 
		cin>>size; 
		int a[fixed_size]; 
		input(a,size);
		I_sort(a,size);
		disp(a,size); 
		return 0; 
	}