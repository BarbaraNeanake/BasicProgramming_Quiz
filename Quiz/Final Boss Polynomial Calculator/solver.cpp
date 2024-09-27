#include <iostream>
#include <vector>

using namespace std;

struct Term {
	int coefficient;
	int power;
};

struct Polynomial {
	vector<Term> terms;
};

Polynomial addPolynomials(const Polynomial& p1, const Polynomial& p2) {
	Polynomial result;
	int i = 0, j = 0;

	while (i < p1.terms.size() && j < p2.terms.size()) {
    	if (p1.terms[i].power > p2.terms[j].power) {
        	result.terms.push_back(p1.terms[i]);
        	i++;
    	} else if (p1.terms[i].power < p2.terms[j].power) {
        	result.terms.push_back(p2.terms[j]);
        	j++;
    	} else {
        	int combinedCoefficient = p1.terms[i].coefficient + p2.terms[j].coefficient;
        	if (combinedCoefficient != 0) {
            	result.terms.push_back({combinedCoefficient, p1.terms[i].power});
        	}
        	i++;
        	j++;
    	}
	}

	while (i < p1.terms.size()) {
    	result.terms.push_back(p1.terms[i]);
    	i++;
	}

	while (j < p2.terms.size()) {
    	result.terms.push_back(p2.terms[j]);
    	j++;
	}

	return result;
}

Polynomial multiplyPolynomials(const Polynomial& p1, const Polynomial& p2) {
	Polynomial result;
	for (const Term& term1 : p1.terms) {
    	for (const Term& term2 : p2.terms) {
        	int combinedCoefficient = term1.coefficient * term2.coefficient;
        	int combinedPower = term1.power + term2.power;
        	result.terms.push_back({combinedCoefficient, combinedPower});
    	}
	}

	for (int i = 0; i < result.terms.size() - 1; i++) {
    	for (int j = i + 1; j < result.terms.size(); j++) {
        	if (result.terms[i].power == result.terms[j].power) {
            	result.terms[i].coefficient += result.terms[j].coefficient;
            	result.terms.erase(result.terms.begin() + j);
            	j--;
        	}
    	}
	}

	return result;
}

void printPolynomial(const Polynomial& p) {
	for (int i = p.terms.size() - 1; i >= 0; i--) {
    	if (p.terms[i].coefficient != 0) {
        	if (p.terms[i].power == 0) {
            	cout << p.terms[i].coefficient;
        	} else if (p.terms[i].power == 1) {
            	cout << p.terms[i].coefficient << "x";
        	} else {
            	cout << p.terms[i].coefficient << "x^" << p.terms[i].power;
        	}
        	if (i > 0 && p.terms[i].coefficient > 0) {
            	cout << " + ";
        	}
    	}
	}
	cout << endl;
}

int main() {
	int T;
	cin >> T;

	vector<Polynomial> polynomials(T);

	for (int i = 0; i < T; i++) {
    	int K;
    	cin >> K;

    	for (int j = 0; j < K; j++) {
        	int coefficient, power;
        	cin >> coefficient >> power;
        	polynomials[i].terms.push_back({coefficient, power});
    	}
	}

	int A, B, C, D;
	cin >> A >> B >> C >> D;

	Polynomial result1 = addPolynomials(polynomials[A], polynomials[B]);
	Polynomial result2 = multiplyPolynomials(polynomials[C], polynomials[D]);

	printPolynomial(result1);
	printPolynomial(result2);

	return 0;
}