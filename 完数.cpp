/*【问题描述】一个数恰好等于它的因子之和，这个数就称为“完数”。例如，6的因子为1、2、3，并且6=1+2+3，因此6是“完数”。编写程序找出小于给定数n的所有“完数”，n由键盘输入。

【样例输入】1000 

【样例输出】6 28 496

【样例说明】28的因子为1、2、4、7、14，并且28=1+2+4+7+14，因此28是“完数”，同理可判断496也是“完数”。判断一个数是否是完数时，因子不包含该数本身。

*/
#include<iostream>
#include<cmath>

using namespace std;

int arr[999];
int wan[99];

int main()
{
	int n;
	cin >> n;
	int a = 2, a1, b = 1, i = 1;
	for (; a <= n; a++)
	{
		int j = 2, sum = 1, i = 1;

		for (; j < a; )//因数提取
		{
			if (a % j == 0)
			{
				arr[i] = j;

				i++;

			}
			j++;


		}
		int* p = &i;
		for (int m = 1; m <= *p-1; m++)
		{
			sum = sum + arr[m];
		}
		if (sum == a)
		{
			wan[b] = a;
			cout << wan[b] << " ";
			b++;
		}

	}
}

/*int yinshu(int num, int num1)
{
	int x = 1;
	for (; x < num; x++)
	{
		if (num % x == 0)
		{
			arr[num1] = x;
			num1++;
		}
	}
	return num1;
}



int main()
{
	int n;
	cin >> n;
	int a = 1, j = 1, k = 1;
	for (; a <= n; a++)
	{
		int x = 1;
		for (; x < a; x++)
		{
			if (a % x == 0)
			{
				arr[j] = x;
				j++;
			}
		}
		int sum = 0;
		for (int i = 1; i <= j; i++)
		{
			sum = sum + arr[i];
		}

		if (sum == a)
		{
			wan[k] = sum;
			cout << wan[k] << " ";
			k++;
		}




	}
}*/