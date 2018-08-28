#include "catmull_clark.h"
#include <unordered_map>
#include <utility>
#include <functional>

void catmull_clark(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  const int num_iters,
  Eigen::MatrixXd & SV,
  Eigen::MatrixXi & SF)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  SV = V;
  SF = F;
  ////////////////////////////////////////////////////////////////////////////
}
