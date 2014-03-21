#include "ikfast_wrapper.h"

// ikfast_static routines
extern "C" {
  bool ComputeIkC(const double* eetrans, const double* eerot, double* joints);
  void ComputeFk(const double* joints, double* eetrans, double* eerot);
  int GetNumJoints();
}

IKFAST_API bool compute_ik(const double* eetrans, const double* eerot, double* joints) {
  ComputeIkC(eetrans, eerot, joints);
}

IKFAST_API void compute_fk(const double* j, double* eetrans, double* eerot) {
  ComputeFk(j, eetrans, eerot);
}

IKFAST_API int get_num_joints(){ 
  return 6;
}