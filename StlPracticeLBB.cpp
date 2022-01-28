#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //STL BY LOVE BABBAR

    /*               //ARRAY
    // int basic[3] = {1,2,3};
    array<int,4> A= {2,3,4,5}; //Stl Array
    int size = A.size();
    for(int i=0;i<size;i++){
        cout << A[i] << endl;
    }

    cout << "Element at 2nd Index = " << A.at(2) << endl;
    cout << "Empty or not = " << A.empty() << endl;
    cout << "First Elements = " << A.front() << endl;
    cout << "Last Elements = " << A.back() << endl;
    */

    /*               //VECTOR
    vector<int> v;
    cout << "Capacity of vector = " << v.capacity() << endl;
    
    v.push_back(4);
    cout << "Capacity of vector = " << v.capacity() << endl;
    v.push_back(6);
    cout << "Capacity of vector = " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity of vector = " << v.capacity() << endl;
    v.push_back(7);
    cout << "Capacity of vector = " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity of vector = " << v.capacity() << endl;

    cout << "Size of vector = " << v.size() << endl;
    cout << "First Elements = " << v.front() << endl;
    cout << "Last Elements = " << v.back() << endl;

    cout << "Before Pop = " << endl; //POP
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After Pop = " << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    cout << "Before clear size = " << v.size() << endl;
    v.clear(); //Clear
    cout << "After clear size = " << v.size() << endl;

    cout << "Empty or not = " << v.empty() << endl; //Empty

    vector<int> a(5,0); //size = 5 , all element = 0
    cout << "Print a = ";
    for(int i:a){
        cout << i << " ";
    }cout << endl;
    vector<int> last(a); //Copy Vector
    cout << "Print Copy vector = ";
    for(int i:last){
        cout << i << " ";
    }cout << endl;
    */

    /*               //DEQUE
    deque<int> d;
    d.push_front(2); //Push front
    d.push_back(1); //Push back
    d.push_back(3); //Push back
    d.push_front(5); //Push front
    for(int i:d){
        cout << i << " ";
    }cout << endl;

    // d.pop_front(); //Pop from front
    // for(int i:d){
    //     cout << i << " ";
    // }cout << endl;

    // d.pop_back(); //Pop from back
    // for(int i:d){
    //     cout << i << " ";
    // }cout << endl;

    cout << "Print First Index Element = " << d.at(1) <<endl;
    cout << "First Elements = " << d.front() << endl;
    cout << "Last Elements = " << d.back() << endl;
    cout << "Empty or not = " << d.empty() << endl;

    cout << "Before Erase size = " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1); //Erase
    cout << "After Erase size = " << d.size() << endl;
    cout << "After Erase First Elements = " << d.front() << endl;
    */

    /*               //LIST
    list<int> l;
    l.push_front(1);
    l.push_back(2);
    for(int i:l){
        cout << i << " ";
    }cout << endl;
    
    cout << "Before Erase" << endl; //Erase
    for(int i:l){
        cout << i << " ";
    }cout << endl;
    l.erase(l.begin());
    cout << "After Erase" << endl;
    for(int i:l){
        cout << i << " ";
    }cout << endl;

    cout << "Size of List = " << l.size() << endl;

    //copy,pop,etc are same as Vector & Deque
    */

    /*               //STACK  [LIFO]
    stack<string> s;
    s.push("Sk");
    s.push("Arif");
    s.push("Mahammd");

    cout << "Top Element before pop = " << s.top() << endl; //Before Pop
    s.pop();
    cout << "Top Element after pop = " << s.top() << endl; //After Pop
    cout << "Size of Stack = " << s.size() << endl;
    cout << "Empty or not = " << s.empty() << endl;
    */

    /*               //QUEUE  [FIFO]
    queue<string> q;
    q.push("Sk");
    q.push("Arif");
    q.push("Mahammd");
    q.push("aaaaa");

    cout << "First Element before pop = " << q.front() << endl; //Before Pop
    q.pop();
    cout << "First Element after pop = " << q.front() << endl; //After Pop
    cout << "Last Element = " << q.back() << endl; //Last Element
    cout << "Size of Queue = " << q.size() << endl;

    //copy,pop,etc are same as Vector & Deque
    */

    /*               //PRIORITY QUEUE
    //max - heap
    priority_queue<int> maxpq;

    //min - heap
    priority_queue<int,vector<int>,greater<int>> minpq;
    //max
    maxpq.push(3);
    maxpq.push(2);
    maxpq.push(5);
    maxpq.push(1);
    cout << "Size of Max Heap = " << maxpq.size() << endl;
    cout << "Maximun element of Priority Queue = " << maxpq.top() << endl;
    int x = maxpq.size();
    for(int i=0;i<x;i++){
        cout << maxpq.top() << " ";
        maxpq.pop();
    }cout << endl;
    //min
    minpq.push(3);
    minpq.push(2);
    minpq.push(5);
    minpq.push(1);
    cout << "Size of Min Heap = " << minpq.size() << endl;
    cout << "Minimum element of Priority Queue = " << maxpq.top() << endl;
    int n = minpq.size();
    for(int i=0;i<n;i++){
        cout << minpq.top() << " ";
        minpq.pop();
    }cout << endl;

    cout << "Max Heap Empty or not = " << maxpq.empty() << endl; //After pop
    cout << "Min Heap Empty or not = " << minpq.empty() << endl; //After pop
    */

    /*               //SET
    set<int> st;
    st.insert(3);
    st.insert(2);
    st.insert(7);
    st.insert(4);
    st.insert(1);

    for(auto i:st){
        cout << i << " ";  //It will print always in sorted form
    }cout << endl ;

    // st.erase(st.begin()); //For delete at begin;
    // for(auto i:st){
    //     cout << i << " ";
    // }cout << endl;

    set<int>::iterator it = st.begin(); //For delete specific Element;
    it++;
    st.erase(it);
    for(auto i:st){
        cout << i << " ";
    }cout << endl;

    cout << "Search in Set = " << st.count(5) << endl;

    set<int>::iterator itr = st.find(4);
    cout << "Value present at itr = " << *itr << endl;

    for(auto it=itr; it!=st.end(); it++){ //Print from Iterator
        cout << *it << " ";
    }cout << endl;
    // */

    /*               //MAP
    map<int,string> m;

    m[1] = "Sk";
    m[2] = "Arif";
    m[6] = "University";
    m[3] = "Mahammad";
    m.insert({5,"Man"}); //Also you can use this method for insert

    for(auto i:m){
        cout << i.first << endl; //It will print always in sorted form.
    }cout << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl; //It will print always in sorted form.
    }cout << endl;

    cout << "Finding Element = " << m.count(6) << endl << endl;

    cout << "Before Erase :" << endl; //Erase
    for(auto i:m){
        cout << i.first << " " << i.second << endl; //It will print always in sorted form.
    }cout << endl;
    m.erase(5);
    cout << "After Erase :" << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl; //It will print always in sorted form.
    }cout << endl;
    
    auto itr = m.find(3); //Create Iterator
    for(auto i=itr; i!=m.end(); i++){
        cout << (*i).first << " " << (*i).second << endl; //Find from itr
    }

    //insert,erase,find,count----Time Complexcity----O(log n)
    */

    /*               //BINARY SEARCH IN VECTOR (ALGORITHM)
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    cout << "Finding Element = " << binary_search(v.begin(),v.end(),3) << endl; //Finding Element with binary search

    cout << "Lower Bound = " << lower_bound(v.begin(),v.end(),8)-v.begin() << endl; //It will print Index of Lower bound
    cout << "Upper Bound = " << upper_bound(v.begin(),v.end(),8)-v.begin() << endl; //It will print Index of Upper bound
    
    int x=8,y=4; //Max & Min
    cout << "Max = " << max(x,y) << endl;
    cout << "Min = " << min(x,y) << endl;

    swap(x,y); //Swap tow element
    cout << "x = " << x << endl << "y = " << y << endl;

    string str = "Arif"; //Reverse String
    reverse(str.begin(),str.end());
    cout << "Reverse String = " << str << endl;

    rotate(v.begin(),v.begin()+3,v.end()); //Rotated
    cout << "After Rotation = " << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    cout << "After Sort : " << endl;
    sort(v.begin(),v.end()); //Sort
    for(int i:v){
        cout << i << " ";
    }cout << endl;
    */

    return 0;
}