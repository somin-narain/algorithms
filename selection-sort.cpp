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

void S_sort(int a[],int n)
	{
		int i,j,temp,pos;
		for(i = 0;i<n-1;i++)
			{
				pos = i; 
				for(j = i + 1;j<n;j++)

					{
						if(a[pos]>a[j])
							{
								pos = j; 
							}
					}

					temp = a[i]; 
					a[i] = a[pos]; 
					a[pos] = temp; 
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
		S_sort(a,size);
		disp(a,size); 
		return 0; 
	}