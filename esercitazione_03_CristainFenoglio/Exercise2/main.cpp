#include <iostream>
#include "Eigen/Eigen"

using namespace Eigen;
using namespace std;



double calc_error(const Vector2d& x, const Vector2d& x_true) {
    return (x - x_true).norm() / x_true.norm();
}


Vector2d sostAvanti(const Matrix2d& L, const Vector2d& b) {
    Vector2d y;
    y(0) = b(0);
    y(1) = (b(1) - L(1,0)*y(0));
    return y;
}


Vector2d sostIndietro(const Matrix2d& U, const Vector2d& y) {
    Vector2d x;
    x(1) = y(1) / U(1,1);
    x(0) = (y(0) - U(0,1)*x(1)) / U(0,0);
    return x;
}


int esA(vector<double> &Da, vector<double> &Db)
{
    Vector2d x_corr;
    x_corr << -1.0, -1.0;
    //A << 1,2,3,  4,5,6,  7,8,10; per un assegnazione rapida
    MatrixXd A(2,2);
    A(0,0)=Da[0];
    A(0,1)=Da[1];
    A(1,0)=Da[2];
    A(1,1)=Da[3];
    
    MatrixXd b(2,1);
    b(0,0)=Db[0];
    b(1,0)=Db[1];
    
    PartialPivLU<Matrix2d> palu(A);
    Matrix2d l = Matrix2d::Identity();
    l.triangularView<StrictlyLower>() = palu.matrixLU().triangularView<StrictlyLower>();
    Matrix2d u = palu.matrixLU().triangularView<Upper>();
    /*Matrix2d p= Matrix2d::Identity();
    if (A(0,0) < A(0,1)){
        p(0,0)=0;
        p(0,1)=1;
    }
    if (A(1,0) < A(1,1)){
        p(1,0)=1;
        p(1,1)=0;
    }*/
    PermutationMatrix<2> p = palu.permutationP();

    // Ly = Pb
    // Ux = y

    Vector2d Pb = p * b;
    Vector2d y_palu = sostAvanti(l, Pb);
    Vector2d x_palu = sostIndietro(u, y_palu);
    double err_palu = calc_error(x_palu, x_corr);
    //stampa
    cout << "PALU calcolato: " << x_palu.transpose() << endl;
    cout << "PALU relative error: " << err_palu << endl;
    
    //Eigen::Vector2d xPALU=A.fullPivLu().solve(b); //metodo implementato da Eigen
    //cout << "soluzione con PALU: " << xPALU << endl;

    //Eigen::Vector2d xQR= A.householderQr().solve(b); //metodo implementato da Eigen

    //cout << "soluzione con QR: " << xQR << endl;


    HouseholderQR<Matrix2d> qr(A);
    Matrix2d q = qr.householderQ() * Matrix2d::Identity();
    Matrix2d r = qr.matrixQR().triangularView<Upper>();

    Vector2d Qtb = q.transpose() * b;
    Vector2d x_qr = sostIndietro(r, Qtb);
    double err_qr = calc_error(x_qr, x_corr);

    cout << "QR calcolato:   " << x_qr.transpose() << endl;
    cout << "QR relative error: " << err_qr << endl;

    return 0;

}
int main()
{
    vector<double> Da;
    vector<double> Db;
    //caso 1
    //Da.assign({5.547001962252291e-01, -3.770900990025203e-02, 8.320502943378437e-01, -9.992887623566787e-01});
    //Db.assign({-5.169911863249772e-01, 1.672384680188350e-01});
    //caso 2
    //Da.assign({5.547001962252291e-01, -5.540607316466765e-01, 8.320502943378437e-01, -8.324762492991313e-01 });
    //Db.assign({-6.394645785530173e-04, 4.259549612877223e-04});
    //caso 3 
    Da.assign({5.547001962252291e-01, -5.547001955851905e-01, 8.320502943378437e-01, -8.320502947645361e-01});
    Db.assign({-6.400391328043042e-10, 4.266924591433963e-10});

    esA(Da, Db);
    return 0;
}
