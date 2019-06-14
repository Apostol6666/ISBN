#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <math.h>

using namespace std;

int main () {
	int sum=0, i=0, k=10, r=0;
	char string[64];

setlocale(LC_ALL, "RUSSIAN");
cout << "Введите ISBN     ";
cin >> string;

 
while (*(string + i) != '\0')  {
	if (*(string + i) == '-') 
		i++;
	
	if (*(string + i) == 'X') { 
		
		*(string + i) = '1';
		*(string + i) = 10;
	    r++;
	}
	if (r > 1) { cout << "Неправильное число было введено";
		break;
	}
	
	sum = (((int)(*(string + i)))-48)*k + sum;
	k--;
	i++;
}


if ((sum%11)==0) cout << sum << "Правильное число";

else {
	cout << "Неправильное число";

}

return 0;
	}
