#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int>arr={5,2,6,3,6,1};
    Node* y= new Node(arr[2]);
    cout<<y->data<<endl;
    cout<<y;
}