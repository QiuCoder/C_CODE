//��ʶ�ṹ��

//����һ��ѧ�� --- һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���   Stu �ṹ���ǩ   struct Stu �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};				//�����;ǰ���s1,s2,s3��������������ȫ�ֵĽṹ�����
//
//int main()
//{
//	struct Stu s1;//�����ṹ��������ֲ�����
//	return 0
//}


//typedef struct Stu		//typedef ������  ��struct Stu ����Ϊstu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//int main()
//{
//	stu s2;
//	stu s = {"����",20,"12354661325","��"};
//	return 0;
//}

//�ṹ�����ͳ�Ա�����Ǳ��������顢ָ�롢�����������Ľṹ��
//��ʼ���ṹ������ڶ����ͬʱ����ʼֵ

//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//#include <stdio.h>
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//void print1(stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void print2(stu *ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "����",40,"15598886688","��" };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//�������ε�ʱ�򣬲�������Ҫѹջ�ģ���һ���ṹ�壬�ṹ����󣬲���ѹջ��ϵͳ�����ϴ�
//ѹջ:����һ��Ԫ��