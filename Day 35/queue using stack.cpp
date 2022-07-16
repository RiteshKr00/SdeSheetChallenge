#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    
    public:
    stack<int>s1,s2;
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(s1.empty())
            return -1;
        int x=s1.top();
        s1.pop();
        return x;
    }

    int peek() {
        // Implement the peek() function here.
        if(s1.empty())
            return -1;
        return s1.top();
        
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s1.empty();
    }
};