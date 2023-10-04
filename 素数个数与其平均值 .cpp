/*【问题描述】编写程序求m到n之间（包括m和n，m<=n）素数的个数及其平均值，如果没有素数则输出no，m和n由键盘输入。

【输入说明】两个数，分别是m的值和n的值

【输出说明】两个数，分别是素数个数和素数平均值

【样例输入1】1 10 

【样例输出1】4 4.25 

【样例输入2】8 10 

【样例输出2】no

【样例说明】1到10之间有4个素数，它们的平均值是4.25；8到10之间没有素数，输出“no”*/
#include<iostream>
#include<cmath>

using namespace std;
double arr[999];

int sushugeshu(int num1,int num2)
{
	int num = num1;
	int i = 2, j = 0;
	for (;num<=num2;)
	{
		i = 2;
		if (num == 1)
		{
			num++;
		}

		else if (num % i != 0)
		{
			for (;; )
			{
				i++;
				if (i == num)
				{
					j++;
					arr[j] = num;
					num++;
					break;
				}
				else if (num % i == 0)
				{
					num++;
					break;
				}
			}
			
			
		}
		else
		{
			if (i == num)
			{
				j++;
				arr[j] = num;
				num++;
			}
			else
				num++;
		}
	}
	return j;
}


int main()
{
	int m, n;
	cin >> m >> n;
	int a = sushugeshu(m, n);
	if (a != 0)
	{
		double sum = 0.0;
		double average = 0.0;
		for (int k = 1; k <= a; k++)
		{
			sum = sum + arr[k];
		}
		average = sum / a;
		cout << a << " " << average << endl;
	}
	else
		cout << "no" << endl;

	return 0;
}