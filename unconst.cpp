#include <stdio.h>

template<class T> T& unconst(const T& o){
	return *((T*)&o);		// undefined behavior 
}

int main(void){
	const int x = 10;
	unconst(x) = 20;		//may not work
	printf("%d\n", x);
	
	int y = 10;
	unconst(y) = 20;
	printf("%d\n", y);
	
	return 0;
}


