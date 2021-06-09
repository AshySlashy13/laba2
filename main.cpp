#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int x_begin = 0;
    int x_end = 0;
    int d_step = 0;
    int F = 0;
    int Sum = 0;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "x begin: ";
    cin >> x_begin;
    cout << "x end: ";
    cin >> x_end;
    cout << "step: ";
    cin >> d_step;
Sum = a+b+c;
cout << "Sum = " << Sum <<'\n';
    for (int i = x_begin; i < x_end; i += d_step){
        if (c < 0 && i*i != 0)
            F = - a * i * i;
        else if (c > 5 && a == 0)
            F = (a - i) / (c * i);
        else
            F = (i / c);
        cout << i << " = " << F << endl;
    }
}
