#include<bits/stdc++.h>
using namespace std;
//Searching: Linear Search 


void input(vector<int> v,int n)
  {
    int i = 0; 

    for(i = 0;i<n;i++)
      {
        cout<<"Enter a number "<<endl; 
        cin>>v[i];


      }
  }

void disp(vector<int> v,int n)
  { 

    cout<<"The array is "<<endl; 
    for(int i = 0;i<n;i++)
      {
        cout<<"\t"<<v[i]; 
      }
  }

int search(vector<int> v,int size,int target)
  {
    int i,res_1; 
    for(i = 0;i<size;i++)
        {
          if(v[i] == target)
            {
              return i; 
            } 
      
        }

      return -1; 

  }

int main()
  {
    int size,res; 
    cout<<"Enter The length of the array"<<endl; 
    cin>>size; 

    vector<int> v(size);
    int target;



    input(v,size);

    cout<<"Enter the value of the target "<<endl; 
    cin>>target;  

    res = search(v,size,target);

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
