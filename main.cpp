#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
	Eigen::MatrixXd d;
	Matrix4d f;
	f.size();
	cout << f.size() << endl;
	cin.get();

	// Default (initialize)
	Matrix <float, 3, 3> matrixA;
	matrixA.setZero();
	cout << matrixA << endl;
	// Another approach
	Matrix3f matrixA1;
	matrixA1.setZero();
	cout << '\n' << matrixA1 << endl;

	// Assigning matrix entries
	MatrixXf matrixC(2, 2);
	matrixC(0, 0) = 1;
	matrixC(0, 1) = 2;
	matrixC(1, 0) = 3;
	matrixC(1, 1) = 4;
	cout << endl << matrixC << endl;
	// Another assigning using comma
	Matrix3f matrixD;
	matrixD << 1, 2, 3, 4, 5, 6, 7, 8, 9;
	cout << endl << matrixD << endl;

	// setting matrix entries
	int rows = 3, cols = 3;
	MatrixXf matrixE;
	matrixE = MatrixXf::Zero(rows, cols);
	cout << '\n' << matrixE << endl;
	// Another option
	MatrixXf matrixF;
	matrixF.setZero(rows, cols);
	cout << "\n \n" << matrixF << endl;

	// Matrix of constants
	float constant = 2.1;
	MatrixXf matrixG;
	matrixG = MatrixXf::Constant(2, 2, constant);
	cout << "\n \n" << matrixG << endl;

	// Identity matrix
	Matrix <float, 1, 3> vectorA;
	Matrix3f Idenmatrix;
	vectorA << 1, 2, 3;
	cout << vectorA << endl;
	// Idenmatrix = vectorA.Identity();
	// cout << "\n \n" << Idenmatrix << endl;
}
