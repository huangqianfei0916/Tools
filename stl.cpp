#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<deque>


/*
序列容器：vector，string，deque（双端队列），list（双向链表）
关联容器：set，map，multiset，multimap
适配容器：stack，queue，priirity_queue（优先队列）

可以访问下表的容器：vector,deque,map,
但是，vector和deque在初始化大小时候，不能使用下标插入元素，
*/

void vector_demo(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    

    // 遍历
    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;
    }

    // 查找
    vector<int>::iterator it = find(vec.begin(), vec.end(), 2);
    if(it != vec.end()){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    // 排序，降序只需要将起末颠倒即可
    sort(vec.rbegin(), vec.rend());
    // 反转
    reverse(vec.begin(), vec.end());
    // 大小
    cout << vec.size() << vec.empty() << endl;
    
    // 清空
    vec.clear();
    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }
}

// string 不是引用传递
void stringDemo(){
    string demo = "sponsorfly";
    // 遍历
    for(int i = 0; i < demo.size(); ++i){
        cout << demo[i] << endl;
    }
    // 反转
    reverse(demo.begin(), demo.end());
    cout << demo << endl;
    // 子字符串
    string temp = demo.substr(2,3);
    cout << temp << endl;
    // 查找
    size_t idx = demo.find("ops");
    if(idx != string::npos){
        cout << "no";
    }
    
}

void arrDemo(int demo[]){
    demo[0] = 100;
    
}

void listDemo(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0);
    l.pop_back();
    for(list<int>::iterator it = l.begin(); it != l.end(); ++it){
        cout << *it << endl;
    }

}

void setDemo(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }
    set<int>::iterator f = s.find(2);
    if(f != s.end()){
        cout << "yes" << *f << endl;
    }else{
        cout << "no" << *f << endl;
    }

}

void mapDemo(){
    map<int, string> m;
    m.insert(pair<int, string>(1, "111"));
    m.insert(pair<int, string>(2, "222"));
    cout << m.size() << endl << m.max_size() << endl;

    for(map<int, string>::iterator it = m.begin(); it != m.end(); ++it){
        cout << it->first << it->second << endl;
    }
    if(m.find(1) != m.end()){
        cout << m.find(1)->first << m.find(1)->second << endl;
    }
}

void queueDemo(){
    queue<int> q;
    q.push(1);
    q.push(2);
    cout << q.back() << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}

void stackDemo(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

}

void dequeDemo(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);

    cout << dq.front() << endl;
    while(!dq.empty()){
        cout << dq.front() << endl;
        dq.pop_front();
    }

}

int main(){
    // vector_demo();
    // stringDemo();
    // listDemo();
    // setDemo();
    // mapDemo();
    // queueDemo();
    // stackDemo();
    dequeDemo();


    int a[200];
    a[0] = 200;
    arrDemo(a);
    cout << a[0];


    return 0;
}