#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;

    const int n = 7;
    int a[n];
    int temp;
    int p = 1, q = n - 2, i = p, j = q;

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 101 - 50;
        cout << a[i] << " ";
    }
    cout << endl;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
