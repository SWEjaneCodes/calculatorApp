#include <iostream>

using namespace std;


int main() {
    char c1 = 'n';
    char c2 = 'f';
    char input; cout << "What would you like to do? (n-operation, f-factoring polynomials (up to second power)" << endl;
    cout << "What would you like to do? (n-operation, f-factoring polynomials (up to second power)" << endl;
    cin >> input;

	if (input == c1) {
		double num1, num2;
		char operation;

        cout << "Please enter the operation you would like to perform" << endl;

		cin >> num1 >> operation >> num2;

		switch (operation) {
        case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
		case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
		case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
		case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int = ((int)num1 == num1);//5.0==5
			isNum2Int = ((int)num2 == num2);//5.0==5
			if (isNum1Int && isNum2Int)
                cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
			else
                cout << "Not valid!";
			break;
		default:cout << "Not Valid Operation!";
		}
	}
	else if (input == c2) {
        double discriminant, root1, root2;
        int a, b, c;
        cout << "Please enter three numbers";
        cin >> a >> b >> c;

        double discriminant = pow(b, 2) - 4 * a * c;

        //calculates min and max of discriminant
        cout << "Discriminant is " << round(discriminant);
        //calculates the roots using the quadratic formula


        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);



        if (discriminant < 0) {
            /*if discriminant is negative both solutions will be printed
            using a + bi
            */
            //System.out.printf("%.3f\n", discriminant);
            discriminant *= -1;
            double num1;
            num1 = sqrt(discriminant);
            //System.out.printf("%.3f\n", num1);
            double num2 = num1 / (2 * a);
            //System.out.printf("%.3f", num2);
            double b2 = -b / (2 * a);
            //double num2 = b / 2 * a;
            cout << "**Complex number solutions**";
            cout << "x = " << b2 << " + " << num2 << "i";

            cout << "x = " << b2 << " - " << num2 << "i";
        }
        //------------------------------------------------------------
        else {
            cout << "**Real Number Solutions**";
            double minRoot = min(root1, root2);
            double maxRoot = max(root1, root2);
            cout << "x = " << minRoot;
            cout << "x = " << maxRoot;
        }

	}
	
	system("pause>0");
}