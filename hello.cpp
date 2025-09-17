#include <iostream>
#include <vector>
using namespace std;

vector<int> returnKey(const vector<string>& list, string key) {
    vector<int> indices;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    int a;
    string key;
    cout << "Enter the length of the list you want to enter: ";
    cin >> a;

    if (a == 0) {
        cout << "Empty array." << endl;
        return 0;
    }

    vector<string> list(a);
    cout << "Enter all the elements (can repeat):" << endl;
    for (int i = 0; i < a; i++) {
        cin >> list[i];
    }

    cout << "Enter the key value you want to find: ";
    cin >> key;

    vector<int> indices = returnKey(list, key);

    if (indices.empty()) {
        cout << "Key not found." << endl;
    } else {
        cout << "Key found at indices: ";
        for (int i = 0; i < indices.size(); i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }
    cout<<"The code has been completed"<<endl;

    return 0;
}