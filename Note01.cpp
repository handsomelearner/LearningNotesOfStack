#include <iostream>
#include<stack>
#include<deque>
#include<vector>
struct Node{
    int a,b;
    Node(int x,int y){
        a=x,b=y;
    }
};
using namespace std;
int main(int argc, const char * argv[]) {
    stack<int> S;
//    deque<int>mydeque;
//    vector<int>myvector;
//    stack<int>second(mydeque);
    for(int i=0;i<5;i++)S.push(i);
//    for(int i=0;i<S.size();i++)cout<<S.<<" ";
    cout<<S.size()<<"\n";
    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
    cout<<"\n";
    stack<Node>SS;
    SS.emplace(1,2);            //push与emplace功能相同，但emplace可以把参数直接传进构造函数
    cout<<SS.size()<<"\n";
    //SS.push(Node(1,2));
    Node p=SS.top();          //纯粹的赋值关系而非指向
    cout<<p.a<<" "<<p.b<<"\n";
    stack<Node>SSS;
    SS.swap(SSS);
    cout<<SS.size()<<" "<<SSS.size()<<"\n";
    
    return 0;
}
