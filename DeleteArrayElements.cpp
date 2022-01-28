#include <bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return n;
}

/* Driver program to test above function */
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count=0,x = 11;
    cout << "Your Array is : ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "length before deletion : "<< n << endl;
    // Delete x from arr[]
    n = deleteElement(arr, n, x);

    cout << endl << "Modified array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        count++;
    }
    cout << endl << "length after deletion : " << count << endl;
        

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "Enter Array Size : " << endl;
//     cin >> x;
//     int arr[x],count=0,count2 = 0;
//     for(int i=0;i<x;i++) // take input
//     {
//         cin >> arr[i];
//     }
//     cout << "Your Array is : ";
//     for(int i=0;i<x;i++) // Print output
//     {
//         cout<< arr[i];
//     }
//     for(int i=0;i<x;i++) //Length of Array
//     {
//         count++;
//     }
//     cout << endl << "Length of the array is : " << count << endl;

//     //
//     int p;
//     cout << "Enter the possition you want to delete : ";
//     cin >> p;
//     for(int i=0;i<x;i++)
//     {
//         if(p==i)
//         {
//             for(int j=i; j<(x-1); j++)
//                 {
//                     arr[j]=arr[j+1];
//                 }
//                 count++;
//                 break;
//         }
//     }
//     cout <<endl << "New Array is :";
//     for(int i=0; i<(x-1); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<x;i++) //Length of Array
//     {
//         count2++;
//     }
//     cout << endl <<"Length of the array is : " << count2;
//     return 0;
// }