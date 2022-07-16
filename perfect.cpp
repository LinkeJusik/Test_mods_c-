#if defined(_WIN32)
#include <fstream>
#include <sstream>
#include <queue>
#include <math.h>
#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <windowsx.h>
//#ifndef _PERFECT//
#define _PERFECT
#include "perfect.h"

void NumPer(int d){
	int b,cont,c=2,a=0;
	while(a<d){
		b=1;
		cont=0;
		while(b<c){
			if(c%b==0){
				cont+=b;
			}
			b++;
		}
		if(cont==c){
			printf("%d es un número perfecto\n",c);
			a++;
		}
		c++;
	}
}

#endif
