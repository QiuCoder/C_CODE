//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;						  //getchar()只把输入的第一个字符打印出来
//	while ((ch = getchar()) != EOF)   //如果没有退出，一直输入字符，然后打印出来。
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	printf("请输入密码:>");
//	scanf("%s", password);  //123456\n       //数组名是整个数组的首地址也是第一个元素的地址，所以不用加&
//	printf("请确认(Y/N):>");
//	ret = getchar();        //getchar()取了\n,所以直接放弃确认
//	if (ret == 'Y')
//	
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	
//	return 0;
//
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("请输入密码：>");				//\n 是回车
//	scanf("%s", password);  //123456\n       //数组名是整个数组的首地址也是第一个元素的地址，所以不用加&
//											 //	输入密码是存在输入缓冲区的，输完密码后要把密码之外的东西清除，比如输入123456 78asac\n把后面的都清除
//	
//	while ((ch = getchar()) != '\n')         //注意\n是一个字符 单引号   只有输入到'\n'才输入结束
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();        
//	if (ret == 'Y')
//	
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	
//	return 0;
//}



//#include <stdio.h>				//只输出0-9数字
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')    //只打印0-9的数字，但不是只打印一位
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}//



//for循环
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue; //break;
//		printf("%d ",i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;                    //1 2 3 4   如果将i++放在上面结果不一样
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//	for (;;) //判断部分不写为真
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 10; i++)
//	{
//		for (;j<10; j++)//i=0时进入j循环，当j=10时打印了10次，i=1时j=10，不打印
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x;
//	int y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)    //&&同时满足
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//请问循环要循环多少次？
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i =0, k = 0; k = 0; i++, k++)    //k值为0,0为假，循环不进行,表达式结果为非0,则死循环
//	k++;
//	return 0;
//}
////0次




//do   while()
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d ", i);
//	}
//	while (i < 10);
//	
//		return 0;
//}



//练习
//1、计算n的阶乘
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


//2、计算1！+2！+3！....+10！
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		
//		for (i = n; i <= n; i++)    //或者在这句之前加ret = 1;以及i=n 改为i = 1,每次计算一个数的阶乘
//		{
//			ret = ret * i;			
//		}
//		
//		sum = sum + ret;		
//	}
//	printf("sum = %d", sum);
//	return 0;
//}


//简易解法
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//3、在一个有序数组中查找具体某个数字n。
//编写int binsearch(intx,intv[],intn);
//功能:在v[0] <= v[1] <= v[2] <=v[3].....<=v[n-1]的数组中查找x


//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //计算元素个数
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//		{
//			printf("找不到\n");
//		}
//		return 0;
//
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to bit!!!!!!
//w##################!
//we################!!
//wel##############!!!

//welcome to bit!!!!!!

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!" ;//字符数组最后有'\0'作为字符数组结束标识，所以字符数组比整型数组多一个元素
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1) - 1;
//	//printf("%d\n", right);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);   //延时1000ms ,1s
//		system("cls"); //执行系统命令的一个函数 -cls- 清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}



//5、编写代码实现，模拟输入三次密码，如果密码正确则提示登录成功，
//如果三次均输入错误，则退出程序。

//#include <stdio.h>
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//
//		printf("三次密码均输入错误，退出程序\n");
//	return 0;
//}