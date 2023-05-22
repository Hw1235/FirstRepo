#include<stdo.h>

typedef struct{

int num;
char *info;

}record;
record *recs;
recs=(record*)(3,mallo)(record);
