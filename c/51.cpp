//1

#include <bits/stdc++.h>

using namespace std;

class Vector {
public:
    Vector() {}
    Vector(const vector<double>& components) : components_(components) {}
    
    // Unary negation operator
    Vector operator-() const {
        vector<double> neg_components;
        for (double component : components_) {
            neg_components.push_back(-component);
        }
        return Vector(neg_components);
    }
    
    // Binary addition operator
    Vector operator+(const Vector& other) const {
        vector<double> sum_components;
        for (int i = 0; i < components_.size(); ++i) {
            sum_components.push_back(components_[i] + other.components_[i]);
        }
        return Vector(sum_components);
    }
    
    // Binary subtraction operator
    Vector operator-(const Vector& other) const {
        vector<double> diff_components;
        for (int i = 0; i < components_.size(); ++i) {
            diff_components.push_back(components_[i] - other.components_[i]);
        }
        return Vector(diff_components);
    }
    
    // Binary multiplication operator
    Vector operator*(const Vector& other) const {
        vector<double> prod_components;
        for (int i = 0; i < components_.size(); ++i) {
            prod_components.push_back(components_[i] * other.components_[i]);
        }
        return Vector(prod_components);
    }
    
    // Left bit-shift operator (output operator)
    friend std::ostream& operator<<(std::ostream& os, const Vector& vector) {
        os << '[';
        for (int i = 0; i < vector.components_.size(); ++i) {
            os << vector.components_[i];
            if (i < vector.components_.size() - 1) {
                os << ", ";
            }
        }
        os << ']';
        return os;
    }
    
    // Right bit-shift operator (input operator)
    friend istream& operator>>(istream& is, Vector& vector) {
        vector<double> components;
        char c;
        is >> c; // read the opening '['
        while (true) {
            double component;
            is >> component;
            components.push_back(component);
            is >> c; // read the delimiter (',' or ']')
            if (c == ']') {
                break;
            }
        }
        vector = Vector(components);
        return is;
    }
    
private:
    vector<double> components_;
};

int main() {
    // Test the overloaded operators
    Vector v1({1, 2, 3});
    Vector v2({4, 5, 6});
    cout << "v1 = " << v1 << std::endl;
    cout << "v2 = " << v2 << std::endl;
    cout << "-v1 = " << -v1 << std::endl;
    cout << "v1 + v2 = " << v1 + v2 << std::endl;
    cout << "v1 - v2 = " << v1 - v2 << std::endl;
    cout << "v1 * v2 = " << v1 * v2 << std::endl;
    cout << "Enter a vector: ";
    Vector v3;
    cin >> v3;
    cout << "v3 = " << v3 << std::endl;
    return 0;
}