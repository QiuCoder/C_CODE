//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;						  //getchar()ֻ������ĵ�һ���ַ���ӡ����
//	while ((ch = getchar()) != EOF)   //���û���˳���һֱ�����ַ���Ȼ���ӡ������
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
//	printf("����������:>");
//	scanf("%s", password);  //123456\n       //������������������׵�ַҲ�ǵ�һ��Ԫ�صĵ�ַ�����Բ��ü�&
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();        //getchar()ȡ��\n,����ֱ�ӷ���ȷ��
//	if (ret == 'Y')
//	
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
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
//	printf("���������룺>");				//\n �ǻس�
//	scanf("%s", password);  //123456\n       //������������������׵�ַҲ�ǵ�һ��Ԫ�صĵ�ַ�����Բ��ü�&
//											 //	���������Ǵ������뻺�����ģ����������Ҫ������֮��Ķ����������������123456 78asac\n�Ѻ���Ķ����
//	
//	while ((ch = getchar()) != '\n')         //ע��\n��һ���ַ� ������   ֻ�����뵽'\n'���������
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();        
//	if (ret == 'Y')
//	
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	
//	return 0;
//}



//#include <stdio.h>				//ֻ���0-9����
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')    //ֻ��ӡ0-9�����֣�������ֻ��ӡһλ
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}//



//forѭ��
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
//		i++;                    //1 2 3 4   �����i++������������һ��
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//	for (;;) //�жϲ��ֲ�дΪ��
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
//		for (;j<10; j++)//i=0ʱ����jѭ������j=10ʱ��ӡ��10�Σ�i=1ʱj=10������ӡ
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
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)    //&&ͬʱ����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i =0, k = 0; k = 0; i++, k++)    //kֵΪ0,0Ϊ�٣�ѭ��������,���ʽ���Ϊ��0,����ѭ��
//	k++;
//	return 0;
//}
////0��




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



//��ϰ
//1������n�Ľ׳�
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


//2������1��+2��+3��....+10��
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
//		for (i = n; i <= n; i++)    //���������֮ǰ��ret = 1;�Լ�i=n ��Ϊi = 1,ÿ�μ���һ�����Ľ׳�
//		{
//			ret = ret * i;			
//		}
//		
//		sum = sum + ret;		
//	}
//	printf("sum = %d", sum);
//	return 0;
//}


//���׽ⷨ
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

//3����һ�����������в��Ҿ���ĳ������n��
//��дint binsearch(intx,intv[],intn);
//����:��v[0] <= v[1] <= v[2] <=v[3].....<=v[n-1]�������в���x


//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //����Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//		{
//			printf("�Ҳ���\n");
//		}
//		return 0;
//
//}


//��д���룬��ʾ����ַ��������ƶ������м���
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
//	char arr1[] = "welcome to bit!!!!!!" ;//�ַ����������'\0'��Ϊ�ַ����������ʶ�������ַ���������������һ��Ԫ��
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
//		Sleep(1000);   //��ʱ1000ms ,1s
//		system("cls"); //ִ��ϵͳ�����һ������ -cls- �����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}



//5����д����ʵ�֣�ģ�������������룬���������ȷ����ʾ��¼�ɹ���
//������ξ�����������˳�����

//#include <stdio.h>
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)
//
//		printf("�����������������˳�����\n");
//	return 0;
//}