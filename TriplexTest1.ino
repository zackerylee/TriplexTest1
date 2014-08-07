
#include <TriangleSet.h>

TriangleSet set1 = TriangleSet(3, 5, 6);
TriangleSet set2 = TriangleSet(9, 10, 11);


void setup() {

}

void loop() {
	int delayVal = 5000;
	set1.goRed();
	set2.goBlue();
	delay(delayVal);
	set1.goGreen();
	set2.goRed();
	delay(delayVal);
	set1.goBlue();
	set2.goGreen();
	delay(delayVal);
        set1.goFull();
        set2.goZero();
        delay(delayVal);
}
