#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct node{
    int data;
    bool isVisited;
};

void dfs(int n, node* g, int** a, int start){
    stack<int> s;
    s.push(start-1);
    g[start-1].isVisited = true;
    while(s.size() > 0){
        int curid = s.top();
        s.pop();
        cout << g[curid].data << ' ';
        for(int j=0;j<n;j++){
            if (a[curid][j] == 1 and g[j].isVisited == false){
                s.push(j);
                g[j].isVisited = true;
            }
        }
    }
    for(int i=0;i<n;i++)
        g[i].isVisited = false;
    cout << '\n';
}

void bfs(int n, node* g, int** a, int start){
    queue<int> s;
    s.push(start-1);
    g[start-1].isVisited = true;
    while(s.size() > 0){
        int curid = s.front();
        s.pop();
        cout << g[curid].data << ' ';
        for(int j=0;j<n;j++){
            if (a[curid][j] == 1 and g[j].isVisited == false){
                s.push(j);
                g[j].isVisited = true;
            }
        }
    }
    for(int i=0;i<n;i++)
        g[i].isVisited = false;
    cout << '\n';
}

int main() {
    int n, e, u, v, s;
    node* g;
    int** a;
    cout << "Enter node count:" << '\n';
    cin >> n;
    a = new int*[n];
    for(int i=0;i<n;i++)
        a[i] = new int[n];
    g = new node[n];

    for(int i=0;i<n;i++){
        node cur;
        cur.data = i+1;
        cur.isVisited = false;
        g[i] = cur;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j] = 0;
    cout << "Enter edge count:" << '\n';
    cin >> e;
    cout << "Enter start and end vertex separated by space:" << '\n';
    for(int i=0;i<e;i++){
        cin >> u >> v;
        a[u-1][v-1] = a[v-1][u-1] = 1;
    }
    cout << "DFS..." << '\n';
    dfs(n, g, a, 1);
    cout << "BFS..." << '\n';
    bfs(n, g, a, 1);
    cout << '\n';
    return 0;
}
