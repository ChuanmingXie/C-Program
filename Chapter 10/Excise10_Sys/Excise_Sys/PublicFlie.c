#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>

#define SIZE 5
#define LG 4

struct student {
	char name[10];
	int num;
	float score[3];
	float ave;
}stud[SIZE],temp;

struct employee{
	char num[6];
	char name[10];
	char sex;
	int age;
	char addr[20];
	int salary;
	char health[8];
	char study[10];
}emp[LG];

struct EmpSala{
	char name[10];
	int salary;
}ems[LG];

extern void main();
extern void Back_M();

extern void StrWordTurn();
extern void StrWordDiff();

extern void FileToUnion();

extern void ScoreCheked();
extern void ScoreInSort();
extern void ScoreInsert();
extern void ScoreInSave();

extern void Workerselect();
extern void WorkerDelect();