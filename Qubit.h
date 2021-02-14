#include <iostream>
#include <complex>
#include <random>

using namespace std;

enum measured_state {zero, one};

class Qubit {
public: 
    Qubit(double alpha, complex<double> beta);
    Qubit(double& theta, double& phi);
    Qubit(const Qubit& op1);

    void getCartesianValue(complex<double>& alpha, complex<double>& beta) const;
    void getBlochValue(double& theta, double& phi) const;

    const Qubit& operator+ (const Qubit& op1) const;
    const Qubit& operator= (const Qubit& op2);

    measured_state measure() const;

    void dump() const;
private:
    double m_alpha;
    complex<double> m_beta;
};