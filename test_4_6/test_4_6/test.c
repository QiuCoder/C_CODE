//��ҵ
//1���Ӵ�С�����д���뽫���������Ӵ�С���
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main()   // �Լ�д��
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


//int main()  //��ʦд��
//{
//	int a;
//	int b;
//	int c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	//�㷨ʵ��:a�д�����ֵ��b�д���м�ֵ��c�д����Сֵ
//	if (a < b)							//Ϊʲôif�ж���������д��
//	{									//���дa > b��ô���߲��ý�����û������
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


//2����ӡ3�ı������� ��1-100����3�ı���

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

//3�����Լ�������������������������������Լ��
//շת�����
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

//4����ӡ���꣺��ӡ1000�굽2000��֮�������

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�����
//		//�ܱ�4�������Ҳ��ܱ�100����������
//		//�ܱ�400������������
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


//��ӡ100-200֮�������
//�Գ���

//#include <stdio.h>
//<1>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//��1�ͱ�������
//		//����2 - ��i-1)����
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


//�Ż�<2>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//��1�ͱ�������
//		//����2 - ��i-1)����
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)   //sqrt()��ƽ����ѧ�⺯����i = a*b ,������һ������<=sqrt(i)
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


//�Ż�<3>
//#include <math.h>
//int main()
//{
//int i = 0;
//int count = 0;
//for (i = 101; i <= 200; i+=2)   //�ų�ż��
//{
//	//�ж�i�Ƿ�Ϊ����
//	//�����жϹ���
//	//��1�ͱ�������
//	//����2 - ��i-1)����
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

//����������N�־��硷
//1���Գ���




//ȡ���ȡģ����          ����a,b				-7 mod 4
//1����������             c = a/b;			ȡģc= -2   ȡ��c= -1
//2������������ģ��       r = a- c*b		
//ȡ��ȡcʱ����0�������루fix()������
//ȡģ		 ����������루floor����������


//��ҵ

//1����9�ĸ�������д������һ��1-100�������������ֶ��ٸ�����9
//��λΪ9��ʮλΪ9   ʮλi/10==9	��λi%10==9

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i / 10 == 9 || i % 10 == 9)    //99ֻ����1��
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


//2��������ͣ�����1/1-1/2+1/3-1/4+1/5........+1/99-1/100��ֵ����ӡ���

//#include <stdio.h>

//int main()    //�Լ�д�ģ�����
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


//3�������ֵ����10�����������ֵ

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };   
//	int max = arr[0];						//��ֹ���Ǹ�����0���
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


//4������Ļ�����9*9�˷��ھ���

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡ1��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);  //%2d�Ҷ��룬%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//5�����ֲ��ң���д������һ���������������в��Ҿ������
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���

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
//		printf("�Ҳ���\n");	
//	}
//	return 0;
//}


//��������Ϸ
//1����������һ�������
//2��������

//#include <stdio.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("******  1��play  2��exit  ******\n");
//	printf("********************************\n");
//}
//
//void game()
//{
//	//����һ�������
//	int ret = 0;
//	int guess = 0;  //���ղµ�����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	time_t;
//	ret = rand() % 100 + 1; //����1-100֮��������
//	//printf("%d\n",ret);
//	//������
//		while (1)
//		{
//			printf("�������:>");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); //��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	while (input);
//		return 0;
//}


//goto���
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
//	//shutdown -s -t 60   һ�����ڹػ�
//	//system()  - ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ��ӣ�������룺�������Ϳ���ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a"); //ȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}