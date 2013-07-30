#include <iostream>

int main(void){
	
	int a, b, c=335; // Found minimum value for c through some math
	bool end=false;
	while (end==false){
		for (int i = 1, v = (999-c); v > i; v--, i++){
			if ((i*i) + (v*v) == (c*c)){
				a = i;
				b = v;
				end = true;
				break;
			}
		}
		c++;
	}
	c--;
	std::cout << "a: " << a << " b: " << b << " c: " << c;
	std::cout << " abc: " << a*b*c;
	
	return 0;
}

