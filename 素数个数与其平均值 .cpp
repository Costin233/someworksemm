/*��������������д������m��n֮�䣨����m��n��m<=n�������ĸ�������ƽ��ֵ�����û�����������no��m��n�ɼ������롣

������˵�������������ֱ���m��ֵ��n��ֵ

�����˵�������������ֱ�����������������ƽ��ֵ

����������1��1 10 

���������1��4 4.25 

����������2��8 10 

���������2��no

������˵����1��10֮����4�����������ǵ�ƽ��ֵ��4.25��8��10֮��û�������������no��*/
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