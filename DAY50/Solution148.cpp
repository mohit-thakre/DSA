#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(70);
    pq.push(20);
    pq.push(30);

    int ans = pq.top();
    pq.pop();
    cout << ans;

    return 0;
}