/*
Implement the following operations of a queue using stacks.
push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.
*/
class Queue {
public:
    // Push element x to the back of queue.
    stack<int> si;
    stack<int> so;
    void push(int x) {
        si.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(!si.empty())
        {
            while(!si.empty())
            {
                so.push(si.top());
                si.pop();                
            }
            so.pop();
            while(!so.empty())
            {
                si.push(so.top());
                so.pop();                
            }
        }
    }

    // Get the front element.
    int peek(void) {
            while(!si.empty())
            {
                so.push(si.top());
                si.pop();                
            }
            int n=so.top();
            while(!so.empty())
            {
                si.push(so.top());
                so.pop();                
            }            
        return n;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return si.empty();
    }
};