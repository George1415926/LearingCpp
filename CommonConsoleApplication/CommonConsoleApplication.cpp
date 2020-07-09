// CommonConsoleApplicaton.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include<algorithm>

using namespace std;

//函数声明


int get_sum(int m, int n) 
{
	//输入m, n 求出其间整数的和（含边界）
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
	//求绝对值
	float math_abs = (m < 0) ? -m : m;
	return math_abs;
}
	

float judge_score_degree(float score)
{
	//选择结构条件为啥只能是int型的整数？使用起来很受限制啊！！！
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
	//计算给定半径的圆的周长和面积
	if (radius < 0.0)
	{
		answer erro
		{ 0.0, 0.0 };
		return erro;//此处应该引发异常
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
{//这个函数为何没有任何的返回？？？
	//求解一元二次方程
	double a, b, c;
	cout << "请依次输入方程的三个系数：" << endl;
	cin >> a >> b >> c;
	double delta = b*b - 4 * a*c;
	if (a - 0.0 <= 10e-4) { throw "二次项系数不为零！参数输入错误"; }
	else if (delta < 0.0) { cout << "判别式delta小于零，没有实数解！" << endl; }
	else if (delta - 0.0 <= 10e-7) { cout << "判别式delta等于零，有重根：" << -b / 2 / a << endl; }
	else {
		cout << "判别式delta=" << delta << " 大于零" << endl;
		cout << "两个根分别为： x1 = " << (-b + sqrt(delta)) / 2 / a << " 和 x2 = " << (-b - sqrt(delta)) / 2 / a << endl;
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
	//cout << "请输入你想要输入的文字：\n";
	//printf("%s", "请输入你想要输入的文字：");
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
	//cout << result; //考虑如何将result输出？

	/*int max_value = max(2, 3, -6);
	cout << max_value << "\n";*/

	// solve_eqution();


	system("pause");
	return 0;
}

