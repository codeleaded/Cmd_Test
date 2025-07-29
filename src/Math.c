#include <stdio.h>
#include "/home/codeleaded/System/Static/Library/Random.h"
#include "/home/codeleaded/System/Static/Library/IntegerSet.h"
#include "/home/codeleaded/System/Static/Library/RealSet.h"

int main(int argc,char** argv){
	
	IntegerSet set1 = IntegerSet_New(10);
	for(int i = 0;i<10;i++){
		int n = Random_i32_MinMax(0,50);
		IntegerSet_Add(&set1,n);
	}
	IntegerSet_Print(&set1);

	IntegerSet set2 = IntegerSet_Make(10,(Integer[]){
		0,1,2,3,4,5,6,7,8,9,INTEGER_END
	});
	IntegerSet_Print(&set2);

	IntegerSet set3 = IntegerSet_Union(&set1,&set2);
	IntegerSet_Print(&set3);

	IntegerSet_Free(&set3);
	IntegerSet_Free(&set2);
	IntegerSet_Free(&set1);



    RealSet set4 = RealSet_New(10);
	for(int i = 0;i<10;i++){
		int n = Random_i32_MinMax(0,50);
		RealSet_Add(&set4,n);
	}
	RealSet_Print(&set4);

	RealSet set5 = RealSet_Make(10,(Real[]){
		0,1,2,3,4,5,6,7,8,9,REAL_END
	});
	RealSet_Print(&set5);

	RealSet set6 = RealSet_Union(&set4,&set5);
	RealSet_Print(&set6);

	RealSet_Free(&set6);
	RealSet_Free(&set5);
	RealSet_Free(&set4);

	return 0;
}