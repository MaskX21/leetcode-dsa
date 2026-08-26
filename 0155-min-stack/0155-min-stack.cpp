class MinStack {
    int arr[30000];
    int minarr[30000];
    int topindx;

public:
    MinStack() {
        topindx = -1;
    }

    void push(int value) {
        topindx++;
        arr[topindx] = value;

        if (topindx == 0) {
            minarr[topindx] = value;
        } else {
            minarr[topindx] = min(value, minarr[topindx - 1]);
        }
    }

    void pop() {
        topindx--;
    }

    int top() {
        return arr[topindx];
    }

    int getMin() {
        return minarr[topindx];
    }
};