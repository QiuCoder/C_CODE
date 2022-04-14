//初识结构体

//描述一个学生 --- 一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字   Stu 结构体标签   struct Stu 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};				//如果在;前面加s1,s2,s3，那这三个就是全局的结构体变量
//
//int main()
//{
//	struct Stu s1;//创建结构体变量，局部变量
//	return 0
//}


//typedef struct Stu		//typedef 重命名  将struct Stu 命名为stu
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
//	stu s = {"张三",20,"12354661325","男"};
//	return 0;
//}

//结构体类型成员可以是标量、数组、指针、甚至是其他的结构体
//初始化结构体变量在定义的同时赋初始值

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
//	//成员变量
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
//	stu s = { "李四",40,"15598886688","男" };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//函数传参的时候，参数是需要压栈的，传一个结构体，结构体过大，参数压栈的系统开销较大
//压栈:插入一个元素