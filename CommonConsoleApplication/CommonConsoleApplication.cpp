// CommonConsoleApplicaton.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include<algorithm>

using namespace std;

//��������





int get_sum(int m, int n) 
{
	//����m, n �����������ĺͣ����߽磩
	int sum = 0;
	if (m >= n) 
	{

		int counter = n;
		while (counter <= m)
		{
			sum += counter;
			counter += 1;
		}
	}
	else
	{
		//int sum = 0;
		int counter = m;
		while (counter < n) 
		{
			sum += counter;
			counter += 1;
		}
	}
	return sum;
}

int get_sum_new(int m, int n)
{
	int start = min(m, n);
	int end = max(m, n);
	int sum = 0;
	int counter = start;
	while (counter <= end)
	{
		sum += counter;
		counter += 1;
	}

	return sum;
}

float math_abs(float m)
{
	float math_abs = (m < 0) ? -m : m;
	return math_abs;
}
	 
float judge_score_degree(float score)
{
	/*switch (score)
	{
	case 1:

	default:
		break;
	}*/
	return 0;
}

float calcu_clc_area(double radius)
{
	float clcu = 2 * 3.1416*radius;
	float area = 3.1416*pow(radius, 2);
	return clcu, area;
}

int main()

{
	//string input = "jjj" ;
	//int nu1 = 1, nu2 = 3;
	//cout << "hello word!\n";
	//cout << "\n";
	//cout << "nu1 has " << nu1 << " and nu2 has " << nu2 << endl;
	//cout << "����������Ҫ��������֣�\n";
	//printf("%s", "����������Ҫ��������֣�");
	//scanf_s("%s", input, 3);
	//printf("%s", input.c_str());

	/*
	int sum = get_sum_new(2, 6);
	cout << sum << "\n";
	*/
	
	/*
	float mabs = math_abs(-456.3);
	cout << mabs << "\n";
	*/
	
	float cc, float ca= calcu_clc_area(3);
	cout << cc << ca << "\n";

	system("pause");
	return 0;
}

