#include "tasks.h"

/*	Task X. Caterpillar [гусиница]
*
*	Гусиница ползёт по вертикальному шесту высотой H метров,
*	поднимаясь за день на A метров, а за ночь спускаясь на B метров.
*	На какой день гусиница доползёт до вершины шеста?
*
*	Примечание
*	Все величины должны быть положительными и удовлетворять условиям: H > B и A > B
* 
*	Формат входных данных [input]
*	Функция получает на вход целые числа H, A, B, причем H > B и A > B.
*
*	Формат выходных данных [output]
*	Функция должна вывести одно натуральное число или 0 в случае некорректных данных.
*
*	[ input 1]: 10 3 2
*	[output 1]: 8
*
*	[ input 2]: 10 2 1
*	[output 2]: 9
*
*	[ input 3]: 3 2 1
*	[output 3]: 2
*
*	[ input 4]: 4 5 3
*	[output 4]: 1
*
*	[ input 5]: -10 3 2
*	[output 5]: 0
*
*	[ input 6]: 10 2 3
*	[output 6]: 0
*
*	[ input 7]: 2 5 3
*	[output 7]: 0
*/

int taskX(int h, int a, int b) {
	if (h <= b || a <= b || h <= 0 || b <= 0 || b <= 0) {
		return 0;
	}
	int temp = 0;
	int count = 1;
	do {
		temp += a;
		if (temp >= h){
			return count;}
		temp -= b;
		if (temp >= h) {
			return count;
		}
			count++;
	} while (count > 0);
	return 0;
}
