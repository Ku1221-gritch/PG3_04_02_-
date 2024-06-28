#include<stdio.h>

template <typename T1,typename T2>
class Box {
public:
	T1 num1;
	T2 num2;
	Box(T1 num1,T2 num2) : num1(num1),num2(num2){}

	T1 Min() {

		if (num1 < num2) {
			return static_cast<T1>(num1);
		}
		else{
			return static_cast<T1>(num2);
		}
	}
};

int main() {
	Box<int, int> firstBox(10, 20);
	Box<int, float> secondBox(10, 20.0f);
	Box<int, double> thirdBox(10, 3.4);
	Box<float, float> fourthBox(10.0f, 20.0f);
	Box<float, double> fifthBox(10.0f, 3.4);
	Box<double, double> sixthBox(1.2, 3.4);
	printf("%d\n", firstBox.Min());
	printf("%d\n", secondBox.Min());
	printf("%d\n", thirdBox.Min());
	printf("%f\n", fourthBox.Min());
	printf("%lf\n", fifthBox.Min());
	printf("%lf\n", sixthBox.Min());
}