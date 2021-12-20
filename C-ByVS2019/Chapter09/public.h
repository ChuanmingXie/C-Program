#pragma once

#define L 10
#define S 13
#define LEN sizeof(struct StudLink)

struct data {
	int Month;
	int Day;
	int Year;
}data;

struct student {
	char num[6];
	char name[8];
	float score[4];
	float aver;
}stu[L];

struct person {
	int number;
	int nextp;
}link[S + 1];

struct StudLink {
	long num;
	float score;
	struct StudLink* next;
};

typedef struct studata {
	char num[10];
	char name[20];
	struct studata* next;
}Studata;

extern void main();
extern void Back_M();

extern void Fun1_DeSrct();
extern void Fun2_UsSrct();

extern void Fun3_PrintS();
extern void Fun4_InputS();
extern void Fun5_CountS();

extern void Fun6_DeleNode();
extern void Fun7_NodeDele();
extern void Fun8_NodeInse();
extern void Fun9_LinkOper();
extern void Fun10_MergeNode();
extern void Fun11_DeleLink();
extern void Fun12_DeteMore();


extern struct StudLink* Create();
extern struct StudLink* Delete(struct StudLink*, long);
extern struct StudLink* Insert(struct StudLink*, struct StudLink*);
extern void Output(struct StudLink*);
