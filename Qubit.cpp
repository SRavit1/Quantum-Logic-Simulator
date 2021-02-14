#include "Qubit.h"

//constructs a qubit with alpha and beta as specified
Qubit::Qubit(double alpha, complex<double> beta) : m_alpha(alpha), m_beta(beta) {

}

//constructs a qubit according to specified theta and pi (hint: we first need to find the corresponding alpha and beta values)
Qubit::Qubit(double& theta, double& phi) {

}

//copy constructor for Qubit: just copying m_alpha and m_beta
Qubit::Qubit(const Qubit& op1) {

}

//stores the values of alpha and beta in the corresponding reference parameters
void Qubit::getCartesianValue(complex<double>& alpha, complex<double>& beta) const {

}
//stores the values of theta and pi corresponding to the qubit
void Qubit::getBlochValue(double& theta, double& phi) const {

}

//overloaded + operator for adding two qubits together (how are qubits added?)
const Qubit& Qubit::operator+ (const Qubit& op1) const {

}

//assignment operator for qubits: assigning one to the other
const Qubit& Qubit::operator= (const Qubit& op2) {

}

//measuring the state of the qubit: alpha^2 is the probability of 0, beta^2 is the probability of 1
measured_state Qubit::measure() const {

}

//prints out the value of the qubit
void Qubit::dump() const {

}