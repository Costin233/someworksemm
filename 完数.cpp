/*������������һ����ǡ�õ�����������֮�ͣ�������ͳ�Ϊ�������������磬6������Ϊ1��2��3������6=1+2+3�����6�ǡ�����������д�����ҳ�С�ڸ�����n�����С���������n�ɼ������롣

���������롿1000 

�����������6 28 496

������˵����28������Ϊ1��2��4��7��14������28=1+2+4+7+14�����28�ǡ���������ͬ����ж�496Ҳ�ǡ����������ж�һ�����Ƿ�������ʱ�����Ӳ�������������

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

		for (; j < a; )//������ȡ
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