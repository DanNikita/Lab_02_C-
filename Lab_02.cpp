//SuperSimple number
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int x,c = 1;
//	bool simp = true,simp1,res = true;
//	cout << "Enter number to check if it is supersimple\n";
//	cin >> x;
//	//First we need to check if it is simple or not
//	for (int i = 2;i < x;i++)
//	{
//		if (x % i == 0)
//		{
//			cout << "The number is not simple\n";
//			simp = false;
//			break;
//		}
//		else
//		{
//			//Checking if i is simple. If so - counter c + 1
//			simp1 = true;
//			for (int a = 2;a < i;a++)
//			{
//				if (i % a == 0)
//				{
//					cout << i << " = i is not simple\n";
//					simp1 = false;
//					break;
//				}
//				else
//					continue;
//			}
//			if (simp1 == true)
//			{
//				c++;
//				cout << i << " = i is simple\n";
//			}
//			cout << c << " = Simple numbers in a row\n";
//		}
//	}
//	//Now we have bool simp and row number of the simple number
//	if (simp == true)
//	{
//		for (int i = 2;i < c;i++)
//		{
//			if (c % i == 0)
//			{
//				cout << "The number " << x << " is simple but not supersimple\n";
//				break;
//				res = false;
//			}
//			else
//			{
//				continue;
//			}
//		}
//		if (res == true)
//			cout << "The number " << x << " is supersimple!\n";
//	}		
//
//}

//Snils
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	char temp;
//	int counter = 0, sum = 0;
//	int res;
//	cout << "enter SNILS number (9 digits + 2 digit control value) \n";
//	//cin >> str;
//	str = "12345679900";
//	//Checking that Snils have 11 chars
//	if (str.length() != 11)
//	{
//		cout << "Invalid SNILS.\n";
//		return 0;
//	}
//	//Checking that chars are digitable only
//	for (char c : str) 
//	{
//		if (!isdigit(c)) {
//			cout << "Invalid SNILS.\n";
//			return 0;
//		}
//	}
//	//Checking that there are no more than 2 equal numbers in a row
//	for (int i = 1;i < 9;i++)
//	{
//		temp = str[i - 1];
//		cout << temp << "\n";
//		if (temp == str[i] && temp == str[i + 1])
//		{
//			cout << "Invalid SNILS.\n";
//			return 0;
//		}
//		
//	}
//	//Checking control value.
//	counter = 8;
//	for (int i = 1;i < 10;i++)
//	{
//		char t = str[counter];
//		sum = sum + i * ((str[counter])-'0');
//		cout << "value : " << str[counter] << " i : " << i << " sum: " << sum << "\n";
//		counter--;
//	}
//	if (sum < 100)
//	{
//		cout << "Control value : " << sum;
//		res = sum;
//	}
//	else if (sum == 100 || sum == 101 )
//	{
//		cout << "Control value : " << "00";
//		res = 0;
//	}
//	else if (sum > 101)
//	{
//		cout << "Control value : " << 101 % sum;
//		res = 101 % sum;
//	}
//	else if (sum > 101)
//	{
//		sum = 101 % sum;
//		if (sum < 100)
//		{
//			cout << "Control value : " << sum;
//			res = sum;
//		}
//		else if (sum == 100)
//		{
//			cout << "Control value : " << "00\n";
//			res = 0;
//		}
//	}
//	else
//	{
//		cout << "Something went terribly wrong";
//	}
//	int control_orig = stoi(str.substr(9, 2));
//	if (res == res)
//		cout << "\nValid snils";
//	else
//		cout << "\ninvalid snils";
//}

//Coins
//#include <iostream>
//using namespace std;
//int main()
//{
//	int rub = 1;
//	int rub2 = 2;
//	int rub5 = 5;
//	int rub10 = 10;
//	int sum = 159;
//	int a, b, c, d;
//	cout << "Total amont: " << sum << " roubles\n";
//	if (sum >= 10)
//	{
//		a = sum / rub10; //amount of 10rub coins.
//		sum = sum - a * rub10;
//		cout << "10rub coins: " << a << " Left (rub): " << sum<<endl;
//
//	}
//	if (sum != 0 && sum >= 5)
//	{
//		b = sum / rub5; //amount of 5rub coins.
//		sum = sum - b * rub5;
//		cout << "5rub coins: " << b << " Left (rub): " << sum << endl;
//	}
//	if (sum != 0 && sum >= 2)
//	{
//		c = sum / rub2; //amount of 2rub coins.
//		sum = sum - c * rub2;
//		cout << "2rub coins: " << c << " Left (rub): " << sum << endl;
//	}
//	if (sum != 0 && sum == 1)
//	{
//		d = sum / rub; //amount of 1rub coins.
//		sum = sum - d * rub;
//		cout << "1rub coins: " << d << " Left (rub): " << sum << endl;
//	}
//}

//Shooting
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    int res = 0;
    int x, y, a, b;
    int attempts = 3;
    int sum = 0, total = 0;
    string rank;
    char choice;
    bool targ_rand = false, targ_hard = false;
    srand(time(NULL));
    cout << "Welcome to the shooting range!" << endl;
    cout << "Do you want to enable random centre? (y/n)" << endl;
    cin >> choice;
    switch (choice)
    {
        case ('y'):
            targ_rand = true;break;
        case('n'):
            targ_rand = false;break;
        default:
            cout << "Wrong symbol!" << endl;
    }
    cout << "Do you want to enable hard conditions? (y/n)" << endl;
    cin >> choice;
    switch (choice)
    {
        case ('y'):
            targ_hard = true;break;
        case('n'):
            targ_hard = false;break;
        default:
            cout << "Wrong symbol!" << endl;
    }
    cout << "Two types of game: classic(c) and Attempts(a) (c/a)" << endl;
    cin >> choice;
    switch (choice)
    {
    case ('c'):
        {
            for (int i = 0; i < attempts; i++)
            {
                if (targ_rand == true)
                {
                    a = rand() % 3 + 1;
                    cout << "Random target! centre shifted: " << a << endl;
                }
                else a = 0;
                if (targ_hard == true)
                {
                    b = rand() % 3 + 1;
                    cout << "Strong wind! Accuracy affected : " << b << endl;
                }
                else b = 0;
                cout << "Attempt No" << i + 1 << endl;
                cout << "Enter x coordinate" << endl;
                cin >> x;
                cout << "Enter y coordinate" << endl;
                cin >> y;
                cout << "x,y:" << x + b << " , " << y + b << endl;
                if (abs(x + b + a) <= 1 && abs(y + b + a) <= 1)
                    sum = 10;
                else if (abs(x + b + a) <= 2 && abs(y + b + a) <= 2)
                    sum = 5;
                else sum = 0;
                cout << "Score for this round: " << sum << endl;
                total += sum;
            }
            cout << "Total score: " << total << endl;
            if (total > 25)
                rank = "Sniper";
            else if (total > 10)
                rank = "Rookie";
            else rank = "Blinded";
            cout << "Amount of attempts: " << attempts << " Your rank: " << rank << endl;
            break;
        }
        
        
    case('a'):
        {
            int i = 0;
            while (total <= 50)
            {
                if (targ_rand == true)
                {
                    a = rand() % 3 + 1;
                    cout << "Random target! centre shifted: " << a << endl;
                }
                else a = 0;
                if (targ_hard == true)
                {
                    b = rand() % 3 + 1;
                    cout << "Strong wind! Accuracy affected : " << b << endl;
                }
                else b = 0;
                cout << "Attempt No" << i + 1 << endl;
                cout << "Enter x coordinate" << endl;
                cin >> x;
                cout << "Enter y coordinate" << endl;
                cin >> y;
                cout << "x,y:" << x + b << " , " << y + b << endl;
                if (abs(x + b + a) <= 1 && abs(y + b + a) <= 1)
                    sum = 10;
                else if (abs(x + b + a) <= 2 && abs(y + b + a) <= 2)
                    sum = 5;
                else sum = 0;
                cout << "Score for this round: " << sum << endl;
                total += sum;
                attempts++;
                i++;
            }
            cout << "Amount of attempts: " << attempts << endl;
            break;
        }
        
    default:
        cout << "Wrong symbol! No game for you!" << endl;
    }
    
}
   




















//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//    int x, y;
//	cout << "Enter two coordinates for the point\n" << "x:\n";
//	cin >> x;
//	cout << "y:\n";
//	cin >> y;
//	if (x * x + y * y < 9 && y > 0)
//		cout << "inside\n";// "внутри"
//	else if (x * x + y * y > 9 || y < 0)
//		cout << "outside\n";// "снаружи"
//	else // "на границе"
//		cout << "on border\n";
//}

//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	system("chcp 1251");
//	char op;
//	cout << "Сделай свой выбор, собери авто свой мечты: ";
//	cin >> op;
//	switch (op)
//	{
//	case 'V':
//		cout << "Кондиционер хочу\n";
//	case 'S':
//		cout << "Радио играть должно\n";
//	default:
//		cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";
//	}
//}

//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	double x, x1, x2, y;
//	cout << "x1 = "; cin >> x1;
//	cout << "x2 = "; cin >> x2;
//	cout << "\tx\tsin(x)\n";
//	x = x1;
//	do
//	{
//		y = sin(x);
//		cout << "\t" << x << "\t" << y << endl;
//		x = x + 0.01;
//	} while (x <= x2);
//	return 0;
//}

//#include <iostream>
//#include<cmath>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	srand(time(NULL)); 
//	int a, b, c;
//	int k = 0, n = 10;
//	for (int i = 1;i <= n;i++) 
//	{ 
//		// инициализация операндов случайными числами от 1 до 101 
//		a = rand() % 10 + 1; b = rand() % 10 + 1;
//		cout << a << " * " << b << " = ";
//		cin >> c;
//		if (a * b != c)
//		{
//			k++; // операция «инкремент», аналогично: k = k + 1
//			cout << "Error! ";
//			cout << a << " * " << b << " = " << a * b << endl;
//		}
//	}
//	cout << "Count error: " << k << endl;
//	return 0;
//}

//#include <iostream>
//#include<cmath>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	int m, k, s;
//	for (int i = 1;i <= 100;i++)
//	{
//		if ((i > k) && (i < m))
//			continue;
//		s += i;
//	}
//}

