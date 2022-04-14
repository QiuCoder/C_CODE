//作业
//1、从大到小输出：写代码将三个数按从大到小输出
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main()   // 自己写的
//{
//	int a ,b,c;
//	int fir = 0;
//	int sec = 0;
//	int thi = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			fir = a;
//			if (b > c)
//			{
//				sec = b;
//				thi = c;
//			}
//			else
//			{
//				sec = c;
//				thi = b;
//			}
//			printf("%d %d %d", fir, sec, thi);
//		}
//		else
//		{
//			fir = c;
//			sec = a;
//			thi = b;
//			printf("%d %d %d", fir, sec, thi);
//		}	
//	}
//	else
//		if (b > c)
//		{
//			fir = b;
//			if (a > c)
//			{
//				sec = a;
//				thi = c;
//			}
//			else
//			{
//				sec = c;
//				thi = a;
//			}
//			printf("%d %d %d", fir, sec, thi);
//		}
//		else
//		{
//			fir = c;
//			sec = b;
//			thi = a;
//			printf("%d %d %d", fir, sec, thi);
//		}
//	
//	
//	return 0;
//}


//int main()  //老师写的
//{
//	int a;
//	int b;
//	int c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	//算法实现:a中存放最大值，b中存放中间值，c中存放最小值
//	if (a < b)							//为什么if判断条件这样写？
//	{									//如果写a > b那么两者不用交换，没有意义
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//2、打印3的倍数的数 ：1-100所有3的倍数

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i < 101; i++)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;	
//	
//}

//3、最大公约数：给定两个数，求这两个数的最大公约数
//辗转相除法
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	/*int m = 24;
//	int n = 18;*/
//	int m, n;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//
//}

//4、打印闰年：打印1000年到2000年之间的闰年

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年
//		//能被4整除并且不能被100整除是闰年
//		//能被400整除的是闰年
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	    else if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//打印100-200之间的素数
//试除法

//#include <stdio.h>
//<1>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//被1和本身整除
//		//产生2 - （i-1)的数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//优化<2>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//被1和本身整除
//		//产生2 - （i-1)的数
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)   //sqrt()开平方数学库函数，i = a*b ,至少有一个数字<=sqrt(i)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//优化<3>
//#include <math.h>
//int main()
//{
//int i = 0;
//int count = 0;
//for (i = 101; i <= 200; i+=2)   //排除偶数
//{
//	//判断i是否为素数
//	//素数判断规则
//	//被1和本身整除
//	//产生2 - （i-1)的数
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (j >sqrt(i))
//	{
//		count++;
//		printf("%d ", i);
//	}
//}
//printf("\ncount = %d\n", count);
//return 0;
//}

//《素数求解的N种境界》
//1、试除法




//取余或取模方法          整型a,b				-7 mod 4
//1、求整数商             c = a/b;			取模c= -2   取余c= -1
//2、计算余数或模数       r = a- c*b		
//取余取c时，向0方向舍入（fix()函数）
//取模		 向负无穷方向舍入（floor（）函数）


//作业

//1、数9的个数：编写程序数一下1-100的所有整数出现多少个数字9
//个位为9或十位为9   十位i/10==9	个位i%10==9

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i / 10 == 9 || i % 10 == 9)    //99只算了1个
//		if(i/10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//
//	}
//	printf("%d\n", count);
//	return 0;
//
//}


//2、分数求和：计算1/1-1/2+1/3-1/4+1/5........+1/99-1/100的值，打印结果

//#include <stdio.h>

//int main()    //自己写的，错误
//{
//	int i = 0;
//	int j = 0;
//	double sum = 0.0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//
//	for (i = 1; i < 100; i += 2, j += 2)
//	{
//		sum1 = sum1 + 1.0 / i;
//		sum2 = sum2 + 1.0 / j;
//	}
//	sum = sum1 - sum2 + 1.0 / 101;
//	printf("%lf", sum);
//	return 0;
//	
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//3、求最大值：求10个整数中最大值

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };   
//	int max = arr[0];						//防止都是负数，0最大
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}		
//	}
//	printf("max=%d\n", max);
//		return 0;
//}


//4、在屏幕上输出9*9乘法口诀表

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印1行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);  //%2d右对齐，%-2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//5、二分查找：编写代码在一个整型有序数组中查找具体的数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");	
//	}
//	return 0;
//}


//猜数字游戏
//1、电脑生成一个随机数
//2、猜数字

//#include <stdio.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("******  1、play  2、exit  ******\n");
//	printf("********************************\n");
//}
//
//void game()
//{
//	//生成一个随机数
//	int ret = 0;
//	int guess = 0;  //接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	time_t;
//	ret = rand() % 100 + 1; //生成1-100之间的随机数
//	//printf("%d\n",ret);
//	//猜数字
//		while (1)
//		{
//			printf("请猜数字:>");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了\n");
//				break;
//			}
//			
//	     }
//
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); //猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}
//	while (input);
//		return 0;
//}


//goto语句
//#include <stdio.h>
//
//int main()
//{
//again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60   一分钟内关机
//	//system()  - 执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机从，如果输入：我是猪，就可以取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a"); //取消关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}