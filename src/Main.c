#include <stdio.h>
#include "/home/codeleaded/System/Static/Library/Random.h"
#include "/home/codeleaded/System/Static/Container/Set.h"

void Printer(SetItem* si){
	printf("%d ",*(int*)si->data);
}

int main(int argc,char** argv){
	
	Set set1 = Set_New(10);
	for(int i = 0;i<10;i++){
		int n = Random_i32_MinMax(0,50);
		Set_Add(&set1,(SetItem[]){ SetItem_New((int[]){ n },4) });
	}
	Set_Print(&set1,Printer);

	Set set2 = Set_Make(10,(SetItem[]){
		SetItem_New((int[]){ 0 },4),
		SetItem_New((int[]){ 1 },4),
		SetItem_New((int[]){ 2 },4),
		SetItem_New((int[]){ 3 },4),
		SetItem_New((int[]){ 4 },4),
		SetItem_New((int[]){ 5 },4),
		SetItem_New((int[]){ 6 },4),
		SetItem_New((int[]){ 7 },4),
		SetItem_New((int[]){ 8 },4),
		SetItem_New((int[]){ 9 },4),
		SETITEM_END
	});
	Set_Print(&set2,Printer);

	Set set3 = Set_Union(&set1,&set2);
	Set_Print(&set3,Printer);

	Set_Free(&set3);
	Set_Free(&set2);
	Set_Free(&set1);

	return 0;
}
