#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <algorithm>
#include <functional>
using namespace std;

// 1. Vectors & Deques
void vectorDequeExample() {
    vector<int> vec = {10, 20, 30, 40};
    vec.push_back(50);
    cout << "Vector Elements: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    deque<int> dq = {5, 15, 25};
    dq.push_front(1);
    dq.push_back(35);
    cout << "Deque Elements: ";
    for (int val : dq) cout << val << " ";
    cout << endl;
}

// 2. Maps & Sets
void mapSetExample() {
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    cout << "Map Elements: ";
    for (auto &[key, value] : mp) cout << key << ": " << value << " ";
    cout << endl;
    
    set<int> st = {10, 20, 30, 40};
    st.insert(50);
    cout << "Set Elements: ";
    for (int val : st) cout << val << " ";
    cout << endl;
}

// 3. Priority Queues & Heaps
void priorityQueueExample() {
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    cout << "Max Heap Top: " << maxHeap.top() << endl;
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    cout << "Min Heap Top: " << minHeap.top() << endl;
}

// 4. Stacks & Queues
void stackQueueExample() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Stack Top: " << st.top() << endl;
    
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue Front: " << q.front() << endl;
}

// 6. String Processing
void stringProcessingExample() {
    string s = "Hello STL";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "Uppercase String: " << s << endl;
    
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    cout << "Character Frequency: ";
    for (auto &[c, count] : freq) cout << c << "-" << count << " ";
    cout << endl;
}

// 8. Smart Pointers & Memory Management
void smartPointerExample() {
    unique_ptr<int> uptr = make_unique<int>(42);
    cout << "Unique Pointer Value: " << *uptr << endl;
    
    shared_ptr<int> sptr1 = make_shared<int>(100);
    shared_ptr<int> sptr2 = sptr1;
    cout << "Shared Pointer Value: " << *sptr1 << " (Use count: " << sptr1.use_count() << ")" << endl;
}

// 10. STL Algorithms & Functional Programming
void stlAlgorithmsExample() {
    vector<int> vec = {5, 3, 8, 1, 9};
    sort(vec.begin(), vec.end());
    cout << "Sorted Vector: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of Elements: " << sum << endl;
}

int main() {
    vectorDequeExample();
    mapSetExample();
    priorityQueueExample();
    stackQueueExample();
    stringProcessingExample();
    smartPointerExample();
    stlAlgorithmsExample();
    return 0;
}