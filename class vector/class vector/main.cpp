#include "Vector.h"
#include "Rational.h"
#include <iostream>
#include "matrix.h"
using namespace std;

void main()
{
	int choice = 0,ch_in1;
	matrix<int> a(3),b(4);
	cout<<a[1][1]<<endl;
	Rational r;
	
	/*cout << "Choose an option:\n 1.Integer numbers  2.Natural numbers 3.Rational numbers  4.Exit: ";
	cin >> choice;
	while (choice != 4)
	{
		int size;
		while (choice < 0 || choice >4)
		{
			cout << "Incorrect choice!" << endl;
			cout << "Choose an option:\n 1.Integer numbers  2.Natural numbers 3.Rational numbers  4.Exit:";
			cin >> choice;
		}

		while (choice == 1)
		{
			int res,ans;
			cout << "Insert a size of vector:";
			cin >> size;
			while (size < 1)
			{
				cout << "Incorrect number!" << endl;
				cout << "Insert a size of vector:";
				cin >> size;
			}
			Vector<int> a(size), b(size), c(size);
			cout << "Insert an action:\n 1.Sum of vectors  2.Difference  3.Scalar product  4.Multiplication of vector and number  5.Resize: ";
			cin >> ch_in1;
			while (ch_in1 < 1 || ch_in1>5)
			{
				cout << "Incorrect action!" << endl;
				cout << "Insert an action:\n 1.Sum of vectors  2.Difference  3.Scalar product  4.Multiplication of vector and number: ";
				cin >> ch_in1;
			}

			if (ch_in1 == 1)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				c = a + b;
				cout << c ;
			}

			if (ch_in1 == 4)
			{
				int k;
				cout << "Insert vector:";
				cin >> a;
				cout << "Insert a number:";
				cin >> k;
				c = a * k;
				cout << c ;
			}

			if (ch_in1 == 3)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				res = a * b;
				cout << "Result:" << res << endl;
			}

			if (ch_in1 == 2)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				c = a - b;
				cout << c;
			}

			if (ch_in1 == 5)
			{
				int l;
				cout << "Insert a new size of vector:";
				cin >> l;
				try {
					a.Resize(l);
				}
				catch (int m)
				{
					cout << "Incorrect number " << m << endl;
				}
				cout << a;
			}

			cout << "Do you want to change an operation?[1.Y/Another.No]:";
			cin >> ans;
			if (ans != 1)
				break;
		}

		while (choice == 2)
		{
			double res;
			int ans;
			cout << "Insert a size of vector:";
			cin >> size;
			while (size < 1)
			{
				cout << "Incorrect number!" << endl;
				cout << "Insert a size of vector:";
				cin >> size;
			}
			Vector<double> a(size), b(size), c(size);
			cout << "Insert an action:\n 1.Sum of vectors  2.Difference  3.Scalar product  4.Multiplication of vector and number: ";
			cin >> ch_in1;
			while (ch_in1 < 1 || ch_in1>4)
			{
				cout << "Incorrect action!" << endl;
				cout << "Insert an action:\n 1.Sum of vectors  2.Difference  3.Scalar product  4.Multiplication of vector and number: ";
				cin >> ch_in1;
			}

			if (ch_in1 == 1)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				c = a + b;
				cout << c ;
			}

			if (ch_in1 == 4)
			{
				int k;
				cout << "Insert vector:";
				cin >> a;
				cout << "Insert a number:";
				cin >> k;
				c = a * k;
				cout << c ;
			}

			if (ch_in1 == 3)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				res = a * b;
				cout << "Result:" << res << endl;
			}

			if (ch_in1 == 2)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				c = a - b;
				cout << c;
			}

			cout << "Do you want to change an operation?[1.Y/Another.No]:";
			cin >> ans;
			if (ans != 1)
				break;
		}

		while (choice == 3)
		{
			Rational res;
			int ans;
			cout << "Insert a size of vector:";
			cin >> size;
			while (size < 1)
			{
				cout << "Incorrect number!" << endl;
				cout << "Insert a size of vector:";
				cin >> size;
			}
			Vector<Rational> a(size), b(size), c(size);
			cout << "Insert an action:\n 1.Sum of vectors  2.Difference  3.Scalar product  4.Multiplication of vector and number: ";
			cin >> ch_in1;
			while (ch_in1 < 1 || ch_in1>4)
			{
				cout << "Incorrect action!" << endl;
				cout << "Insert an action:\n 1.Sum of vectors  2.Difference  3.Scalar product  4.Multiplication of vector and number: ";
				cin >> ch_in1;
			}

			if (ch_in1 == 1)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				c = a + b;
				cout << c ;
			}

			if (ch_in1 == 4)
			{
				cout << "Insert vector:";
				cin >> a;
				cout << "Insert a number:";
				cin >> r;
				c = a * r;
				cout << c ;
			}

			if (ch_in1 == 3)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				res = a * b;
				cout << "Result:" << res << endl;
			}

			if (ch_in1 == 2)
			{
				cout << "Insert 1st vector:";
				cin >> a;
				cout << "Insert 2nd vector:";
				cin >> b;
				c = a - b;
				cout << c;
			}

			cout << "Do you want to change an operation?[1.Y/Another.No]:";
			cin >> ans;
			if (ans != 1)
				break;
		}

		cout << "Choose an option:\n 1.Integer numbers  2.Natural numbers 3.Rational numbers  4.Exit:";
		cin >> choice;
		

	}
	*/
	system("pause");
}