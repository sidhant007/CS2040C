#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    string words[10] = {"job", "vacancy", "singapore", "student", "job", "job", "vacancy", "university", "play", "job"};
    unordered_map<string, int> vocab;
    map<string, int> vocab1;
    set<string> word_keys;
    unordered_set<string> word_keys1;
    for (int i=0;i<10;i++){
        // add to unordered map
        if (vocab.count(words[i]) == 1){ // or vocab.find(words[i]) != vocab.end()
            vocab[words[i]] += 1;
        }
        else{
            vocab[words[i]] = 1;
        }
        // add to map
        if (vocab1.count(words[i]) == 1){
            vocab1[words[i]] += 1;
        }
        else{
            vocab1[words[i]] = 1;
        }
        // add to set
        if (word_keys.count(words[i]) == 0){
            word_keys.insert(words[i]);
        }
        // add to unordered set
        if (word_keys1.count(words[i]) == 0){
            word_keys1.insert(words[i]);
        }

    }
    // print from unordered map
    for (auto itr = vocab.begin(); itr != vocab.end(); itr++){
        cout << itr->first << '\t' << itr->second << '\n';
    }
    cout << '\n';

    // print from ordered map
    for (auto itr : vocab1){ // Range based loop
        cout << itr.first << '\t' << itr.second << '\n';
    }
    cout << '\n';
    cout << vocab.size() << '\n';

    // print from ordered set
    for (auto itr = word_keys.begin(); itr != word_keys.end(); itr++){
        cout << *itr << '\n';
    }
    cout << '\n';

    // print from unordered set
    for (auto itr = word_keys1.begin(); itr != word_keys1.end(); itr++){
        cout << *itr << '\n';
    }
    cout << '\n';
    return 0;
}
