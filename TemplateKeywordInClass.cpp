#include <iostream>
using namespace std;

//template <class type> class Class_name
template <class x> class ArrayList //x is place holder
{
    private:
        struct ControlBlock
        {
            int arraysize;
            x *arr_ptr; //x is place holder
        };
        ControlBlock *s;
    public:
        ArrayList(int arraysize)
        {
            s= new ControlBlock;
            s->arraysize=arraysize;
            s->arr_ptr=new x[s->arraysize]; //x is place holder
        }
        void addElement(int index,x data) //x is place holder
        {
            if(index>=0 && index<=s->arraysize-1)
                s->arr_ptr[index]=data;
            else
                cout << "\n Array index is not valid";
        }
        void viewElement(int index,x &data)
        {
            if(index>=0 && index<=s->arraysize-1)
                data=s->arr_ptr[index];
            else
                cout << "\n Array index is not valid";
            cout << "Value in the array is " << data << " Possition is " << index <<endl;
        }
        void viewLIst()
        {
            for(int i=0;i<s->arraysize;i++)
                cout << s->arr_ptr[i] << " " ;
            cout << endl;
        }
};
 
int main()
{
    int dataforint;
    ArrayList <int>List1(4); //Type of x --> 'int'
    List1.addElement(0,43);
    List1.addElement(1,33);
    List1.addElement(2,23);
    List1.addElement(3,13);

    List1.viewLIst();
    List1.viewElement(2,dataforint);

    float dataforfloat;
    ArrayList <float>List2(4); //Type of x --> 'float'
    List2.addElement(0,4.3);
    List2.addElement(1,3.3);
    List2.addElement(2,2.3);
    List2.addElement(3,1.3);
    
    List2.viewLIst();
    List2.viewElement(1,dataforfloat);
    return 0;
}