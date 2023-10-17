#include <stdio.h>
#include <math.h>

//функция вычисления значения имходного выражения
int reshenie(double x, double y, double z) {
	double w, w_1, w_2;
	w_1 = fabs(cos(x) - cos(y));
	w_2 = 1 + 2 * pow(sin(y), 2);
	w = pow(w_1, w_2) * (1 + z + pow(z, 2) / 2.0 + pow(z, 3) / 3.0 + pow(z, 4) / 4.0);
	printf("%.4lf", w);
	return 0;
}

// функция обработки ввода 
int vvod() {
	double x, y, z;
	printf("Vvedite x, y, z: \n");
	if (scanf_s("%lf %lf %lf", &x, &y, &z) != 3) {
		printf("error\n");
		return 0;
	}
	reshenie(x, y, z);
	return 0;
}


// 4000 -0.875 -0.000475	
int main()
{
	int flag, result;


	printf("Vvedite chislo: \n");
	if (scanf_s("%d", &flag) != 1) {
		printf("Error\n");
		return 0;
	}

	switch (flag) {
	case 21:
		reshenie(4000, -0.875, -0.000475);
		break;
	case 22:
		reshenie(4000, -0.875, -0.000475);
		break;
	case 33:
		return 0;
		break;
	case 44:
		return 0;
		break;
	case 5:
		break;
	default: vvod();
	}

	return 0;
}