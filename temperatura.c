#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float fahrenheit = temperatura * 9.0 / 5.0 + 32.0;
	printf("Temperature: %d degrees\n", temperatura);

	printf("Fahrenheit: %.1f degrees.\n", fahrenheit);

	if (temperatura >= 20) {
		printf("High temperature\n");
	} else {
		printf("Low temperature\n");
	}

	return 0;
}
