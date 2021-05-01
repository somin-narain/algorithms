#include<iostream>
using namespace std;
//Searching: binary search 


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

int search(int a[],int size,int target)
  {
    int i,res_1 = -1;
    int high = size - 1; 

    int low = 0; 
    while(low<=high)
    {
    	int midpoint = (low + high)/2; 
  
    	if(a[midpoint] == target)
    		{
    			return midpoint;
    			  
    		}
    	else if (target > a[midpoint])
    		{
    			low = midpoint + 1; 

    		} 
    	else 
    		{
    			high = midpoint - 1; 
    		}
    
    }
    return -1;
 

    	}
    


int main()
  {
    #define fixed_size 40 
    int size,res; 
    cout<<"Enter The length of the array"<<endl; 
    cin>>size; 

    int a[fixed_size];
    int target;



    input(a,size);

    cout<<"Enter the value of the target "<<endl; 
    cin>>target;  

    res = search(a,size,target);

    if(res>=0)
      {
        cout<<"The element is present at index "<<res<<endl;
      }  
    else
      {
        cout<<"The element is not present in the array "<<endl; 
      }

    return 0; 
  }
