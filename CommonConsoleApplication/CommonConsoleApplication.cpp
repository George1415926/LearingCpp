// CommonConsoleApplicaton.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
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
	//�����ֵ
	float math_abs = (m < 0) ? -m : m;
	return math_abs;
}
	

float judge_score_degree(float score)
{
	//ѡ��ṹ����Ϊɶֻ����int�͵�������ʹ�������������ư�������
	/*switch (score)
	{
	case 1:

	default:
		break;
	}*/
	return 0;
}


struct answer
{
	double clcu;
	double area;
};

answer calcu_clc_area(double radius)
{
	//��������뾶��Բ���ܳ������
	if (radius < 0.0)
	{
		answer erro
		{ 0.0, 0.0 };
		return erro;//�˴�Ӧ�������쳣
	}
	double clcu = 2 * 3.1416*radius;
	double area = 3.1416*pow(radius, 2);

	answer ans
	{
		clcu, 	area
	};
	return ans;
}


int max(int a, int b, int c)
{
	int max_value;
	a <= b ? max_value = b : max_value = a;
	c <= max_value ? max_value = max_value : max_value = a;
	return max_value;
}


void solve_eqution()
{//�������Ϊ��û���κεķ��أ�����
	//���һԪ���η���
	double a, b, c;
	cout << "���������뷽�̵�����ϵ����" << endl;
	cin >> a >> b >> c;
	double delta = b*b - 4 * a*c;
	if (a - 0.0 <= 10e-4) { throw "������ϵ����Ϊ�㣡�����������"; }
	else if (delta < 0.0) { cout << "�б�ʽdeltaС���㣬û��ʵ���⣡" << endl; }
	else if (delta - 0.0 <= 10e-7) { cout << "�б�ʽdelta�����㣬���ظ���" << -b / 2 / a << endl; }
	else {
		cout << "�б�ʽdelta=" << delta << " ������" << endl;
		cout << "�������ֱ�Ϊ�� x1 = " << (-b + sqrt(delta)) / 2 / a << " �� x2 = " << (-b - sqrt(delta)) / 2 / a << endl;
	}
	//return 0;
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
	

	//answer result = calcu_clc_area(3);
	//cout << result; //������ν�result�����

	/*int max_value = max(2, 3, -6);
	cout << max_value << "\n";*/

	// solve_eqution();


	system("pause");
	return 0;
}

