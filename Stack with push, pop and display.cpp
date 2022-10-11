#include<iostream>
using namespace std;
int top=0,ar_size;
void push(int *arry, int item)
{
    arry[top]=item;
    top++;

}
void pop(int *arry)
{
    int item;
    item=arry[top];
    cout<<"The popped value is "<<item<<endl;
    top--;
}
void display(int *arry)
{
    int i;
    if(top<=0)
    {
        cout<<"Stack is Empty."<<endl;
    }
    else
    {
        for(i=0; i<top; i++)
            cout<<arry[i]<<" ";
    }
}
int main()
{
    int i,j,*arry,ac,item;
    cout<<"Enter stack size: ";
    cin>>ar_size;
    arry= new int[ar_size];
    while(1)
    {
        system("CLS");
        cout<<"Current stack: ";
        display(arry);
        cout<<endl;
        cout<<"Action:"<<endl;
        cout<<"1. Push:"<<endl<<"2. Pop:"<<endl<<"3. Exit:"<<endl;
        cin>>ac;
        if(ac==1)
        {
            if(top>=ar_size)
            {
                system("CLS");
                cout<<"Stack Overflow. "<<endl;
            }
            else
            {
                cout<<"Enter item: ";
                cin>>item;
                push(arry,item);
            }
        }
        else if(ac==2)
        {
            if(top<=0)
            {
                system("CLS");
                cout<<"Stack Underflow."<<endl;
            }
            else
            {
                pop(arry);
            }
        }
        else if(ac==3)
            break;

    }
    return 0;
}
