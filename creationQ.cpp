#include <iostream>
using namespace std;
class queue{
    public : 
    int size;
    int* arr;
    int front;
    int rear;
    
    queue(int size)
    {
        this->size=size;
        front=0;
        rear=0;
        arr= new int[size];
    }
void push(int val)
{
    if(rear==size)
    {
        cout<<"queue is full"<<endl;
    }
    else
    {
        arr[rear]=val;
        rear++;
    }
}
   void pop()
   {
       if(front==rear)
       {
           cout<<"queue is empty"<<endl;
       }
       else
       {
           arr[front]=-1;
           front++;
           if(front==rear)
           {
               front=0;
               rear=0;
           }
       }
   }
   void  getFront()
   {
       if(front==rear)
       {
           cout<<"queue is empty "<<endl;
       }
       else
       {
           cout<<arr[front]<<endl;
       }
   }
   bool isempty()
   {
       if(front==rear)
       {
           return true;
       }
       else
       {
           return false;
       }
   }
   void getsize()
   {
       cout<<"size is : "<<rear-front<<endl;
   }
   void display()
   {
      while(!isempty())
      {
          cout<<arr[front]<<" ";
          pop();
      }
   }
};

int main() {
   queue q(4);
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.pop();
   q.getsize();
   q.getFront();
   if(q.isempty())
   {
       cout<<"q is empty"<<endl;
   }
   else
   {
       cout<<"q is not empty"<<endl;
   }
   q.display();
    return 0;
}