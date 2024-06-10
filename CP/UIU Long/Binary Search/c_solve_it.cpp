#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x, double p, double q, double r, double s, double t, double u) {
  return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

double bisection(double p, double q, double r, double s, double t, double u) {
  double lo = 0, hi = 1;
  const double tol = 1e-7;

  while (hi - lo >= tol) {
    double mid = (lo + hi) / 2.0;
    if (f(lo, p, q, r, s, t, u) * f(mid, p, q, r, s, t, u) <= 0) {
      hi = mid;
    } else {
      lo = mid;
    }
  }

  return (lo + hi) / 2.0;
}

int main() {
  double p, q, r, s, t, u;

  while (cin >> p >> q >> r >> s >> t >> u) {
    if (f(0, p, q, r, s, t, u) * f(1, p, q, r, s, t, u) > 0) {
      cout << "No solution\n";
    } else {
      double root = bisection(p, q, r, s, t, u);
      cout << fixed << setprecision(4) << root << endl;
    }
  }

  return 0;
}
