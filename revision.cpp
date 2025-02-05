#include <iostream>
#include <algorithm>

using namespace std;

int countnumber(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int reverse(int n)
{

    int num = 0;
    int last = 0;

    while (n > 0)
    {
        last = n % 10;
        n /= 10;
        num = num * 10 + last;
    }

    return num;
}

bool palindrome(int n)
{
    int l = n % 10;
    int f = 0;
    while (n > 0)
    {

        f = n % 10;

        n /= 10;
    }
    if (f == l)
    {
        return true;
    }
    return false;
};

int gcd(int n1, int n2)
{

    int num = min(n1, n2);
    int count = 1;

    for (int i = 1; i < num; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            count = i;
        }
    }
    return count;
}

bool armstrong(int n)
{

    int sum = 0;
    int digit = 0;
    int num = n;

    while (n > 0)
    {

        digit = n % 10;
        n /= 10;
        sum += digit * digit * digit;
    }
    if (sum == num)
    {
        return true;
    }
    else
        return false;
}

void divisor(int n)
{
    for (int i = 1; i < n; i++)
    {

        if (n % i == 0)
        {

            cout << i << " ";
        }
    }
}

bool prime(int n)
{

    bool prime = true;
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            prime = false;
        }
    }
    return prime;
}

void recursion()
{

    int n = 0; // need to initialize outside the funtion

    if (n == 5)
    {
        return;
    }

    cout << n << " ";
    n++;
    recursion();
}

void recursivename(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << "mohit" << endl;
    i++;
    recursivename(i, n);
}

void printnumber(int i, int n)
{

    if (i > n)
    {
        return;
    }

    cout << i << " ";
    i++;
    printnumber(i, n);
}

void printnto1(int n)
{

    if (n <= 0)
    {
        return;
    }
    cout << n << " ";
    n--;
    printnto1(n);
}

void naturalsum(int n, int i, int sum)
{

    if (i > n)
    {
        return;
    }
    sum += i;
    i++;
    cout << sum << " ";

    naturalsum(n, i, sum);
}

int factorial(int n, int sum)
{

    while (n > 0)
    {
        sum *= n;
        n--;
    }

    return sum;
}
int factorial1(int n, int sum)
{

    if (n > 0)
    {
        sum *= n;
        n--;
        return factorial1(n, sum);
    }

    return sum;
}

int reverse(int arr[], int n)
{

    int p = 0;
    int q = n - 1;

    while (p < q)
    {

        swap(arr[p], arr[q]);
        p++;
        q--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

bool palindromestring(string str, int n)
{

    bool palindrome = true;

    int p = 0;
    int q = n - 1;
    while (p < q)
    {
        if (str[p] != str[q])
        {

            return false;
        }
        p++;
        q--;
    }
    return palindrome;
}

void fibo(int n)
{

    int first = 0;
    int second = 1;
    int third;

    cout << first << " " << second << " ";
    for (int i = 2; i <= n; i++)
    {

        cout << first + second << " ";
        third = first + second;
        first = second;
        second = third;
    }
}

int largestinarray(int arr[], int n)
{

    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {

            max = arr[i];
        }
    }
    return max;
}

int largestinarray1(int arr[], int n)
{

    int max = INT16_MIN;
    int maxsecond = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {

            maxsecond = max;

            max = arr[i];
        }
        else if (maxsecond < arr[i] && arr[i] != max)
        {
            maxsecond = arr[i];
        }
    }
    return maxsecond;
}

int secondsmallest(int arr[], int n)
{

    int small = INT16_MAX;
    int seconds = INT16_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < small)
        {

            seconds = small;
            small = arr[i];
        }
        else if (seconds > arr[i] && arr[i] != small)
        {
            seconds = arr[i];
        }
    }
    return seconds;
}

int checksordtedarray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int duplicate(int arr[], int n)
{

    int p = 0;
    int q = 1;

    while (q < n)
    {

        if (arr[p] != arr[q])
        {

            p++;
            arr[p] = arr[q];
        }

        q++;
    }
    for (int i = 0; i <= p; i++)
    {
        cout << arr[i] << " ";
    }
}

int leftrotate(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int rightrotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}



int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    rightrotate(arr, 5);
}