/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) wt_nx6p2_get_matrices_fun_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s1[244] = {240, 1, 0, 240, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239};

/* wt_nx6p2_get_matrices_fun:(i0)->(o0[240]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a2;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  a1=1.;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a0;
  if (res[0]!=0) res[0][5]=a0;
  if (res[0]!=0) res[0][6]=a0;
  if (res[0]!=0) res[0][7]=a0;
  a2=1.5311917180143535e+00;
  if (res[0]!=0) res[0][8]=a2;
  if (res[0]!=0) res[0][9]=a0;
  if (res[0]!=0) res[0][10]=a0;
  if (res[0]!=0) res[0][11]=a1;
  if (res[0]!=0) res[0][12]=a0;
  if (res[0]!=0) res[0][13]=a0;
  if (res[0]!=0) res[0][14]=a0;
  if (res[0]!=0) res[0][15]=a0;
  if (res[0]!=0) res[0][16]=a0;
  if (res[0]!=0) res[0][17]=a0;
  if (res[0]!=0) res[0][18]=a0;
  if (res[0]!=0) res[0][19]=a0;
  if (res[0]!=0) res[0][20]=a0;
  if (res[0]!=0) res[0][21]=a0;
  if (res[0]!=0) res[0][22]=a0;
  if (res[0]!=0) res[0][23]=a0;
  a2=2.1376003035282697e+01;
  if (res[0]!=0) res[0][24]=a2;
  if (res[0]!=0) res[0][25]=a0;
  if (res[0]!=0) res[0][26]=a0;
  if (res[0]!=0) res[0][27]=a0;
  if (res[0]!=0) res[0][28]=a0;
  if (res[0]!=0) res[0][29]=a0;
  if (res[0]!=0) res[0][30]=a0;
  if (res[0]!=0) res[0][31]=a0;
  if (res[0]!=0) res[0][32]=a0;
  if (res[0]!=0) res[0][33]=a0;
  if (res[0]!=0) res[0][34]=a0;
  if (res[0]!=0) res[0][35]=a0;
  a2=-2.5000000000000000e+00;
  if (res[0]!=0) res[0][36]=a2;
  if (res[0]!=0) res[0][37]=a0;
  if (res[0]!=0) res[0][38]=a0;
  if (res[0]!=0) res[0][39]=a0;
  a2=-2.3897923837070362e-02;
  if (res[0]!=0) res[0][40]=a2;
  if (res[0]!=0) res[0][41]=a0;
  if (res[0]!=0) res[0][42]=a0;
  if (res[0]!=0) res[0][43]=a0;
  if (res[0]!=0) res[0][44]=a0;
  a2=-50.;
  if (res[0]!=0) res[0][45]=a2;
  if (res[0]!=0) res[0][46]=a0;
  if (res[0]!=0) res[0][47]=a0;
  if (res[0]!=0) res[0][48]=a0;
  if (res[0]!=0) res[0][49]=a0;
  if (res[0]!=0) res[0][50]=a0;
  if (res[0]!=0) res[0][51]=a0;
  a2=2.5000000000000000e+00;
  if (res[0]!=0) res[0][52]=a2;
  if (res[0]!=0) res[0][53]=a0;
  if (res[0]!=0) res[0][54]=a0;
  if (res[0]!=0) res[0][55]=a0;
  if (res[0]!=0) res[0][56]=a0;
  if (res[0]!=0) res[0][57]=a0;
  if (res[0]!=0) res[0][58]=a0;
  if (res[0]!=0) res[0][59]=a0;
  if (res[0]!=0) res[0][60]=a0;
  a2=50.;
  if (res[0]!=0) res[0][61]=a2;
  if (res[0]!=0) res[0][62]=a0;
  if (res[0]!=0) res[0][63]=a0;
  if (res[0]!=0) res[0][64]=a0;
  if (res[0]!=0) res[0][65]=a0;
  if (res[0]!=0) res[0][66]=a0;
  if (res[0]!=0) res[0][67]=a0;
  if (res[0]!=0) res[0][68]=a0;
  if (res[0]!=0) res[0][69]=a0;
  if (res[0]!=0) res[0][70]=a1;
  if (res[0]!=0) res[0][71]=a0;
  if (res[0]!=0) res[0][72]=a0;
  if (res[0]!=0) res[0][73]=a0;
  if (res[0]!=0) res[0][74]=a0;
  if (res[0]!=0) res[0][75]=a0;
  if (res[0]!=0) res[0][76]=a0;
  if (res[0]!=0) res[0][77]=a0;
  if (res[0]!=0) res[0][78]=a0;
  if (res[0]!=0) res[0][79]=a1;
  if (res[0]!=0) res[0][80]=a0;
  if (res[0]!=0) res[0][81]=a1;
  if (res[0]!=0) res[0][82]=a0;
  if (res[0]!=0) res[0][83]=a0;
  if (res[0]!=0) res[0][84]=a0;
  if (res[0]!=0) res[0][85]=a0;
  if (res[0]!=0) res[0][86]=a0;
  if (res[0]!=0) res[0][87]=a0;
  if (res[0]!=0) res[0][88]=a1;
  if (res[0]!=0) res[0][89]=a0;
  if (res[0]!=0) res[0][90]=a0;
  if (res[0]!=0) res[0][91]=a0;
  if (res[0]!=0) res[0][92]=a0;
  if (res[0]!=0) res[0][93]=a0;
  if (res[0]!=0) res[0][94]=a0;
  if (res[0]!=0) res[0][95]=a0;
  if (res[0]!=0) res[0][96]=a0;
  if (res[0]!=0) res[0][97]=a1;
  if (res[0]!=0) res[0][98]=a0;
  if (res[0]!=0) res[0][99]=a0;
  if (res[0]!=0) res[0][100]=a0;
  if (res[0]!=0) res[0][101]=a0;
  if (res[0]!=0) res[0][102]=a0;
  if (res[0]!=0) res[0][103]=a0;
  if (res[0]!=0) res[0][104]=a0;
  if (res[0]!=0) res[0][105]=a0;
  if (res[0]!=0) res[0][106]=a1;
  if (res[0]!=0) res[0][107]=a0;
  if (res[0]!=0) res[0][108]=a0;
  if (res[0]!=0) res[0][109]=a0;
  if (res[0]!=0) res[0][110]=a0;
  if (res[0]!=0) res[0][111]=a0;
  if (res[0]!=0) res[0][112]=a0;
  if (res[0]!=0) res[0][113]=a0;
  if (res[0]!=0) res[0][114]=a0;
  if (res[0]!=0) res[0][115]=a1;
  if (res[0]!=0) res[0][116]=a0;
  if (res[0]!=0) res[0][117]=a0;
  if (res[0]!=0) res[0][118]=a0;
  if (res[0]!=0) res[0][119]=a0;
  if (res[0]!=0) res[0][120]=a0;
  if (res[0]!=0) res[0][121]=a0;
  if (res[0]!=0) res[0][122]=a0;
  if (res[0]!=0) res[0][123]=a0;
  if (res[0]!=0) res[0][124]=a1;
  if (res[0]!=0) res[0][125]=a0;
  if (res[0]!=0) res[0][126]=a0;
  if (res[0]!=0) res[0][127]=a0;
  if (res[0]!=0) res[0][128]=a0;
  if (res[0]!=0) res[0][129]=a0;
  if (res[0]!=0) res[0][130]=a0;
  if (res[0]!=0) res[0][131]=a0;
  if (res[0]!=0) res[0][132]=a0;
  if (res[0]!=0) res[0][133]=a1;
  if (res[0]!=0) res[0][134]=a0;
  if (res[0]!=0) res[0][135]=a0;
  if (res[0]!=0) res[0][136]=a0;
  if (res[0]!=0) res[0][137]=a0;
  if (res[0]!=0) res[0][138]=a0;
  if (res[0]!=0) res[0][139]=a0;
  if (res[0]!=0) res[0][140]=a0;
  if (res[0]!=0) res[0][141]=a0;
  if (res[0]!=0) res[0][142]=a1;
  if (res[0]!=0) res[0][143]=a0;
  if (res[0]!=0) res[0][144]=a0;
  if (res[0]!=0) res[0][145]=a0;
  if (res[0]!=0) res[0][146]=a0;
  if (res[0]!=0) res[0][147]=a0;
  if (res[0]!=0) res[0][148]=a0;
  if (res[0]!=0) res[0][149]=a0;
  if (res[0]!=0) res[0][150]=a0;
  if (res[0]!=0) res[0][151]=a1;
  if (res[0]!=0) res[0][152]=a1;
  if (res[0]!=0) res[0][153]=a0;
  if (res[0]!=0) res[0][154]=a0;
  if (res[0]!=0) res[0][155]=a0;
  if (res[0]!=0) res[0][156]=a0;
  if (res[0]!=0) res[0][157]=a0;
  if (res[0]!=0) res[0][158]=a1;
  if (res[0]!=0) res[0][159]=a0;
  if (res[0]!=0) res[0][160]=a0;
  if (res[0]!=0) res[0][161]=a0;
  if (res[0]!=0) res[0][162]=a0;
  if (res[0]!=0) res[0][163]=a0;
  if (res[0]!=0) res[0][164]=a1;
  if (res[0]!=0) res[0][165]=a0;
  if (res[0]!=0) res[0][166]=a0;
  if (res[0]!=0) res[0][167]=a0;
  if (res[0]!=0) res[0][168]=a0;
  if (res[0]!=0) res[0][169]=a0;
  if (res[0]!=0) res[0][170]=a1;
  if (res[0]!=0) res[0][171]=a0;
  if (res[0]!=0) res[0][172]=a0;
  if (res[0]!=0) res[0][173]=a0;
  if (res[0]!=0) res[0][174]=a0;
  if (res[0]!=0) res[0][175]=a0;
  if (res[0]!=0) res[0][176]=a1;
  if (res[0]!=0) res[0][177]=a0;
  if (res[0]!=0) res[0][178]=a0;
  if (res[0]!=0) res[0][179]=a0;
  if (res[0]!=0) res[0][180]=a0;
  if (res[0]!=0) res[0][181]=a0;
  if (res[0]!=0) res[0][182]=a0;
  if (res[0]!=0) res[0][183]=a0;
  if (res[0]!=0) res[0][184]=a0;
  if (res[0]!=0) res[0][185]=a0;
  if (res[0]!=0) res[0][186]=a0;
  if (res[0]!=0) res[0][187]=a0;
  if (res[0]!=0) res[0][188]=a0;
  if (res[0]!=0) res[0][189]=a0;
  if (res[0]!=0) res[0][190]=a0;
  if (res[0]!=0) res[0][191]=a0;
  if (res[0]!=0) res[0][192]=a0;
  if (res[0]!=0) res[0][193]=a0;
  if (res[0]!=0) res[0][194]=a0;
  if (res[0]!=0) res[0][195]=a0;
  if (res[0]!=0) res[0][196]=a0;
  if (res[0]!=0) res[0][197]=a0;
  if (res[0]!=0) res[0][198]=a0;
  if (res[0]!=0) res[0][199]=a0;
  if (res[0]!=0) res[0][200]=a0;
  if (res[0]!=0) res[0][201]=a0;
  if (res[0]!=0) res[0][202]=a0;
  if (res[0]!=0) res[0][203]=a0;
  if (res[0]!=0) res[0][204]=a0;
  if (res[0]!=0) res[0][205]=a0;
  if (res[0]!=0) res[0][206]=a0;
  if (res[0]!=0) res[0][207]=a0;
  if (res[0]!=0) res[0][208]=a0;
  if (res[0]!=0) res[0][209]=a0;
  if (res[0]!=0) res[0][210]=a0;
  if (res[0]!=0) res[0][211]=a0;
  if (res[0]!=0) res[0][212]=a0;
  if (res[0]!=0) res[0][213]=a0;
  if (res[0]!=0) res[0][214]=a0;
  if (res[0]!=0) res[0][215]=a0;
  if (res[0]!=0) res[0][216]=a0;
  if (res[0]!=0) res[0][217]=a0;
  if (res[0]!=0) res[0][218]=a0;
  if (res[0]!=0) res[0][219]=a0;
  if (res[0]!=0) res[0][220]=a0;
  if (res[0]!=0) res[0][221]=a0;
  if (res[0]!=0) res[0][222]=a0;
  if (res[0]!=0) res[0][223]=a0;
  if (res[0]!=0) res[0][224]=a0;
  if (res[0]!=0) res[0][225]=a0;
  if (res[0]!=0) res[0][226]=a0;
  if (res[0]!=0) res[0][227]=a0;
  if (res[0]!=0) res[0][228]=a0;
  if (res[0]!=0) res[0][229]=a0;
  if (res[0]!=0) res[0][230]=a0;
  if (res[0]!=0) res[0][231]=a0;
  if (res[0]!=0) res[0][232]=a0;
  if (res[0]!=0) res[0][233]=a0;
  if (res[0]!=0) res[0][234]=a0;
  if (res[0]!=0) res[0][235]=a0;
  if (res[0]!=0) res[0][236]=a0;
  if (res[0]!=0) res[0][237]=a0;
  if (res[0]!=0) res[0][238]=a0;
  if (res[0]!=0) res[0][239]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int wt_nx6p2_get_matrices_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void wt_nx6p2_get_matrices_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void wt_nx6p2_get_matrices_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int wt_nx6p2_get_matrices_fun_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int wt_nx6p2_get_matrices_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* wt_nx6p2_get_matrices_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* wt_nx6p2_get_matrices_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* wt_nx6p2_get_matrices_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* wt_nx6p2_get_matrices_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int wt_nx6p2_get_matrices_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
