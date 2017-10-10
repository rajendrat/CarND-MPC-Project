#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
  //static const int latency;
 public:
  MPC();
  ~MPC();

  std::vector<double> pred_path_x_, pred_path_y_;

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

  
private:
    double steering_offset, throttle;
 
};

#endif /* MPC_H */
