#include <iostream>
#include <cmath>

using namespace std;


class QuadraticSolver {
private:
    double a, b, c;

public:

    QuadraticSolver(double coef_a, double coef_b, double coef_c)
        : a(coef_a), b(coef_b), c(coef_c) {}


    void findRoots() {
        cout << fixed << setprecision(4);
        if (a == 0) {
            cout << "Error:." << endl;
            return;
        }

        double discriminant = b * b - 4 * a * c;

        cout << "\nEquation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
        cout << "Discriminant : " << discriminant << endl;
        cout << "--------" << endl;


        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);

            cout << "The equation has two distinct real roots:" << endl;
            cout << "Root 1 (x1): " << root1 << endl;
            cout << "Root 2 (x2): " << root2 << endl;

        } else if (discriminant == 0) {
            double root = -b / (2 * a);

            cout << "The equation has one real and repeated root:" << endl;
            cout << "Root (x1 = x2): " << root << endl;

        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);

            cout << "The equation has two complex roots:" << endl;
            cout << "Root 1 (x1): " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2 (x2): " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }
};

int main() {
    QuadraticSolver example1(1.0, 5.0, 6.0);
    example1.findRoots();

    

    return 0;
}

