#include <functional>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

template<typename T> void print_queue(T& q) {
    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << '\n';
}


int main() {
    priority_queue<int> q;
    int a[10] = {1,8,5,6,3,4,0,9,7,2};

    for(int i=0;i<10;i++)
        q.push(a[i]);

    print_queue(q);

    priority_queue<int, vector<int>, greater<int> > q2;

    for(int i=0;i<10;i++)
        q2.push(a[i]);

    print_queue(q2);

    return 0;
}
