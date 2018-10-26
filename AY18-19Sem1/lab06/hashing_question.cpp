#include <iostream>
#include <string>
# include <list>
using namespace std;

int max_size = 10;

struct student{
    string name;
    string id;
};

int main() {
    list<student>* bucket[max_size];
    for(int i=0;i<max_size;i++){
        bucket[i] = new list<student>; //create empty buckets
    }
    int n;
    cin >> n; // no of students
    for (int i=0;i<n;i++){
        string name, id;
        int age;
        cin >> name >> id >> age; // assume age is between 18 to 27
        student s;
        s.name = name;
        s.id = id;
        bucket[age - 18]->push_back(s);
    }
    int v;
    cin >> v; // query age
    list<student>* l = bucket[v - 18];
    for (auto itr = l->begin(); itr != l->end(); itr++){
        cout << itr->name << '\n';
    }
    return 0;
}
