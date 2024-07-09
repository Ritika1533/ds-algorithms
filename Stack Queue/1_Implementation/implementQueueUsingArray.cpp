#include<iostream>
using namespace std;
class Queue{
	public:
	int front;
	int rear;
	int *arr;
	int count;
	int maxsize;
	Queue(){
		arr=new int[16];
		front=-1;
		rear=-1;
		count=0;
	}
	Queue(int maxsize){
		this->maxsize=maxsize;
		arr=new int[maxsize];
		front=-1;
		rear=-1;
		count=0;
	}
	void push(int element){
		if(count==maxsize) {
			cout<<"No Space.Exiting..."<<endl;
		}
		if(rear==-1){
			front=0;
			rear=0;
		}else{
			rear=(rear+1)%maxsize;
		}
		arr[rear]=element;
		cout<<element<<" has been pushed"<<endl;
		count=count+1;
	}
	int pop(){
		if(front==-1){
			cout<<"queue is empty.Exiting.."<<endl;
			exit(1);
	    }
	    int poppedEle=arr[front];
	    if(count==1){
	    	front=-1;
	    	rear=-1;
		}else{
			front=(front+1)%maxsize;
		}
		count=count-1;
		return poppedEle;
	}
	int size(){
		return count;
	}
	int top(){
		if(front==-1){
			cout<<"Queue is empty.Exiting..."<<endl;
			exit(1);
		}
		return arr[front];
	}
};
int main() {
  Queue q(3);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}