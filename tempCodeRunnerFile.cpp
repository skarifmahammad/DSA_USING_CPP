    deque<int> d;
    d.push_front(2); //Push front
    d.push_back(1); //Push back
    d.push_back(3); //Push back
    d.push_front(5); //Push front
    for(int i:d){
        cout << i << " ";
    }cout << endl;

    d.pop_front(); //Pop from front
    for(int i:d){
        cout << i << " ";
    }cout << endl;