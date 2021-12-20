//声名结构体类型
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
}

//声名结构体类型
struct Date
{
	int month;
	int day;
	int year;
}
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Date birthday;
	char addr[30];
}

//定义结构体类型变量
struct student student1,student2;

struct Master
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
}Master1={1,"张翔",'男',23,98.5,"Beijing Road"},Master2={2,"li Ming",'女',20,89.4,"HaiNanDao"};

