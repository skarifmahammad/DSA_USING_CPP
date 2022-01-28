#include<iostream>
using namespace std;
int main()
{
    int i,n,del,count=0,count2=0;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cout << " arr[" << i << "] = ";
        cin >> arr[i];
        count++;
    }
    cout<< endl << "Length of the array defore deletion :"<< count << endl;

    cout << "Enter the number you want to delete : ";
    cin >> del;
    for(int i=0;i<n;i++)
    {
        if(del==arr[i])
        {
            delete arr[i];
        }
        arr[i]=arr[i+1];
        n--;
    }
    
    // for(i=pos;i<n-1;i++)
    // {
    //     arr[i]=arr[i+1];
    //     n--;
    // }

    cout << endl << "The array after deletion is : ";
    for(i=0;i<n;i++)
    {
        cout << endl << "arr[" << i << "] = " << arr[i];
        count2++;
    }
    cout<< endl << "Length of the array after deletion :"<< count2;
    return 0;
}