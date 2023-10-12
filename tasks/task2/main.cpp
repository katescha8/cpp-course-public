#include "matrix.h"

#include "iostream"
using RowMatrix = Matrix::RowMatrix;

int main()
{
	double array[2] = { 0,0 };
	RowMatrix r(array, 2);
	r[0] = 1;
	r[1] = 2;
	std::cout << r[0] << " " << r[1] << std::endl;
    return 0;
}
