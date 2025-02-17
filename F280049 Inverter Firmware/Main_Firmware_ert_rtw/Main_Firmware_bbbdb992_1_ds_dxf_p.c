/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Main_Firmware/FOC test/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Main_Firmware_bbbdb992_1_ds_sys_struct.h"
#include "Main_Firmware_bbbdb992_1_ds_dxf_p.h"
#include "Main_Firmware_bbbdb992_1_ds.h"
#include "Main_Firmware_bbbdb992_1_ds_externals.h"
#include "Main_Firmware_bbbdb992_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Main_Firmware_bbbdb992_1_ds_dxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[49] = { 3, 4, 14, 15, 16, 3, 4, 4, 13, 14, 15, 16,
    3, 13, 14, 15, 16, 6, 7, 8, 9, 10, 11, 3, 4, 6, 7, 6, 7, 3, 4, 6, 8, 3, 4, 6,
    10, 3, 4, 8, 9, 8, 9, 3, 4, 10, 11, 10, 11 };

  static int32_T _cg_const_1[18] = { 0, 0, 0, 5, 7, 12, 17, 23, 27, 29, 33, 37,
    41, 43, 47, 49, 49, 49 };

  (void)t1;
  (void)LC;
  out->mDXF_P.mNumCol = 17ULL;
  out->mDXF_P.mNumRow = 17ULL;
  out->mDXF_P.mJc[0] = _cg_const_1[0];
  out->mDXF_P.mJc[1] = _cg_const_1[1];
  out->mDXF_P.mJc[2] = _cg_const_1[2];
  out->mDXF_P.mJc[3] = _cg_const_1[3];
  out->mDXF_P.mJc[4] = _cg_const_1[4];
  out->mDXF_P.mJc[5] = _cg_const_1[5];
  out->mDXF_P.mJc[6] = _cg_const_1[6];
  out->mDXF_P.mJc[7] = _cg_const_1[7];
  out->mDXF_P.mJc[8] = _cg_const_1[8];
  out->mDXF_P.mJc[9] = _cg_const_1[9];
  out->mDXF_P.mJc[10] = _cg_const_1[10];
  out->mDXF_P.mJc[11] = _cg_const_1[11];
  out->mDXF_P.mJc[12] = _cg_const_1[12];
  out->mDXF_P.mJc[13] = _cg_const_1[13];
  out->mDXF_P.mJc[14] = _cg_const_1[14];
  out->mDXF_P.mJc[15] = _cg_const_1[15];
  out->mDXF_P.mJc[16] = _cg_const_1[16];
  out->mDXF_P.mJc[17] = _cg_const_1[17];
  out->mDXF_P.mIr[0] = _cg_const_2[0];
  out->mDXF_P.mIr[1] = _cg_const_2[1];
  out->mDXF_P.mIr[2] = _cg_const_2[2];
  out->mDXF_P.mIr[3] = _cg_const_2[3];
  out->mDXF_P.mIr[4] = _cg_const_2[4];
  out->mDXF_P.mIr[5] = _cg_const_2[5];
  out->mDXF_P.mIr[6] = _cg_const_2[6];
  out->mDXF_P.mIr[7] = _cg_const_2[7];
  out->mDXF_P.mIr[8] = _cg_const_2[8];
  out->mDXF_P.mIr[9] = _cg_const_2[9];
  out->mDXF_P.mIr[10] = _cg_const_2[10];
  out->mDXF_P.mIr[11] = _cg_const_2[11];
  out->mDXF_P.mIr[12] = _cg_const_2[12];
  out->mDXF_P.mIr[13] = _cg_const_2[13];
  out->mDXF_P.mIr[14] = _cg_const_2[14];
  out->mDXF_P.mIr[15] = _cg_const_2[15];
  out->mDXF_P.mIr[16] = _cg_const_2[16];
  out->mDXF_P.mIr[17] = _cg_const_2[17];
  out->mDXF_P.mIr[18] = _cg_const_2[18];
  out->mDXF_P.mIr[19] = _cg_const_2[19];
  out->mDXF_P.mIr[20] = _cg_const_2[20];
  out->mDXF_P.mIr[21] = _cg_const_2[21];
  out->mDXF_P.mIr[22] = _cg_const_2[22];
  out->mDXF_P.mIr[23] = _cg_const_2[23];
  out->mDXF_P.mIr[24] = _cg_const_2[24];
  out->mDXF_P.mIr[25] = _cg_const_2[25];
  out->mDXF_P.mIr[26] = _cg_const_2[26];
  out->mDXF_P.mIr[27] = _cg_const_2[27];
  out->mDXF_P.mIr[28] = _cg_const_2[28];
  out->mDXF_P.mIr[29] = _cg_const_2[29];
  out->mDXF_P.mIr[30] = _cg_const_2[30];
  out->mDXF_P.mIr[31] = _cg_const_2[31];
  out->mDXF_P.mIr[32] = _cg_const_2[32];
  out->mDXF_P.mIr[33] = _cg_const_2[33];
  out->mDXF_P.mIr[34] = _cg_const_2[34];
  out->mDXF_P.mIr[35] = _cg_const_2[35];
  out->mDXF_P.mIr[36] = _cg_const_2[36];
  out->mDXF_P.mIr[37] = _cg_const_2[37];
  out->mDXF_P.mIr[38] = _cg_const_2[38];
  out->mDXF_P.mIr[39] = _cg_const_2[39];
  out->mDXF_P.mIr[40] = _cg_const_2[40];
  out->mDXF_P.mIr[41] = _cg_const_2[41];
  out->mDXF_P.mIr[42] = _cg_const_2[42];
  out->mDXF_P.mIr[43] = _cg_const_2[43];
  out->mDXF_P.mIr[44] = _cg_const_2[44];
  out->mDXF_P.mIr[45] = _cg_const_2[45];
  out->mDXF_P.mIr[46] = _cg_const_2[46];
  out->mDXF_P.mIr[47] = _cg_const_2[47];
  out->mDXF_P.mIr[48] = _cg_const_2[48];
  (void)LC;
  (void)out;
  return 0;
}
