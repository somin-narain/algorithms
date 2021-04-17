#include<iostream>
using namespace std;

int search(int arr[], int l, int t)
  {
    int i;
    for(i = 0;i<l;i++)
      {
        if(arr[i] == t)
          {
            return i;
          }
      }
      return -1;
  }

int main()

  {

    int x,i,l;
    cout<<"Enter the length of the array "<<endl;
    cin>>l;

    const int n = l;
    int arr[l];

    cout<<"Enter the element of the array"<<endl;

    for(i = 0;i<l;i++)
      {
        int b;
        cin>>b;
        arr[i] = b;
      }

      int t;

      cout<<"Enter target value"<<endl;
      cin>>t;

      int res = search(arr,l,t);

       if(res > -1)
        {
          cout<<"The target value is at index "<<res<<endl;
        }

        else
          {
            cout<<"target not found"<<endl; 
          }
    return 0;
  }
