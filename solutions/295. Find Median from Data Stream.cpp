class MedianFinder {
    priority_queue<int> maxheap;                              // max heap
    priority_queue<int, vector<int>, greater<int>> minheap;   // min heap
​
public:
    // Adds a number into the data structure.
    void addNum(int num)
    {
        maxheap.push(num);                                   
        minheap.push(maxheap.top());                               
        maxheap.pop();
​
        if (maxheap.size() < minheap.size()) {           
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
​
    // Returns the median of current data stream
    double findMedian()
    {
        return maxheap.size() > minheap.size() ? maxheap.top() : ((double) maxheap.top() + minheap.top())/2;
    }
};
​
/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
