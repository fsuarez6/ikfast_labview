#define IKFAST_API extern "C" __declspec(dllexport)

/** \brief Computes all IK solutions given a end effector coordinates and the free joints.

   - ``eetrans`` - 3 translation values. For iktype **TranslationXYOrientation3D**, the z-axis is the orientation.
   - ``eerot``
   - For **Transform6D** it is 9 values for the 3x3 rotation matrix.
   - For **Direction3D**, **Ray4D**, and **TranslationDirection5D**, the first 3 values represent the target direction.
   - For **TranslationXAxisAngle4D**, **TranslationYAxisAngle4D**, and **TranslationZAxisAngle4D** the first value represents the angle.
   - For **TranslationLocalGlobal6D**, the diagonal elements ([0],[4],[8]) are the local translation inside the end effector coordinate system.
 */
IKFAST_API bool compute_ik(const double* eetrans, const double* eerot, double* joints);

/// \brief Computes the end effector coordinates given the joint values. This function is used to double check ik.
IKFAST_API void compute_fk(const double* joints, double* eetrans, double* eerot);

/// \brief the total number of indices of the chain
IKFAST_API int get_num_joints();