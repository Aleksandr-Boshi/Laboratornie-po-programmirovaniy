#include <iostream>
#include <cmath>

using namespace std;

// Создание переменных
double x, a, b, z, x1, x2, dx, zmin = 9999, zmax = -9999;

// Сравнение переменных double
bool srav (double a, double b)
{
    if (abs(a - b) < 0.0000001)
    {
        return true;
    }
    else return false;
}

// Тут считается f(x)
double func()
{
        for (x = x1; x < x2 or srav (x, x2); x += dx)
        {
            if (x < a or srav (x, a))
            {
                z = (exp(x) - sin(x));
            }
            else if ((x > a) and (x < b))
            {
                z = (cos(x) + fabs(x));
            }
            else if(x > b or srav (x, b))
            {
               z = pow(x, 5);
            }

            cout << "z = " << z << endl;

                if (z < zmin)
                {
                    zmin = z;
                }

                if (z > zmax)
                {
                    zmax = z;
                }
        }

    cout << zmin << endl;
    cout << zmax << endl;

    return 0;
}

int main()
{
    // Ввод данных
    cout << "Vvedite parametr a" << endl;
    cin >> a;

    cout << "Vvedite parametr b" << endl;
    cin >> b;

    cout << "Vvedite nachalnuy koordinatu" << endl;
    cin >> x1;

    cout << "Vvedite konechnuy koordinatu" << endl;
    cin >> x2;

    cout << "Vvedite shag" << endl;
    cin >> dx;

    // Функция
    func();
}
