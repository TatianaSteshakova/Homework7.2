#include <iostream>

using namespace std;

void fillArray(int* arr, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand();
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(0, "Rus");
    
    int n, m;
    cout << "Введите длину двух массивов (через пробел): ";
    cin >> n >> m;

    int* mas = new int[n];
    int* mas2 = new int[m];

    fillArray(mas, n);
    fillArray(mas2, m);
    
}