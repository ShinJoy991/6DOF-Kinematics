/* Include files */

#include "modelInterface.h"
#include "m_q90jjkosYeYuVdZaEe63wB.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 48,    /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 68,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 69,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 1372,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 47,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 69,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 74,  /* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 107, /* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 45,  /* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 23,  /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 51,  /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 133, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 192, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 182, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 185, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 201, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 1332,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 96, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 106,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 140,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 27, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 46, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 145,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 163,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 147,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 216,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 257,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 1,  /* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 479,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 537,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 538,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 543,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 556,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 542,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 165,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 167,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 47, /* lineNo */
  "FastVisualizationHelper",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\FastVisualizationHelper.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 1361,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 1342,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 2243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 2248,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 2251,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 2259,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 1387,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 1390,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 1396,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 251,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 255,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 275,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 280,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 2310,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 230,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 234,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 238,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 241,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 283,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 285,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 286,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 293,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 294,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 254,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 1681,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 1685,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 447,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 1410,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 1414,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 189,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 190,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 200,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 88, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 215,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 360,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 362,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 364,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 365,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 74, /* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 111,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 164,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 240,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 241,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 242,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 16, /* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 10, /* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 227,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 231,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 21, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 462,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 1,  /* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 70, /* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 112,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 113,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 42, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 1,  /* lineNo */
  "TimeProvider",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\TimeProvider.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 369,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 450,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 33, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 38, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 123,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 126,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 129,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 526,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 529,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 530,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 531,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 532,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 50, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 21, /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 2271,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 135,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 1,  /* lineNo */
  "IKExtraArgs",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKExtraArgs.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 162,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 163,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 268,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 269,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 271,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 280,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 281,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 285,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 318,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 320,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 326,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 327,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 331,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 1654,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 1656,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 1670,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 39, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 1633,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 42, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 108,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 111,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 123,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 142,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 144,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 83, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 84, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 31, /* lineNo */
  "tic",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 7,  /* lineNo */
  "getTime",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 21, /* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 185,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 191,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 192,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 223,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 226,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 235,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 239,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 243,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 250,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 251,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 266,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 286,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 320,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 324,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 327,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 334,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 337,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 348,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 385,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 388,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 394,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 398,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 410,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 51, /* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 26, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 32, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 1855,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 1888,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 1891,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 1965,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 1966,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 512,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 397,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 399,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2tform.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\+validation\\validateNumericM"
  "atrix.m"                            /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 69, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 51, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 42, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 36, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 42, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 34, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 407,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 394,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 380,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 353,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 334,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 32, /* lineNo */
  "xrotg",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 64, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 66, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 36, /* lineNo */
  "toc",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 42, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 44, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 112,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 124,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 70, /* lineNo */
  "xgetrfs",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrfs.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 28, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 82, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 148,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 295,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 16, /* lineNo */
  "xgetrs",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrs.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 18, /* lineNo */
  "xgetrs",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrs.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 32, /* lineNo */
  "xzgetrs",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 36, /* lineNo */
  "xzgetrs",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 61, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 72, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 85, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 116,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 119,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 174,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 81, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 68, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 41, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 68, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 75, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 45, /* lineNo */
  "xgerc",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 173,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 172,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 119,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 415,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 173,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 174,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 76, /* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 15, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 84, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\chol.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 16, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 13, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 99, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 419,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 53, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 639,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 524,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 525,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 527,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 528,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 529,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 530,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 532,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 119,/* lineNo */
  "randn",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 40, /* lineNo */
  "eml_randn",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 39, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 56, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 438,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 447,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 449,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 2018,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 319,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 711,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 1495,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 264,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 342,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 158, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 139, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 131, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 15,  /* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 21,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 122, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 288, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 269, /* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 64, /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 16, /* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtMCInfo cb_emlrtMCI = { 47, /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo db_emlrtMCI = { 419,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtMCInfo eb_emlrtMCI = { 12, /* lineNo */
  23,                                  /* colNo */
  "xzgetrs",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 47, /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 14, /* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtMCInfo hb_emlrtMCI = { 102,/* lineNo */
  19,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtMCInfo ib_emlrtMCI = { 13, /* lineNo */
  27,                                  /* colNo */
  "assertCompatibleDims",              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\assertCompatibleDims.m"/* pName */
};

static emlrtMCInfo jb_emlrtMCI = { 28, /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo kb_emlrtMCI = { 134,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo lb_emlrtMCI = { 81, /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo mb_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo nb_emlrtMCI = { 16, /* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 70,    /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 1395,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  1396,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  552,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 552, /* lineNo */
  45,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 254,/* lineNo */
  21,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 264, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 273, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  273,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 285, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  285,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 286, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  286,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 288, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  288,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 289, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  289,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  264,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  269,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 1413,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  1414,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  155,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 525,/* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 529, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  529,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 529, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  529,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 529, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  529,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 529, /* lineNo */
  37,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  529,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  529,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo o_emlrtDCI = { 530, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  530,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 530, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  530,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 530, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  530,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 530, /* lineNo */
  42,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  530,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  530,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 1,   /* nDims */
  150,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo s_emlrtDCI = { 520, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 520, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 520, /* lineNo */
  26,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 520, /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 521, /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 0,   /* iFirst */
  5,                                   /* iLast */
  526,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 150, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 150, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 531,/* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 2267,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo bb_emlrtDCI = { 2271,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2271,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 2271,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2271,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  2271,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo db_emlrtDCI = { 2265,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 2265,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 2265,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 2265,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  2268,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 727,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 727,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  738,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 738,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  738,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  734,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  731,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2018,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2018,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  329,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo kb_emlrtDCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  2010,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 2010,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2014,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  2015,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 2015,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  726,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 726,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  726,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 327,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 327,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 329,/* lineNo */
  19,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  329,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 734,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  734,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  143,                                 /* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 636,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  637,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 640,/* lineNo */
  23,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 640,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  640,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo vb_emlrtDCI = { 518,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 220,/* lineNo */
  21,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 1890,/* lineNo */
  51,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  1890,                                /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 1891,/* lineNo */
  64,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  1891,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 1891,/* lineNo */
  72,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  1891,                                /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 1893,/* lineNo */
  55,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  1893,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 1915,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1915,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 1915,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1915,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  1915,                                /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1976,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1978,                                /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 1858,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 1858,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  1848,                                /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 1848,/* lineNo */
  40,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1970,                                /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1970,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1975,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 1858,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 1858,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1860,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1865,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  1861,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 1861,/* lineNo */
  50,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1861,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  1866,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 1866,/* lineNo */
  47,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1866,                                /* lineNo */
  68,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1999,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1999,                                /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1989,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 1987,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 1987,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 1987,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 1987,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { 0,  /* iFirst */
  5,                                   /* iLast */
  1991,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = { 1991,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1996,                                /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1992,                                /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  45,                                  /* lineNo */
  9,                                   /* colNo */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m"/* pName */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = { 21, /* lineNo */
  28,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 263,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  1666,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  1669,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1666,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1669,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo nl_emlrtRSI = { 269,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 14, /* lineNo */
  "validatenonnegative",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 15, /* lineNo */
  "assertSupportedString",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 13, /* lineNo */
  "validatenonempty",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 158,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 134,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 28, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 47, /* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 392,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 13, /* lineNo */
  "assertCompatibleDims",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\assertCompatibleDims.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 102,/* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 14, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 419,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 16, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 288,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 122,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 21, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 131,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 139,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__setup(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj);
static real_T minimum2(real_T x, real_T y);
static void b_rand(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static boolean_T is_valid_state(uint32_T mt[625]);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static boolean_T b_strcmp(emxArray_char_T *b_b);
static boolean_T c_strcmp(emxArray_char_T *b_b);
static void eye(real_T b_I[36]);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj, real_T maxElements);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, emxArray_char_T *jname);
static void validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static void SystemProp_setProperties(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj,
  robotics_manip_internal_RigidBodyTree *varargin_2, rigidBodyJoint *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1,
  robotics_manip_internal_CollisionSet *iobj_2,
  robotics_manip_internal_RigidBodyTree_1 *iobj_3,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_4);
static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj);
static void b_validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b);
static robotics_manip_internal_CollisionSet *CollisionSet_copy(const emlrtStack *
  sp, robotics_manip_internal_CollisionSet *obj,
  robotics_manip_internal_CollisionSet *iobj_0);
static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody *iobj_2);
static real_T RigidBodyTree_findBodyIndexByName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static void error(const emlrtStack *sp);
static robotics_manip_internal_RigidBody *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet
  *iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2);
static void get_match(const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], int32_T *nmatched);
static void assertSupportedString(const emlrtStack *sp, char_T s);
static void warning(const emlrtStack *sp);
static boolean_T e_strcmp(emxArray_char_T *a);
static void inverseKinematics_set_SolverAlgorithm(inverseKinematics *obj,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_0);
static void mw__internal__call__reset(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[6], real_T c_y0[6]);
static void b_eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I);
static void RigidBodyTree_get_JointPositionLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_real_T *limits);
static void inverseKinematics_stepImpl(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[6], real_T QSol[6]);
static boolean_T f_strcmp(emxArray_char_T *a);
static void inv(const emlrtStack *sp, real_T x[9], real_T y[9]);
static real_T b_norm(real_T x[9]);
static void b_warning(const emlrtStack *sp);
static void c_warning(const emlrtStack *sp, char_T varargin_1[14]);
static void d_warning(const emlrtStack *sp);
static void c_validateattributes(const emlrtStack *sp, real_T a[6]);
static void inverseKinematics_solve(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[6], real_T QSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void eml_find(const emlrtStack *sp, boolean_T x[6], int32_T i_data[],
                     int32_T i_size[1]);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void e_warning(const emlrtStack *sp);
static void NLPSolverInterface_solve(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[6],
  real_T xSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void SystemTimeProvider_reset(robotics_core_internal_SystemTimeProvider
  *obj);
static emlrtTimespec tic(void);
static void DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[6],
  robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T *iter);
static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[6],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[6], real_T bid1,
  real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static void RigidBodyTree_ancestorIndices(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *body, emxArray_real_T *indices);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static boolean_T g_strcmp(emxArray_char_T *b_b);
static void rigidBodyJoint_get_JointAxis(rigidBodyJoint *obj, real_T ax[3]);
static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3]);
static real_T sumColumnB(real_T x[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b_b[9]);
static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void IKHelpers_poseError(const emlrtStack *sp, real_T Td[16], real_T
  T_data[], int32_T T_size[2], real_T errorvec[6]);
static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9]);
static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0);
static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0);
static real_T b_xnrm2(real_T x[3], int32_T ix0);
static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void b_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C);
static void b_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void c_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void d_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void c_mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void e_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimA);
static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj);
static real_T toc(real_T tstart_tv_sec, real_T tstart_tv_nsec);
static real_T IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void f_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static real_T c_norm(real_T x[6]);
static void g_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB);
static void d_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void mldivide(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y);
static void mldiv(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *B,
                  emxArray_real_T *Y);
static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b);
static void assert_pmaxsize(const emlrtStack *sp, boolean_T p);
static void f_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14]);
static void h_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB);
static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static boolean_T DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[6],
  emxArray_real_T *alpha);
static boolean_T all(const emlrtStack *sp, emxArray_boolean_T *x);
static void b_inv(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y);
static real_T d_norm(emxArray_real_T *x);
static void diag(const emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d);
static void assertCompatibleDims(const emlrtStack *sp, emxArray_real_T *x,
  emxArray_real_T *y);
static void maximum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx);
static void b_eml_find(const emlrtStack *sp, emxArray_boolean_T *x,
  emxArray_int32_T *i);
static void f_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static boolean_T any(const emlrtStack *sp, emxArray_boolean_T *x);
static void minimum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx);
static void i_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void j_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void g_mtimes(emxArray_real_T *A, real_T B[36], emxArray_real_T *C);
static void k_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimB);
static void l_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void m_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static boolean_T isPositiveDefinite(real_T B[36]);
static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[6]);
static void c_rand(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r);
static void randn(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r);
static void g_warning(const emlrtStack *sp);
static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30]);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);
static const mxArray *d_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2]);
static void b_sqrt(const emlrtStack *sp, real_T *x);
static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[6]);
static void c_sqrt(creal_T *x);
static real_T rescale(real_T *re, real_T *im);
static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0);
static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_xscal(real_T a, real_T x[3], int32_T ix0);
static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0);
static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0);
static void c_xscal(real_T a, real_T x[9], int32_T ix0);
static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s);
static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void d_sqrt(const emlrtStack *sp, emxArray_real_T *x);
static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static real_T genrandu(const emlrtStack *sp, uint32_T mt[625]);
static void plus(emxArray_real_T *in1, emxArray_real_T *in2, emxArray_real_T
                 *in3);
static void times(emxArray_real_T *in1, emxArray_real_T *in2);
static void minus(emxArray_real_T *in1, emxArray_real_T *in2);
static void b_plus(emxArray_real_T *in1, emxArray_real_T *in2);
static void b_minus(real_T in1[36], emxArray_real_T *in2);
static void c_minus(real_T in1[36], emxArray_real_T *in2);
static void d_minus(emxArray_real_T *in1, emxArray_real_T *in2);
static void rdivide(emxArray_real_T *in1, emxArray_real_T *in2);
static void binary_expand_op(const emlrtStack *sp, emlrtRSInfo in1,
  emxArray_real_T *in2, emxArray_real_T *in3, real_T *out1, int32_T *out2);
static void binary_expand_op_1(emxArray_boolean_T *in1, emxArray_real_T *in2,
  robotics_core_internal_DampedBFGSwGradientProjection *in3);
static void binary_expand_op_2(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3);
static void binary_expand_op_3(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[13]);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T b_numDimensions);
static void emxInitMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[13]);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void b_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[12]);
static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct);
static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void emxInitMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[12]);
static void c_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[6]);
static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void d_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[7]);
static void emxInitMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[7]);
static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[13]);
static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxFreeMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[13]);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void b_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[12]);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct);
static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void emxFreeMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[12]);
static void c_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[6]);
static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void d_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[7]);
static void emxFreeMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[7]);
static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_int32_T(emxArray_int32_T **pEmxArray);
static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel);
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel);
static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void init_simulink_io_address(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv[6];
  int32_T i;
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->u1, *moduleInstance->u2, dv);
  for (i = 0; i < 6; i++) {
    (*moduleInstance->b_y0)[i] = dv[i];
  }

  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  int32_T i;
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
  for (i = 0; i < 7; i++) {
    moduleInstance->sysobj.IKInternal._pobj4._pobj1[i].matlabCodegenIsDeleted =
      true;
  }

  for (i = 0; i < 13; i++) {
    moduleInstance->sysobj.IKInternal._pobj3[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 13; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 6; i++) {
    moduleInstance->sysobj.IKInternal._pobj4._pobj0[i].matlabCodegenIsDeleted =
      true;
  }

  moduleInstance->sysobj.IKInternal._pobj4.Base.matlabCodegenIsDeleted = true;
  for (i = 0; i < 6; i++) {
    moduleInstance->sysobj.IKInternal._pobj2[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 12; i++) {
    moduleInstance->sysobj.TreeInternal._pobj2[i].matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal._pobj4.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal._pobj0.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal._pobj5.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  memcpy(&moduleInstance->c_state[0], &uv[0], 625U * sizeof(uint32_T));
  moduleInstance->c_state_not_empty = true;
  moduleInstance->b_method = 0U;
  moduleInstance->b_method_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->d_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->d_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  inverseKinematics *obj;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  robotics_manip_internal_IKExtraArgs *c_obj;
  robotics_manip_internal_RigidBody *f_obj;
  robotics_manip_internal_RigidBodyTree *e_obj;
  robotics_manip_internal_RigidBodyTree_1 *d_obj;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = NULL;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  obj = &moduleInstance->sysobj.IKInternal;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &kl_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &d_emlrtRSI;
    }
  }

  st.site = NULL;
  b_obj = &moduleInstance->sysobj.IKInternal._pobj5;
  if (!b_obj->matlabCodegenIsDeleted) {
    b_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  c_obj = &moduleInstance->sysobj.IKInternal._pobj0;
  if (!c_obj->matlabCodegenIsDeleted) {
    c_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  d_obj = &moduleInstance->sysobj.IKInternal._pobj4;
  if (!d_obj->matlabCodegenIsDeleted) {
    d_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  e_obj = &moduleInstance->sysobj.TreeInternal;
  if (!e_obj->matlabCodegenIsDeleted) {
    e_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  f_obj = &moduleInstance->sysobj.TreeInternal.Base;
  if (!f_obj->matlabCodegenIsDeleted) {
    f_obj->matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 12; i++) {
    st.site = NULL;
    f_obj = &moduleInstance->sysobj.TreeInternal._pobj2[i];
    if (!f_obj->matlabCodegenIsDeleted) {
      f_obj->matlabCodegenIsDeleted = true;
    }
  }

  for (i = 0; i < 6; i++) {
    st.site = NULL;
    f_obj = &moduleInstance->sysobj.IKInternal._pobj2[i];
    if (!f_obj->matlabCodegenIsDeleted) {
      f_obj->matlabCodegenIsDeleted = true;
    }
  }

  st.site = NULL;
  f_obj = &moduleInstance->sysobj.IKInternal._pobj4.Base;
  if (!f_obj->matlabCodegenIsDeleted) {
    f_obj->matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 6; i++) {
    st.site = NULL;
    f_obj = &moduleInstance->sysobj.IKInternal._pobj4._pobj0[i];
    if (!f_obj->matlabCodegenIsDeleted) {
      f_obj->matlabCodegenIsDeleted = true;
    }
  }

  for (i = 0; i < 13; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.TreeInternal._pobj0[i]);
  }

  for (i = 0; i < 13; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.IKInternal._pobj3[i]);
  }

  for (i = 0; i < 7; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.IKInternal._pobj4._pobj1[i]);
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__call__setup(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj);
}

static void SystemCore_setup(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj)
{
  static real_T dv4[36] = { 0.03885852525892225, 4.1492764242918971E-19,
    9.6831208008107516E-19, 0.0, 0.22977003545121197, -0.057921560357413686,
    4.1492764242918971E-19, 0.035581018777150357, -0.0073920485824872529,
    -0.22977003545121197, 0.0, 0.0, 9.6831208008107516E-19,
    -0.0073920485824872529, 0.013290705406566903, 0.057921560357413686, -0.0,
    0.0, 0.0, -0.22977003545121197, 0.057921560357413686, 3.7211653720625537,
    0.0, 0.0, 0.22977003545121197, 0.0, -0.0, 0.0, 3.7211653720625537, 0.0,
    -0.057921560357413686, 0.0, 0.0, 0.0, 0.0, 3.7211653720625537 };

  static real_T dv5[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    1.2246467991473532E-16, 0.0, 0.0, -1.2246467991473532E-16, -1.0, 0.0,
    -0.056288005413193787, 0.0060929314356598929, 0.15656296560396754, 1.0 };

  static real_T dv3[9] = { 0.03885852525892225, 4.1492764242918971E-19,
    9.6831208008107516E-19, 4.1492764242918971E-19, 0.035581018777150357,
    -0.0073920485824872529, 9.6831208008107516E-19, -0.0073920485824872529,
    0.013290705406566903 };

  static real_T dv2[3] = { -0.0, -0.01556543570792962, -0.061746795016491267 };

  static real_T dv6[3] = { 0.0, -9.80665, 0.0 };

  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '1' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '1' };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T cv2[4] = { 'B', 'a', 's', 'e' };

  static char_T cv3[4] = { '_', 'j', 'n', 't' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv5[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv6[3] = { 0, 0, 1 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_char_T *b_jname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T poslim_data[12];
  real_T idx[5];
  real_T dv[2];
  real_T dv1[2];
  real_T b_idx;
  int32_T i;
  int32_T k;
  char_T b_u[51];
  char_T d_u[5];
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
            &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  d_st.site = &i_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &j_emlrtRSI;
  e_st.site = &k_emlrtRSI;
  f_st.site = &l_emlrtRSI;
  g_st.site = &m_emlrtRSI;
  b_rand(moduleInstance, &g_st, idx);
  for (k = 0; k <= 2; k += 2) {
    r = _mm_loadu_pd(&idx[k]);
    _mm_storeu_pd(&dv[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv1[0] = muDoubleScalarFloor(dv[0]);
    dv1[1] = muDoubleScalarFloor(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&idx[k], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (k = 4; k < 5; k++) {
    b_idx = idx[4];
    b_idx = muDoubleScalarFloor(b_idx * 62.0) + 1.0;
    idx[4] = b_idx;
  }

  for (i = 0; i < 5; i++) {
    k = (int32_T)emlrtIntegerCheckR2012b(idx[i], &emlrtDCI, &e_st);
    emlrtDynamicBoundsCheckR2012b(k, 1, 62, &emlrtBCI, &e_st);
  }

  obj->TreeInternal.NumBodies = 6.0;
  c_st.site = &u_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[0] = RigidBody_RigidBody(&d_st,
    &(&obj->TreeInternal._pobj2[0])[0], &(&obj->TreeInternal._pobj0[0])[0],
    &(&obj->TreeInternal._pobj1[0])[0]);
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[1] = b_RigidBody_RigidBody(&d_st,
    &(&obj->TreeInternal._pobj2[0])[1], &(&obj->TreeInternal._pobj0[0])[1],
    &(&obj->TreeInternal._pobj1[0])[1]);
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[2] = c_RigidBody_RigidBody(&d_st,
    &(&obj->TreeInternal._pobj2[0])[2], &(&obj->TreeInternal._pobj0[0])[2],
    &(&obj->TreeInternal._pobj1[0])[2]);
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[3] = d_RigidBody_RigidBody(&d_st,
    &(&obj->TreeInternal._pobj2[0])[3], &(&obj->TreeInternal._pobj0[0])[3],
    &(&obj->TreeInternal._pobj1[0])[3]);
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[4] = e_RigidBody_RigidBody(&d_st,
    &(&obj->TreeInternal._pobj2[0])[4], &(&obj->TreeInternal._pobj0[0])[4],
    &(&obj->TreeInternal._pobj1[0])[4]);
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[5] = f_RigidBody_RigidBody(&d_st,
    &(&obj->TreeInternal._pobj2[0])[5], &(&obj->TreeInternal._pobj0[0])[5],
    &(&obj->TreeInternal._pobj1[0])[5]);
  c_st.site = &v_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  e_st.site = &i_emlrtRSI;
  i = obj->TreeInternal._pobj2[6].NameInternal->size[0] *
    obj->TreeInternal._pobj2[6].NameInternal->size[1];
  obj->TreeInternal._pobj2[6].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj2[6].NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj2[6].NameInternal, i);
  for (i = 0; i < 5; i++) {
    obj->TreeInternal._pobj2[6].NameInternal->data[i] = cv[i];
  }

  obj->TreeInternal._pobj2[6].ParentIndex = 0.0;
  obj->TreeInternal._pobj2[6].MassInternal = 3.7211653720625537;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj2[6].CenterOfMassInternal[i] = dv2[i];
  }

  for (i = 0; i < 9; i++) {
    obj->TreeInternal._pobj2[6].InertiaInternal[i] = dv3[i];
  }

  for (i = 0; i < 36; i++) {
    obj->TreeInternal._pobj2[6].SpatialInertia[i] = dv4[i];
  }

  d_st.site = &gb_emlrtRSI;
  obj->TreeInternal._pobj1[6].InTree = false;
  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj1[6].JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj1[6].ChildToJointTransform[i] = (real_T)iv3[i];
  }

  e_st.site = &cb_emlrtRSI;
  i = obj->TreeInternal._pobj1[6].NameInternal->size[0] *
    obj->TreeInternal._pobj1[6].NameInternal->size[1];
  obj->TreeInternal._pobj1[6].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj1[6].NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj1[6].NameInternal, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj1[6].NameInternal->data[i] = jname[i];
  }

  i = obj->TreeInternal._pobj1[6].Type->size[0] * obj->TreeInternal._pobj1[6].
    Type->size[1];
  obj->TreeInternal._pobj1[6].Type->size[0] = 1;
  obj->TreeInternal._pobj1[6].Type->size[1] = 8;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj1[6].Type, i);
  for (i = 0; i < 8; i++) {
    obj->TreeInternal._pobj1[6].Type->data[i] = cv1[i];
  }

  emxInit_char_T(&b_jname, 2);
  i = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = obj->TreeInternal._pobj1[6].Type->size[1];
  emxEnsureCapacity_char_T(b_jname, i);
  k = obj->TreeInternal._pobj1[6].Type->size[1];
  for (i = 0; i < k; i++) {
    b_jname->data[i] = obj->TreeInternal._pobj1[6].Type->data[i];
  }

  if (b_strcmp(b_jname)) {
    k = 0;
  } else if (c_strcmp(b_jname)) {
    k = 1;
  } else {
    k = -1;
  }

  switch (k) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv4[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    obj->TreeInternal._pobj1[6].VelocityNumber = 1.0;
    obj->TreeInternal._pobj1[6].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj1[6].JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv5[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    obj->TreeInternal._pobj1[6].VelocityNumber = 1.0;
    obj->TreeInternal._pobj1[6].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj1[6].JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    obj->TreeInternal._pobj1[6].VelocityNumber = 0.0;
    obj->TreeInternal._pobj1[6].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj1[6].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = obj->TreeInternal._pobj1[6].MotionSubspace->size[0] *
    obj->TreeInternal._pobj1[6].MotionSubspace->size[1];
  obj->TreeInternal._pobj1[6].MotionSubspace->size[0] = 6;
  obj->TreeInternal._pobj1[6].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj1[6].MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj1[6].MotionSubspace->data[i] = (real_T)
      msubspace_data[i];
  }

  i = obj->TreeInternal._pobj1[6].PositionLimitsInternal->size[0] *
    obj->TreeInternal._pobj1[6].PositionLimitsInternal->size[1];
  obj->TreeInternal._pobj1[6].PositionLimitsInternal->size[0] = 1;
  obj->TreeInternal._pobj1[6].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj1[6].PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    obj->TreeInternal._pobj1[6].PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = obj->TreeInternal._pobj1[6].HomePositionInternal->size[0];
  obj->TreeInternal._pobj1[6].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(obj->TreeInternal._pobj1[6].HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    obj->TreeInternal._pobj1[6].HomePositionInternal->data[0] = 0.0;
  }

  obj->TreeInternal._pobj2[6].JointInternal = &obj->TreeInternal._pobj1[6];
  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj2[6].JointInternal->JointToParentTransform[i] = dv5[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj2[6].JointInternal->ChildToJointTransform[i] =
      (real_T)iv3[i];
  }

  i = obj->TreeInternal._pobj2[6].JointInternal->MotionSubspace->size[0] *
    obj->TreeInternal._pobj2[6].JointInternal->MotionSubspace->size[1];
  obj->TreeInternal._pobj2[6].JointInternal->MotionSubspace->size[0] = 6;
  obj->TreeInternal._pobj2[6].JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj2[6]
    .JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj2[6].JointInternal->MotionSubspace->data[i] = (real_T)
      iv4[i];
  }

  obj->TreeInternal._pobj2[6].JointInternal->InTree = true;
  i = obj->TreeInternal._pobj2[6].JointInternal->PositionLimitsInternal->size[0]
    * obj->TreeInternal._pobj2[6].JointInternal->PositionLimitsInternal->size[1];
  obj->TreeInternal._pobj2[6].JointInternal->PositionLimitsInternal->size[0] = 1;
  obj->TreeInternal._pobj2[6].JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj2[6]
    .JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    obj->TreeInternal._pobj2[6].JointInternal->PositionLimitsInternal->data[i] =
      6.2831853071795862 * (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj2[6].JointInternal->JointAxisInternal[i] = (real_T)
      iv6[i];
  }

  i = obj->TreeInternal._pobj2[6].JointInternal->HomePositionInternal->size[0];
  obj->TreeInternal._pobj2[6].JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(obj->TreeInternal._pobj2[6]
    .JointInternal->HomePositionInternal, i);
  obj->TreeInternal._pobj2[6].JointInternal->HomePositionInternal->data[0] =
    2.2160699824833863;
  d_st.site = &hb_emlrtRSI;
  obj->TreeInternal._pobj2[6].CollisionsInternal = CollisionSet_CollisionSet
    (&d_st, &obj->TreeInternal._pobj0[6], 0.0);
  obj->TreeInternal._pobj2[6].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[0] = &obj->TreeInternal._pobj2[6];
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[1] = g_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[7], &obj->TreeInternal._pobj0[7],
    &obj->TreeInternal._pobj1[7]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[2] = h_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[8], &obj->TreeInternal._pobj0[8],
    &obj->TreeInternal._pobj1[8]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[3] = i_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[9], &obj->TreeInternal._pobj0[9],
    &obj->TreeInternal._pobj1[9]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[4] = j_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[10], &obj->TreeInternal._pobj0[10],
    &obj->TreeInternal._pobj1[10]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  c_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[5] = k_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[11], &obj->TreeInternal._pobj0[11],
    &obj->TreeInternal._pobj1[11]);
  obj->TreeInternal.Bodies[5]->Index = 6.0;
  c_st.site = &t_emlrtRSI;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Gravity[i] = dv6[i];
  }

  c_st.site = &w_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  e_st.site = &i_emlrtRSI;
  i = obj->TreeInternal.Base.NameInternal->size[0] *
    obj->TreeInternal.Base.NameInternal->size[1];
  obj->TreeInternal.Base.NameInternal->size[0] = 1;
  obj->TreeInternal.Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(obj->TreeInternal.Base.NameInternal, i);
  for (i = 0; i < 4; i++) {
    obj->TreeInternal.Base.NameInternal->data[i] = cv2[i];
  }

  obj->TreeInternal.Base.ParentIndex = -1.0;
  obj->TreeInternal.Base.MassInternal = 0.0;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    obj->TreeInternal.Base.InertiaInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    obj->TreeInternal.Base.SpatialInertia[i] = 0.0;
  }

  i = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = obj->TreeInternal.Base.NameInternal->size[1] + 4;
  emxEnsureCapacity_char_T(b_jname, i);
  k = obj->TreeInternal.Base.NameInternal->size[1];
  for (i = 0; i < k; i++) {
    b_jname->data[i] = obj->TreeInternal.Base.NameInternal->data[i];
  }

  for (i = 0; i < 4; i++) {
    b_jname->data[i + obj->TreeInternal.Base.NameInternal->size[1]] = cv3[i];
  }

  d_st.site = &ib_emlrtRSI;
  obj->TreeInternal.Base.JointInternal = rigidBodyJoint_rigidBodyJoint(&d_st,
    &obj->TreeInternal._pobj1[12], b_jname);
  emxFree_char_T(&b_jname);
  d_st.site = &hb_emlrtRSI;
  obj->TreeInternal.Base.CollisionsInternal = CollisionSet_CollisionSet(&d_st,
    &obj->TreeInternal._pobj0[12], 0.0);
  obj->TreeInternal.Base.matlabCodegenIsDeleted = false;
  obj->TreeInternal.Base.Index = 0.0;
  obj->TreeInternal.matlabCodegenIsDeleted = false;
  b_st.site = &h_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  d_st.site = &b_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  d_st.site = &b_emlrtRSI;
  e_st.site = &d_emlrtRSI;
  obj->IKInternal.isInitialized = 0;
  c_st.site = &lb_emlrtRSI;
  d_st.site = &i_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  SystemProp_setProperties(moduleInstance, &c_st, &obj->IKInternal,
    &obj->TreeInternal, &obj->IKInternal._pobj1[0], &obj->IKInternal._pobj2[0],
    &obj->IKInternal._pobj3[0], &obj->IKInternal._pobj4, &obj->IKInternal._pobj5);
  obj->IKInternal.RigidBodyTreeKinematicModel = 0.0;
  obj->IKInternal.matlabCodegenIsDeleted = false;
}

static real_T minimum2(real_T x, real_T y)
{
  return muDoubleScalarMin(x, y);
}

static void b_rand(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &o_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &p_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static boolean_T is_valid_state(uint32_T mt[625])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    isvalid = true;
  } else {
    isvalid = false;
  }

  if (isvalid) {
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  }

  return isvalid;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static boolean_T b_strcmp(emxArray_char_T *b_b)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_b->size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *b_b)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_b->size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (cv[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void eye(real_T b_I[36])
{
  int32_T k;
  for (k = 0; k < 36; k++) {
    b_I[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    b_I[k + 6 * k] = 1.0;
  }
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj, real_T maxElements)
{
  static void *t2_GeometryInternal = NULL;
  static int8_T b_localPose[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_robotics_manip_interna *r;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int8_T defaultGeometry_LocalPose[16];
  int8_T defaultGeometry_WorldPose[16];
  int8_T t6_LocalPose[16];
  int8_T t6_WorldPose[16];
  int8_T localPose;
  emxInit_robotics_manip_internal(&r, 2);
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  b_obj->MaxElements = maxElements;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &c_emlrtDCI,
    (emlrtConstCTX)sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)
    sp);
  emxEnsureCapacity_robotics_mani(r, i);
  for (i = 0; i < 2; i++) {
    iv[i] = r->size[i];
  }

  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = iv[0];
  b_obj->CollisionGeometries->size[1] = iv[1];
  emxEnsureCapacity_robotics_mani(b_obj->CollisionGeometries, i);
  st.site = &fb_emlrtRSI;
  for (i = 0; i < 16; i++) {
    localPose = b_localPose[i];
    defaultGeometry_LocalPose[i] = localPose;
    defaultGeometry_WorldPose[i] = localPose;
  }

  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    for (i2 = 0; i2 < 16; i2++) {
      t6_LocalPose[i2] = defaultGeometry_LocalPose[i2];
      t6_WorldPose[i2] = defaultGeometry_WorldPose[i2];
    }

    expl_temp.CollisionPrimitive = t2_GeometryInternal;
    for (i2 = 0; i2 < 16; i2++) {
      expl_temp.LocalPose[i2] = (real_T)t6_LocalPose[i2];
    }

    for (i2 = 0; i2 < 16; i2++) {
      expl_temp.WorldPose[i2] = (real_T)t6_WorldPose[i2];
    }

    for (i2 = 0; i2 < 3; i2++) {
      expl_temp.MeshScale[i2] = 1.0;
    }

    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &b_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
  emxFree_robotics_manip_internal(&r);
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.064928886053495338, -0.0394602764842049,
    -0.032687908909748667, 0.0, 0.15886952186701755, -0.18048504813245603,
    -0.0394602764842049, 0.49701127390359057, -0.0037904103125647086,
    -0.15886952186701755, 0.0, 1.5559310410762766, -0.032687908909748667,
    -0.0037904103125647086, 0.45802155652456672, 0.18048504813245603,
    -1.5559310410762766, 0.0, 0.0, -0.15886952186701755, 0.18048504813245603,
    7.5635485626895, 0.0, 0.0, 0.15886952186701755, 0.0, -1.5559310410762766,
    0.0, 7.5635485626895, 0.0, -0.18048504813245603, 1.5559310410762766, 0.0,
    0.0, 0.0, 7.5635485626895 };

  static real_T dv3[16] = { 6.123233995736766E-17, -1.0, -0.0, 0.0,
    6.123233995736766E-17, 3.749399456654644E-33, -1.0, 0.0, 1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, 0.020000000000000014,
    -0.040000000000000008, -0.131, 1.0 };

  static real_T dv1[9] = { 0.064928886053495338, -0.0394602764842049,
    -0.032687908909748667, -0.0394602764842049, 0.49701127390359057,
    -0.0037904103125647086, -0.032687908909748667, -0.0037904103125647086,
    0.45802155652456672 };

  static real_T dv[3] = { -0.20571442467515638, -0.023862482885715467,
    -0.021004627728671 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '2' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '2' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  b_obj->MassInternal = 7.5635485626895;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = -1.9904647498666335;
  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.057242620117013025, 0.00042103543584383416,
    0.0035980992203626222, 0.0, -0.38596487957180936, 0.063254866776463081,
    0.00042103543584383416, 0.0566256875413028, -0.0070845450789638409,
    0.38596487957180936, 0.0, 0.032125885896094948, 0.0035980992203626222,
    -0.0070845450789638409, 0.014953013801425852, -0.063254866776463081,
    -0.032125885896094948, 0.0, 0.0, 0.38596487957180936, -0.063254866776463081,
    3.4461149961768811, 0.0, 0.0, -0.38596487957180936, 0.0,
    -0.032125885896094948, 0.0, 3.4461149961768811, 0.0, 0.063254866776463081,
    0.032125885896094948, 0.0, 0.0, 0.0, 3.4461149961768811 };

  static real_T dv3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    1.2246467991473532E-16, 0.0, 0.0, -1.2246467991473532E-16, -1.0, 0.0,
    -0.44500000000000106, -4.8051840284557557E-16, 0.093999999999999639, 1.0 };

  static real_T dv1[9] = { 0.057242620117013025, 0.00042103543584383416,
    0.0035980992203626222, 0.00042103543584383416, 0.0566256875413028,
    -0.0070845450789638409, 0.0035980992203626222, -0.0070845450789638409,
    0.014953013801425852 };

  static real_T dv[3] = { -0.0093223487700600238, 0.018355413805586293,
    0.11199999999999961 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '3' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '3' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 2.0;
  b_obj->MassInternal = 3.4461149961768811;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = -2.7373744974922816;
  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.071053999404729951, -7.5524608446468249E-20,
    1.524263879287156E-18, 0.0, 0.332241409959805, -0.0, -7.5524608446468249E-20,
    0.072287409862325583, 9.3334244041247152E-35, -0.332241409959805, 0.0, 0.0,
    1.524263879287156E-18, 9.3334244041247152E-35, 0.0038544641881366904, 0.0,
    -0.0, 0.0, 0.0, -0.332241409959805, 0.0, 2.6091633942770893, 0.0, 0.0,
    0.332241409959805, 0.0, -0.0, 0.0, 2.6091633942770893, 0.0, -0.0, 0.0, 0.0,
    0.0, 0.0, 2.6091633942770893 };

  static real_T dv3[16] = { 6.123233995736766E-17, 1.0, -0.0, 0.0,
    -6.123233995736766E-17, 3.749399456654644E-33, -1.0, 0.0, -1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, 0.12000000000000036,
    0.040000000000000424, 0.11199999999999963, 1.0 };

  static real_T dv1[9] = { 0.071053999404729951, -7.5524608446468249E-20,
    1.524263879287156E-18, -7.5524608446468249E-20, 0.072287409862325583,
    9.3334244041247152E-35, 1.524263879287156E-18, 9.3334244041247152E-35,
    0.0038544641881366904 };

  static real_T dv[3] = { -0.0, -0.0, -0.12733637559400829 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '4' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '4' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  b_obj->MassInternal = 2.6091633942770893;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 1.5902135543576712;
  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 1.564390294014814, -1.7196255988470334E-20,
    -0.016289317521879218, 0.0, -0.80376191466100666, -0.0,
    -1.7196255988470334E-20, 1.5648407730209886, -9.7709074530567263E-37,
    0.80376191466100666, 0.0, -0.0083706667635556013, -0.016289317521879218,
    -9.7709074530567263E-37, 0.00069985018386411264, 0.0, 0.0083706667635556013,
    0.0, 0.0, 0.80376191466100666, 0.0, 0.41303284412179131, 0.0, 0.0,
    -0.80376191466100666, 0.0, 0.0083706667635556013, 0.0, 0.41303284412179131,
    0.0, -0.0, -0.0083706667635556013, 0.0, 0.0, 0.0, 0.41303284412179131 };

  static real_T dv3[16] = { 6.123233995736766E-17, -1.0, -0.0, 0.0,
    6.123233995736766E-17, 3.749399456654644E-33, -1.0, 0.0, 1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, -1.946, 0.0,
    -0.31849999999999978, 1.0 };

  static real_T dv1[9] = { 1.564390294014814, -1.7196255988470334E-20,
    -0.016289317521879218, -1.7196255988470334E-20, 1.5648407730209886,
    -9.7709074530567263E-37, -0.016289317521879218, -9.7709074530567263E-37,
    0.00069985018386411264 };

  static real_T dv[3] = { 0.020266346569493, -0.0, 1.946000000000002 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '5' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '5' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 4.0;
  b_obj->MassInternal = 0.41303284412179131;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.80485367348583781;
  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.00025222016423856789, 1.309983072993836E-10,
    3.1935673589060971E-10, 0.0, -0.0034513426695707227, -4.57718141584202E-9,
    1.309983072993836E-10, 0.00025220200100380493, 1.3498695666345354E-12,
    0.0034513426695707227, 0.0, 6.3869993073856962E-7, 3.1935673589060971E-10,
    1.3498695666345354E-12, 3.2801997268404358E-5, 4.57718141584202E-9,
    -6.3869993073856962E-7, 0.0, 0.0, 0.0034513426695707227, 4.57718141584202E-9,
    0.10518989864278237, 0.0, 0.0, -0.0034513426695707227, 0.0,
    -6.3869993073856962E-7, 0.0, 0.10518989864278237, 0.0, -4.57718141584202E-9,
    6.3869993073856962E-7, 0.0, 0.0, 0.0, 0.10518989864278237 };

  static real_T dv3[16] = { 6.123233995736766E-17, -1.0, -0.0, 0.0,
    6.123233995736766E-17, 3.749399456654644E-33, -1.0, 0.0, 1.0,
    6.123233995736766E-17, 6.123233995736766E-17, 0.0, 0.075999999999994738, 0.0,
    1.946000000000002, 1.0 };

  static real_T dv1[9] = { 0.00025222016423856789, 1.309983072993836E-10,
    3.1935673589060971E-10, 1.309983072993836E-10, 0.00025220200100380493,
    1.3498695666345354E-12, 3.1935673589060971E-10, 1.3498695666345354E-12,
    3.2801997268404358E-5 };

  static real_T dv[3] = { -6.0718751418094854E-6, -4.3513507236905057E-8,
    0.032810590314296659 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '6' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '6' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  b_obj->MassInternal = 0.10518989864278237;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &cb_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.16404505239314812;
  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, emxArray_char_T *jname)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack st;
  emxArray_char_T *switch_expression;
  rigidBodyJoint *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  emxEnsureCapacity_char_T(jname, i);
  st.site = &jb_emlrtRSI;
  validateattributes(&st, jname);
  st.site = &cb_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_obj->NameInternal->data[i] = jname->data[i];
  }

  i = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->PositionLimitsInternal->size[0] * b_obj->
    PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->HomePositionInternal->data[0] = 0.0;
  }

  return b_obj;
}

static void validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  static const int32_T iv[2] = { 1, 38 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T g_u[5] = { 'j', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[38];
  char_T f_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 38; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 38, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &vl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static void SystemProp_setProperties(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj,
  robotics_manip_internal_RigidBodyTree *varargin_2, rigidBodyJoint *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1,
  robotics_manip_internal_CollisionSet *iobj_2,
  robotics_manip_internal_RigidBodyTree_1 *iobj_3,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_4)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv10[2] = { 1, 46 };

  static const int32_T iv11[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 8 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv6[2] = { 1, 35 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 35 };

  static const int32_T iv9[2] = { 1, 7 };

  static char_T i_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'a', 's', 'e', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T q_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c_u[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T k_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T n_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[8] = { 'b', 'a', 's', 'e', 'N', 'a', 'm', 'e' };

  static char_T p_u[7] = { 'G', 'r', 'a', 'v', 'i', 't', 'y' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_char_T *b_basename;
  emxArray_char_T *bname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBody *parent;
  robotics_manip_internal_RigidBodyTree_1 *newrobot;
  real_T g[3];
  real_T pid;
  int32_T iv5[2];
  int32_T b_i;
  int32_T bid;
  int32_T i;
  int32_T loop_ub;
  char_T h_u[51];
  char_T d_u[48];
  char_T l_u[46];
  char_T b_u[37];
  char_T j_u[35];
  char_T f_u[8];
  char_T o_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &c_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  e_st.site = &pb_emlrtRSI;
  newrobot = RigidBodyTree_RigidBodyTree(moduleInstance, &e_st, iobj_3);
  emxInit_char_T(&b_basename, 2);
  e_st.site = &qb_emlrtRSI;
  f_st.site = &bc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = varargin_2->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  loop_ub = varargin_2->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_basename->data[i] = varargin_2->Base.NameInternal->data[i];
  }

  e_st.site = &qb_emlrtRSI;
  f_st.site = &cc_emlrtRSI;
  g_st.site = &kb_emlrtRSI;
  if (b_basename->size[1] == 0) {
    for (i = 0; i < 37; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&g_st, 37, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&g_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&g_st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    h_st.site = &vl_emlrtRSI;
    b_error(&h_st, y, getString(&h_st, message(&h_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  f_st.site = &dc_emlrtRSI;
  bid = -1;
  g_st.site = &fc_emlrtRSI;
  b_validateattributes(&g_st, b_basename);
  emxInit_char_T(&bname, 2);
  g_st.site = &gc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = newrobot->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = newrobot->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = newrobot->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, b_basename)) {
    bid = 0;
  } else {
    pid = newrobot->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
      &b_emlrtRTEI, &f_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)pid - 1)) {
      g_st.site = &hc_emlrtRSI;
      body = newrobot->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5,
        &c_emlrtBCI, &g_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, b_basename)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid != 0) {
    if (bid < 0) {
      i = newrobot->Base.NameInternal->size[0] * newrobot->
        Base.NameInternal->size[1];
      newrobot->Base.NameInternal->size[0] = 1;
      newrobot->Base.NameInternal->size[1] = b_basename->size[1];
      emxEnsureCapacity_char_T(newrobot->Base.NameInternal, i);
      loop_ub = b_basename->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        newrobot->Base.NameInternal->data[i] = b_basename->data[i];
      }
    } else {
      f_st.site = &ec_emlrtRSI;
      for (i = 0; i < 51; i++) {
        h_u[i] = i_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&f_st, 51, m, &h_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        h_u[i] = i_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&f_st, 51, m, &h_u[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      for (i = 0; i < 2; i++) {
        iv5[i] = b_basename->size[i];
      }

      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&f_st, b_basename->size[1], m, &b_basename->data
        [0]);
      emlrtAssign(&f_y, m);
      g_st.site = &tl_emlrtRSI;
      b_error(&g_st, d_y, getString(&g_st, message(&g_st, e_y, f_y, &d_emlrtMCI),
               &d_emlrtMCI), &d_emlrtMCI);
    }
  }

  emxFree_char_T(&b_basename);
  e_st.site = &tb_emlrtRSI;
  newrobot->Base.CollisionsInternal = CollisionSet_copy(&e_st,
    varargin_2->Base.CollisionsInternal, &(&(&(&(&iobj_2[0])[0])[0])[0])[0]);
  e_st.site = &rb_emlrtRSI;
  for (i = 0; i < 3; i++) {
    g[i] = varargin_2->Gravity[i];
  }

  f_st.site = &mc_emlrtRSI;
  g_st.site = &kb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if (!muDoubleScalarIsNaN(g[loop_ub])) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 35; i++) {
      j_u[i] = k_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&g_st, 35, m, &j_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 46; i++) {
      l_u[i] = m_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&g_st, 46, m, &l_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 7; i++) {
      o_u[i] = p_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&g_st, 7, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    h_st.site = &rl_emlrtRSI;
    b_error(&h_st, g_y, getString(&h_st, message(&h_st, h_y, j_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  g_st.site = &kb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if ((!muDoubleScalarIsInf(g[loop_ub])) && (!muDoubleScalarIsNaN(g[loop_ub])))
    {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 35; i++) {
      j_u[i] = n_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&g_st, 35, m, &j_u[0]);
    emlrtAssign(&i_y, m);
    for (i = 0; i < 46; i++) {
      l_u[i] = q_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&g_st, 46, m, &l_u[0]);
    emlrtAssign(&k_y, m);
    for (i = 0; i < 7; i++) {
      o_u[i] = p_u[i];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(&g_st, 7, m, &o_u[0]);
    emlrtAssign(&l_y, m);
    h_st.site = &ql_emlrtRSI;
    b_error(&h_st, i_y, getString(&h_st, message(&h_st, k_y, l_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  if (varargin_2->NumBodies >= 1.0) {
    body = varargin_2->Bodies[0];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &d_emlrtDCI, &d_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5,
        &d_emlrtBCI, &d_st)];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &sb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &sb_emlrtRSI;
    RigidBodyTree_addBody(&e_st, newrobot, body, bname, &(&(&(&(&iobj_2[0])[0])
      [0])[0])[1], &(&(&(&(&iobj_0[0])[0])[0])[0])[0], &(&(&(&(&iobj_1[0])[0])[0])
      [0])[0]);
  }

  if (varargin_2->NumBodies >= 2.0) {
    body = varargin_2->Bodies[1];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &d_emlrtDCI, &d_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5,
        &d_emlrtBCI, &d_st)];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &sb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &sb_emlrtRSI;
    RigidBodyTree_addBody(&e_st, newrobot, body, bname, &(&(&(&(&iobj_2[0])[0])
      [0])[0])[3], &(&(&(&(&iobj_0[0])[0])[0])[0])[2], &(&(&(&(&iobj_1[0])[0])[0])
      [0])[1]);
  }

  if (varargin_2->NumBodies >= 3.0) {
    body = varargin_2->Bodies[2];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &d_emlrtDCI, &d_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5,
        &d_emlrtBCI, &d_st)];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &sb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &sb_emlrtRSI;
    RigidBodyTree_addBody(&e_st, newrobot, body, bname, &(&(&(&(&iobj_2[0])[0])
      [0])[0])[5], &(&(&(&(&iobj_0[0])[0])[0])[0])[4], &(&(&(&(&iobj_1[0])[0])[0])
      [0])[2]);
  }

  if (varargin_2->NumBodies >= 4.0) {
    body = varargin_2->Bodies[3];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &d_emlrtDCI, &d_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5,
        &d_emlrtBCI, &d_st)];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &sb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &sb_emlrtRSI;
    RigidBodyTree_addBody(&e_st, newrobot, body, bname, &(&(&(&(&iobj_2[0])[0])
      [0])[0])[7], &(&(&(&(&iobj_0[0])[0])[0])[0])[6], &(&(&(&(&iobj_1[0])[0])[0])
      [0])[3]);
  }

  if (varargin_2->NumBodies >= 5.0) {
    body = varargin_2->Bodies[4];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &d_emlrtDCI, &d_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5,
        &d_emlrtBCI, &d_st)];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &sb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &sb_emlrtRSI;
    RigidBodyTree_addBody(&e_st, newrobot, body, bname, &(&(&(&(&iobj_2[0])[0])
      [0])[0])[9], &(&(&(&(&iobj_0[0])[0])[0])[0])[8], &(&(&(&(&iobj_1[0])[0])[0])
      [0])[4]);
  }

  if (varargin_2->NumBodies >= 6.0) {
    body = varargin_2->Bodies[5];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &d_emlrtDCI, &d_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5,
        &d_emlrtBCI, &d_st)];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &sb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &sb_emlrtRSI;
    RigidBodyTree_addBody(&e_st, newrobot, body, bname, &(&(&(&(&iobj_2[0])[0])
      [0])[0])[11], &(&(&(&(&iobj_0[0])[0])[0])[0])[10], &(&(&(&(&iobj_1[0])[0])
      [0])[0])[5]);
  }

  emxFree_char_T(&bname);
  obj->RigidBodyTreeInternal = newrobot;
  obj->RigidBodyTreeKinematicModel = 0.0;
  c_st.site = &nb_emlrtRSI;
  inverseKinematics_set_SolverAlgorithm(obj, iobj_4);
  c_st.site = &nb_emlrtRSI;
  d_st.site = &c_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &he_emlrtRSI;
  d_st.site = &ie_emlrtRSI;
  b_obj = obj->Solver;
  b_obj->MaxNumIteration = 1500.0;
  b_obj->MaxTime = 10.0;
  b_obj->GradientTolerance = 1.0E-7;
  b_obj->SolutionTolerance = 1.0E-6;
  b_obj->ConstraintsOn = true;
  b_obj->RandomRestart = false;
  b_obj->StepTolerance = 1.0E-14;
}

static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj)
{
  static char_T jname[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T bname[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[12] = { 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T poslim_data[12];
  real_T idx[5];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T b_idx;
  int32_T i;
  int32_T k;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_obj = obj;
  st.site = &r_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  st.site = &s_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  e_st.site = &m_emlrtRSI;
  b_rand(moduleInstance, &e_st, idx);
  for (k = 0; k <= 2; k += 2) {
    r = _mm_loadu_pd(&idx[k]);
    _mm_storeu_pd(&dv[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv1[0] = muDoubleScalarFloor(dv[0]);
    dv1[1] = muDoubleScalarFloor(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&idx[k], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (k = 4; k < 5; k++) {
    b_idx = idx[4];
    b_idx = muDoubleScalarFloor(b_idx * 62.0) + 1.0;
    idx[4] = b_idx;
  }

  for (i = 0; i < 5; i++) {
    k = (int32_T)emlrtIntegerCheckR2012b(idx[i], &emlrtDCI, &c_st);
    emlrtDynamicBoundsCheckR2012b(k, 1, 62, &emlrtBCI, &c_st);
  }

  st.site = &vb_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  i = b_obj->Base.NameInternal->size[0] * b_obj->Base.NameInternal->size[1];
  b_obj->Base.NameInternal->size[0] = 1;
  b_obj->Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->Base.NameInternal, i);
  for (i = 0; i < 4; i++) {
    b_obj->Base.NameInternal->data[i] = bname[i];
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->_pobj2[0].InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj2[0].JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj2[0].ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &cb_emlrtRSI;
  i = b_obj->_pobj2[0].NameInternal->size[0] * b_obj->_pobj2[0]
    .NameInternal->size[1];
  b_obj->_pobj2[0].NameInternal->size[0] = 1;
  b_obj->_pobj2[0].NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->_pobj2[0].NameInternal, i);
  for (i = 0; i < 8; i++) {
    b_obj->_pobj2[0].NameInternal->data[i] = jname[i];
  }

  i = b_obj->_pobj2[0].Type->size[0] * b_obj->_pobj2[0].Type->size[1];
  b_obj->_pobj2[0].Type->size[0] = 1;
  b_obj->_pobj2[0].Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->_pobj2[0].Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->_pobj2[0].Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->_pobj2[0].Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  k = b_obj->_pobj2[0].Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression->data[i] = b_obj->_pobj2[0].Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    k = 0;
  } else if (c_strcmp(switch_expression)) {
    k = 1;
  } else {
    k = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (k) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    b_obj->_pobj2[0].VelocityNumber = 1.0;
    b_obj->_pobj2[0].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    b_obj->_pobj2[0].VelocityNumber = 1.0;
    b_obj->_pobj2[0].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->_pobj2[0].VelocityNumber = 0.0;
    b_obj->_pobj2[0].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->_pobj2[0].MotionSubspace->size[0] * b_obj->_pobj2[0].
    MotionSubspace->size[1];
  b_obj->_pobj2[0].MotionSubspace->size[0] = 6;
  b_obj->_pobj2[0].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj2[0].MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj2[0].MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->_pobj2[0].PositionLimitsInternal->size[0] * b_obj->_pobj2[0].
    PositionLimitsInternal->size[1];
  b_obj->_pobj2[0].PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj2[0].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj2[0].PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj2[0].PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->_pobj2[0].HomePositionInternal->size[0];
  b_obj->_pobj2[0].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj2[0].HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->_pobj2[0].HomePositionInternal->data[0] = 0.0;
  }

  b_obj->Base.JointInternal = &b_obj->_pobj2[0];
  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_obj->Base.MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (k = 0; k < 3; k++) {
    b_I[k + 3 * k] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->Base.InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (k = 0; k < 6; k++) {
    msubspace_data[k + 6 * k] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->Base.SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &bb_emlrtRSI;
  b_obj->Base.CollisionsInternal = CollisionSet_CollisionSet(&b_st,
    &b_obj->_pobj1[0], 0.0);
  b_obj->Base.matlabCodegenIsDeleted = false;
  b_obj->Base.Index = 0.0;
  st.site = &ub_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  st.site = &wb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[0] = RigidBody_RigidBody(&c_st, &(&(&b_obj->_pobj0[0])[0])[0],
    &(&(&b_obj->_pobj1[1])[0])[0], &(&(&b_obj->_pobj2[1])[0])[0]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[1] = b_RigidBody_RigidBody(&c_st, &(&(&b_obj->_pobj0[0])[0])[1],
    &(&(&b_obj->_pobj1[1])[0])[1], &(&(&b_obj->_pobj2[1])[0])[1]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[2] = c_RigidBody_RigidBody(&c_st, &(&(&b_obj->_pobj0[0])[0])[2],
    &(&(&b_obj->_pobj1[1])[0])[2], &(&(&b_obj->_pobj2[1])[0])[2]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[3] = d_RigidBody_RigidBody(&c_st, &(&(&b_obj->_pobj0[0])[0])[3],
    &(&(&b_obj->_pobj1[1])[0])[3], &(&(&b_obj->_pobj2[1])[0])[3]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[4] = e_RigidBody_RigidBody(&c_st, &(&(&b_obj->_pobj0[0])[0])[4],
    &(&(&b_obj->_pobj1[1])[0])[4], &(&(&b_obj->_pobj2[1])[0])[4]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[5] = f_RigidBody_RigidBody(&c_st, &(&(&b_obj->_pobj0[0])[0])[5],
    &(&(&b_obj->_pobj1[1])[0])[5], &(&(&b_obj->_pobj2[1])[0])[5]);
  b_obj->NumBodies = 0.0;
  b_obj->NumNonFixedBodies = 0.0;
  b_obj->PositionNumber = 0.0;
  b_obj->VelocityNumber = 0.0;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  e_st.site = &l_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  b_rand(moduleInstance, &f_st, idx);
  for (k = 0; k <= 2; k += 2) {
    r = _mm_loadu_pd(&idx[k]);
    _mm_storeu_pd(&dv2[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv3[0] = muDoubleScalarFloor(dv2[0]);
    dv3[1] = muDoubleScalarFloor(dv2[1]);
    r = _mm_loadu_pd(&dv3[0]);
    _mm_storeu_pd(&idx[k], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (k = 4; k < 5; k++) {
    b_idx = idx[4];
    b_idx = muDoubleScalarFloor(b_idx * 62.0) + 1.0;
    idx[4] = b_idx;
  }

  for (i = 0; i < 5; i++) {
    k = (int32_T)emlrtIntegerCheckR2012b(idx[i], &emlrtDCI, &d_st);
    emlrtDynamicBoundsCheckR2012b(k, 1, 62, &emlrtBCI, &d_st);
  }

  for (i = 0; i < 12; i++) {
    b_obj->PositionDoFMap[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 12; i++) {
    b_obj->VelocityDoFMap[i] = (real_T)iv4[i];
  }

  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void b_validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  static const int32_T iv[2] = { 1, 43 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 8 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm',
    'p', 't', 'y' };

  static char_T g_u[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[43];
  char_T f_u[8];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 43; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &vl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b)
{
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  boolean_T c_b;
  b_bool = false;
  c_b = (a->size[1] == 0);
  if (c_b && (b_b->size[1] == 0)) {
    b_bool = true;
  } else if (a->size[1] != b_b->size[1]) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 <= b_b->size[1] - 1) {
        if (a->data[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_copy(const emlrtStack *
  sp, robotics_manip_internal_CollisionSet *obj,
  robotics_manip_internal_CollisionSet *iobj_0)
{
  void *copyGeometryInternal;
  emlrtStack b_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  robotics_manip_internal_CollisionSet *newObj;
  real_T t24_LocalPose[16];
  real_T t24_WorldPose[16];
  real_T newObj_MeshScale[3];
  real_T t22_MeshScale[3];
  real_T t24_MeshScale[3];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ic_emlrtRSI;
  newObj = CollisionSet_CollisionSet(&st, iobj_0, obj->MaxElements);
  newObj->Size = obj->Size;
  d = obj->Size;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &c_emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    st.site = &jc_emlrtRSI;
    i1 = obj->CollisionGeometries->size[1] - 1;
    r = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &f_emlrtBCI, &st)];
    memcpy(&t24_LocalPose[0], &r.LocalPose[0], sizeof(real_T) << 4);
    memcpy(&t24_WorldPose[0], &r.WorldPose[0], sizeof(real_T) << 4);
    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = r.MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    b_st.site = &kc_emlrtRSI;
    copyGeometryInternal = collisioncodegen_copyGeometry(r.CollisionPrimitive);
    b_st.site = &lc_emlrtRSI;
    for (i1 = 0; i1 < 3; i1++) {
      newObj_MeshScale[i1] = t22_MeshScale[i1];
    }

    i1 = newObj->CollisionGeometries->size[1] - 1;
    for (i2 = 0; i2 < 3; i2++) {
      t24_MeshScale[i2] = newObj_MeshScale[i2];
    }

    expl_temp.CollisionPrimitive = copyGeometryInternal;
    memcpy(&expl_temp.LocalPose[0], &t24_LocalPose[0], sizeof(real_T) << 4);
    memcpy(&expl_temp.WorldPose[0], &t24_WorldPose[0], sizeof(real_T) << 4);
    for (i2 = 0; i2 < 3; i2++) {
      expl_temp.MeshScale[i2] = t24_MeshScale[i2];
    }

    newObj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &e_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  return newObj;
}

static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody *iobj_2)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 48 };

  static const int32_T iv6[2] = { 1, 48 };

  static const int32_T iv7[2] = { 1, 9 };

  static const int32_T iv8[2] = { 1, 52 };

  static const int32_T iv9[2] = { 1, 52 };

  static char_T l_u[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N',
    'a', 'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T g_u[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T h_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T e_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T j_u[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *b_parentName;
  emxArray_char_T *bname;
  emxArray_char_T *nm;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *jnt;
  robotics_manip_internal_RigidBody *body;
  real_T bid;
  real_T pid;
  int32_T iv3[2];
  int32_T b_i;
  int32_T bid2;
  int32_T i;
  int32_T loop_ub;
  char_T k_u[52];
  char_T b_u[51];
  char_T f_u[48];
  char_T d_u[46];
  char_T i_u[9];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &nc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  st.site = &nc_emlrtRSI;
  bid = RigidBodyTree_findBodyIndexByName(&st, obj, bname);
  if (bid > -1.0) {
    st.site = &oc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &oc_emlrtRSI;
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    for (i = 0; i < 2; i++) {
      iv3[i] = bname->size[i];
    }

    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, bname->size[1], m, &bname->data[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &tl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, c_y, d_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  st.site = &pc_emlrtRSI;
  emxInit_char_T(&b_parentName, 2);
  i = b_parentName->size[0] * b_parentName->size[1];
  b_parentName->size[0] = 1;
  b_parentName->size[1] = parentName->size[1];
  emxEnsureCapacity_char_T(b_parentName, i);
  loop_ub = parentName->size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&b_parentName->data[0], &parentName->data[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  b_st.site = &yc_emlrtRSI;
  pid = RigidBodyTree_findBodyIndexByName(&b_st, obj, b_parentName);
  emxFree_char_T(&b_parentName);
  if (pid == -1.0) {
    b_st.site = &ad_emlrtRSI;
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    f_y = NULL;
    for (i = 0; i < 2; i++) {
      iv3[i] = parentName->size[i];
    }

    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, parentName->size[1], m, &parentName->data[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &tl_emlrtRSI;
    b_error(&c_st, b_y, getString(&c_st, message(&c_st, e_y, f_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  st.site = &qc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &bd_emlrtRSI;
    error(&b_st);
  }

  jnt = bodyin->JointInternal;
  st.site = &qc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = jnt->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = jnt->NameInternal->data[i];
  }

  st.site = &qc_emlrtRSI;
  bid2 = -2;
  b_st.site = &cd_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  if (bname->size[1] == 0) {
    for (i = 0; i < 48; i++) {
      f_u[i] = g_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &f_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 48; i++) {
      f_u[i] = h_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &f_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 9; i++) {
      i_u[i] = j_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 9, m, &i_u[0]);
    emlrtAssign(&i_y, m);
    d_st.site = &vl_emlrtRSI;
    b_error(&d_st, g_y, getString(&d_st, message(&d_st, h_y, i_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  bid = obj->NumBodies;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, bid, mxDOUBLE_CLASS, (int32_T)bid,
    &d_emlrtRTEI, &st);
  b_i = 0;
  emxInit_char_T(&nm, 2);
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)bid - 1)) {
    b_st.site = &dd_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &n_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &bd_emlrtRSI;
      error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &dd_emlrtRSI;
    i = nm->size[0] * nm->size[1];
    nm->size[0] = 1;
    nm->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(nm, i);
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      nm->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(nm, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&nm);
  if (bid2 + 1 > 0) {
    st.site = &rc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &bd_emlrtRSI;
      error(&b_st);
    }

    jnt = bodyin->JointInternal;
    st.site = &rc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = jnt->NameInternal->data[i];
    }

    st.site = &rc_emlrtRSI;
    for (i = 0; i < 52; i++) {
      k_u[i] = l_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &k_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 52; i++) {
      k_u[i] = l_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &k_u[0]);
    emlrtAssign(&k_y, m);
    l_y = NULL;
    for (i = 0; i < 2; i++) {
      iv3[i] = bname->size[i];
    }

    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, bname->size[1], m, &bname->data[0]);
    emlrtAssign(&l_y, m);
    b_st.site = &tl_emlrtRSI;
    b_error(&b_st, j_y, getString(&b_st, message(&b_st, k_y, l_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  emxFree_char_T(&bname);
  bid = obj->NumBodies + 1.0;
  st.site = &xc_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, &iobj_0[0], &iobj_1[0], iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(bid, &e_emlrtDCI, (emlrtConstCTX)sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5, &l_emlrtBCI, (emlrtConstCTX)
    sp)] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (pid > 0.0) {
    emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 5, &m_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, (emlrtConstCTX)
    sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 6, &g_emlrtBCI, (emlrtConstCTX)sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &sc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &bd_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &tc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &bd_emlrtRSI;
      error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI,
      (emlrtConstCTX)sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &h_emlrtBCI, (emlrtConstCTX)
      sp) - 1;
    obj->PositionDoFMap[loop_ub] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[loop_ub + 6] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &uc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &bd_emlrtRSI;
      error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI,
      (emlrtConstCTX)sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &i_emlrtBCI, (emlrtConstCTX)
      sp) - 1;
    obj->VelocityDoFMap[loop_ub] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[loop_ub + 6] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI,
      (emlrtConstCTX)sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &j_emlrtBCI, (emlrtConstCTX)
      sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(loop_ub + 6 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &j_emlrtDCI,
      (emlrtConstCTX)sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &k_emlrtBCI, (emlrtConstCTX)
      sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(loop_ub + 6 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &vc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &bd_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &wc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &bd_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static real_T RigidBodyTree_findBodyIndexByName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  emlrtStack st;
  emxArray_char_T *bname;
  robotics_manip_internal_RigidBody *b_obj;
  real_T bid;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  bid = -1.0;
  i = bodyname->size[0] * bodyname->size[1];
  bodyname->size[0] = 1;
  emxEnsureCapacity_char_T(bodyname, i);
  st.site = &fc_emlrtRSI;
  b_validateattributes(&st, bodyname);
  emxInit_char_T(&bname, 2);
  st.site = &gc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &b_emlrtRTEI, (emlrtConstCTX)sp);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      st.site = &hc_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &c_emlrtBCI,
        &st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  return bid;
}

static void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T e_u[5] = { 'J', 'o', 'i', 'n', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    d_u[i] = e_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &d_u[0]);
  emlrtAssign(&c_y, m);
  st.site = &tl_emlrtRSI;
  b_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static robotics_manip_internal_RigidBody *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet
  *iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2)
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv10[2] = { 1, 32 };

  static const int32_T iv13[2] = { 1, 32 };

  static const int32_T iv15[2] = { 1, 38 };

  static const int32_T iv16[2] = { 1, 48 };

  static const int32_T iv17[2] = { 1, 4 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv4[2] = { 1, 43 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 49 };

  static const int32_T iv7[2] = { 1, 52 };

  static const int32_T iv8[2] = { 1, 5 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T o_u[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T m_u[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r',
    'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T l_u[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n', 'r',
    'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n', 'g',
    'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T i_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm', 'b',
    'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o',
    'i', 'c', 'e' };

  static char_T t_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T r_u[32] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e', '\'',
    ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',', ' ',
    '\'', 'f', 'i', 'x', 'e', 'd', '\'' };

  static char_T g_u[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T p_u[5] = { 'j', 't', 'y', 'p', 'e' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static char_T v_u[4] = { 'N', 'a', 'm', 'e' };

  static char_T cv1[3] = { ',', ' ', '\'' };

  static char_T cv2[2] = { '\'', ',' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv11[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv12[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv14[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *b_jname;
  emxArray_char_T *jname;
  emxArray_char_T *jtype;
  emxArray_real_T *c_obj;
  emxArray_real_T *d_obj;
  emxArray_real_T *f_obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *y;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBody *newbody;
  real_T i_obj[36];
  real_T g_obj[16];
  real_T poslim_data[12];
  real_T h_obj[9];
  real_T e_obj[3];
  int32_T partial_match_size[2];
  int32_T i;
  int32_T jointtype_size_idx_1;
  int32_T loop_ub;
  char_T n_u[52];
  char_T k_u[49];
  char_T d_u[48];
  char_T j_u[46];
  char_T h_u[43];
  char_T s_u[38];
  char_T b_u[33];
  char_T q_u[32];
  char_T jointtype_data[9];
  char_T partial_match_data[9];
  char_T f_u[5];
  char_T u_u[4];
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emxInit_char_T(&jname, 2);
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = obj->NameInternal->data[i];
  }

  b_st.site = &y_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  newbody = iobj_2;
  b_st.site = &hd_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  if (jname->size[1] == 0) {
    for (i = 0; i < 33; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    d_st.site = &vl_emlrtRSI;
    b_error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_2->NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_2->NameInternal->data[i] = jname->data[i];
  }

  emxInit_char_T(&b_jname, 2);
  i = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = jname->size[1] + 4;
  emxEnsureCapacity_char_T(b_jname, i);
  loop_ub = jname->size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&b_jname->data[0], &jname->data[0], (uint32_T)loop_ub * sizeof(char_T));
  }

  for (i = 0; i < 4; i++) {
    b_jname->data[i + jname->size[1]] = cv[i];
  }

  b_st.site = &ab_emlrtRSI;
  iobj_2->JointInternal = rigidBodyJoint_rigidBodyJoint(&b_st, &iobj_1[0],
    b_jname);
  emxFree_char_T(&b_jname);
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  iobj_2->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    iobj_2->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    iobj_2->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_2->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &bb_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_CollisionSet(&b_st, &iobj_0[0], 0.0);
  iobj_2->matlabCodegenIsDeleted = false;
  st.site = &fd_emlrtRSI;
  b_obj = obj->JointInternal;
  b_st.site = &id_emlrtRSI;
  emxInit_char_T(&jtype, 2);
  i = jtype->size[0] * jtype->size[1];
  jtype->size[0] = 1;
  jtype->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(jtype, i);
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    jtype->data[i] = b_obj->Type->data[i];
  }

  c_st.site = &jd_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = b_obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = b_obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = b_obj->NameInternal->data[i];
  }

  c_st.site = &kd_emlrtRSI;
  iobj_1[1].InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1[1].JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1[1].ChildToJointTransform[i] = (real_T)iv3[i];
  }

  d_st.site = &jb_emlrtRSI;
  validateattributes(&d_st, jname);
  d_st.site = &cb_emlrtRSI;
  i = iobj_1[1].NameInternal->size[0] * iobj_1[1].NameInternal->size[1];
  iobj_1[1].NameInternal->size[0] = 1;
  iobj_1[1].NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_1[1].NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_1[1].NameInternal->data[i] = jname->data[i];
  }

  d_st.site = &nd_emlrtRSI;
  e_st.site = &od_emlrtRSI;
  f_st.site = &pd_emlrtRSI;
  get_match(&f_st, jtype, partial_match_data, partial_match_size, &loop_ub);
  if ((loop_ub == 0) || (jtype->size[1] == 0)) {
    jointtype_size_idx_1 = 8;
    for (i = 0; i < 8; i++) {
      jointtype_data[i] = ' ';
    }

    if ((loop_ub == 0) || (jtype->size[1] == 0)) {
      for (i = 0; i < 46; i++) {
        j_u[i] = l_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&e_st, 46, m, &j_u[0]);
      emlrtAssign(&e_y, m);
      for (i = 0; i < 52; i++) {
        n_u[i] = o_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&e_st, 52, m, &n_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 5; i++) {
        f_u[i] = p_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &f_u[0]);
      emlrtAssign(&i_y, m);
      for (i = 0; i < 32; i++) {
        q_u[i] = r_u[i];
      }

      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv13[0]);
      emlrtInitCharArrayR2013a(&e_st, 32, m, &q_u[0]);
      emlrtAssign(&k_y, m);
      i = jname->size[0] * jname->size[1];
      jname->size[0] = 1;
      jname->size[1] = jtype->size[1] + 5;
      emxEnsureCapacity_char_T(jname, i);
      for (i = 0; i < 3; i++) {
        jname->data[i] = cv1[i];
      }

      loop_ub = jtype->size[1];
      if (loop_ub - 1 >= 0) {
        memcpy(&jname->data[3], &jtype->data[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      for (i = 0; i < 2; i++) {
        jname->data[(i + jtype->size[1]) + 3] = cv2[i];
      }

      m_y = NULL;
      for (i = 0; i < 2; i++) {
        partial_match_size[i] = jname->size[i];
      }

      m = emlrtCreateCharArray(2, &partial_match_size[0]);
      emlrtInitCharArrayR2013a(&e_st, jname->size[1], m, &jname->data[0]);
      emlrtAssign(&m_y, m);
      f_st.site = &qm_emlrtRSI;
      b_error(&f_st, e_y, getString(&f_st, c_message(&f_st, g_y, i_y, k_y, m_y,
                &h_emlrtMCI), &h_emlrtMCI), &h_emlrtMCI);
    }
  } else if (loop_ub > 1) {
    for (i = 0; i < 43; i++) {
      h_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&e_st, 43, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 49; i++) {
      k_u[i] = m_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&e_st, 49, m, &k_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = p_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&e_st, 5, m, &f_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 32; i++) {
      q_u[i] = r_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&e_st, 32, m, &q_u[0]);
    emlrtAssign(&j_y, m);
    i = jname->size[0] * jname->size[1];
    jname->size[0] = 1;
    jname->size[1] = jtype->size[1] + 5;
    emxEnsureCapacity_char_T(jname, i);
    for (i = 0; i < 3; i++) {
      jname->data[i] = cv1[i];
    }

    loop_ub = jtype->size[1];
    if (loop_ub - 1 >= 0) {
      memcpy(&jname->data[3], &jtype->data[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    for (i = 0; i < 2; i++) {
      jname->data[(i + jtype->size[1]) + 3] = cv2[i];
    }

    l_y = NULL;
    for (i = 0; i < 2; i++) {
      partial_match_size[i] = jname->size[i];
    }

    m = emlrtCreateCharArray(2, &partial_match_size[0]);
    emlrtInitCharArrayR2013a(&e_st, jname->size[1], m, &jname->data[0]);
    emlrtAssign(&l_y, m);
    f_st.site = &rm_emlrtRSI;
    b_error(&f_st, d_y, getString(&f_st, c_message(&f_st, f_y, h_y, j_y, l_y,
              &g_emlrtMCI), &g_emlrtMCI), &g_emlrtMCI);
  } else {
    jointtype_size_idx_1 = partial_match_size[1];
    if (partial_match_size[1] - 1 >= 0) {
      memcpy(&jointtype_data[0], &partial_match_data[0], (uint32_T)
             partial_match_size[1] * sizeof(char_T));
    }
  }

  emxFree_char_T(&jtype);
  emlrtDimSizeGeqCheckR2012b(20, jointtype_size_idx_1, &emlrtECI, &c_st);
  i = iobj_1[1].Type->size[0] * iobj_1[1].Type->size[1];
  iobj_1[1].Type->size[0] = 1;
  iobj_1[1].Type->size[1] = jointtype_size_idx_1;
  emxEnsureCapacity_char_T(iobj_1[1].Type, i);
  loop_ub = jointtype_size_idx_1 - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_1[1].Type->data[i] = jointtype_data[i];
  }

  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = iobj_1[1].Type->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = iobj_1[1].Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = iobj_1[1].Type->data[i];
  }

  if (b_strcmp(jname)) {
    loop_ub = 0;
  } else if (c_strcmp(jname)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv11[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1[1].JointAxisInternal[i] = (real_T)iv14[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv12[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1[1].JointAxisInternal[i] = (real_T)iv14[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1[1].VelocityNumber = 0.0;
    iobj_1[1].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1[1].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1[1].MotionSubspace->size[0] * iobj_1[1].MotionSubspace->size[1];
  iobj_1[1].MotionSubspace->size[0] = 6;
  iobj_1[1].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1[1].MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1[1].MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1[1].PositionLimitsInternal->size[0] * iobj_1[1].
    PositionLimitsInternal->size[1];
  iobj_1[1].PositionLimitsInternal->size[0] = 1;
  iobj_1[1].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1[1].PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1[1].PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1[1].HomePositionInternal->size[0];
  iobj_1[1].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1[1].HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1[1].HomePositionInternal->data[0] = 0.0;
  }

  c_st.site = &ld_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = b_obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = b_obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = b_obj->NameInternal->data[i];
  }

  if (jname->size[1] != 0) {
    c_st.site = &md_emlrtRSI;
    i = jname->size[0] * jname->size[1];
    jname->size[0] = 1;
    jname->size[1] = b_obj->NameInternal->size[1];
    emxEnsureCapacity_char_T(jname, i);
    loop_ub = b_obj->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      jname->data[i] = b_obj->NameInternal->data[i];
    }

    c_st.site = &md_emlrtRSI;
    d_st.site = &wd_emlrtRSI;
    e_st.site = &kb_emlrtRSI;
    if (jname->size[1] == 0) {
      for (i = 0; i < 38; i++) {
        s_u[i] = t_u[i];
      }

      n_y = NULL;
      m = emlrtCreateCharArray(2, &iv15[0]);
      emlrtInitCharArrayR2013a(&e_st, 38, m, &s_u[0]);
      emlrtAssign(&n_y, m);
      for (i = 0; i < 48; i++) {
        d_u[i] = e_u[i];
      }

      o_y = NULL;
      m = emlrtCreateCharArray(2, &iv16[0]);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &d_u[0]);
      emlrtAssign(&o_y, m);
      for (i = 0; i < 4; i++) {
        u_u[i] = v_u[i];
      }

      p_y = NULL;
      m = emlrtCreateCharArray(2, &iv17[0]);
      emlrtInitCharArrayR2013a(&e_st, 4, m, &u_u[0]);
      emlrtAssign(&p_y, m);
      f_st.site = &vl_emlrtRSI;
      b_error(&f_st, n_y, getString(&f_st, message(&f_st, o_y, p_y, &c_emlrtMCI),
               &c_emlrtMCI), &c_emlrtMCI);
    }

    if (!iobj_1[1].InTree) {
      i = iobj_1[1].NameInternal->size[0] * iobj_1[1].NameInternal->size[1];
      iobj_1[1].NameInternal->size[0] = 1;
      iobj_1[1].NameInternal->size[1] = jname->size[1];
      emxEnsureCapacity_char_T(iobj_1[1].NameInternal, i);
      loop_ub = jname->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        iobj_1[1].NameInternal->data[i] = jname->data[i];
      }
    } else {
      d_st.site = &xd_emlrtRSI;
      e_st.site = &yd_emlrtRSI;
      warning(&e_st);
    }
  }

  emxFree_char_T(&jname);
  loop_ub = b_obj->PositionLimitsInternal->size[0] << 1;
  i = iobj_1[1].PositionLimitsInternal->size[0] * iobj_1[1].
    PositionLimitsInternal->size[1];
  iobj_1[1].PositionLimitsInternal->size[0] = b_obj->
    PositionLimitsInternal->size[0];
  iobj_1[1].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1[1].PositionLimitsInternal, i);
  emxInit_real_T1(&c_obj, 1);
  i = c_obj->size[0];
  c_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(c_obj, i);
  for (i = 0; i < loop_ub; i++) {
    c_obj->data[i] = b_obj->PositionLimitsInternal->data[i];
  }

  loop_ub = c_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[1].PositionLimitsInternal->data[i] = c_obj->data[i];
  }

  emxFree_real_T(&c_obj);
  emxInit_real_T1(&d_obj, 1);
  i = d_obj->size[0];
  d_obj->size[0] = b_obj->HomePositionInternal->size[0];
  emxEnsureCapacity_real_T1(d_obj, i);
  loop_ub = b_obj->HomePositionInternal->size[0];
  for (i = 0; i < loop_ub; i++) {
    d_obj->data[i] = b_obj->HomePositionInternal->data[i];
  }

  i = iobj_1[1].HomePositionInternal->size[0];
  iobj_1[1].HomePositionInternal->size[0] = d_obj->size[0];
  emxEnsureCapacity_real_T1(iobj_1[1].HomePositionInternal, i);
  loop_ub = d_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[1].HomePositionInternal->data[i] = d_obj->data[i];
  }

  emxFree_real_T(&d_obj);
  for (i = 0; i < 3; i++) {
    e_obj[i] = b_obj->JointAxisInternal[i];
  }

  for (i = 0; i < 3; i++) {
    iobj_1[1].JointAxisInternal[i] = e_obj[i];
  }

  loop_ub = 6 * b_obj->MotionSubspace->size[1];
  i = iobj_1[1].MotionSubspace->size[0] * iobj_1[1].MotionSubspace->size[1];
  iobj_1[1].MotionSubspace->size[0] = 6;
  iobj_1[1].MotionSubspace->size[1] = b_obj->MotionSubspace->size[1];
  emxEnsureCapacity_real_T(iobj_1[1].MotionSubspace, i);
  emxInit_real_T1(&f_obj, 1);
  i = f_obj->size[0];
  f_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(f_obj, i);
  for (i = 0; i < loop_ub; i++) {
    f_obj->data[i] = b_obj->MotionSubspace->data[i];
  }

  loop_ub = f_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[1].MotionSubspace->data[i] = f_obj->data[i];
  }

  emxFree_real_T(&f_obj);
  for (i = 0; i < 16; i++) {
    g_obj[i] = b_obj->JointToParentTransform[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1[1].JointToParentTransform[i] = g_obj[i];
  }

  for (i = 0; i < 16; i++) {
    g_obj[i] = b_obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1[1].ChildToJointTransform[i] = g_obj[i];
  }

  iobj_2->JointInternal = &iobj_1[1];
  iobj_2->MassInternal = obj->MassInternal;
  for (i = 0; i < 3; i++) {
    e_obj[i] = obj->CenterOfMassInternal[i];
  }

  for (i = 0; i < 3; i++) {
    iobj_2->CenterOfMassInternal[i] = e_obj[i];
  }

  for (i = 0; i < 9; i++) {
    h_obj[i] = obj->InertiaInternal[i];
  }

  for (i = 0; i < 9; i++) {
    iobj_2->InertiaInternal[i] = h_obj[i];
  }

  for (i = 0; i < 36; i++) {
    i_obj[i] = obj->SpatialInertia[i];
  }

  for (i = 0; i < 36; i++) {
    iobj_2->SpatialInertia[i] = i_obj[i];
  }

  st.site = &gd_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_copy(&st, obj->CollisionsInternal,
    &iobj_0[1]);
  return newbody;
}

static void get_match(const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], int32_T *nmatched)
{
  static char_T cv[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
    '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19',
    '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$',
    '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3',
    '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b',
    'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~',
    '\x7f' };

  static char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T exitg1;
  int32_T minnanb;
  int32_T ns;
  int32_T partial_match_size_idx_1;
  char_T partial_match_data[9];
  boolean_T b_bool;
  boolean_T b_guard1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  boolean_T matched;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  partial_match_size_idx_1 = 8;
  for (minnanb = 0; minnanb < 8; minnanb++) {
    partial_match_data[minnanb] = ' ';
  }

  *nmatched = 0;
  matched = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  if (str->size[1] <= 8) {
    st.site = &qd_emlrtRSI;
    ns = str->size[1];
    b_bool = false;
    if (str->size[1] < 8) {
      minnanb = str->size[1];
    } else {
      minnanb = 8;
    }

    b_guard1 = false;
    if (ns <= minnanb) {
      if (minnanb < ns) {
        ns = minnanb;
      }

      b_guard1 = true;
    } else if (str->size[1] == 8) {
      ns = 8;
      b_guard1 = true;
    }

    if (b_guard1) {
      minnanb = 1;
      do {
        exitg1 = 0;
        if (minnanb - 1 <= ns - 1) {
          b_st.site = &rd_emlrtRSI;
          assertSupportedString(&b_st, str->data[minnanb - 1]);
          b_st.site = &sd_emlrtRSI;
          assertSupportedString(&b_st, vstr[minnanb - 1]);
          b_st.site = &td_emlrtRSI;
          c_st.site = &ud_emlrtRSI;
          d_st.site = &vd_emlrtRSI;
          assertSupportedString(&d_st, str->data[minnanb - 1]);
          b_st.site = &td_emlrtRSI;
          c_st.site = &ud_emlrtRSI;
          d_st.site = &vd_emlrtRSI;
          assertSupportedString(&d_st, vstr[minnanb - 1]);
          if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
              vstr[minnanb - 1]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      if (str->size[1] == 8) {
        *nmatched = 1;
        match_size[0] = 1;
        match_size[1] = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          match_data[minnanb] = vstr[minnanb];
        }
      } else {
        for (minnanb = 0; minnanb < 8; minnanb++) {
          partial_match_data[minnanb] = vstr[minnanb];
        }

        matched = true;
        *nmatched = 1;
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  } else {
    guard3 = true;
  }

  if (guard3) {
    if (str->size[1] <= 9) {
      st.site = &qd_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 9) {
        minnanb = str->size[1];
      } else {
        minnanb = 9;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str->size[1] == 9) {
        ns = 9;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &rd_emlrtRSI;
            assertSupportedString(&b_st, str->data[minnanb - 1]);
            b_st.site = &sd_emlrtRSI;
            assertSupportedString(&b_st, b_vstr[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, str->data[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, b_vstr[minnanb - 1]);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                b_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 9) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 9;
          for (minnanb = 0; minnanb < 9; minnanb++) {
            match_data[minnanb] = b_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 9;
            for (minnanb = 0; minnanb < 9; minnanb++) {
              partial_match_data[minnanb] = b_vstr[minnanb];
            }
          }

          matched = true;
          (*nmatched)++;
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (str->size[1] <= 5) {
      st.site = &qd_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 5) {
        minnanb = str->size[1];
      } else {
        minnanb = 5;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str->size[1] == 5) {
        ns = 5;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &rd_emlrtRSI;
            assertSupportedString(&b_st, str->data[minnanb - 1]);
            b_st.site = &sd_emlrtRSI;
            assertSupportedString(&b_st, c_vstr[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, str->data[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, c_vstr[minnanb - 1]);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                c_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 5) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 5;
          for (minnanb = 0; minnanb < 5; minnanb++) {
            match_data[minnanb] = c_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 5;
            for (minnanb = 0; minnanb < 5; minnanb++) {
              partial_match_data[minnanb] = c_vstr[minnanb];
            }
          }

          (*nmatched)++;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (*nmatched == 0) {
      match_size[0] = 1;
      match_size[1] = 8;
      for (minnanb = 0; minnanb < 8; minnanb++) {
        match_data[minnanb] = ' ';
      }
    } else {
      match_size[0] = 1;
      match_size[1] = partial_match_size_idx_1;
      memcpy(&match_data[0], &partial_match_data[0], (uint32_T)
             partial_match_size_idx_1 * sizeof(char_T));
    }
  }
}

static void assertSupportedString(const emlrtStack *sp, char_T s)
{
  static const int32_T iv[2] = { 1, 31 };

  static const int32_T iv1[2] = { 1, 31 };

  static char_T c_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[31];
  st.prev = sp;
  st.tls = sp->tls;
  if (!((uint8_T)s <= 127)) {
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 31, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 31, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)emlrtMxGetData(m) = MAX_int8_T;
    emlrtAssign(&c_y, m);
    st.site = &ul_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &i_emlrtMCI),
             &i_emlrtMCI), &i_emlrtMCI);
  }
}

static void warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 38 };

  static char_T b_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't',
    ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[38];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 38; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 38, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static boolean_T e_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inverseKinematics_set_SolverAlgorithm(inverseKinematics *obj,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_0)
{
  static char_T cv[22] = { 'B', 'F', 'G', 'S', 'G', 'r', 'a', 'd', 'i', 'e', 'n',
    't', 'P', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  st.site = &ae_emlrtRSI;
  b_st.site = &ce_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  iobj_0->MaxNumIteration = 1500.0;
  iobj_0->MaxTime = 10.0;
  iobj_0->GradientTolerance = 1.0E-7;
  iobj_0->SolutionTolerance = 1.0E-6;
  iobj_0->ArmijoRuleBeta = 0.4;
  iobj_0->ArmijoRuleSigma = 1.0E-5;
  iobj_0->ConstraintsOn = true;
  iobj_0->RandomRestart = true;
  iobj_0->StepTolerance = 1.0E-14;
  for (i = 0; i < 22; i++) {
    iobj_0->Name[i] = cv[i];
  }

  iobj_0->ConstraintMatrix->size[0] = 0;
  iobj_0->ConstraintMatrix->size[1] = 0;
  iobj_0->ConstraintBound->size[0] = 0;
  b_st.site = &de_emlrtRSI;
  c_st.site = &fe_emlrtRSI;
  d_st.site = &ge_emlrtRSI;
  iobj_0->TimeObj.StartTime.tv_sec = 0.0;
  iobj_0->TimeObj.StartTime.tv_nsec = 0.0;
  b_st.site = &ee_emlrtRSI;
  c_st.site = &fe_emlrtRSI;
  d_st.site = &ge_emlrtRSI;
  iobj_0->TimeObjInternal.StartTime.tv_sec = 0.0;
  iobj_0->TimeObjInternal.StartTime.tv_nsec = 0.0;
  iobj_0->matlabCodegenIsDeleted = false;
  obj->Solver = iobj_0;
}

static void mw__internal__call__reset(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &je_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[6], real_T c_y0[6])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 45 };

  static const int32_T iv5[2] = { 1, 4 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 4 };

  static const int32_T iv8[2] = { 1, 5 };

  static char_T f_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T i_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T g_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *b_b;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  inverseKinematics *obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody *b_obj;
  real_T varargout_1[6];
  real_T b_m;
  real_T d;
  real_T d1;
  real_T n;
  real_T pnum;
  int32_T iv9[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T loop_ub;
  char_T d_u[51];
  char_T b_u[45];
  char_T h_u[5];
  char_T e_u[4];
  int8_T b_I[16];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &ke_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = g_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &e_u[0]);
    emlrtAssign(&f_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, c_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(moduleInstance, &c_st, &moduleInstance->sysobj);
  }

  b_st.site = &d_emlrtRSI;
  obj = &moduleInstance->sysobj.IKInternal;
  c_st.site = &d_emlrtRSI;
  if (moduleInstance->sysobj.IKInternal.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &b_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = g_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 4, m, &e_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &d_emlrtRSI;
    b_error(&d_st, b_y, getString(&d_st, message(&d_st, e_y, h_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.IKInternal.isInitialized != 1) {
    d_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.IKInternal.isSetupComplete = false;
    if (moduleInstance->sysobj.IKInternal.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        d_u[i] = f_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&e_st, 51, m, &d_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        d_u[i] = f_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&e_st, 51, m, &d_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 5; i++) {
        h_u[i] = i_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &h_u[0]);
      emlrtAssign(&i_y, m);
      f_st.site = &d_emlrtRSI;
      b_error(&f_st, d_y, getString(&f_st, message(&f_st, g_y, i_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
    }

    moduleInstance->sysobj.IKInternal.isInitialized = 1;
    f_st.site = &d_emlrtRSI;
    g_st.site = &le_emlrtRSI;
    n = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    emxInit_real_T(&A, 2);
    i = A->size[0] * A->size[1];
    d = emlrtNonNegativeCheckR2012b(n, &t_emlrtDCI, &g_st);
    A->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &g_st);
    A->size[1] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &u_emlrtDCI, &g_st);
    emxEnsureCapacity_real_T(A, i);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(n, &v_emlrtDCI, &g_st) * (int32_T)
      emlrtIntegerCheckR2012b(2.0 * n, &v_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      A->data[i] = 0.0;
    }

    emxInit_real_T1(&b_b, 1);
    i = b_b->size[0];
    b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &w_emlrtDCI, &g_st);
    emxEnsureCapacity_real_T1(b_b, i);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &w_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      b_b->data[i] = 0.0;
    }

    n = 1.0;
    b_m = 1.0;
    d = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->NumBodies;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &e_emlrtRTEI, &g_st);
    emxInit_real_T(&r, 2);
    emxInit_real_T(&r1, 2);
    for (b_i = 0; b_i <= i; b_i++) {
      h_st.site = &oe_emlrtRSI;
      b_obj = obj->RigidBodyTreeInternal->Bodies[emlrtDynamicBoundsCheckR2012b
        (b_i, 0, 5, &y_emlrtBCI, &h_st)];
      if (b_obj->Index == 0.0) {
        i_st.site = &bd_emlrtRSI;
        error(&i_st);
      }

      joint = b_obj->JointInternal;
      pnum = joint->PositionNumber;
      if (!e_strcmp(joint->Type)) {
        d = (n + pnum) - 1.0;
        if (n > d) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = A->size[0];
          i2 = (int32_T)emlrtIntegerCheckR2012b(n, &k_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, &g_st) - 1;
          i2 = A->size[0];
          i3 = (int32_T)emlrtIntegerCheckR2012b(d, &l_emlrtDCI, &g_st);
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &r_emlrtBCI, &g_st);
        }

        d = (b_m + pnum) - 1.0;
        if (b_m > d) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = A->size[1];
          i4 = (int32_T)emlrtIntegerCheckR2012b(b_m, &m_emlrtDCI, &g_st);
          i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &s_emlrtBCI, &g_st) - 1;
          i4 = A->size[1];
          i5 = (int32_T)emlrtIntegerCheckR2012b(d, &n_emlrtDCI, &g_st);
          i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &t_emlrtBCI, &g_st);
        }

        h_st.site = &pe_emlrtRSI;
        b_eye(&h_st, pnum, r1);
        iv9[0] = i2 - i1;
        iv9[1] = i4 - i3;
        emlrtSubAssignSizeCheckR2012b(&iv9[0], 2, &(*(int32_T (*)[2])r1->size)[0],
          2, &b_emlrtECI, &g_st);
        loop_ub = r1->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = r1->size[0];
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->
              size[0] * i2];
          }
        }

        d = (n + pnum) - 1.0;
        if (n > d) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = A->size[0];
          i2 = (int32_T)emlrtIntegerCheckR2012b(n, &o_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, &g_st) - 1;
          i2 = A->size[0];
          i3 = (int32_T)emlrtIntegerCheckR2012b(d, &p_emlrtDCI, &g_st);
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, &g_st);
        }

        d = b_m + pnum;
        d1 = (b_m + 2.0 * pnum) - 1.0;
        if (d > d1) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = A->size[1];
          i4 = (int32_T)emlrtIntegerCheckR2012b(d, &q_emlrtDCI, &g_st);
          i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &w_emlrtBCI, &g_st) - 1;
          i4 = A->size[1];
          i5 = (int32_T)emlrtIntegerCheckR2012b(d1, &r_emlrtDCI, &g_st);
          i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &x_emlrtBCI, &g_st);
        }

        h_st.site = &qe_emlrtRSI;
        b_eye(&h_st, pnum, r1);
        i5 = r1->size[0] * r1->size[1];
        b_loop_ub = r1->size[0] * r1->size[1];
        emxEnsureCapacity_real_T(r1, b_loop_ub);
        loop_ub = i5 - 1;
        for (i5 = 0; i5 <= loop_ub; i5++) {
          r1->data[i5] = -r1->data[i5];
        }

        iv9[0] = i2 - i1;
        iv9[1] = i4 - i3;
        emlrtSubAssignSizeCheckR2012b(&iv9[0], 2, &(*(int32_T (*)[2])r1->size)[0],
          2, &c_emlrtECI, &g_st);
        loop_ub = r1->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = r1->size[0];
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->
              size[0] * i2];
          }
        }

        h_st.site = &re_emlrtRSI;
        i1 = r->size[0] * r->size[1];
        r->size[0] = joint->PositionLimitsInternal->size[0];
        r->size[1] = 2;
        emxEnsureCapacity_real_T(r, i1);
        loop_ub = joint->PositionLimitsInternal->size[0] << 1;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r->data[i1] = joint->PositionLimitsInternal->data[i1];
        }

        i1 = r->size[0] << 1;
        emlrtDynamicBoundsCheckR2012b(2, 1, i1, &o_emlrtBCI, &g_st);
        i1 = b_b->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(b_m, &ab_emlrtDCI, &g_st);
        b_b->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, &g_st)
          - 1] = r->data[1];
        h_st.site = &se_emlrtRSI;
        i1 = r->size[0] * r->size[1];
        r->size[0] = joint->PositionLimitsInternal->size[0];
        r->size[1] = 2;
        emxEnsureCapacity_real_T(r, i1);
        loop_ub = joint->PositionLimitsInternal->size[0] << 1;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r->data[i1] = joint->PositionLimitsInternal->data[i1];
        }

        i1 = r->size[0] << 1;
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &p_emlrtBCI, &g_st);
        i1 = b_b->size[0];
        b_b->data[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_m + 1U), 1,
          i1, &bb_emlrtBCI, &g_st) - 1] = -r->data[0];
        b_m += 2.0 * pnum;
      }

      n += pnum;
    }

    emxFree_real_T(&r1);
    emxFree_real_T(&r);
    i = moduleInstance->sysobj.IKInternal.Solver->ConstraintMatrix->size[0] *
      moduleInstance->sysobj.IKInternal.Solver->ConstraintMatrix->size[1];
    moduleInstance->sysobj.IKInternal.Solver->ConstraintMatrix->size[0] =
      A->size[0];
    moduleInstance->sysobj.IKInternal.Solver->ConstraintMatrix->size[1] =
      A->size[1];
    emxEnsureCapacity_real_T(moduleInstance->
      sysobj.IKInternal.Solver->ConstraintMatrix, i);
    loop_ub = A->size[0] * A->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ConstraintMatrix->data[i] =
        A->data[i];
    }

    emxFree_real_T(&A);
    i = moduleInstance->sysobj.IKInternal.Solver->ConstraintBound->size[0];
    moduleInstance->sysobj.IKInternal.Solver->ConstraintBound->size[0] =
      b_b->size[0];
    emxEnsureCapacity_real_T1(moduleInstance->
      sysobj.IKInternal.Solver->ConstraintBound, i);
    loop_ub = b_b->size[0];
    for (i = 0; i < loop_ub; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ConstraintBound->data[i] =
        b_b->data[i];
    }

    g_st.site = &me_emlrtRSI;
    RigidBodyTree_get_JointPositionLimits(&g_st,
      moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal,
      moduleInstance->sysobj.IKInternal.Limits);
    g_st.site = &ne_emlrtRSI;
    h_st.site = &we_emlrtRSI;
    i_st.site = &xe_emlrtRSI;
    obj->_pobj0.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs = &obj->_pobj0;
    for (i = 0; i < 36; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->WeightMatrix[i] = 0.0;
    }

    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->Robot =
      moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal;
    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->KinematicModel =
      moduleInstance->sysobj.IKInternal.RigidBodyTreeKinematicModel;
    for (i = 0; i < 16; i++) {
      b_I[i] = 0;
    }

    for (b_loop_ub = 0; b_loop_ub < 4; b_loop_ub++) {
      b_I[b_loop_ub + (b_loop_ub << 2)] = 1;
    }

    for (i = 0; i < 16; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->Tform[i] = (real_T)
        b_I[i];
    }

    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->BodyIndex = -1.0;
    i = moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->ErrTemp->size[0];
    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->ErrTemp->size[0] = 6;
    emxEnsureCapacity_real_T1(moduleInstance->
      sysobj.IKInternal.Solver->ExtraArgs->ErrTemp, i);
    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->ErrTemp->data[i] =
        0.0;
    }

    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->CostTemp = 0.0;
    i = b_b->size[0];
    d = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d = emlrtNonNegativeCheckR2012b(d, &y_emlrtDCI, &g_st);
    b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &x_emlrtDCI, &g_st);
    emxEnsureCapacity_real_T1(b_b, i);
    d = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d = emlrtNonNegativeCheckR2012b(d, &y_emlrtDCI, &g_st);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &x_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      b_b->data[i] = 0.0;
    }

    i = b_b->size[0];
    emlrtDimSizeGeqCheckR2012b(42, i, &d_emlrtECI, &g_st);
    i = moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->GradTemp->size[0];
    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->GradTemp->size[0] =
      b_b->size[0];
    emxEnsureCapacity_real_T1(moduleInstance->
      sysobj.IKInternal.Solver->ExtraArgs->GradTemp, i);
    loop_ub = b_b->size[0];
    for (i = 0; i < loop_ub; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->GradTemp->data[i] =
        b_b->data[i];
    }

    emxFree_real_T(&b_b);
    moduleInstance->sysobj.IKInternal.isSetupComplete = true;
  }

  d_st.site = &d_emlrtRSI;
  inverseKinematics_stepImpl(moduleInstance, &d_st,
    &moduleInstance->sysobj.IKInternal, b_u0, b_u1, b_u2, varargout_1);
  for (i = 0; i < 6; i++) {
    c_y0[i] = varargout_1[i];
  }
}

static void b_eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I)
{
  static const int32_T iv[2] = { 1, 28 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 28 };

  static const int32_T iv3[2] = { 1, 21 };

  static char_T c_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T e_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T n;
  real_T t;
  int32_T b_m;
  int32_T i;
  int32_T loop_ub;
  char_T b_u[28];
  char_T d_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &te_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &ue_emlrtRSI;
  if ((t != muDoubleScalarFloor(t)) || muDoubleScalarIsInf(t) || (t >
       2.147483647E+9)) {
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&f_y, m);
    c_st.site = &pm_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, d_message(&c_st, c_y, d_y, f_y,
              &l_emlrtMCI), &l_emlrtMCI), &l_emlrtMCI);
  }

  if (t <= 0.0) {
    n = 0.0;
  } else {
    n = t;
  }

  if (!(n <= 2.147483647E+9)) {
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &om_emlrtRSI;
    b_error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &m_emlrtMCI),
             &m_emlrtMCI), &m_emlrtMCI);
  }

  b_m = (int32_T)t - 1;
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int32_T)t;
  b_I->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T(b_I, i);
  loop_ub = (int32_T)t * (int32_T)t;
  for (i = 0; i < loop_ub; i++) {
    b_I->data[i] = 0.0;
  }

  if ((int32_T)t > 0) {
    for (loop_ub = 0; loop_ub <= b_m; loop_ub++) {
      b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1.0;
    }
  }
}

static void RigidBodyTree_get_JointPositionLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_real_T *limits)
{
  emlrtStack st;
  emxArray_real_T *r;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBody *body;
  real_T d;
  real_T k;
  real_T pnum;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  i = limits->size[0] * limits->size[1];
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &eb_emlrtDCI,
    (emlrtConstCTX)sp);
  limits->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &db_emlrtDCI,
    (emlrtConstCTX)sp);
  limits->size[1] = 2;
  emxEnsureCapacity_real_T(limits, i);
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &gb_emlrtDCI,
    (emlrtConstCTX)sp);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &fb_emlrtDCI, (emlrtConstCTX)sp)
    << 1;
  for (i = 0; i < loop_ub; i++) {
    limits->data[i] = 0.0;
  }

  k = 1.0;
  d = obj->NumBodies;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &f_emlrtRTEI, (emlrtConstCTX)sp);
  emxInit_real_T(&r, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &eb_emlrtBCI,
      (emlrtConstCTX)sp)];
    if (!e_strcmp(body->JointInternal->Type)) {
      pnum = body->JointInternal->PositionNumber;
      d = (k + pnum) - 1.0;
      if (k > d) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = limits->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(k, &bb_emlrtDCI, (emlrtConstCTX)sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI,
          (emlrtConstCTX)sp) - 1;
        i2 = limits->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, (emlrtConstCTX)sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      st.site = &ve_emlrtRSI;
      b_obj = body->JointInternal;
      i3 = r->size[0] * r->size[1];
      r->size[0] = b_obj->PositionLimitsInternal->size[0];
      r->size[1] = 2;
      emxEnsureCapacity_real_T(r, i3);
      loop_ub = b_obj->PositionLimitsInternal->size[0] << 1;
      for (i3 = 0; i3 < loop_ub; i3++) {
        r->data[i3] = b_obj->PositionLimitsInternal->data[i3];
      }

      iv[0] = i2 - i1;
      iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &(*(int32_T (*)[2])r->size)[0], 2,
        &e_emlrtECI, (void *)sp);
      for (i2 = 0; i2 < 2; i2++) {
        loop_ub = r->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          limits->data[(i1 + i3) + limits->size[0] * i2] = r->data[i3 + r->size
            [0] * i2];
        }
      }

      k += pnum;
    }
  }

  emxFree_real_T(&r);
}

static void inverseKinematics_stepImpl(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[6], real_T QSol[6])
{
  static const int32_T iv[2] = { 1, 55 };

  static const int32_T iv1[2] = { 1, 55 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T c_u[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'E', 'n',
    'd', 'E', 'f', 'f', 'e', 'c', 't', 'o', 'r', 'I', 's', 'B', 'a', 's', 'e' };

  static char_T e_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T g_u[5] = { 'B', 'o', 'd', 'y', '6' };

  static int8_T iv5[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *b_basename;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBody *c_obj;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T weightMatrix[36];
  real_T R[9];
  real_T dv[9];
  real_T x[9];
  real_T b_maxval[3];
  real_T absxk;
  real_T maxval;
  real_T scale;
  real_T t;
  int32_T expl_temp_size[2];
  int32_T bidx;
  int32_T i;
  int32_T idx;
  int32_T k;
  char_T b_u[55];
  char_T d_u[46];
  char_T expl_temp_data[14];
  char_T f_u[5];
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ye_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&b_basename, 2);
  b_st.site = &bf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &bc_emlrtRSI;
  k = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, k);
  idx = b_obj->Base.NameInternal->size[1];
  for (k = 0; k < idx; k++) {
    b_basename->data[k] = b_obj->Base.NameInternal->data[k];
  }

  if (f_strcmp(b_basename)) {
    b_st.site = &cf_emlrtRSI;
    for (k = 0; k < 55; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 55, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 55; k++) {
      b_u[k] = c_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 55, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &nm_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &n_emlrtMCI),
             &n_emlrtMCI), &n_emlrtMCI);
  }

  b_st.site = &df_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &yc_emlrtRSI;
  bidx = -1;
  d_st.site = &gc_emlrtRSI;
  k = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, k);
  idx = b_obj->Base.NameInternal->size[1];
  for (k = 0; k < idx; k++) {
    b_basename->data[k] = b_obj->Base.NameInternal->data[k];
  }

  if (f_strcmp(b_basename)) {
    bidx = 0;
  } else {
    maxval = b_obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxval, mxDOUBLE_CLASS, (int32_T)
      maxval, &b_emlrtRTEI, &c_st);
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= (int32_T)maxval - 1)) {
      d_st.site = &hc_emlrtRSI;
      c_obj = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5, &c_emlrtBCI,
        &d_st)];
      k = b_basename->size[0] * b_basename->size[1];
      b_basename->size[0] = 1;
      b_basename->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_basename, k);
      idx = c_obj->NameInternal->size[1];
      for (k = 0; k < idx; k++) {
        b_basename->data[k] = c_obj->NameInternal->data[k];
      }

      if (f_strcmp(b_basename)) {
        bidx = i + 1;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  emxFree_char_T(&b_basename);
  if (bidx == -1) {
    c_st.site = &ad_emlrtRSI;
    for (k = 0; k < 46; k++) {
      d_u[k] = e_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = e_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    for (k = 0; k < 5; k++) {
      f_u[k] = g_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &f_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &tl_emlrtRSI;
    b_error(&d_st, c_y, getString(&d_st, message(&d_st, d_y, e_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  for (k = 0; k < 3; k++) {
    for (idx = 0; idx < 3; idx++) {
      R[idx + 3 * k] = tform[idx + (k << 2)];
    }
  }

  b_st.site = &ef_emlrtRSI;
  inv(&b_st, R, dv);
  for (k = 0; k < 3; k++) {
    for (idx = 0; idx < 3; idx++) {
      x[idx + 3 * k] = dv[idx + 3 * k] - R[k + 3 * idx];
    }
  }

  for (k = 0; k < 9; k++) {
    R[k] = muDoubleScalarAbs(x[k]);
  }

  for (idx = 0; idx < 3; idx++) {
    b_maxval[idx] = R[3 * idx];
    for (i = 0; i < 2; i++) {
      maxval = b_maxval[idx];
      if (muDoubleScalarIsNaN(R[(i + 3 * idx) + 1])) {
        p = false;
      } else if (muDoubleScalarIsNaN(maxval)) {
        p = true;
      } else {
        p = (maxval < R[(i + 3 * idx) + 1]);
      }

      if (p) {
        maxval = R[(i + 3 * idx) + 1];
      }

      b_maxval[idx] = maxval;
    }
  }

  if (!muDoubleScalarIsNaN(b_maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muDoubleScalarIsNaN(b_maxval[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    maxval = b_maxval[0];
  } else {
    maxval = b_maxval[idx - 1];
    for (k = idx + 1; k < 4; k++) {
      if (maxval < b_maxval[k - 1]) {
        maxval = b_maxval[k - 1];
      }
    }
  }

  guard1 = false;
  if (maxval > 0.0001) {
    guard1 = true;
  } else {
    maxval = 0.0;
    scale = 3.3121686421112381E-170;
    for (k = 0; k < 4; k++) {
      absxk = muDoubleScalarAbs(tform[(k << 2) + 3] - (real_T)iv5[k]);
      if (absxk > scale) {
        t = scale / absxk;
        maxval = maxval * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        maxval += t * t;
      }
    }

    maxval = scale * muDoubleScalarSqrt(maxval);
    if (maxval > 1.0E-7) {
      guard1 = true;
    }
  }

  if (guard1) {
    b_st.site = &ff_emlrtRSI;
    c_st.site = &yd_emlrtRSI;
    d_warning(&c_st);
  }

  b_st.site = &gf_emlrtRSI;
  c_validateattributes(&b_st, weights);
  for (k = 0; k < 36; k++) {
    weightMatrix[k] = 0.0;
  }

  for (idx = 0; idx < 6; idx++) {
    weightMatrix[idx + 6 * idx] = weights[idx];
  }

  args = obj->Solver->ExtraArgs;
  for (k = 0; k < 36; k++) {
    args->WeightMatrix[k] = weightMatrix[k];
  }

  args->BodyIndex = (real_T)bidx;
  args->KinematicModel = obj->RigidBodyTreeKinematicModel;
  for (k = 0; k < 16; k++) {
    args->Tform[k] = tform[k];
  }

  st.site = &af_emlrtRSI;
  inverseKinematics_solve(moduleInstance, &st, obj, initialGuess, QSol, &maxval,
    &scale, &absxk, &t, expl_temp_data, expl_temp_size);
}

static boolean_T f_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'B', 'o', 'd', 'y', '6' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inv(const emlrtStack *sp, real_T x[9], real_T y[9])
{
  static const int32_T iv[2] = { 1, 6 };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T b_x[9];
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 1;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 4;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else if (absx31 > absx11) {
    p1 = 7;
    p3 = 0;
    b_x[0] = x[2];
    b_x[2] = x[0];
    b_x[3] = x[5];
    b_x[5] = x[3];
    b_x[6] = x[8];
    b_x[8] = x[6];
  }

  absx11 = b_x[1] / b_x[0];
  b_x[1] /= b_x[0];
  absx21 = b_x[2] / b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= b_x[3] * absx11;
  b_x[5] -= b_x[3] * absx21;
  b_x[7] -= b_x[6] * absx11;
  b_x[8] -= b_x[6] * absx21;
  if (muDoubleScalarAbs(b_x[5]) > muDoubleScalarAbs(b_x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    b_x[1] = absx21;
    b_x[2] = absx11;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  absx11 = b_x[5] / b_x[4];
  b_x[5] /= b_x[4];
  b_x[8] -= b_x[7] * absx11;
  absx11 = (b_x[1] * b_x[5] - b_x[2]) / b_x[8];
  absx21 = -(b_x[1] + b_x[7] * absx11) / b_x[4];
  y[p1 - 1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1] = absx21;
  y[p1 + 1] = absx11;
  absx11 = -b_x[5] / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
  st.site = &hf_emlrtRSI;
  absx11 = b_norm(x);
  absx21 = b_norm(y);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    b_st.site = &if_emlrtRSI;
    b_warning(&b_st);
  } else if (muDoubleScalarIsNaN(absx31) || (absx31 < 2.2204460492503131E-16)) {
    b_st.site = &jf_emlrtRSI;
    for (p1 = 0; p1 < 6; p1++) {
      rfmt[p1] = b_rfmt[p1];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateDoubleScalar(absx31);
    emlrtAssign(&c_y, m);
    c_st.site = &tm_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &o_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &jf_emlrtRSI;
    c_warning(&b_st, str);
  }
}

static real_T b_norm(real_T x[9])
{
  real_T s;
  real_T y;
  int32_T i;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = 0.0;
    for (i = 0; i < 3; i++) {
      s += muDoubleScalarAbs(x[i + 3 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

static void b_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 21 };

  static char_T b_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'n',
    'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[21];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 21; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void c_warning(const emlrtStack *sp, char_T varargin_1[14])
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 33 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[33];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 33; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void d_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 65 };

  static char_T b_msgID[65] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'H', 'o',
    'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's', 'T', 'r', 'a', 'n', 's', 'f',
    'o', 'r', 'm', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[65];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 65U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 65, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void c_validateattributes(const emlrtStack *sp, real_T a[6])
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 38 };

  static const int32_T iv3[2] = { 1, 7 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 33 };

  static const int32_T iv6[2] = { 1, 7 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 7 };

  static char_T k_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T j_u[7] = { 'w', 'e', 'i', 'g', 'h', 't', 's' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T i_u[51];
  char_T d_u[46];
  char_T e_u[38];
  char_T b_u[33];
  char_T h_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &rl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, d_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  st.site = &kb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!(a[k] < 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 38; k++) {
      e_u[k] = g_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 38, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 51; k++) {
      i_u[k] = k_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&g_y, m);
    b_st.site = &sl_emlrtRSI;
    b_error(&b_st, c_y, getString(&b_st, message(&b_st, e_y, g_y, &q_emlrtMCI),
             &q_emlrtMCI), &q_emlrtMCI);
  }

  st.site = &kb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = l_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &b_u[0]);
    emlrtAssign(&f_y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = m_u[k];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&h_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    b_st.site = &ql_emlrtRSI;
    b_error(&b_st, f_y, getString(&b_st, message(&b_st, h_y, i_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }
}

static void inverseKinematics_solve(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[6], real_T QSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *bodyIndices;
  emxArray_real_T *positionIndices;
  emxArray_real_T *positionMap;
  emxArray_real_T *y;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T qvSolRaw[6];
  real_T apnd;
  real_T b_d;
  real_T bid;
  real_T cdiff;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T idxCount;
  real_T ndbl;
  real_T numPositions;
  int32_T iv[2];
  int32_T sol_Status_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nm1d2;
  int32_T trueCount;
  uint32_T c_i;
  char_T sol_Status_data[14];
  boolean_T b_b[6];
  boolean_T b_y;
  boolean_T exitg1;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 6; i++) {
    QSol[i] = initialGuess[i];
  }

  st.site = &kf_emlrtRSI;
  RigidBodyTree_validateConfigurationWithLimits(&st, obj->RigidBodyTreeInternal,
    QSol);
  st.site = &lf_emlrtRSI;
  NLPSolverInterface_solve(moduleInstance, &st, obj->Solver, QSol, qvSolRaw, &d,
    &d1, &d2, &d3, sol_Status_data, sol_Status_size);
  *solutionInfo_ExitFlag = d3;
  *solutionInfo_PoseErrorNorm = d2;
  *solutionInfo_NumRandomRestarts = d1;
  *solutionInfo_Iterations = d;
  st.site = &mf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  bid = obj->Solver->ExtraArgs->BodyIndex;
  emxInit_real_T1(&bodyIndices, 1);
  b_i = bodyIndices->size[0];
  b_d = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &lb_emlrtDCI, &st);
  bodyIndices->size[0] = (int32_T)emlrtIntegerCheckR2012b(b_d, &kb_emlrtDCI, &st);
  emxEnsureCapacity_real_T1(bodyIndices, b_i);
  b_d = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &lb_emlrtDCI, &st);
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(b_d, &kb_emlrtDCI, &st);
  for (b_i = 0; b_i < nm1d2; b_i++) {
    bodyIndices->data[b_i] = 0.0;
  }

  if (bid == 0.0) {
    b_i = bodyIndices->size[0];
    bodyIndices->size[0] = 1;
    emxEnsureCapacity_real_T1(bodyIndices, b_i);
    bodyIndices->data[0] = 0.0;
  } else {
    b_i = (int32_T)emlrtIntegerCheckR2012b(bid, &mb_emlrtDCI, &st) - 1;
    body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &kb_emlrtBCI,
      &st)];
    c_i = 1U;
    while (body->ParentIndex != 0.0) {
      b_i = bodyIndices->size[0];
      bodyIndices->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, b_i,
        &lb_emlrtBCI, &st) - 1] = body->Index;
      b_i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &nb_emlrtDCI,
        &st) - 1;
      body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 5, &mb_emlrtBCI,
        &st)];
      c_i++;
    }

    if ((int32_T)(c_i - 1U) < 1) {
      nm1d2 = 0;
    } else {
      b_i = bodyIndices->size[0];
      emlrtDynamicBoundsCheckR2012b(1, 1, b_i, &jb_emlrtBCI, &st);
      b_i = bodyIndices->size[0];
      nm1d2 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, b_i,
        &ib_emlrtBCI, &st);
    }

    iv[0] = 1;
    iv[1] = nm1d2;
    b_st.site = &fl_emlrtRSI;
    indexShapeCheck(&b_st, bodyIndices->size[0], iv);
    b_i = bodyIndices->size[0];
    bodyIndices->size[0] = nm1d2 + 2;
    emxEnsureCapacity_real_T1(bodyIndices, b_i);
    bodyIndices->data[nm1d2] = body->Index;
    bodyIndices->data[nm1d2 + 1] = 0.0;
  }

  st.site = &nf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  nm1d2 = bodyIndices->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= nm1d2; i++) {
    if (bodyIndices->data[i] != 0.0) {
      trueCount++;
    }
  }

  emxInit_int32_T1(&r, 1);
  b_i = r->size[0];
  r->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r, b_i);
  trueCount = 0;
  for (i = 0; i <= nm1d2; i++) {
    if (bodyIndices->data[i] != 0.0) {
      r->data[trueCount] = i;
      trueCount++;
    }
  }

  trueCount = bodyIndices->size[0];
  emxInit_real_T(&positionMap, 2);
  b_i = positionMap->size[0] * positionMap->size[1];
  positionMap->size[0] = r->size[0];
  positionMap->size[1] = 2;
  emxEnsureCapacity_real_T(positionMap, b_i);
  for (b_i = 0; b_i < 2; b_i++) {
    nm1d2 = r->size[0];
    for (i1 = 0; i1 < nm1d2; i1++) {
      k = r->data[i1];
      b_d = bodyIndices->data[emlrtDynamicBoundsCheckR2012b(k, 0, trueCount - 1,
        &ob_emlrtBCI, &st)];
      k = (int32_T)emlrtIntegerCheckR2012b(b_d, &ob_emlrtDCI, &st);
      positionMap->data[i1 + positionMap->size[0] * b_i] = b_obj->
        PositionDoFMap[(emlrtDynamicBoundsCheckR2012b(k, 1, 6, &nb_emlrtBCI, &st)
                        + 6 * b_i) - 1];
    }
  }

  emxFree_int32_T(&r);
  emxFree_real_T(&bodyIndices);
  emxInit_real_T(&positionIndices, 2);
  b_i = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[0] = 1;
  b_d = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &hb_emlrtDCI, &st);
  positionIndices->size[1] = (int32_T)emlrtIntegerCheckR2012b(b_d, &ib_emlrtDCI,
    &st);
  emxEnsureCapacity_real_T(positionIndices, b_i);
  b_d = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &qb_emlrtDCI, &st);
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(b_d, &pb_emlrtDCI, &st);
  for (b_i = 0; b_i < nm1d2; b_i++) {
    positionIndices->data[b_i] = 0.0;
  }

  idxCount = 0.0;
  b_i = positionMap->size[0] - 1;
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&y, 2);
  for (i = 0; i <= b_i; i++) {
    i1 = positionMap->size[0];
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &hb_emlrtBCI, &st);
    numPositions = (positionMap->data[i + positionMap->size[0]] -
                    positionMap->data[i]) + 1.0;
    if (numPositions > 0.0) {
      if (numPositions < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)(numPositions - 1.0) + 1;
        emxEnsureCapacity_real_T(y, i1);
        nm1d2 = (int32_T)(numPositions - 1.0);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y->data[i1] = (real_T)i1 + 1.0;
        }
      }

      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = y->size[1];
      emxEnsureCapacity_int32_T1(r1, i1);
      trueCount = positionIndices->size[1];
      nm1d2 = y->size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        b_d = idxCount + y->data[i1];
        k = (int32_T)emlrtIntegerCheckR2012b(b_d, &sb_emlrtDCI, &st);
        r1->data[i1] = emlrtDynamicBoundsCheckR2012b(k, 1, trueCount,
          &qb_emlrtBCI, &st);
      }

      bid = positionMap->data[i];
      b_d = positionMap->data[i + positionMap->size[0]];
      if (muDoubleScalarIsNaN(bid) || muDoubleScalarIsNaN(b_d)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else if (positionMap->data[i + positionMap->size[0]] < positionMap->
                 data[i]) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if ((muDoubleScalarIsInf(bid) || muDoubleScalarIsInf(b_d)) &&
                 (positionMap->data[i] == positionMap->data[i +
                  positionMap->size[0]])) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(bid) == positionMap->data[i]) {
        b_d = positionMap->data[i];
        bid = positionMap->data[i + positionMap->size[0]];
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)(bid - b_d) + 1;
        emxEnsureCapacity_real_T(y, i1);
        nm1d2 = (int32_T)(bid - b_d);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y->data[i1] = b_d + (real_T)i1;
        }
      } else {
        b_st.site = &gl_emlrtRSI;
        ndbl = muDoubleScalarFloor((positionMap->data[i + positionMap->size[0]]
          - positionMap->data[i]) + 0.5);
        apnd = positionMap->data[i] + ndbl;
        cdiff = apnd - positionMap->data[i + positionMap->size[0]];
        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(muDoubleScalarAbs(bid), muDoubleScalarAbs(b_d))) {
          ndbl++;
          apnd = positionMap->data[i + positionMap->size[0]];
        } else if (cdiff > 0.0) {
          apnd = positionMap->data[i] + (ndbl - 1.0);
        } else {
          ndbl++;
        }

        if (ndbl >= 0.0) {
          trueCount = (int32_T)ndbl - 1;
        } else {
          trueCount = -1;
        }

        c_st.site = &hl_emlrtRSI;
        assert_pmaxsize(&c_st, !(ndbl > 2.147483647E+9));
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = trueCount + 1;
        emxEnsureCapacity_real_T(y, i1);
        if (trueCount + 1 > 0) {
          y->data[0] = positionMap->data[i];
          if (trueCount + 1 > 1) {
            y->data[trueCount] = apnd;
            nm1d2 = div_nzp_s32(trueCount, 2);
            i1 = nm1d2 - 2;
            for (k = 0; k <= i1; k++) {
              y->data[k + 1] = bid + (real_T)(k + 1);
              y->data[(trueCount - k) - 1] = apnd - (real_T)(k + 1);
            }

            if (nm1d2 << 1 == trueCount) {
              y->data[nm1d2] = (positionMap->data[i] + apnd) / 2.0;
            } else {
              y->data[nm1d2] = positionMap->data[i] + (real_T)nm1d2;
              y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      i1 = r1->size[1];
      k = y->size[1];
      emlrtSubAssignSizeCheck1dR2017a(i1, k, &f_emlrtECI, &st);
      nm1d2 = y->size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        positionIndices->data[r1->data[i1] - 1] = y->data[i1];
      }

      idxCount += numPositions;
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&positionMap);
  if (idxCount < 1.0) {
    b_i = 0;
  } else {
    b_i = positionIndices->size[1];
    emlrtDynamicBoundsCheckR2012b(1, 1, b_i, &gb_emlrtBCI, &st);
    b_i = positionIndices->size[1];
    i1 = (int32_T)emlrtIntegerCheckR2012b(idxCount, &jb_emlrtDCI, &st);
    b_i = emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &fb_emlrtBCI, &st);
  }

  i1 = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[1] = b_i;
  emxEnsureCapacity_real_T(positionIndices, i1);
  b_i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = positionIndices->size[1];
  emxEnsureCapacity_int32_T1(r1, b_i);
  nm1d2 = positionIndices->size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    b_d = positionIndices->data[b_i];
    i1 = (int32_T)emlrtIntegerCheckR2012b(b_d, &rb_emlrtDCI, (emlrtConstCTX)sp);
    r1->data[b_i] = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &pb_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  b_i = r1->size[1];
  i1 = positionIndices->size[1];
  emlrtSubAssignSizeCheck1dR2017a(b_i, i1, &g_emlrtECI, (emlrtConstCTX)sp);
  nm1d2 = positionIndices->size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    QSol[r1->data[b_i] - 1] = qvSolRaw[(int32_T)positionIndices->data[b_i] - 1];
  }

  emxFree_int32_T(&r1);
  emxFree_real_T(&positionIndices);
  st.site = &of_emlrtRSI;
  b_st.site = &il_emlrtRSI;
  for (i = 0; i < 6; i++) {
    b_b[i] = muDoubleScalarIsNaN(QSol[i]);
  }

  b_y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (b_b[k]) {
      b_y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  guard1 = false;
  if (b_y) {
    guard1 = true;
  } else {
    for (i = 0; i < 6; i++) {
      b_b[i] = muDoubleScalarIsInf(QSol[i]);
    }

    b_y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (b_b[k]) {
        b_y = true;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (b_y) {
      guard1 = true;
    }
  }

  if (guard1) {
    c_st.site = &jl_emlrtRSI;
    d_st.site = &yd_emlrtRSI;
    g_warning(&d_st);
  }

  solutionInfo_Status_size[0] = 1;
  solutionInfo_Status_size[1] = sol_Status_size[1];
  if (sol_Status_size[1] - 1 >= 0) {
    memcpy(&solutionInfo_Status_data[0], &sol_Status_data[0], (uint32_T)
           sol_Status_size[1] * sizeof(char_T));
  }
}

static void eml_find(const emlrtStack *sp, boolean_T x[6], int32_T i_data[],
                     int32_T i_size[1])
{
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 < 6)) {
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 6) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (idx < 1) {
    idx = 0;
  }

  iv[0] = 1;
  iv[1] = idx;
  st.site = &uf_emlrtRSI;
  indexShapeCheck(&st, 6, iv);
  i_size[0] = idx;
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }

  st.site = &vf_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &mm_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &t_emlrtMCI),
             &t_emlrtMCI), &t_emlrtMCI);
  }
}

static void e_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 72 };

  static char_T b_msgID[72] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'C', 'o', 'n', 'f', 'i', 'g',
    'J', 'o', 'i', 'n', 't', 'L', 'i', 'm', 'i', 't', 's', 'V', 'i', 'o', 'l',
    'a', 't', 'i', 'o', 'n', 'A', 'u', 't', 'o', 'A', 'd', 'j', 'u', 's', 't',
    'e', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[72];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 72U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 72, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void NLPSolverInterface_solve(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[6],
  real_T xSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  static char_T cv[14] = { 'b', 'e', 's', 't', ' ', 'a', 'v', 'a', 'i', 'l', 'a',
    'b', 'l', 'e' };

  static char_T cv1[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_real_T *b_obj;
  emxArray_real_T *c_obj;
  emxArray_real_T *lb;
  emxArray_real_T *newseed;
  emxArray_real_T *rn;
  emxArray_real_T *ub;
  emxArray_real_T *x;
  rigidBodyJoint *e_obj;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBodyTree_1 *d_obj;
  real_T b_xSol[6];
  real_T b_ub[2];
  real_T p[2];
  real_T err;
  real_T iter;
  real_T tol;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nx;
  robotics_core_internal_NLPSolverExitFlags exitFlag;
  robotics_core_internal_NLPSolverExitFlags exitFlagPrev;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  obj->MaxNumIterationInternal = obj->MaxNumIteration;
  obj->MaxTimeInternal = obj->MaxTime;
  for (i = 0; i < 6; i++) {
    obj->SeedInternal[i] = seed[i];
  }

  tol = obj->SolutionTolerance;
  st.site = &wf_emlrtRSI;
  b_st.site = &cg_emlrtRSI;
  expl_temp = tic();
  obj->TimeObj.StartTime.tv_sec = expl_temp.tv_sec;
  obj->TimeObj.StartTime.tv_nsec = expl_temp.tv_nsec;
  b_st.site = &dg_emlrtRSI;
  st.site = &xf_emlrtRSI;
  DampedBFGSwGradientProjection_solveInternal(&st, obj, xSol, &exitFlag, &err,
    &iter);
  *solutionInfo_RRAttempts = 0.0;
  *solutionInfo_Iterations = iter;
  *solutionInfo_Error = err;
  exitFlagPrev = exitFlag;
  emxInit_real_T1(&newseed, 1);
  emxInit_real_T1(&ub, 1);
  emxInit_real_T1(&lb, 1);
  emxInit_real_T1(&rn, 1);
  emxInit_real_T1(&x, 1);
  emxInit_real_T1(&b_obj, 1);
  emxInit_real_T1(&c_obj, 1);
  emxInit_boolean_T(&r, 1);
  emxInit_boolean_T(&r1, 1);
  emxInit_boolean_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  emxInit_boolean_T(&r4, 1);
  emxInit_boolean_T(&r5, 1);
  exitg1 = false;
  while ((!exitg1) && (obj->RandomRestart && (err > tol))) {
    obj->MaxNumIterationInternal -= iter;
    st.site = &yf_emlrtRSI;
    obj->MaxTimeInternal = obj->MaxTime - SystemTimeProvider_getElapsedTime(&st,
      &obj->TimeObj);
    if (obj->MaxNumIterationInternal <= 0.0) {
      exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
    }

    if ((exitFlag ==
         robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded) ||
        (exitFlag == robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded))
    {
      exitFlagPrev = exitFlag;
      exitg1 = true;
    } else {
      st.site = &ag_emlrtRSI;
      args = obj->ExtraArgs;
      b_st.site = &ok_emlrtRSI;
      d_obj = args->Robot;
      b_i = newseed->size[0];
      err = emlrtNonNegativeCheckR2012b(d_obj->PositionNumber, &xb_emlrtDCI,
        &b_st);
      newseed->size[0] = (int32_T)emlrtIntegerCheckR2012b(err, &wb_emlrtDCI,
        &b_st);
      emxEnsureCapacity_real_T1(newseed, b_i);
      err = emlrtNonNegativeCheckR2012b(d_obj->PositionNumber, &xb_emlrtDCI,
        &b_st);
      nx = (int32_T)emlrtIntegerCheckR2012b(err, &wb_emlrtDCI, &b_st);
      for (b_i = 0; b_i < nx; b_i++) {
        newseed->data[b_i] = 0.0;
      }

      err = d_obj->NumBodies;
      b_i = (int32_T)err - 1;
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, err, mxDOUBLE_CLASS, (int32_T)err,
        &g_emlrtRTEI, &b_st);
      for (i = 0; i <= b_i; i++) {
        nx = emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)i + 1U), 1, 6,
          &rb_emlrtBCI, &b_st);
        for (i1 = 0; i1 < 2; i1++) {
          p[i1] = d_obj->PositionDoFMap[(nx + 6 * i1) - 1];
        }

        if (p[0] <= p[1]) {
          c_st.site = &pk_emlrtRSI;
          e_obj = d_obj->Bodies[i]->JointInternal;
          if ((int32_T)emlrtIntegerCheckR2012b(e_obj->PositionNumber,
               &vb_emlrtDCI, &c_st) == 0) {
            i1 = ub->size[0];
            ub->size[0] = 1;
            emxEnsureCapacity_real_T1(ub, i1);
            ub->data[0] = rtNaN;
          } else {
            nx = e_obj->PositionLimitsInternal->size[0];
            i1 = b_obj->size[0];
            b_obj->size[0] = nx;
            emxEnsureCapacity_real_T1(b_obj, i1);
            for (i1 = 0; i1 < nx; i1++) {
              b_obj->data[i1] = e_obj->PositionLimitsInternal->data[i1 +
                e_obj->PositionLimitsInternal->size[0]];
            }

            i1 = ub->size[0];
            ub->size[0] = b_obj->size[0];
            emxEnsureCapacity_real_T1(ub, i1);
            nx = b_obj->size[0];
            if (nx - 1 >= 0) {
              memcpy(&ub->data[0], &b_obj->data[0], (uint32_T)nx * sizeof(real_T));
            }

            nx = e_obj->PositionLimitsInternal->size[0];
            i1 = c_obj->size[0];
            c_obj->size[0] = nx;
            emxEnsureCapacity_real_T1(c_obj, i1);
            for (i1 = 0; i1 < nx; i1++) {
              c_obj->data[i1] = e_obj->PositionLimitsInternal->data[i1];
            }

            i1 = lb->size[0];
            lb->size[0] = c_obj->size[0];
            emxEnsureCapacity_real_T1(lb, i1);
            nx = c_obj->size[0];
            if (nx - 1 >= 0) {
              memcpy(&lb->data[0], &c_obj->data[0], (uint32_T)nx * sizeof(real_T));
            }

            i1 = r->size[0];
            r->size[0] = lb->size[0];
            emxEnsureCapacity_boolean_T(r, i1);
            nx = lb->size[0];
            for (i1 = 0; i1 < nx; i1++) {
              r->data[i1] = ((!muDoubleScalarIsInf(lb->data[i1])) &&
                             (!muDoubleScalarIsNaN(lb->data[i1])));
            }

            d_st.site = &qk_emlrtRSI;
            guard1 = false;
            guard2 = false;
            guard3 = false;
            if (all(&d_st, r)) {
              i1 = r1->size[0];
              r1->size[0] = ub->size[0];
              emxEnsureCapacity_boolean_T(r1, i1);
              nx = ub->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r1->data[i1] = ((!muDoubleScalarIsInf(ub->data[i1])) &&
                                (!muDoubleScalarIsNaN(ub->data[i1])));
              }

              d_st.site = &qk_emlrtRSI;
              if (all(&d_st, r1)) {
                d_st.site = &rk_emlrtRSI;
                c_rand(moduleInstance, &d_st, e_obj->PositionNumber, rn);
                if (ub->size[0] == lb->size[0]) {
                  i1 = ub->size[0];
                  emxEnsureCapacity_real_T1(ub, i1);
                  nx = ub->size[0];
                  for (i1 = 0; i1 < nx; i1++) {
                    ub->data[i1] -= lb->data[i1];
                  }
                } else {
                  minus(ub, lb);
                }

                if (rn->size[0] == ub->size[0]) {
                  i1 = rn->size[0];
                  emxEnsureCapacity_real_T1(rn, i1);
                  nx = rn->size[0];
                  for (i1 = 0; i1 < nx; i1++) {
                    rn->data[i1] *= ub->data[i1];
                  }
                } else {
                  times(rn, ub);
                }

                if (lb->size[0] == rn->size[0]) {
                  i1 = ub->size[0];
                  ub->size[0] = lb->size[0];
                  emxEnsureCapacity_real_T1(ub, i1);
                  nx = lb->size[0];
                  for (i1 = 0; i1 < nx; i1++) {
                    ub->data[i1] = lb->data[i1] + rn->data[i1];
                  }
                } else {
                  plus(ub, lb, rn);
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              i1 = r2->size[0];
              r2->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r2, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r2->data[i1] = ((!muDoubleScalarIsInf(lb->data[i1])) &&
                                (!muDoubleScalarIsNaN(lb->data[i1])));
              }

              d_st.site = &sk_emlrtRSI;
              if (all(&d_st, r2)) {
                i1 = r3->size[0];
                r3->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r3, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r3->data[i1] = (muDoubleScalarIsInf(ub->data[i1]) ||
                                  muDoubleScalarIsNaN(ub->data[i1]));
                }

                d_st.site = &sk_emlrtRSI;
                if (any(&d_st, r3)) {
                  b_ub[0] = (real_T)lb->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &tk_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, x);
                  nx = x->size[0] - 1;
                  i1 = ub->size[0];
                  ub->size[0] = x->size[0];
                  emxEnsureCapacity_real_T1(ub, i1);
                  for (k = 0; k <= nx; k++) {
                    ub->data[k] = muDoubleScalarAbs(x->data[k]);
                  }

                  if (lb->size[0] == ub->size[0]) {
                    i1 = ub->size[0];
                    ub->size[0] = lb->size[0];
                    emxEnsureCapacity_real_T1(ub, i1);
                    nx = lb->size[0];
                    for (i1 = 0; i1 < nx; i1++) {
                      ub->data[i1] += lb->data[i1];
                    }
                  } else {
                    b_plus(ub, lb);
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            }

            if (guard2) {
              i1 = r4->size[0];
              r4->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r4, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r4->data[i1] = (muDoubleScalarIsInf(lb->data[i1]) ||
                                muDoubleScalarIsNaN(lb->data[i1]));
              }

              d_st.site = &uk_emlrtRSI;
              if (any(&d_st, r4)) {
                i1 = r5->size[0];
                r5->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r5, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r5->data[i1] = ((!muDoubleScalarIsInf(ub->data[i1])) &&
                                  (!muDoubleScalarIsNaN(ub->data[i1])));
                }

                d_st.site = &uk_emlrtRSI;
                if (all(&d_st, r5)) {
                  b_ub[0] = (real_T)ub->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &vk_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, x);
                  nx = x->size[0] - 1;
                  i1 = rn->size[0];
                  rn->size[0] = x->size[0];
                  emxEnsureCapacity_real_T1(rn, i1);
                  for (k = 0; k <= nx; k++) {
                    rn->data[k] = muDoubleScalarAbs(x->data[k]);
                  }

                  if (ub->size[0] == rn->size[0]) {
                    i1 = ub->size[0];
                    emxEnsureCapacity_real_T1(ub, i1);
                    nx = ub->size[0];
                    for (i1 = 0; i1 < nx; i1++) {
                      ub->data[i1] -= rn->data[i1];
                    }
                  } else {
                    minus(ub, rn);
                  }
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            }

            if (guard1) {
              nx = ub->size[0];
              b_ub[0] = (real_T)nx;
              b_ub[1] = 1.0;
              d_st.site = &wk_emlrtRSI;
              randn(moduleInstance, &d_st, b_ub, ub);
            }
          }

          if (p[0] > p[1]) {
            i1 = 0;
            k = 0;
          } else {
            i1 = newseed->size[0];
            k = (int32_T)emlrtIntegerCheckR2012b(p[0], &tb_emlrtDCI, &b_st);
            i1 = emlrtDynamicBoundsCheckR2012b(k, 1, i1, &sb_emlrtBCI, &b_st) -
              1;
            k = newseed->size[0];
            nx = (int32_T)emlrtIntegerCheckR2012b(p[1], &ub_emlrtDCI, &b_st);
            k = emlrtDynamicBoundsCheckR2012b(nx, 1, k, &tb_emlrtBCI, &b_st);
          }

          nx = ub->size[0];
          emlrtSubAssignSizeCheck1dR2017a(k - i1, nx, &i_emlrtECI, &b_st);
          nx = k - i1;
          for (k = 0; k < nx; k++) {
            newseed->data[i1 + k] = ub->data[k];
          }
        }
      }

      b_i = newseed->size[0];
      emlrtSubAssignSizeCheck1dR2017a(6, b_i, &h_emlrtECI, (emlrtConstCTX)sp);
      for (b_i = 0; b_i < 6; b_i++) {
        obj->SeedInternal[b_i] = newseed->data[b_i];
      }

      st.site = &bg_emlrtRSI;
      DampedBFGSwGradientProjection_solveInternal(&st, obj, b_xSol, &exitFlag,
        &err, &iter);
      if (err < *solutionInfo_Error) {
        for (i = 0; i < 6; i++) {
          xSol[i] = b_xSol[i];
        }

        *solutionInfo_Error = err;
        exitFlagPrev = exitFlag;
      }

      (*solutionInfo_RRAttempts)++;
      *solutionInfo_Iterations += iter;
    }
  }

  emxFree_boolean_T(&r5);
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r3);
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&c_obj);
  emxFree_real_T(&b_obj);
  emxFree_real_T(&x);
  emxFree_real_T(&rn);
  emxFree_real_T(&lb);
  emxFree_real_T(&ub);
  emxFree_real_T(&newseed);
  *solutionInfo_ExitFlag = (real_T)exitFlagPrev;
  if (*solutionInfo_Error < tol) {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 7;
    for (b_i = 0; b_i < 7; b_i++) {
      solutionInfo_Status_data[b_i] = cv1[b_i];
    }
  } else {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 14;
    for (b_i = 0; b_i < 14; b_i++) {
      solutionInfo_Status_data[b_i] = cv[b_i];
    }
  }
}

static void SystemTimeProvider_reset(robotics_core_internal_SystemTimeProvider
  *obj)
{
  emlrtStack st;
  emlrtTimespec expl_temp;
  st.site = &cg_emlrtRSI;
  expl_temp = tic();
  obj->StartTime.tv_sec = expl_temp.tv_sec;
  obj->StartTime.tv_nsec = expl_temp.tv_nsec;
  st.site = &dg_emlrtRSI;
}

static emlrtTimespec tic(void)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec tstart;
  st.site = &eg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &gg_emlrtRSI;
  emlrtClockGettimeMonotonic(&tstart);
  return tstart;
}

static void DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[6],
  robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T *iter)
{
  static real_T e_y[36] = { 1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4901161193847656E-8,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.4901161193847656E-8 };

  __m128d r6;
  __m128d r7;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *activeSet;
  emxArray_boolean_T *b_a;
  emxArray_boolean_T *b_activeSet;
  emxArray_boolean_T *b_bIn;
  emxArray_boolean_T *c_activeSet;
  emxArray_int32_T *ii;
  emxArray_int32_T *inactiveConstraintIndices;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *a;
  emxArray_real_T *a__2;
  emxArray_real_T *bIn;
  emxArray_real_T *b_A;
  emxArray_real_T *b_args;
  emxArray_real_T *b_b;
  emxArray_real_T *b_y;
  emxArray_real_T *c_A;
  emxArray_real_T *c_a;
  emxArray_real_T *c_args;
  emxArray_real_T *c_bIn;
  emxArray_real_T *c_y;
  emxArray_real_T *d_obj;
  emxArray_real_T *e_obj;
  emxArray_real_T *f_obj;
  emxArray_real_T *g_obj;
  emxArray_real_T *grad;
  emxArray_real_T *gradNew;
  emxArray_real_T *y;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_IKExtraArgs *r;
  robotics_manip_internal_IKExtraArgs *r8;
  robotics_manip_internal_IKExtraArgs *r9;
  real_T H[36];
  real_T V[36];
  real_T b_H[36];
  real_T b_V[36];
  real_T b_sNew[36];
  real_T c_H[36];
  real_T d_a[36];
  real_T e_a[36];
  real_T f_a[36];
  real_T Hg[6];
  real_T b_x[6];
  real_T c_x[6];
  real_T d_x[6];
  real_T e_x[6];
  real_T f_x[6];
  real_T g_x[6];
  real_T sNew[6];
  real_T x[6];
  real_T b_cost;
  real_T b_costNew;
  real_T b_gamma;
  real_T beta;
  real_T c_costNew;
  real_T cost;
  real_T costNew;
  real_T d;
  real_T d_y;
  real_T lambda;
  real_T m;
  real_T sigma;
  int32_T b_i;
  int32_T b_obj;
  int32_T c_obj;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T i10;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T idxl;
  int32_T loop_ub;
  int32_T trueCount;
  uint32_T unnamed_idx_0;
  boolean_T flag;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 6; i++) {
    x[i] = obj->SeedInternal[i];
  }

  st.site = &hg_emlrtRSI;
  SystemTimeProvider_reset(&obj->TimeObjInternal);
  emxInit_real_T(&a__2, 2);
  for (b_i = 0; b_i < 6; b_i++) {
    b_x[b_i] = x[b_i];
  }

  st.site = &ig_emlrtRSI;
  IKHelpers_computeCost(&st, b_x, obj->ExtraArgs, &cost, V, a__2, &r);
  b_cost = cost;
  obj->ExtraArgs = r;
  st.site = &jg_emlrtRSI;
  args = obj->ExtraArgs;
  emxInit_real_T1(&b_args, 1);
  i1 = b_args->size[0];
  b_args->size[0] = args->GradTemp->size[0];
  emxEnsureCapacity_real_T1(b_args, i1);
  loop_ub = args->GradTemp->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_args->data[i1] = args->GradTemp->data[i1];
  }

  emxInit_real_T1(&grad, 1);
  i1 = grad->size[0];
  grad->size[0] = b_args->size[0];
  emxEnsureCapacity_real_T1(grad, i1);
  loop_ub = b_args->size[0];
  if (loop_ub - 1 >= 0) {
    memcpy(&grad->data[0], &b_args->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  emxFree_real_T(&b_args);
  eye(H);
  emxInit_boolean_T(&activeSet, 1);
  emxInit_real_T(&A, 2);
  emxInit_real_T1(&a, 1);
  emxInit_real_T(&B, 2);
  if (obj->ConstraintsOn) {
    i1 = B->size[0] * B->size[1];
    B->size[0] = obj->ConstraintMatrix->size[0];
    B->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(B, i1);
    b_obj = obj->ConstraintMatrix->size[0];
    c_obj = obj->ConstraintMatrix->size[1];
    emxInit_real_T1(&d_obj, 1);
    i1 = d_obj->size[0];
    d_obj->size[0] = b_obj * c_obj;
    emxEnsureCapacity_real_T1(d_obj, i1);
    loop_ub = b_obj * c_obj;
    for (i1 = 0; i1 < loop_ub; i1++) {
      d_obj->data[i1] = obj->ConstraintMatrix->data[i1];
    }

    loop_ub = d_obj->size[0];
    if (loop_ub - 1 >= 0) {
      memcpy(&B->data[0], &d_obj->data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    emxFree_real_T(&d_obj);
    st.site = &gh_emlrtRSI;
    dynamic_size_checks(&st, B, B->size[0]);
    for (i3 = 0; i3 < 6; i3++) {
      c_x[i3] = x[i3];
    }

    st.site = &fh_emlrtRSI;
    b_mtimes(B, c_x, a);
    if (a->size[0] == obj->ConstraintBound->size[0]) {
      emxInit_boolean_T(&b_a, 1);
      i1 = b_a->size[0];
      b_a->size[0] = a->size[0];
      emxEnsureCapacity_boolean_T(b_a, i1);
      loop_ub = a->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_a->data[i1] = (a->data[i1] >= obj->ConstraintBound->data[i1]);
      }

      i1 = activeSet->size[0];
      activeSet->size[0] = b_a->size[0];
      emxEnsureCapacity_boolean_T(activeSet, i1);
      loop_ub = b_a->size[0];
      if (loop_ub - 1 >= 0) {
        memcpy(&activeSet->data[0], &b_a->data[0], (uint32_T)loop_ub * sizeof
               (boolean_T));
      }

      emxFree_boolean_T(&b_a);
    } else {
      binary_expand_op_1(activeSet, a, obj);
    }

    c_obj = activeSet->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= c_obj; i++) {
      if (activeSet->data[i]) {
        trueCount++;
      }
    }

    emxInit_int32_T1(&r5, 1);
    i1 = r5->size[0];
    r5->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r5, i1);
    trueCount = 0;
    for (i = 0; i <= c_obj; i++) {
      if (activeSet->data[i]) {
        r5->data[trueCount] = i;
        trueCount++;
      }
    }

    b_obj = obj->ConstraintMatrix->size[1];
    i1 = A->size[0] * A->size[1];
    A->size[0] = obj->ConstraintMatrix->size[0];
    A->size[1] = r5->size[0];
    emxEnsureCapacity_real_T(A, i1);
    loop_ub = r5->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      trueCount = obj->ConstraintMatrix->size[0];
      for (i2 = 0; i2 < trueCount; i2++) {
        i4 = r5->data[i1];
        A->data[i2 + A->size[0] * i1] = obj->ConstraintMatrix->data[i2 +
          obj->ConstraintMatrix->size[0] * emlrtDynamicBoundsCheckR2012b(i4, 0,
          b_obj - 1, &yb_emlrtBCI, (emlrtConstCTX)sp)];
      }
    }

    emxFree_int32_T(&r5);
  } else {
    unnamed_idx_0 = (uint32_T)obj->ConstraintBound->size[0];
    i1 = activeSet->size[0];
    activeSet->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity_boolean_T(activeSet, i1);
    loop_ub = (int32_T)unnamed_idx_0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      activeSet->data[i1] = false;
    }

    A->size[0] = 6;
    A->size[1] = 0;
  }

  i1 = A->size[1] - 1;
  emxInit_real_T(&y, 2);
  for (c_obj = 0; c_obj <= i1; c_obj++) {
    i2 = A->size[1];
    trueCount = emlrtDynamicBoundsCheckR2012b(c_obj + 1, 1, i2, &ub_emlrtBCI,
      (emlrtConstCTX)sp);
    i2 = a->size[0];
    a->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(a, i2);
    loop_ub = A->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      a->data[i2] = A->data[i2 + A->size[0] * (trueCount - 1)];
    }

    st.site = &gh_emlrtRSI;
    b_dynamic_size_checks(&st, a, A->size[0]);
    st.site = &gh_emlrtRSI;
    c_dynamic_size_checks(&st, a, A->size[0]);
    sigma = 0.0;
    for (i2 = 0; i2 < 6; i2++) {
      c_x[i2] = 0.0;
      for (i4 = 0; i4 < 6; i4++) {
        beta = c_x[i2] + A->data[i4 + A->size[0] * c_obj] * H[i4 + 6 * i2];
        c_x[i2] = beta;
      }

      sigma += c_x[i2] * A->data[i2 + A->size[0] * c_obj];
    }

    sigma = 1.0 / sigma;
    i2 = y->size[0] * y->size[1];
    y->size[0] = A->size[0];
    y->size[1] = A->size[0];
    emxEnsureCapacity_real_T(y, i2);
    loop_ub = A->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      trueCount = A->size[0];
      for (i4 = 0; i4 < trueCount; i4++) {
        y->data[i4 + y->size[0] * i2] = A->data[i4 + A->size[0] * c_obj] *
          A->data[i2 + A->size[0] * c_obj];
      }
    }

    st.site = &gh_emlrtRSI;
    d_dynamic_size_checks(&st, y, y->size[0]);
    for (i2 = 0; i2 <= 34; i2 += 2) {
      r6 = _mm_loadu_pd(&H[i2]);
      _mm_storeu_pd(&d_a[i2], _mm_mul_pd(_mm_set1_pd(sigma), r6));
    }

    memcpy(&e_a[0], &d_a[0], 36U * sizeof(real_T));
    st.site = &fh_emlrtRSI;
    c_mtimes(e_a, y, a__2);
    st.site = &gh_emlrtRSI;
    e_dynamic_size_checks(&st, a__2->size[1]);
    for (i2 = 0; i2 < 6; i2++) {
      for (i4 = 0; i4 < 6; i4++) {
        d = 0.0;
        for (trueCount = 0; trueCount < 6; trueCount++) {
          d += a__2->data[i2 + 6 * trueCount] * H[trueCount + 6 * i4];
        }

        e_a[i2 + 6 * i4] = H[i2 + 6 * i4] - d;
      }
    }

    memcpy(&H[0], &e_a[0], 36U * sizeof(real_T));
  }

  for (i = 0; i < 6; i++) {
    xSol[i] = x[i];
  }

  d = obj->MaxNumIterationInternal;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &h_emlrtRTEI, (emlrtConstCTX)sp);
  i = 0;
  emxInit_real_T1(&bIn, 1);
  emxInit_int32_T1(&inactiveConstraintIndices, 1);
  emxInit_real_T1(&gradNew, 1);
  emxInit_int32_T1(&ii, 1);
  emxInit_real_T(&b_b, 2);
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&c_y, 2);
  emxInit_int32_T1(&r1, 1);
  emxInit_int32_T1(&r2, 1);
  emxInit_int32_T1(&r3, 1);
  emxInit_int32_T1(&r4, 1);
  emxInit_real_T(&b_A, 2);
  emxInit_boolean_T(&b_activeSet, 1);
  emxInit_real_T1(&c_a, 1);
  emxInit_real_T(&e_obj, 2);
  emxInit_boolean_T(&c_activeSet, 1);
  emxInit_real_T1(&c_args, 1);
  emxInit_real_T(&c_A, 2);
  emxInit_real_T1(&f_obj, 1);
  emxInit_real_T1(&g_obj, 1);
  emxInit_boolean_T(&b_bIn, 1);
  emxInit_real_T1(&c_bIn, 1);
  do {
    exitg2 = 0;
    if (i <= (int32_T)d - 1) {
      st.site = &kg_emlrtRSI;
      b_st.site = &kg_emlrtRSI;
      sigma = SystemTimeProvider_getElapsedTime(&b_st, &obj->TimeObjInternal);
      flag = (sigma > obj->MaxTimeInternal);
      if (flag) {
        *exitFlag = robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded;
        st.site = &lg_emlrtRSI;
        *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
        *iter = (real_T)i + 1.0;
        exitg2 = 1;
      } else {
        if ((A->size[0] == 0) || (A->size[1] == 0)) {
          i1 = a->size[0];
          a->size[0] = 1;
          emxEnsureCapacity_real_T1(a, i1);
          a->data[0] = 0.0;
        } else {
          st.site = &gh_emlrtRSI;
          g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
          st.site = &fh_emlrtRSI;
          d_mtimes(A, A, y);
          i1 = b_A->size[0] * b_A->size[1];
          b_A->size[0] = A->size[1];
          b_A->size[1] = A->size[0];
          emxEnsureCapacity_real_T(b_A, i1);
          loop_ub = A->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            trueCount = A->size[1];
            for (i2 = 0; i2 < trueCount; i2++) {
              b_A->data[i2 + b_A->size[0] * i1] = A->data[i1 + A->size[0] * i2];
            }
          }

          st.site = &mg_emlrtRSI;
          mldivide(&st, y, b_A, B);
          st.site = &gh_emlrtRSI;
          h_dynamic_size_checks(&st, B, grad, B->size[1], grad->size[0]);
          st.site = &fh_emlrtRSI;
          e_mtimes(B, grad, a);
        }

        st.site = &gh_emlrtRSI;
        f_dynamic_size_checks(&st, grad, grad->size[0]);
        for (i1 = 0; i1 < 6; i1++) {
          Hg[i1] = 0.0;
          for (i2 = 0; i2 < 6; i2++) {
            m = Hg[i1];
            m += H[i1 + 6 * i2] * grad->data[i2];
            Hg[i1] = m;
          }
        }

        for (i5 = 0; i5 < 6; i5++) {
          c_x[i5] = Hg[i5];
        }

        st.site = &ng_emlrtRSI;
        if (DampedBFGSwGradientProjection_atLocalMinimum(&st, obj, c_x, a)) {
          *exitFlag =
            robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound;
          st.site = &og_emlrtRSI;
          *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
          *iter = (real_T)i + 1.0;
          exitg2 = 1;
        } else {
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (obj->ConstraintsOn && ((A->size[0] != 0) && (A->size[1] != 0))) {
            st.site = &gh_emlrtRSI;
            g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
            st.site = &fh_emlrtRSI;
            d_mtimes(A, A, y);
            st.site = &pg_emlrtRSI;
            b_inv(&st, y, B);
            st.site = &qg_emlrtRSI;
            diag(&st, B, gradNew);
            st.site = &qg_emlrtRSI;
            d_sqrt(&st, gradNew);
            st.site = &hh_emlrtRSI;
            assertCompatibleDims(&st, a, gradNew);
            if (a->size[0] == gradNew->size[0]) {
              i1 = c_a->size[0];
              c_a->size[0] = a->size[0];
              emxEnsureCapacity_real_T1(c_a, i1);
              loop_ub = a->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                c_a->data[i1] = a->data[i1] / gradNew->data[i1];
              }

              st.site = &ih_emlrtRSI;
              maximum(&st, c_a, &sigma, &idxl);
            } else {
              st.site = &ih_emlrtRSI;
              binary_expand_op(&st, ih_emlrtRSI, a, gradNew, &sigma, &idxl);
            }

            if (c_norm(Hg) < 0.5 * sigma) {
              st.site = &sf_emlrtRSI;
              b_eml_find(&st, activeSet, ii);
              i1 = a->size[0];
              a->size[0] = ii->size[0];
              emxEnsureCapacity_real_T1(a, i1);
              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                a->data[i1] = (real_T)ii->data[i1];
              }

              i1 = a->size[0];
              emlrtDynamicBoundsCheckR2012b(idxl, 1, i1, &vb_emlrtBCI,
                (emlrtConstCTX)sp);
              i1 = activeSet->size[0];
              i2 = (int32_T)a->data[idxl - 1];
              activeSet->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1,
                &ac_emlrtBCI, (emlrtConstCTX)sp) - 1] = false;
              c_obj = activeSet->size[0] - 1;
              trueCount = 0;
              for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                if (activeSet->data[b_obj]) {
                  trueCount++;
                }
              }

              i1 = r3->size[0];
              r3->size[0] = trueCount;
              emxEnsureCapacity_int32_T(r3, i1);
              trueCount = 0;
              for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                if (activeSet->data[b_obj]) {
                  r3->data[trueCount] = b_obj;
                  trueCount++;
                }
              }

              b_obj = obj->ConstraintMatrix->size[1];
              i1 = A->size[0] * A->size[1];
              A->size[0] = obj->ConstraintMatrix->size[0];
              A->size[1] = r3->size[0];
              emxEnsureCapacity_real_T(A, i1);
              loop_ub = r3->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                trueCount = obj->ConstraintMatrix->size[0];
                for (i2 = 0; i2 < trueCount; i2++) {
                  i4 = r3->data[i1];
                  A->data[i2 + A->size[0] * i1] = obj->ConstraintMatrix->data[i2
                    + obj->ConstraintMatrix->size[0] *
                    emlrtDynamicBoundsCheckR2012b(i4, 0, b_obj - 1, &cc_emlrtBCI,
                    (emlrtConstCTX)sp)];
                }
              }

              st.site = &gh_emlrtRSI;
              g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
              st.site = &fh_emlrtRSI;
              d_mtimes(A, A, y);
              i1 = c_A->size[0] * c_A->size[1];
              c_A->size[0] = A->size[1];
              c_A->size[1] = A->size[0];
              emxEnsureCapacity_real_T(c_A, i1);
              loop_ub = A->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                trueCount = A->size[1];
                for (i2 = 0; i2 < trueCount; i2++) {
                  c_A->data[i2 + c_A->size[0] * i1] = A->data[i1 + A->size[0] *
                    i2];
                }
              }

              st.site = &rg_emlrtRSI;
              mldivide(&st, y, c_A, b_b);
              st.site = &gh_emlrtRSI;
              g_dynamic_size_checks(&st, A, b_b, A->size[1], b_b->size[0]);
              st.site = &fh_emlrtRSI;
              f_mtimes(A, b_b, B);
              eye(V);
              if ((B->size[0] == 6) && (B->size[1] == 6)) {
                for (i1 = 0; i1 < 36; i1++) {
                  V[i1] -= B->data[i1];
                }
              } else {
                b_minus(V, B);
              }

              b_obj = obj->ConstraintMatrix->size[0];
              trueCount = (int32_T)a->data[idxl - 1];
              c_obj = obj->ConstraintMatrix->size[1];
              trueCount = emlrtDynamicBoundsCheckR2012b(trueCount, 1, c_obj,
                &wb_emlrtBCI, (emlrtConstCTX)sp);
              i1 = g_obj->size[0];
              g_obj->size[0] = b_obj;
              emxEnsureCapacity_real_T1(g_obj, i1);
              for (i1 = 0; i1 < b_obj; i1++) {
                g_obj->data[i1] = obj->ConstraintMatrix->data[i1 +
                  obj->ConstraintMatrix->size[0] * (trueCount - 1)];
              }

              i1 = a->size[0];
              a->size[0] = g_obj->size[0];
              emxEnsureCapacity_real_T1(a, i1);
              loop_ub = g_obj->size[0];
              if (loop_ub - 1 >= 0) {
                memcpy(&a->data[0], &g_obj->data[0], (uint32_T)loop_ub * sizeof
                       (real_T));
              }

              st.site = &gh_emlrtRSI;
              b_dynamic_size_checks(&st, a, a->size[0]);
              st.site = &gh_emlrtRSI;
              c_dynamic_size_checks(&st, a, a->size[0]);
              for (i1 = 0; i1 < 6; i1++) {
                c_x[i1] = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  sigma = c_x[i1] + a->data[i2] * V[i2 + 6 * i1];
                  c_x[i1] = sigma;
                }
              }

              sigma = 0.0;
              for (i1 = 0; i1 < 6; i1++) {
                sigma += c_x[i1] * a->data[i1];
              }

              sigma = 1.0 / sigma;
              i1 = y->size[0] * y->size[1];
              y->size[0] = a->size[0];
              y->size[1] = a->size[0];
              emxEnsureCapacity_real_T(y, i1);
              loop_ub = a->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                trueCount = a->size[0];
                for (i2 = 0; i2 < trueCount; i2++) {
                  y->data[i2 + y->size[0] * i1] = a->data[i2] * a->data[i1];
                }
              }

              st.site = &gh_emlrtRSI;
              d_dynamic_size_checks(&st, y, y->size[0]);
              for (i1 = 0; i1 <= 34; i1 += 2) {
                r6 = _mm_loadu_pd(&V[i1]);
                _mm_storeu_pd(&f_a[i1], _mm_mul_pd(_mm_set1_pd(sigma), r6));
              }

              memcpy(&e_a[0], &f_a[0], 36U * sizeof(real_T));
              st.site = &fh_emlrtRSI;
              c_mtimes(e_a, y, a__2);
              st.site = &gh_emlrtRSI;
              e_dynamic_size_checks(&st, a__2->size[1]);
              for (i1 = 0; i1 < 6; i1++) {
                for (i2 = 0; i2 < 6; i2++) {
                  m = 0.0;
                  for (i4 = 0; i4 < 6; i4++) {
                    m += a__2->data[i1 + 6 * i4] * V[i4 + 6 * i2];
                  }

                  H[i1 + 6 * i2] += m;
                }
              }

              i++;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            for (i1 = 0; i1 <= 4; i1 += 2) {
              r6 = _mm_loadu_pd(&Hg[i1]);
              _mm_storeu_pd(&Hg[i1], _mm_mul_pd(r6, _mm_set1_pd(-1.0)));
            }

            idxl = -1;
            if (obj->ConstraintsOn) {
              i1 = b_activeSet->size[0];
              b_activeSet->size[0] = activeSet->size[0];
              emxEnsureCapacity_boolean_T(b_activeSet, i1);
              loop_ub = activeSet->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_activeSet->data[i1] = !activeSet->data[i1];
              }

              st.site = &sg_emlrtRSI;
              if (any(&st, b_activeSet)) {
                c_obj = activeSet->size[0] - 1;
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    trueCount++;
                  }
                }

                i1 = bIn->size[0];
                bIn->size[0] = trueCount;
                emxEnsureCapacity_real_T1(bIn, i1);
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    i1 = obj->ConstraintBound->size[0] - 1;
                    bIn->data[trueCount] = obj->ConstraintBound->
                      data[emlrtDynamicBoundsCheckR2012b(b_obj, 0, i1,
                      &bc_emlrtBCI, (emlrtConstCTX)sp)];
                    trueCount++;
                  }
                }

                c_obj = activeSet->size[0] - 1;
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    trueCount++;
                  }
                }

                i1 = r2->size[0];
                r2->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r2, i1);
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    r2->data[trueCount] = b_obj;
                    trueCount++;
                  }
                }

                b_obj = obj->ConstraintMatrix->size[0];
                c_obj = obj->ConstraintMatrix->size[1] - 1;
                i1 = e_obj->size[0] * e_obj->size[1];
                e_obj->size[0] = b_obj;
                e_obj->size[1] = r2->size[0];
                emxEnsureCapacity_real_T(e_obj, i1);
                loop_ub = r2->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  for (i2 = 0; i2 < b_obj; i2++) {
                    i4 = r2->data[i1];
                    e_obj->data[i2 + e_obj->size[0] * i1] =
                      obj->ConstraintMatrix->data[i2 + obj->
                      ConstraintMatrix->size[0] * emlrtDynamicBoundsCheckR2012b
                      (i4, 0, c_obj, &dc_emlrtBCI, (emlrtConstCTX)sp)];
                  }
                }

                i1 = B->size[0] * B->size[1];
                B->size[0] = e_obj->size[0];
                B->size[1] = e_obj->size[1];
                emxEnsureCapacity_real_T(B, i1);
                loop_ub = e_obj->size[0] * e_obj->size[1];
                if (loop_ub - 1 >= 0) {
                  memcpy(&B->data[0], &e_obj->data[0], (uint32_T)loop_ub *
                         sizeof(real_T));
                }

                i1 = c_activeSet->size[0];
                c_activeSet->size[0] = activeSet->size[0];
                emxEnsureCapacity_boolean_T(c_activeSet, i1);
                loop_ub = activeSet->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_activeSet->data[i1] = !activeSet->data[i1];
                }

                st.site = &sf_emlrtRSI;
                b_eml_find(&st, c_activeSet, ii);
                i1 = inactiveConstraintIndices->size[0];
                inactiveConstraintIndices->size[0] = ii->size[0];
                emxEnsureCapacity_int32_T(inactiveConstraintIndices, i1);
                loop_ub = ii->size[0];
                if (loop_ub - 1 >= 0) {
                  memcpy(&inactiveConstraintIndices->data[0], &ii->data[0],
                         (uint32_T)loop_ub * sizeof(int32_T));
                }

                st.site = &gh_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                for (i9 = 0; i9 < 6; i9++) {
                  c_x[i9] = x[i9];
                }

                st.site = &fh_emlrtRSI;
                b_mtimes(B, c_x, a);
                st.site = &gh_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                for (i10 = 0; i10 < 6; i10++) {
                  c_x[i10] = Hg[i10];
                }

                st.site = &fh_emlrtRSI;
                b_mtimes(B, c_x, gradNew);
                if (bIn->size[0] == a->size[0]) {
                  i1 = bIn->size[0];
                  emxEnsureCapacity_real_T1(bIn, i1);
                  loop_ub = bIn->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    bIn->data[i1] -= a->data[i1];
                  }
                } else {
                  minus(bIn, a);
                }

                st.site = &hh_emlrtRSI;
                assertCompatibleDims(&st, bIn, gradNew);
                if (bIn->size[0] == gradNew->size[0]) {
                  i1 = bIn->size[0];
                  emxEnsureCapacity_real_T1(bIn, i1);
                  loop_ub = bIn->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    bIn->data[i1] /= gradNew->data[i1];
                  }
                } else {
                  rdivide(bIn, gradNew);
                }

                i1 = b_bIn->size[0];
                b_bIn->size[0] = bIn->size[0];
                emxEnsureCapacity_boolean_T(b_bIn, i1);
                loop_ub = bIn->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_bIn->data[i1] = (bIn->data[i1] > 0.0);
                }

                st.site = &sf_emlrtRSI;
                b_eml_find(&st, b_bIn, ii);
                i1 = a->size[0];
                a->size[0] = ii->size[0];
                emxEnsureCapacity_real_T1(a, i1);
                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  a->data[i1] = (real_T)ii->data[i1];
                }

                if (a->size[0] != 0) {
                  c_obj = bIn->size[0] - 1;
                  trueCount = 0;
                  for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                    if (bIn->data[b_obj] > 0.0) {
                      trueCount++;
                    }
                  }

                  i1 = r1->size[0];
                  r1->size[0] = trueCount;
                  emxEnsureCapacity_int32_T(r1, i1);
                  trueCount = 0;
                  for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                    if (bIn->data[b_obj] > 0.0) {
                      r1->data[trueCount] = b_obj;
                      trueCount++;
                    }
                  }

                  trueCount = bIn->size[0];
                  loop_ub = r1->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r1->data[i1];
                    emlrtDynamicBoundsCheckR2012b(i2, 0, trueCount - 1,
                      &gc_emlrtBCI, (emlrtConstCTX)sp);
                  }

                  i1 = c_bIn->size[0];
                  c_bIn->size[0] = r1->size[0];
                  emxEnsureCapacity_real_T1(c_bIn, i1);
                  loop_ub = r1->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    c_bIn->data[i1] = bIn->data[r1->data[i1]];
                  }

                  st.site = &jh_emlrtRSI;
                  minimum(&st, c_bIn, &lambda, &idxl);
                  i1 = inactiveConstraintIndices->size[0];
                  i2 = a->size[0];
                  i2 = (int32_T)a->data[emlrtDynamicBoundsCheckR2012b(idxl, 1,
                    i2, &ic_emlrtBCI, (emlrtConstCTX)sp) - 1];
                  idxl = inactiveConstraintIndices->
                    data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hc_emlrtBCI,
                    (emlrtConstCTX)sp) - 1];
                } else {
                  lambda = 0.0;
                }
              } else {
                lambda = 0.0;
              }
            } else {
              lambda = 0.0;
            }

            if (lambda > 0.0) {
              b_gamma = minimum2(1.0, lambda);
            } else {
              b_gamma = 1.0;
            }

            beta = obj->ArmijoRuleBeta;
            sigma = obj->ArmijoRuleSigma;
            for (i1 = 0; i1 <= 4; i1 += 2) {
              r6 = _mm_loadu_pd(&Hg[i1]);
              r7 = _mm_loadu_pd(&x[i1]);
              _mm_storeu_pd(&d_x[i1], _mm_add_pd(r7, _mm_mul_pd(_mm_set1_pd
                (b_gamma), r6)));
            }

            for (i7 = 0; i7 < 6; i7++) {
              e_x[i7] = d_x[i7];
            }

            st.site = &tg_emlrtRSI;
            IKHelpers_computeCost(&st, e_x, obj->ExtraArgs, &b_costNew, V, a__2,
                                  &r8);
            costNew = b_costNew;
            obj->ExtraArgs = r8;
            m = 0.0;
            do {
              exitg1 = 0;
              i1 = b_y->size[0] * b_y->size[1];
              b_y->size[0] = 1;
              b_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(b_y, i1);
              loop_ub = grad->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_y->data[i1] = -sigma * grad->data[i1];
              }

              st.site = &gh_emlrtRSI;
              i_dynamic_size_checks(&st, b_y, b_y->size[1]);
              d_y = 0.0;
              for (i1 = 0; i1 < 6; i1++) {
                d_y += b_y->data[i1] * (b_gamma * Hg[i1]);
              }

              if (b_cost - costNew < d_y) {
                st.site = &ug_emlrtRSI;
                flag = (b_gamma < obj->StepTolerance);
                if (flag) {
                  *exitFlag =
                    robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum;
                  st.site = &vg_emlrtRSI;
                  *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
                  *iter = (real_T)i + 1.0;
                  exitg1 = 1;
                } else {
                  b_gamma *= beta;
                  m++;
                  for (i1 = 0; i1 <= 4; i1 += 2) {
                    r6 = _mm_loadu_pd(&Hg[i1]);
                    r7 = _mm_loadu_pd(&x[i1]);
                    _mm_storeu_pd(&f_x[i1], _mm_add_pd(r7, _mm_mul_pd
                      (_mm_set1_pd(b_gamma), r6)));
                  }

                  for (i8 = 0; i8 < 6; i8++) {
                    g_x[i8] = f_x[i8];
                  }

                  st.site = &wg_emlrtRSI;
                  IKHelpers_computeCost(&st, g_x, obj->ExtraArgs, &c_costNew, V,
                                        a__2, &r9);
                  costNew = c_costNew;
                  obj->ExtraArgs = r9;
                }
              } else {
                for (b_obj = 0; b_obj <= 4; b_obj += 2) {
                  r6 = _mm_loadu_pd(&Hg[b_obj]);
                  r7 = _mm_loadu_pd(&x[b_obj]);
                  _mm_storeu_pd(&xSol[b_obj], _mm_add_pd(r7, _mm_mul_pd
                    (_mm_set1_pd(b_gamma), r6)));
                }

                st.site = &xg_emlrtRSI;
                args = obj->ExtraArgs;
                i1 = c_args->size[0];
                c_args->size[0] = args->GradTemp->size[0];
                emxEnsureCapacity_real_T1(c_args, i1);
                loop_ub = args->GradTemp->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_args->data[i1] = args->GradTemp->data[i1];
                }

                i1 = gradNew->size[0];
                gradNew->size[0] = c_args->size[0];
                emxEnsureCapacity_real_T1(gradNew, i1);
                loop_ub = c_args->size[0];
                if (loop_ub - 1 >= 0) {
                  memcpy(&gradNew->data[0], &c_args->data[0], (uint32_T)loop_ub *
                         sizeof(real_T));
                }

                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = 1;
            } else if (m == 0.0) {
              m = 2.2204460492503131E-16;
              st.site = &yg_emlrtRSI;
              b_sqrt(&st, &m);
              if (muDoubleScalarAbs(b_gamma - lambda) < 1.4901161193847656E-8) {
                b_obj = obj->ConstraintMatrix->size[0];
                c_obj = obj->ConstraintMatrix->size[1];
                trueCount = emlrtDynamicBoundsCheckR2012b(idxl, 1, c_obj,
                  &xb_emlrtBCI, (emlrtConstCTX)sp);
                i1 = f_obj->size[0];
                f_obj->size[0] = b_obj;
                emxEnsureCapacity_real_T1(f_obj, i1);
                for (i1 = 0; i1 < b_obj; i1++) {
                  f_obj->data[i1] = obj->ConstraintMatrix->data[i1 +
                    obj->ConstraintMatrix->size[0] * (trueCount - 1)];
                }

                i1 = a->size[0];
                a->size[0] = f_obj->size[0];
                emxEnsureCapacity_real_T1(a, i1);
                loop_ub = f_obj->size[0];
                if (loop_ub - 1 >= 0) {
                  memcpy(&a->data[0], &f_obj->data[0], (uint32_T)loop_ub *
                         sizeof(real_T));
                }

                i1 = activeSet->size[0];
                activeSet->data[emlrtDynamicBoundsCheckR2012b(idxl, 1, i1,
                  &ec_emlrtBCI, (emlrtConstCTX)sp) - 1] = true;
                c_obj = activeSet->size[0] - 1;
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (activeSet->data[b_obj]) {
                    trueCount++;
                  }
                }

                i1 = r4->size[0];
                r4->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r4, i1);
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (activeSet->data[b_obj]) {
                    r4->data[trueCount] = b_obj;
                    trueCount++;
                  }
                }

                b_obj = obj->ConstraintMatrix->size[1];
                i1 = A->size[0] * A->size[1];
                A->size[0] = obj->ConstraintMatrix->size[0];
                A->size[1] = r4->size[0];
                emxEnsureCapacity_real_T(A, i1);
                loop_ub = r4->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  trueCount = obj->ConstraintMatrix->size[0];
                  for (i2 = 0; i2 < trueCount; i2++) {
                    i4 = r4->data[i1];
                    A->data[i2 + A->size[0] * i1] = obj->ConstraintMatrix->
                      data[i2 + obj->ConstraintMatrix->size[0] *
                      emlrtDynamicBoundsCheckR2012b(i4, 0, b_obj - 1,
                      &fc_emlrtBCI, (emlrtConstCTX)sp)];
                  }
                }

                st.site = &gh_emlrtRSI;
                b_dynamic_size_checks(&st, a, a->size[0]);
                st.site = &gh_emlrtRSI;
                c_dynamic_size_checks(&st, a, a->size[0]);
                i1 = y->size[0] * y->size[1];
                y->size[0] = a->size[0];
                y->size[1] = a->size[0];
                emxEnsureCapacity_real_T(y, i1);
                loop_ub = a->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  trueCount = a->size[0];
                  for (i2 = 0; i2 < trueCount; i2++) {
                    y->data[i2 + y->size[0] * i1] = a->data[i2] * a->data[i1];
                  }
                }

                st.site = &gh_emlrtRSI;
                j_dynamic_size_checks(&st, y, y->size[1]);
                memcpy(&e_a[0], &H[0], 36U * sizeof(real_T));
                st.site = &fh_emlrtRSI;
                g_mtimes(y, e_a, c_y);
                st.site = &gh_emlrtRSI;
                k_dynamic_size_checks(&st, c_y->size[0]);
                sigma = 0.0;
                for (i1 = 0; i1 < 6; i1++) {
                  c_x[i1] = 0.0;
                  for (i2 = 0; i2 < 6; i2++) {
                    beta = c_x[i1] + a->data[i2] * H[i2 + 6 * i1];
                    c_H[i1 + 6 * i2] = 0.0;
                    for (i4 = 0; i4 < 6; i4++) {
                      c_H[i1 + 6 * i2] += H[i1 + 6 * i4] * c_y->data[i4 + 6 * i2];
                    }

                    c_x[i1] = beta;
                  }

                  sigma += c_x[i1] * a->data[i1];
                }

                sigma = 1.0 / sigma;
                for (i1 = 0; i1 <= 34; i1 += 2) {
                  r6 = _mm_loadu_pd(&c_H[i1]);
                  r7 = _mm_loadu_pd(&H[i1]);
                  _mm_storeu_pd(&H[i1], _mm_sub_pd(r7, _mm_mul_pd(_mm_set1_pd
                    (sigma), r6)));
                }

                guard1 = true;
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }

          if (guard2) {
            if (gradNew->size[0] == grad->size[0]) {
              i1 = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, i1);
              loop_ub = gradNew->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                grad->data[i1] = gradNew->data[i1] - grad->data[i1];
              }
            } else {
              d_minus(grad, gradNew);
            }

            st.site = &gh_emlrtRSI;
            l_dynamic_size_checks(&st, grad, grad->size[0]);
            i1 = b_y->size[0] * b_y->size[1];
            b_y->size[0] = 1;
            b_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(b_y, i1);
            loop_ub = grad->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_y->data[i1] = 0.2 * grad->data[i1];
            }

            st.site = &gh_emlrtRSI;
            m_dynamic_size_checks(&st, b_y, b_y->size[1]);
            st.site = &gh_emlrtRSI;
            c_dynamic_size_checks(&st, grad, grad->size[0]);
            m = 0.0;
            for (i1 = 0; i1 < 6; i1++) {
              m += Hg[i1] * grad->data[i1];
            }

            d_y = 0.0;
            for (i1 = 0; i1 < 6; i1++) {
              c_x[i1] = 0.0;
              for (i2 = 0; i2 < 6; i2++) {
                beta = c_x[i1] + b_y->data[i2] * H[i2 + 6 * i1];
                c_x[i1] = beta;
              }

              d_y += c_x[i1] * grad->data[i1];
            }

            if (m < d_y) {
              i1 = b_y->size[0] * b_y->size[1];
              b_y->size[0] = 1;
              b_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(b_y, i1);
              loop_ub = grad->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_y->data[i1] = 0.8 * grad->data[i1];
              }

              st.site = &gh_emlrtRSI;
              m_dynamic_size_checks(&st, b_y, b_y->size[1]);
              st.site = &gh_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              st.site = &gh_emlrtRSI;
              b_dynamic_size_checks(&st, grad, grad->size[0]);
              st.site = &gh_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              st.site = &gh_emlrtRSI;
              l_dynamic_size_checks(&st, grad, grad->size[0]);
              d_y = 0.0;
              for (i1 = 0; i1 < 6; i1++) {
                c_x[i1] = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  beta = c_x[i1] + b_y->data[i2] * H[i2 + 6 * i1];
                  c_x[i1] = beta;
                }

                d_y += c_x[i1] * grad->data[i1];
              }

              beta = 0.0;
              m = 0.0;
              for (i1 = 0; i1 < 6; i1++) {
                c_x[i1] = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  sigma = c_x[i1] + grad->data[i2] * H[i2 + 6 * i1];
                  c_x[i1] = sigma;
                }

                beta += c_x[i1] * grad->data[i1];
                m += Hg[i1] * grad->data[i1];
              }

              sigma = d_y / (beta - m);
            } else {
              sigma = 1.0;
            }

            st.site = &gh_emlrtRSI;
            f_dynamic_size_checks(&st, grad, grad->size[0]);
            for (i1 = 0; i1 < 6; i1++) {
              m = 0.0;
              for (i2 = 0; i2 < 6; i2++) {
                m += (1.0 - sigma) * H[i1 + 6 * i2] * grad->data[i2];
              }

              sNew[i1] = sigma * Hg[i1] + m;
            }

            st.site = &gh_emlrtRSI;
            l_dynamic_size_checks(&st, grad, grad->size[0]);
            beta = 0.0;
            for (i1 = 0; i1 < 6; i1++) {
              beta += sNew[i1] * grad->data[i1];
            }

            i1 = a__2->size[0] * a__2->size[1];
            a__2->size[0] = 6;
            a__2->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(a__2, i1);
            loop_ub = grad->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              for (i2 = 0; i2 < 6; i2++) {
                m = sNew[i2] * grad->data[i1];
                a__2->data[i2 + 6 * i1] = m / beta;
              }
            }

            eye(V);
            if (a__2->size[1] == 6) {
              for (i1 = 0; i1 < 36; i1++) {
                V[i1] -= a__2->data[i1];
              }
            } else {
              c_minus(V, a__2);
            }

            for (i1 = 0; i1 < 6; i1++) {
              for (i2 = 0; i2 < 6; i2++) {
                e_a[i1 + 6 * i2] = 0.0;
                for (i4 = 0; i4 < 6; i4++) {
                  e_a[i1 + 6 * i2] += V[i1 + 6 * i4] * H[i4 + 6 * i2];
                }
              }
            }

            for (i1 = 0; i1 < 6; i1++) {
              for (i2 = 0; i2 < 6; i2++) {
                b_V[i1 + 6 * i2] = 0.0;
                for (i4 = 0; i4 < 6; i4++) {
                  b_V[i1 + 6 * i2] += e_a[i1 + 6 * i4] * V[i2 + 6 * i4];
                }
              }
            }

            for (i1 = 0; i1 < 6; i1++) {
              for (i2 = 0; i2 <= 4; i2 += 2) {
                r6 = _mm_loadu_pd(&sNew[i2]);
                r6 = _mm_mul_pd(r6, _mm_set1_pd(sNew[i1]));
                _mm_storeu_pd(&b_sNew[i2 + 6 * i1], _mm_div_pd(r6, _mm_set1_pd
                  (beta)));
              }
            }

            for (i1 = 0; i1 <= 34; i1 += 2) {
              r6 = _mm_loadu_pd(&b_V[i1]);
              r7 = _mm_loadu_pd(&b_sNew[i1]);
              r6 = _mm_add_pd(r6, r7);
              r7 = _mm_loadu_pd(&e_y[i1]);
              _mm_storeu_pd(&b_H[i1], _mm_add_pd(r6, r7));
              _mm_storeu_pd(&H[i1], r6);
            }

            st.site = &ah_emlrtRSI;
            if (!isPositiveDefinite(b_H)) {
              *exitFlag =
                c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe;
              st.site = &bh_emlrtRSI;
              *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              guard1 = true;
            }
          }

          if (guard1) {
            for (i6 = 0; i6 < 6; i6++) {
              c_x[i6] = xSol[i6];
            }

            st.site = &ch_emlrtRSI;
            if (DampedBFGSwGradientProjection_searchDirectionInvalid(&st, obj,
                 c_x)) {
              for (b_obj = 0; b_obj < 6; b_obj++) {
                xSol[b_obj] = x[b_obj];
              }

              *exitFlag =
                robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid;
              st.site = &dh_emlrtRSI;
              *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              for (b_obj = 0; b_obj < 6; b_obj++) {
                x[b_obj] = xSol[b_obj];
              }

              i1 = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, i1);
              loop_ub = gradNew->size[0];
              if (loop_ub - 1 >= 0) {
                memcpy(&grad->data[0], &gradNew->data[0], (uint32_T)loop_ub *
                       sizeof(real_T));
              }

              b_cost = costNew;
              i++;
            }
          }
        }
      }
    } else {
      *exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
      st.site = &eh_emlrtRSI;
      *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
      *iter = obj->MaxNumIterationInternal;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&c_bIn);
  emxFree_boolean_T(&b_bIn);
  emxFree_real_T(&g_obj);
  emxFree_real_T(&f_obj);
  emxFree_real_T(&c_A);
  emxFree_real_T(&c_args);
  emxFree_boolean_T(&c_activeSet);
  emxFree_real_T(&e_obj);
  emxFree_real_T(&c_a);
  emxFree_boolean_T(&b_activeSet);
  emxFree_real_T(&b_A);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_real_T(&b_b);
  emxFree_int32_T(&ii);
  emxFree_real_T(&y);
  emxFree_real_T(&gradNew);
  emxFree_int32_T(&inactiveConstraintIndices);
  emxFree_real_T(&bIn);
  emxFree_real_T(&B);
  emxFree_real_T(&a);
  emxFree_real_T(&A);
  emxFree_boolean_T(&activeSet);
  emxFree_real_T(&grad);
  emxFree_real_T(&a__2);
}

static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[6],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack st;
  emxArray_real_T *J;
  emxArray_real_T *b_y;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  real_T T_data[16];
  real_T Td[16];
  real_T e[6];
  real_T y[6];
  real_T beta1;
  real_T bidx;
  int32_T T_size[2];
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  bidx = (*b_args)->BodyIndex;
  emxInit_real_T(&J, 2);
  st.site = &kh_emlrtRSI;
  RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bidx, T_data,
    T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1];
  for (i = 0; i < loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &lh_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      bidx = y[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      y[i] = bidx;
    }
  }

  bidx = 0.0;
  for (i = 0; i < 6; i++) {
    bidx += y[i] * e[i];
  }

  (*b_args)->CostTemp = bidx;
  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      bidx = y[i] + e[loop_ub] * W[loop_ub + 6 * i];
      y[i] = bidx;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &fh_emlrtRSI;
  if (Jac->size[1] == 0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    bidx = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)Jac->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = Jac->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &bidx, &y[0], &lda_t, &Jac->
          data[0], &ldb_t, &beta1, &b_y->data[0], &ldc_t);
  }

  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  bidx = (*b_args)->CostTemp;
  *cost = bidx;
}

static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[6], real_T bid1,
  real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *JacSlice;
  emxArray_real_T *ancestorIndices1;
  emxArray_real_T *ancestorIndices2;
  emxArray_real_T *b_Jac;
  emxArray_real_T *kinematicPathIndices;
  emxArray_real_T *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody *body1;
  robotics_manip_internal_RigidBody *nextBody;
  real_T R[36];
  real_T T1[16];
  real_T T1j[16];
  real_T Tc2p[16];
  real_T Tj[16];
  real_T Tj1[16];
  real_T b_R[9];
  real_T c_R[9];
  real_T dv[9];
  real_T dv1[9];
  real_T e_R[9];
  real_T f_R[9];
  real_T qv_data[6];
  real_T d_R[3];
  real_T qidx[2];
  real_T commonAncestorIndex;
  int32_T iv1[2];
  int32_T qv_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T jointSign;
  int32_T loop_ub;
  int32_T minPathLength;
  boolean_T exitg1;
  boolean_T nextBodyIsParent;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (bid1 >= 0.0) {
    if (bid1 == 0.0) {
      body1 = &obj->Base;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(bid1, &hc_emlrtDCI, (emlrtConstCTX)sp)
        - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5, &rc_emlrtBCI,
        (emlrtConstCTX)sp)];
    }

    st.site = &mh_emlrtRSI;
    emxInit_real_T(&ancestorIndices1, 2);
    b_st.site = &ph_emlrtRSI;
    RigidBodyTree_ancestorIndices(&b_st, obj, body1, ancestorIndices1);
    emxInit_real_T(&ancestorIndices2, 2);
    b_st.site = &qh_emlrtRSI;
    RigidBodyTree_ancestorIndices(&b_st, obj, &obj->Base, ancestorIndices2);
    minPathLength = (int32_T)muDoubleScalarMin((real_T)ancestorIndices1->size[1],
      (real_T)ancestorIndices2->size[1]);
    b_i = 1;
    exitg1 = false;
    while ((!exitg1) && (b_i - 1 <= minPathLength - 2)) {
      i = ancestorIndices1->size[1];
      i1 = ancestorIndices1->size[1] - b_i;
      i2 = ancestorIndices2->size[1];
      i3 = ancestorIndices2->size[1] - b_i;
      if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i1, 1, i,
           &sc_emlrtBCI, &st) - 1] != ancestorIndices2->
          data[emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tc_emlrtBCI, &st) - 1])
      {
        minPathLength = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }

    i = ancestorIndices1->size[1];
    i1 = (ancestorIndices1->size[1] - minPathLength) + 1;
    commonAncestorIndex = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b
      (i1, 1, i, &uc_emlrtBCI, &st) - 1];
    i = ancestorIndices1->size[1] - minPathLength;
    if (i < 1) {
      loop_ub = 0;
    } else {
      i1 = ancestorIndices1->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &pc_emlrtBCI, &st);
    }

    i = ancestorIndices2->size[1] - minPathLength;
    if (i < 1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      i1 = ancestorIndices2->size[1];
      i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &qc_emlrtBCI, &st);
      i1 = -1;
      i2 = 1;
    }

    emxInit_real_T(&kinematicPathIndices, 2);
    i3 = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
    kinematicPathIndices->size[0] = 1;
    b_st.site = &mh_emlrtRSI;
    kinematicPathIndices->size[1] = (loop_ub + div_s32(&b_st, i2 - i, i1)) + 2;
    emxEnsureCapacity_real_T(kinematicPathIndices, i3);
    if (loop_ub - 1 >= 0) {
      memcpy(&kinematicPathIndices->data[0], &ancestorIndices1->data[0],
             (uint32_T)loop_ub * sizeof(real_T));
    }

    emxFree_real_T(&ancestorIndices1);
    kinematicPathIndices->data[loop_ub] = commonAncestorIndex;
    b_st.site = &mh_emlrtRSI;
    minPathLength = div_s32(&b_st, i2 - i, i1);
    for (i2 = 0; i2 <= minPathLength; i2++) {
      kinematicPathIndices->data[(i2 + loop_ub) + 1] = ancestorIndices2->data[(i
        + i1 * i2) - 1];
    }

    emxFree_real_T(&ancestorIndices2);
    for (i = 0; i < 16; i++) {
      T1[i] = 0.0;
    }

    for (minPathLength = 0; minPathLength < 4; minPathLength++) {
      T1[minPathLength + (minPathLength << 2)] = 1.0;
    }

    i = Jac->size[0] * Jac->size[1];
    Jac->size[0] = 6;
    commonAncestorIndex = emlrtNonNegativeCheckR2012b(obj->PositionNumber,
      &gc_emlrtDCI, (emlrtConstCTX)sp);
    Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex,
      &fc_emlrtDCI, (emlrtConstCTX)sp);
    emxEnsureCapacity_real_T(Jac, i);
    commonAncestorIndex = emlrtNonNegativeCheckR2012b(obj->PositionNumber,
      &jc_emlrtDCI, (emlrtConstCTX)sp);
    loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex,
      &ic_emlrtDCI, (emlrtConstCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Jac->data[i] = 0.0;
    }

    i = kinematicPathIndices->size[1] - 2;
    emxInit_real_T(&JacSlice, 2);
    emxInit_real_T(&y, 2);
    for (b_i = 0; b_i <= i; b_i++) {
      i1 = kinematicPathIndices->size[1];
      if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
           i1, &vc_emlrtBCI, (emlrtConstCTX)sp) - 1] != 0.0) {
        i1 = kinematicPathIndices->size[1];
        commonAncestorIndex = kinematicPathIndices->
          data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &yc_emlrtBCI,
          (emlrtConstCTX)sp) - 1];
        i1 = (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex, &kc_emlrtDCI,
          (emlrtConstCTX)sp) - 1;
        body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 5, &xc_emlrtBCI,
          (emlrtConstCTX)sp)];
      } else {
        body1 = &obj->Base;
      }

      i1 = kinematicPathIndices->size[1];
      if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 2, 1,
           i1, &wc_emlrtBCI, (emlrtConstCTX)sp) - 1] != 0.0) {
        i1 = kinematicPathIndices->size[1];
        commonAncestorIndex = kinematicPathIndices->
          data[emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, i1, &bd_emlrtBCI,
          (emlrtConstCTX)sp) - 1];
        i1 = (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex, &lc_emlrtDCI,
          (emlrtConstCTX)sp) - 1;
        nextBody = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 5,
          &ad_emlrtBCI, (emlrtConstCTX)sp)];
      } else {
        nextBody = &obj->Base;
      }

      nextBodyIsParent = (nextBody->Index == body1->ParentIndex);
      if (nextBodyIsParent) {
        nextBody = body1;
        jointSign = 1;
      } else {
        jointSign = -1;
      }

      joint = nextBody->JointInternal;
      if (e_strcmp(joint->Type)) {
        st.site = &nh_emlrtRSI;
        rigidBodyJoint_transformBodyToParent(&st, joint, Tc2p);
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(nextBody->Index, &yb_emlrtDCI,
          (emlrtConstCTX)sp);
        minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &jc_emlrtBCI,
          (emlrtConstCTX)sp);
        for (i1 = 0; i1 < 2; i1++) {
          qidx[i1] = obj->PositionDoFMap[(minPathLength + 6 * i1) - 1];
        }

        if (qidx[0] > qidx[1]) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ac_emlrtDCI,
            (emlrtConstCTX)sp);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &kc_emlrtBCI,
            (emlrtConstCTX)sp) - 1;
          i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &bc_emlrtDCI,
            (emlrtConstCTX)sp);
          i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 6, &lc_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        qv_size[0] = i2 - i1;
        loop_ub = i2 - i1;
        for (i2 = 0; i2 < loop_ub; i2++) {
          qv_data[i2] = qv[i1 + i2];
        }

        st.site = &oh_emlrtRSI;
        b_rigidBodyJoint_transformBodyToParent(&st, joint, qv_data, qv_size,
          Tc2p);
        i1 = (int32_T)emlrtIntegerCheckR2012b(nextBody->Index, &cc_emlrtDCI,
          (emlrtConstCTX)sp);
        minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &mc_emlrtBCI,
          (emlrtConstCTX)sp);
        for (i1 = 0; i1 < 2; i1++) {
          qidx[i1] = obj->VelocityDoFMap[(minPathLength + 6 * i1) - 1];
        }

        if (nextBodyIsParent) {
          for (i1 = 0; i1 < 16; i1++) {
            Tj[i1] = joint->ChildToJointTransform[i1];
          }
        } else {
          for (i1 = 0; i1 < 16; i1++) {
            Tj1[i1] = joint->JointToParentTransform[i1];
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              b_R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
            }
          }

          for (i1 = 0; i1 <= 6; i1 += 2) {
            r = _mm_loadu_pd(&b_R[i1]);
            _mm_storeu_pd(&e_R[i1], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
          }

          for (i1 = 8; i1 < 9; i1++) {
            e_R[8] = -b_R[8];
          }

          for (i1 = 0; i1 < 3; i1++) {
            d_R[i1] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              commonAncestorIndex = d_R[i1] + e_R[i1 + 3 * i2] * Tj1[i2 + 12];
              Tj[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
              d_R[i1] = commonAncestorIndex;
            }

            Tj[i1 + 12] = d_R[i1];
          }

          for (i1 = 0; i1 < 4; i1++) {
            Tj[(i1 << 2) + 3] = (real_T)iv[i1];
          }
        }

        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 4; i2++) {
            T1j[i1 + (i2 << 2)] = 0.0;
            for (i3 = 0; i3 < 4; i3++) {
              T1j[i1 + (i2 << 2)] += Tj[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
            }
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 <= 6; i1 += 2) {
          r = _mm_loadu_pd(&b_R[i1]);
          _mm_storeu_pd(&f_R[i1], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
        }

        for (i1 = 8; i1 < 9; i1++) {
          f_R[8] = -b_R[8];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            commonAncestorIndex = d_R[i1] + f_R[i1 + 3 * i2] * T1j[i2 + 12];
            Tj1[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
            d_R[i1] = commonAncestorIndex;
          }

          Tj1[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
          }
        }

        i1 = JacSlice->size[0] * JacSlice->size[1];
        JacSlice->size[0] = 6;
        JacSlice->size[1] = joint->MotionSubspace->size[1];
        emxEnsureCapacity_real_T(JacSlice, i1);
        loop_ub = 6 * joint->MotionSubspace->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          JacSlice->data[i1] = joint->MotionSubspace->data[i1];
        }

        dv[0] = 0.0;
        dv[3] = -Tj1[14];
        dv[6] = Tj1[13];
        dv[1] = Tj1[14];
        dv[4] = 0.0;
        dv[7] = -Tj1[12];
        dv[2] = -Tj1[13];
        dv[5] = Tj1[12];
        dv[8] = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            dv1[i1 + 3 * i2] = 0.0;
            for (i3 = 0; i3 < 3; i3++) {
              dv1[i1 + 3 * i2] += dv[i1 + 3 * i3] * b_R[i3 + 3 * i2];
            }

            R[i2 + 6 * i1] = b_R[i2 + 3 * i1];
            R[i2 + 6 * (i1 + 3)] = 0.0;
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[(i2 + 6 * i1) + 3] = dv1[i2 + 3 * i1];
            R[(i2 + 6 * (i1 + 3)) + 3] = b_R[i2 + 3 * i1];
          }
        }

        st.site = &fh_emlrtRSI;
        mtimes(R, JacSlice, y);
        i1 = JacSlice->size[0] * JacSlice->size[1];
        JacSlice->size[0] = 6;
        JacSlice->size[1] = y->size[1];
        emxEnsureCapacity_real_T(JacSlice, i1);
        loop_ub = 6 * y->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          JacSlice->data[i1] = y->data[i1] * (real_T)jointSign;
        }

        if (qidx[0] > qidx[1]) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = Jac->size[1];
          i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &dc_emlrtDCI,
            (emlrtConstCTX)sp);
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nc_emlrtBCI,
            (emlrtConstCTX)sp) - 1;
          i2 = Jac->size[1];
          i3 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &ec_emlrtDCI,
            (emlrtConstCTX)sp);
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oc_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        iv1[0] = 6;
        iv1[1] = i2 - i1;
        emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &(*(int32_T (*)[2])
          JacSlice->size)[0], 2, &j_emlrtECI, (void *)sp);
        loop_ub = JacSlice->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          for (i3 = 0; i3 < 6; i3++) {
            Jac->data[i3 + 6 * (i1 + i2)] = JacSlice->data[i3 + 6 * i2];
          }
        }
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 4; i2++) {
            Tj1[i1 + (i2 << 2)] = 0.0;
            for (i3 = 0; i3 < 4; i3++) {
              Tj1[i1 + (i2 << 2)] += Tc2p[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
            }
          }
        }

        memcpy(&T1[0], &Tj1[0], sizeof(real_T) << 4);
      } else {
        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 <= 6; i1 += 2) {
          r = _mm_loadu_pd(&b_R[i1]);
          _mm_storeu_pd(&c_R[i1], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
        }

        for (i1 = 8; i1 < 9; i1++) {
          c_R[8] = -b_R[8];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            commonAncestorIndex = d_R[i1] + c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
            Tj[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
            d_R[i1] = commonAncestorIndex;
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 4; i2++) {
            Tj1[i1 + (i2 << 2)] = 0.0;
            for (i3 = 0; i3 < 4; i3++) {
              Tj1[i1 + (i2 << 2)] += Tj[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
            }
          }
        }

        memcpy(&T1[0], &Tj1[0], sizeof(real_T) << 4);
      }
    }

    emxFree_real_T(&y);
    emxFree_real_T(&JacSlice);
    emxFree_real_T(&kinematicPathIndices);
    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < 3; i1++) {
        R[i1 + 6 * i] = T1[i1 + (i << 2)];
        R[i1 + 6 * (i + 3)] = 0.0;
        R[(i1 + 6 * i) + 3] = 0.0;
        R[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
      }
    }

    emxInit_real_T(&b_Jac, 2);
    i = b_Jac->size[0] * b_Jac->size[1];
    b_Jac->size[0] = 6;
    b_Jac->size[1] = Jac->size[1];
    emxEnsureCapacity_real_T(b_Jac, i);
    loop_ub = Jac->size[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        b_Jac->data[i1 + 6 * i] = Jac->data[i1 + 6 * i];
      }
    }

    st.site = &fh_emlrtRSI;
    mtimes(R, b_Jac, Jac);
    emxFree_real_T(&b_Jac);
    T_size[0] = 4;
    T_size[1] = 4;
    memcpy(&T_data[0], &T1[0], sizeof(real_T) << 4);
  } else {
    T_size[0] = 0;
    T_size[1] = 0;
    Jac->size[0] = 6;
    Jac->size[1] = 0;
  }
}

static void RigidBodyTree_ancestorIndices(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *body, emxArray_real_T *indices)
{
  real_T d;
  int32_T i;
  int32_T loop_ub;
  uint32_T b_i;
  i = indices->size[0] * indices->size[1];
  indices->size[0] = 1;
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &nc_emlrtDCI, (emlrtConstCTX)sp);
  indices->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &mc_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(indices, i);
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &pc_emlrtDCI, (emlrtConstCTX)sp);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, (emlrtConstCTX)sp);
  for (i = 0; i < loop_ub; i++) {
    indices->data[i] = 0.0;
  }

  b_i = 2U;
  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &ed_emlrtBCI, (emlrtConstCTX)sp);
  indices->data[0] = body->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &qc_emlrtDCI,
      (emlrtConstCTX)sp) - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 5, &fd_emlrtBCI,
      (emlrtConstCTX)sp)];
    i = indices->size[1];
    indices->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i, &hd_emlrtBCI,
      (emlrtConstCTX)sp) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = indices->size[1];
    indices->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i, &gd_emlrtBCI,
      (emlrtConstCTX)sp) - 1] = body->ParentIndex;
    b_i++;
  }

  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &dd_emlrtBCI, (emlrtConstCTX)sp);
  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b((int32_T)((real_T)b_i - 1.0), 1, i, &cd_emlrtBCI,
    (emlrtConstCTX)sp);
  i = indices->size[0] * indices->size[1];
  indices->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(indices, i);
}

static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T b_v[3];
  real_T v[3];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &rh_emlrtRSI;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (g_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &sh_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &th_emlrtRSI;
    c_st.site = &vh_emlrtRSI;
    d_st.site = &wh_emlrtRSI;
    e_st.site = &xh_emlrtRSI;
    normalizeRows(&e_st, v, b_v);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(b_v[0] * b_v[0] * 0.0 + 1.0, b_v[0] * b_v[1] * 0.0 - b_v[2] * 0.0, b_v[0]
        * b_v[2] * 0.0 + b_v[1] * 0.0, b_v[0] * b_v[1] * 0.0 + b_v[2] * 0.0,
        b_v[1] * b_v[1] * 0.0 + 1.0, b_v[1] * b_v[2] * 0.0 - b_v[0] * 0.0, b_v[0]
        * b_v[2] * 0.0 - b_v[1] * 0.0, b_v[1] * b_v[2] * 0.0 + b_v[0] * 0.0,
        b_v[2] * b_v[2] * 0.0 + 1.0, dv1);
    permute(dv1, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &uh_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * 0.0;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static boolean_T g_strcmp(emxArray_char_T *b_b)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_b->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (cv[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void rigidBodyJoint_get_JointAxis(rigidBodyJoint *obj, real_T ax[3])
{
  static char_T cv1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  emxArray_char_T *a;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  boolean_T b_bool;
  boolean_T guard1;
  emxInit_char_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(a, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = obj->Type->data[i];
  }

  b_bool = false;
  if (a->size[1] != 8) {
  } else {
    loop_ub = 1;
    do {
      exitg1 = 0;
      if (loop_ub - 1 < 8) {
        if (a->data[loop_ub - 1] != cv[loop_ub - 1]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    i = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->Type->size[1];
    emxEnsureCapacity_char_T(a, i);
    loop_ub = obj->Type->size[1];
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = obj->Type->data[i];
    }

    b_bool = false;
    if (a->size[1] != 9) {
    } else {
      loop_ub = 1;
      do {
        exitg1 = 0;
        if (loop_ub - 1 < 9) {
          if (a->data[loop_ub - 1] != cv1[loop_ub - 1]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      guard1 = true;
    } else {
      for (i = 0; i < 3; i++) {
        ax[i] = rtNaN;
      }
    }
  }

  if (guard1) {
    for (i = 0; i < 3; i++) {
      ax[i] = obj->JointAxisInternal[i];
    }
  }

  emxFree_char_T(&a);
}

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  __m128d r;
  emlrtStack st;
  real_T y[3];
  real_T b_matrix;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&y[0], _mm_mul_pd(r, r));
  }

  for (k = 2; k < 3; k++) {
    b_matrix = matrix[2];
    y[2] = b_matrix * b_matrix;
  }

  b_matrix = sumColumnB(y);
  st.site = &yh_emlrtRSI;
  b_sqrt(&st, &b_matrix);
  b_matrix = 1.0 / b_matrix;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&normRowMatrix[0], _mm_mul_pd(r, _mm_set1_pd(b_matrix)));
  }

  for (k = 2; k < 3; k++) {
    normRowMatrix[2] = matrix[2] * b_matrix;
  }
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void permute(real_T a[9], real_T b_b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b_b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 35 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T k_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T g_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T e_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T i_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T m_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T result_data[4];
  real_T b_result_data[3];
  real_T v[3];
  real_T cth;
  real_T sth;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  char_T j_u[48];
  char_T d_u[45];
  char_T b_u[39];
  char_T h_u[35];
  char_T c_u[15];
  char_T l_u[5];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &rh_emlrtRSI;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (g_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &sh_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &lm_emlrtRSI;
      b_error(&b_st, y, getString(&b_st, b_message(&b_st, d_y, &u_emlrtMCI),
               &u_emlrtMCI), &u_emlrtMCI);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    for (i = 0; i < loop_ub; i++) {
      result_data[3] = q_data[0];
    }

    b_st.site = &th_emlrtRSI;
    c_st.site = &ai_emlrtRSI;
    d_st.site = &bi_emlrtRSI;
    e_st.site = &kb_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 35; i++) {
        h_u[i] = i_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&e_st, 35, m, &h_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 48; i++) {
        j_u[i] = k_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &j_u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        l_u[i] = m_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &l_u[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&j_y, m);
      f_st.site = &km_emlrtRSI;
      b_error(&f_st, g_y, getString(&f_st, d_message(&f_st, h_y, i_y, j_y,
                &v_emlrtMCI), &v_emlrtMCI), &v_emlrtMCI);
    }

    c_st.site = &vh_emlrtRSI;
    d_st.site = &wh_emlrtRSI;
    for (i2 = 0; i2 < 3; i2++) {
      b_result_data[i2] = result_data[i2];
    }

    e_st.site = &xh_emlrtRSI;
    normalizeRows(&e_st, b_result_data, v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &id_emlrtBCI, &d_st);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[0] * v[1] * (1.0 - cth) - v[2] * sth,
        v[0] * v[2] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[1] * v[2] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, dv1);
    permute(dv1, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &uh_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &gh_emlrtRSI;
    if (q_size[0] != 1) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &d_u[0]);
        emlrtAssign(&c_y, m);
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &d_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &yl_emlrtRSI;
        b_error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &x_emlrtMCI),
                 &x_emlrtMCI), &x_emlrtMCI);
      } else {
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &c_u[0]);
        emlrtAssign(&e_y, m);
        c_st.site = &am_emlrtRSI;
        b_error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &w_emlrtMCI),
                 &w_emlrtMCI), &w_emlrtMCI);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * cth;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv4[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void IKHelpers_poseError(const emlrtStack *sp, real_T Td[16], real_T
  T_data[], int32_T T_size[2], real_T errorvec[6])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  creal_T b_u;
  creal_T v;
  real_T U[9];
  real_T V[9];
  real_T b_I[9];
  real_T y[9];
  real_T c_v[4];
  real_T b_v[3];
  real_T vspecial_data[3];
  real_T ci;
  real_T q;
  int32_T iv[3];
  int32_T vspecial_size[2];
  int32_T b_i;
  int32_T i;
  int32_T iy;
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T rEQ0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &md_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[1], &nd_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, T_size[1], &jd_emlrtBCI, (emlrtConstCTX)sp);
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &od_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      y[i + 3 * b_i] = 0.0;
      for (iy = 0; iy < 3; iy++) {
        y[i + 3 * b_i] += Td[i + (iy << 2)] * T_data[b_i + T_size[0] * iy];
      }
    }
  }

  st.site = &ci_emlrtRSI;
  b_u.re = 0.5 * (((y[0] + y[4]) + y[8]) - 1.0);
  if (!(muDoubleScalarAbs(b_u.re) > 1.0)) {
    ci = b_u.re;
    b_u.re = muDoubleScalarAcos(ci);
  } else {
    v.re = b_u.re + 1.0;
    v.im = 0.0;
    c_sqrt(&v);
    ci = b_u.re;
    b_u.re = 1.0 - ci;
    b_u.im = 0.0;
    c_sqrt(&b_u);
    if ((-v.im == 0.0) && (b_u.im == 0.0)) {
    } else {
      ci = v.re * b_u.im + -v.im * b_u.re;
      if ((muDoubleScalarIsInf(ci) || muDoubleScalarIsNaN(ci)) &&
          (!muDoubleScalarIsNaN(v.re)) && (!muDoubleScalarIsNaN(-v.im)) &&
          (!muDoubleScalarIsNaN(b_u.re)) && (!muDoubleScalarIsNaN(b_u.im))) {
        ci = v.re;
        q = -v.im;
        rescale(&ci, &q);
        ci = b_u.re;
        q = b_u.im;
        rescale(&ci, &q);
      }
    }

    ci = b_u.re;
    b_u.re = 2.0 * muDoubleScalarAtan2(ci, v.re);
  }

  ci = 2.0 * muDoubleScalarSin(b_u.re);
  b_v[0] = (y[5] - y[7]) / ci;
  b_v[1] = (y[6] - y[2]) / ci;
  b_v[2] = (y[1] - y[3]) / ci;
  if (muDoubleScalarIsNaN(b_u.re) || muDoubleScalarIsInf(b_u.re)) {
    ci = rtNaN;
  } else if (b_u.re == 0.0) {
    ci = 0.0;
  } else {
    ci = muDoubleScalarRem(b_u.re, 3.1415926535897931);
    rEQ0 = (ci == 0.0);
    if (!rEQ0) {
      q = muDoubleScalarAbs(b_u.re / 3.1415926535897931);
      rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
               2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      ci = 0.0;
    } else if (b_u.re < 0.0) {
      ci += 3.1415926535897931;
    }
  }

  for (i = 0; i < 3; i++) {
    x[i] = (b_v[i] == 0.0);
  }

  rEQ0 = true;
  iy = 0;
  exitg1 = false;
  while ((!exitg1) && (iy < 3)) {
    if (!x[iy]) {
      rEQ0 = false;
      exitg1 = true;
    } else {
      iy++;
    }
  }

  rEQ0 = ((ci == 0.0) || rEQ0);
  if (rEQ0) {
    vspecial_size[0] = 3;
    vspecial_size[1] = 1;
    for (b_i = 0; b_i < 1; b_i++) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 1, &ld_emlrtBCI, &st);
      for (i = 0; i < 9; i++) {
        b_I[i] = 0.0;
      }

      for (iy = 0; iy < 3; iy++) {
        b_I[iy + 3 * iy] = 1.0;
      }

      b_st.site = &ei_emlrtRSI;
      rEQ0 = true;
      for (iy = 0; iy < 9; iy++) {
        ci = b_I[iy] - y[iy];
        if (rEQ0 && ((!muDoubleScalarIsInf(ci)) && (!muDoubleScalarIsNaN(ci))))
        {
          rEQ0 = true;
        } else {
          rEQ0 = false;
        }

        b_I[iy] = ci;
      }

      if (rEQ0) {
        c_st.site = &fi_emlrtRSI;
        d_st.site = &hi_emlrtRSI;
        xzsvdc(&d_st, b_I, U, vspecial_data, V);
      } else {
        c_st.site = &gi_emlrtRSI;
        for (i = 0; i < 9; i++) {
          b_I[i] = 0.0;
        }

        d_st.site = &hi_emlrtRSI;
        xzsvdc(&d_st, b_I, U, vspecial_data, V);
        for (i = 0; i < 9; i++) {
          V[i] = rtNaN;
        }
      }

      emlrtDynamicBoundsCheckR2012b(1, 1, 1, &kd_emlrtBCI, &st);
      for (i = 0; i < 3; i++) {
        vspecial_data[i] = V[i + 6];
      }
    }

    iy = 0;
    for (b_i = 0; b_i < 1; b_i++) {
      iy++;
    }

    iv[0] = 1;
    iv[1] = 3;
    iv[2] = iy;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &vspecial_size[0], 2, &k_emlrtECI,
      &st);
    for (i = 0; i < iy; i++) {
      for (b_i = 0; b_i < 3; b_i++) {
        b_v[b_i] = vspecial_data[b_i];
      }
    }
  }

  for (i = 0; i < 3; i++) {
    vspecial_data[i] = b_v[i];
  }

  b_st.site = &di_emlrtRSI;
  normalizeRows(&b_st, vspecial_data, b_v);
  iy = -1;
  for (b_i = 0; b_i < 3; b_i++) {
    iy++;
    c_v[iy] = b_v[b_i];
  }

  c_v[iy + 1] = b_u.re;
  for (i = 0; i <= 0; i += 2) {
    r = _mm_loadu_pd(&c_v[0]);
    r = _mm_mul_pd(_mm_set1_pd(c_v[3]), r);
    _mm_storeu_pd(&errorvec[0], r);
    r = _mm_loadu_pd(&Td[12]);
    r1 = _mm_loadu_pd(&T_data[T_size[0] * 3]);
    _mm_storeu_pd(&errorvec[3], _mm_sub_pd(r, r1));
  }

  for (i = 2; i < 3; i++) {
    errorvec[2] = c_v[2] * c_v[3];
    errorvec[5] = Td[14] - T_data[2 + T_size[0] * 3];
  }
}

static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9])
{
  static char_T cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A',
    'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g',
    'e', 'n', 'c', 'e' };

  __m128d r;
  emlrtStack st;
  real_T b_A[9];
  real_T e[3];
  real_T s[3];
  real_T work[3];
  real_T b_b;
  real_T f;
  real_T nrm;
  real_T rt;
  real_T scale;
  real_T sm;
  real_T snorm;
  real_T sqds;
  int32_T exitg2;
  int32_T i;
  int32_T iter;
  int32_T k;
  int32_T m;
  int32_T q;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T exitg1;
  boolean_T exitg3;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  for (iter = 0; iter < 9; iter++) {
    U[iter] = 0.0;
    V[iter] = 0.0;
  }

  for (q = 0; q < 2; q++) {
    qp1 = q + 2;
    qq = (q + 3 * q) + 1;
    apply_transform = false;
    nrm = xnrm2(3 - q, A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[qq - 1] < 0.0) {
        nrm = -nrm;
      }

      s[q] = nrm;
      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        xscal(3 - q, 1.0 / s[q], A, qq);
      } else {
        iter = qq - q;
        i = ((iter - qq) + 3) / 2 * 2 + qq;
        qs = i - 2;
        for (k = qq; k <= qs; k += 2) {
          r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_div_pd(r, _mm_set1_pd(s[q])));
        }

        for (k = i; k <= iter + 2; k++) {
          A[k - 1] /= s[q];
        }
      }

      A[qq - 1]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (qs = qp1; qs < 4; qs++) {
      i = (q + 3 * (qs - 1)) + 1;
      if (apply_transform) {
        xaxpy(3 - q, -(xdotc(3 - q, A, qq, A, i) / A[q + 3 * q]), qq, A, i);
      }

      e[qs - 1] = A[i - 1];
    }

    memcpy(&U[q + q * 3], &A[q + q * 3], (uint32_T)(((q * 3 - q) - q * 3) + 3) *
           sizeof(real_T));
    if (q + 1 <= 1) {
      nrm = b_xnrm2(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          nrm = -nrm;
        }

        e[0] = nrm;
        if (muDoubleScalarAbs(nrm) >= 1.0020841800044864E-292) {
          b_xscal(1.0 / nrm, e, 2);
        } else {
          i = ((2 - q) / 2 * 2 + q) + 2;
          qs = i - 2;
          for (k = qp1; k <= qs; k += 2) {
            r = _mm_loadu_pd(&e[k - 1]);
            _mm_storeu_pd(&e[k - 1], _mm_div_pd(r, _mm_set1_pd(nrm)));
          }

          for (k = i; k < 4; k++) {
            e[k - 1] /= nrm;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (k = qp1; k < 4; k++) {
          work[k - 1] = 0.0;
        }

        for (qs = qp1; qs < 4; qs++) {
          memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
          b_xaxpy(2, e[qs - 1], b_A, 3 * (qs - 1) + 2, work, 2);
        }

        for (qs = qp1; qs < 4; qs++) {
          c_xaxpy(2, -e[qs - 1] / e[1], work, 2, A, 3 * (qs - 1) + 2);
        }
      }

      for (k = qp1; k < 4; k++) {
        V[k - 1] = e[k - 1];
      }
    }
  }

  m = 1;
  s[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  for (k = 0; k < 3; k++) {
    U[k + 6] = 0.0;
  }

  U[8] = 1.0;
  for (q = 1; q >= 0; q--) {
    qq = q + 3 * q;
    if (s[q] != 0.0) {
      for (qs = q + 2; qs < 4; qs++) {
        i = (q + 3 * (qs - 1)) + 1;
        xaxpy(3 - q, -(xdotc(3 - q, U, qq + 1, U, i) / U[qq]), qq + 1, U, i);
      }

      for (k = q + 1; k < 4; k++) {
        U[(k + 3 * q) - 1] = -U[(k + 3 * q) - 1];
      }

      U[qq]++;
      iter = q - 1;
      for (k = 0; k <= iter; k++) {
        U[3 * q] = 0.0;
      }
    } else {
      for (k = 0; k < 3; k++) {
        U[k + 3 * q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      for (qs = 0; qs < 2; qs++) {
        i = 3 * (qs + 1) + 2;
        xaxpy(2, -(xdotc(2, V, 2, V, i) / V[1]), 2, V, i);
      }
    }

    for (k = 0; k < 3; k++) {
      V[k + 3 * q] = 0.0;
    }

    V[q + 3 * q] = 1.0;
  }

  for (q = 0; q < 3; q++) {
    sm = e[q];
    if (s[q] != 0.0) {
      rt = muDoubleScalarAbs(s[q]);
      nrm = s[q] / rt;
      s[q] = rt;
      if (q + 1 < 3) {
        sm /= nrm;
      }

      c_xscal(nrm, U, 3 * q + 1);
    }

    if ((q + 1 < 3) && (sm != 0.0)) {
      rt = muDoubleScalarAbs(sm);
      nrm = rt / sm;
      sm = rt;
      s[q + 1] *= nrm;
      c_xscal(nrm, V, 3 * (q + 1) + 1);
    }

    e[q] = sm;
  }

  iter = 0;
  snorm = 0.0;
  for (k = 0; k < 3; k++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[k]),
      muDoubleScalarAbs(e[k])));
  }

  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      st.site = &nl_emlrtRSI;
      b_error(&st, emlrt_marshallOut(&st, cv), getString(&st, b_message(&st,
                emlrt_marshallOut(&st, cv), &y_emlrtMCI), &y_emlrtMCI),
              &y_emlrtMCI);
      exitg1 = true;
    } else {
      k = m;
      do {
        exitg2 = 0;
        q = k + 1;
        if (k + 1 == 0) {
          exitg2 = 1;
        } else {
          nrm = muDoubleScalarAbs(e[k]);
          if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[k]) +
                muDoubleScalarAbs(s[k + 1]))) || (nrm <= 1.0020841800044864E-292)
              || ((iter > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
            e[k] = 0.0;
            exitg2 = 1;
          } else {
            k--;
          }
        }
      } while (exitg2 == 0);

      if (k + 1 == m + 1) {
        i = 4;
      } else {
        qs = m + 2;
        i = m + 2;
        exitg3 = false;
        while ((!exitg3) && (i >= k + 1)) {
          qs = i;
          if (i == k + 1) {
            exitg3 = true;
          } else {
            nrm = 0.0;
            if (i < m + 2) {
              nrm = muDoubleScalarAbs(e[i - 1]);
            }

            if (i > k + 2) {
              nrm += muDoubleScalarAbs(e[i - 2]);
            }

            rt = muDoubleScalarAbs(s[i - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) || (rt <=
                 1.0020841800044864E-292)) {
              s[i - 1] = 0.0;
              exitg3 = true;
            } else {
              i--;
            }
          }
        }

        if (qs == k + 1) {
          i = 3;
        } else if (qs == m + 2) {
          i = 1;
        } else {
          i = 2;
          q = qs;
        }
      }

      switch (i) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (k = m + 1; k >= q + 1; k--) {
          sm = e[0];
          nrm = s[k - 1];
          st.site = &mi_emlrtRSI;
          xrotg(&nrm, &f, &rt, &b_b);
          s[k - 1] = nrm;
          if (k > q + 1) {
            f = -b_b * sm;
            sm *= rt;
          }

          xrot(V, 3 * (k - 1) + 1, 3 * (m + 1) + 1, rt, b_b);
          e[0] = sm;
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (k = q + 1; k <= m + 2; k++) {
          nrm = s[k - 1];
          st.site = &li_emlrtRSI;
          xrotg(&nrm, &f, &rt, &b_b);
          s[k - 1] = nrm;
          f = -b_b * e[k - 1];
          e[k - 1] *= rt;
          xrot(U, 3 * (k - 1) + 1, 3 * (q - 1) + 1, rt, b_b);
        }
        break;

       case 3:
        scale = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
          (muDoubleScalarMax(muDoubleScalarAbs(s[m + 1]), muDoubleScalarAbs(s[m])),
           muDoubleScalarAbs(e[m])), muDoubleScalarAbs(s[q])), muDoubleScalarAbs
          (e[q]));
        sm = s[m + 1] / scale;
        nrm = s[m] / scale;
        rt = e[m] / scale;
        sqds = s[q] / scale;
        b_b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0;
        nrm = sm * rt;
        nrm *= nrm;
        if ((b_b != 0.0) || (nrm != 0.0)) {
          rt = b_b * b_b + nrm;
          st.site = &ki_emlrtRSI;
          b_sqrt(&st, &rt);
          if (b_b < 0.0) {
            rt = -rt;
          }

          rt = nrm / (b_b + rt);
        } else {
          rt = 0.0;
        }

        f = (sqds + sm) * (sqds - sm) + rt;
        nrm = sqds * (e[q] / scale);
        for (k = q + 1; k <= m + 1; k++) {
          st.site = &ji_emlrtRSI;
          xrotg(&f, &nrm, &rt, &b_b);
          if (k > q + 1) {
            e[0] = f;
          }

          f = rt * s[k - 1] + b_b * e[k - 1];
          e[k - 1] = rt * e[k - 1] - b_b * s[k - 1];
          nrm = b_b * s[k];
          s[k] *= rt;
          xrot(V, 3 * (k - 1) + 1, 3 * k + 1, rt, b_b);
          st.site = &ii_emlrtRSI;
          xrotg(&f, &nrm, &rt, &b_b);
          s[k - 1] = f;
          f = rt * e[k - 1] + b_b * s[k];
          s[k] = -b_b * e[k - 1] + rt * s[k];
          nrm = b_b * e[k];
          e[k] *= rt;
          xrot(U, 3 * (k - 1) + 1, 3 * k + 1, rt, b_b);
        }

        e[m] = f;
        iter++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          c_xscal(-1.0, V, 3 * q + 1);
        }

        qp1 = q + 1;
        while ((q + 1 < 3) && (s[q] < s[qp1])) {
          rt = s[q];
          s[q] = s[qp1];
          s[qp1] = rt;
          xswap(V, 3 * q + 1, 3 * (q + 1) + 1);
          xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
          q = qp1;
          qp1++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  for (k = 0; k < 3; k++) {
    b_S[k] = s[k];
  }
}

static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = ix0 + n;
  for (k = ix0; k < kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0)
{
  real_T d;
  int32_T i;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0 - 1;
  iy = iy0 - 1;
  i = (uint8_T)n - 1;
  for (k = 0; k <= i; k++) {
    d += x[ix] * y[iy];
    ix++;
    iy++;
  }

  return d;
}

static real_T b_xnrm2(real_T x[3], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void b_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if (a->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void c_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void d_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if ((b_b->size[0] == 1) && (b_b->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void c_mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = 6 * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void e_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &am_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &w_emlrtMCI), &w_emlrtMCI),
            &w_emlrtMCI);
  }
}

static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj)
{
  static const int32_T iv[2] = { 1, 66 };

  static const int32_T iv1[2] = { 1, 66 };

  static char_T c_u[66] = { 's', 'h', 'a', 'r', 'e', 'd', '_', 'r', 'o', 'b',
    'o', 't', 'i', 'c', 's', ':', 'r', 'o', 'b', 'o', 't', 'u', 't', 'i', 'l',
    's', ':', 't', 'i', 'm', 'e', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', ':',
    'T', 'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'N', 'o', 't',
    'I', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  char_T b_u[66];
  boolean_T valid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &oi_emlrtRSI;
  valid = (obj->StartTime.tv_sec > 0.0);
  if (!valid) {
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 66, m, &b_u[0]);
    emlrtAssign(&y, m);
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 66, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &oi_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
             &ab_emlrtMCI), &ab_emlrtMCI);
  }

  st.site = &pi_emlrtRSI;
  return toc(obj->StartTime.tv_sec, obj->StartTime.tv_nsec);
}

static real_T toc(real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec tnow;
  st.site = &qi_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &gg_emlrtRSI;
  emlrtClockGettimeMonotonic(&tnow);
  return (tnow.tv_sec - tstart_tv_sec) + (tnow.tv_nsec - tstart_tv_nsec) /
    1.0E+9;
}

static real_T IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  emxArray_real_T *b_b;
  real_T a[36];
  real_T b_a[6];
  real_T c_a;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 36; i++) {
    a[i] = args->WeightMatrix[i];
  }

  emxInit_real_T1(&b_b, 1);
  i = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, i);
  loop_ub = args->ErrTemp->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = args->ErrTemp->data[i];
  }

  st.site = &gh_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  for (i = 0; i < 6; i++) {
    b_a[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      c_a = b_a[i] + a[i + 6 * loop_ub] * b_b->data[loop_ub];
      b_a[i] = c_a;
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(b_a);
}

static void f_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static real_T c_norm(real_T x[6])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 6; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void g_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b_b->size[0] == 1) &&
         (b_b->size[1] == 1))) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void d_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void mldivide(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (B->size[0] != A->size[0]) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &jm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
             &bb_emlrtMCI), &bb_emlrtMCI);
  }

  st.site = &ri_emlrtRSI;
  mldiv(&st, A, B, Y);
}

static void mldiv(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *B,
                  emxArray_real_T *Y)
{
  static const int32_T iv[2] = { 1, 6 };

  static int32_T offsets[4] = { 0, 1, 2, 3 };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  __m128i r;
  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T c_B[2];
  int32_T b_i;
  int32_T b_ma;
  int32_T b_na;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ma;
  int32_T minmn;
  int32_T na;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T1(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_ptrdiff_t(&jpvt_t, 1);
  emxInit_real_T(&b_B, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    unnamed_idx_1 = (uint32_T)B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity_real_T(Y, i);
    minmn = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i = 0; i < minmn; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    st.site = &si_emlrtRSI;
    b_st.site = &vi_emlrtRSI;
    ma = A->size[0];
    na = A->size[1];
    b_na = B->size[0];
    i = muIntScalarMin_sint32(ma, na);
    b_na = muIntScalarMin_sint32(b_na, i);
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    minmn = A->size[0] * A->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_A->data[0], &A->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_B, i);
    minmn = B->size[0] * B->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_B->data[0], &B->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    c_st.site = &wi_emlrtRSI;
    repmat((ptrdiff_t)0.0, b_na, jpvt_t);
    minmn = jpvt_t->size[0];
    i = jpvt_t->size[0];
    jpvt_t->size[0] = minmn;
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    info_t = (ptrdiff_t)b_na;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, info_t, info_t, &b_A->data[0], LDA,
      &jpvt_t->data[0]);
    if ((int32_T)INFO < 0) {
      for (i = 0; i < 2; i++) {
        c_B[i] = b_B->size[i];
      }

      i = b_B->size[0] * b_B->size[1];
      b_B->size[0] = c_B[0];
      b_B->size[1] = c_B[1];
      emxEnsureCapacity_real_T(b_B, i);
      minmn = c_B[0] * c_B[1];
      for (i = 0; i < minmn; i++) {
        b_B->data[i] = rtNaN;
      }
    } else {
      LAPACKE_dgetrs_work(102, 'N', info_t, (ptrdiff_t)B->size[1], &b_A->data[0],
                          LDA, &jpvt_t->data[0], &b_B->data[0], (ptrdiff_t)
                          b_B->size[0]);
    }

    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_B->size[0];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    minmn = b_B->size[0] * b_B->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&Y->data[0], &b_B->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    if (((A->size[0] != 1) || (A->size[1] != 1)) && ((int32_T)INFO > 0)) {
      b_st.site = &ui_emlrtRSI;
      c_st.site = &jj_emlrtRSI;
      b_warning(&c_st);
    }
  } else {
    st.site = &ti_emlrtRSI;
    b_st.site = &kj_emlrtRSI;
    ma = A->size[0];
    na = A->size[1] - 1;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T1(jpvt, i);
    minmn = A->size[1];
    for (i = 0; i < minmn; i++) {
      jpvt->data[i] = 0;
    }

    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    minmn = A->size[0] * A->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_A->data[0], &A->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    b_ma = b_A->size[0];
    b_na = b_A->size[1];
    b_na = muIntScalarMin_sint32(b_ma, b_na);
    i = tau->size[0];
    tau->size[0] = b_na;
    emxEnsureCapacity_real_T1(tau, i);
    i = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    minmn = A->size[1];
    for (i = 0; i < minmn; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }

    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &b_A->data[0], (ptrdiff_t)b_A->size[0], &jpvt_t->data[0], &tau->data[0]);
    if ((int32_T)info_t != 0) {
      for (j = 0; j <= na; j++) {
        for (b_i = 0; b_i < ma; b_i++) {
          b_A->data[j * b_ma + b_i] = rtNaN;
        }
      }

      i = na + 1;
      minmn = muIntScalarMin_sint32(ma, i) - 1;
      for (k = 0; k <= minmn; k++) {
        tau->data[k] = rtNaN;
      }

      for (k = minmn + 2; k <= b_na; k++) {
        tau->data[k - 1] = 0.0;
      }

      b_na = (na + 1) / 4 * 4;
      minmn = b_na - 4;
      for (k = 0; k <= minmn; k += 4) {
        r = _mm_add_epi32(_mm_add_epi32(_mm_set1_epi32(k), _mm_loadu_si128((
          const __m128i *)&offsets[0])), _mm_set1_epi32(1));
        _mm_storeu_si128((__m128i *)&jpvt->data[k], r);
      }

      for (k = b_na; k <= na; k++) {
        jpvt->data[k] = k + 1;
      }
    } else {
      for (k = 0; k <= na; k++) {
        jpvt->data[k] = (int32_T)jpvt_t->data[k];
      }
    }

    b_st.site = &lj_emlrtRSI;
    na = 0;
    if (b_A->size[0] < b_A->size[1]) {
      minmn = b_A->size[0];
      b_na = b_A->size[1];
    } else {
      minmn = b_A->size[1];
      b_na = b_A->size[0];
    }

    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)b_na) * muDoubleScalarAbs(b_A->data[0]);
    while ((na < minmn) && (!(muDoubleScalarAbs(b_A->data[na + b_A->size[0] * na])
             <= tol))) {
      na++;
    }

    if (na < minmn) {
      c_st.site = &wj_emlrtRSI;
      for (i = 0; i < 6; i++) {
        rfmt[i] = b_rfmt[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      d_st.site = &tm_emlrtRSI;
      emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &o_emlrtMCI),
                       "<output of sprintf>", str);
      c_st.site = &xj_emlrtRSI;
      f_warning(&c_st, na, str);
    }

    b_st.site = &mj_emlrtRSI;
    ma = B->size[1] - 1;
    minmn = b_A->size[1];
    b_na = B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = minmn;
    Y->size[1] = b_na;
    emxEnsureCapacity_real_T(Y, i);
    minmn *= b_na;
    for (i = 0; i < minmn; i++) {
      Y->data[i] = 0.0;
    }

    c_st.site = &yj_emlrtRSI;
    d_st.site = &ak_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_B, i);
    minmn = B->size[0] * B->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_B->data[0], &B->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    if (b_A->size[0] < b_A->size[1]) {
      b_na = b_A->size[0];
    } else {
      b_na = b_A->size[1];
    }

    info_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)b_B->size[1],
      (ptrdiff_t)b_na, &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0],
      &b_B->data[0], info_t);
    if ((int32_T)info_t != 0) {
      if (((int32_T)info_t == -10) && (b_B->size[1] > 1)) {
        minmn = b_A->size[0];
        b_ma = b_B->size[1] - 1;
        if (b_A->size[0] < b_A->size[1]) {
          b_na = b_A->size[0];
        } else {
          b_na = b_A->size[1];
        }

        for (j = 0; j < b_na; j++) {
          if (tau->data[j] != 0.0) {
            for (k = 0; k <= b_ma; k++) {
              tol = b_B->data[j + b_B->size[0] * k];
              for (b_i = j + 2; b_i <= minmn; b_i++) {
                tol += b_A->data[(b_i + b_A->size[0] * j) - 1] * b_B->data[(b_i
                  + b_B->size[0] * k) - 1];
              }

              tol *= tau->data[j];
              if (tol != 0.0) {
                b_B->data[j + b_B->size[0] * k] -= tol;
                for (b_i = j + 2; b_i <= minmn; b_i++) {
                  b_B->data[(b_i + b_B->size[0] * k) - 1] -= b_A->data[(b_i +
                    b_A->size[0] * j) - 1] * tol;
                }
              }
            }
          }
        }
      } else {
        for (i = 0; i < 2; i++) {
          c_B[i] = b_B->size[i];
        }

        i = b_B->size[0] * b_B->size[1];
        b_B->size[0] = c_B[0];
        b_B->size[1] = c_B[1];
        emxEnsureCapacity_real_T(b_B, i);
        minmn = c_B[0] * c_B[1];
        for (i = 0; i < minmn; i++) {
          b_B->data[i] = rtNaN;
        }
      }
    }

    for (k = 0; k <= ma; k++) {
      for (b_i = 0; b_i < na; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] = b_B->data[b_i +
          b_B->size[0] * k];
      }

      for (j = na; j >= 1; j--) {
        Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] /= b_A->data[(j +
          b_A->size[0] * (j - 1)) - 1];
        i = j - 2;
        for (b_i = 0; b_i <= i; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->
            data[j - 1] + Y->size[0] * k) - 1] * b_A->data[b_i + b_A->size[0] *
            (j - 1)];
        }
      }
    }
  }

  emxFree_real_T(&b_B);
  emxFree_ptrdiff_t(&jpvt_t);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b)
{
  emlrtStack st;
  int32_T i;
  st.site = &xi_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(b_b, i);
  for (i = 0; i < varargin_1; i++) {
    b_b->data[i] = a;
  }
}

static void assert_pmaxsize(const emlrtStack *sp, boolean_T p)
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 21 };

  static char_T c_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  if (!p) {
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 21, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 21, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &im_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &db_emlrtMCI),
             &db_emlrtMCI), &db_emlrtMCI);
  }
}

static void f_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14])
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 32 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e', 'n',
    't', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[32];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 32; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = varargin_1;
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 14, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, d_y, e_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void h_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static boolean_T DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[6],
  emxArray_real_T *alpha)
{
  emlrtStack st;
  emxArray_boolean_T *b_alpha;
  int32_T i;
  int32_T loop_ub;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_boolean_T(&b_alpha, 1);
  if (c_norm(Hg) < obj->GradientTolerance) {
    i = b_alpha->size[0];
    b_alpha->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(b_alpha, i);
    loop_ub = alpha->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_alpha->data[i] = (alpha->data[i] <= 0.0);
    }

    st.site = &bk_emlrtRSI;
    if (all(&st, b_alpha)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&b_alpha);
  return flag;
}

static boolean_T all(const emlrtStack *sp, emxArray_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &dm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &fb_emlrtMCI),
             &fb_emlrtMCI), &fb_emlrtMCI);
  }

  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void b_inv(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y)
{
  static const int32_T iv[2] = { 1, 19 };

  static const int32_T iv1[2] = { 1, 19 };

  static const int32_T iv2[2] = { 1, 6 };

  static int32_T offsets[4] = { 0, 1, 2, 3 };

  static char_T c_u[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  __m128i r;
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_real_T *A;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T b_A[2];
  int32_T b_n;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T yk;
  char_T b_u[19];
  char_T str[14];
  char_T rfmt[6];
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  boolean_T b_b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_b = (x->size[0] == x->size[1]);
  if (!b_b) {
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 19, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 19, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &hm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &gb_emlrtMCI),
             &gb_emlrtMCI), &gb_emlrtMCI);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    yk = x->size[0] * x->size[1];
    if (yk - 1 >= 0) {
      memcpy(&y->data[0], &x->data[0], (uint32_T)yk * sizeof(real_T));
    }
  } else {
    st.site = &ck_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y->data[i] = 0.0;
    }

    b_st.site = &ek_emlrtRSI;
    emxInit_real_T(&A, 2);
    i = A->size[0] * A->size[1];
    A->size[0] = x->size[0];
    A->size[1] = x->size[1];
    emxEnsureCapacity_real_T(A, i);
    yk = x->size[0] * x->size[1];
    if (yk - 1 >= 0) {
      memcpy(&A->data[0], &x->data[0], (uint32_T)yk * sizeof(real_T));
    }

    emxInit_ptrdiff_t(&ipiv_t, 1);
    c_st.site = &aj_emlrtRSI;
    repmat((ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), ipiv_t);
    yk = ipiv_t->size[0];
    i = ipiv_t->size[0];
    ipiv_t->size[0] = yk;
    emxEnsureCapacity_ptrdiff_t(ipiv_t, i);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0], (ptrdiff_t)x->size
      [0], &A->data[0], (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    emxInit_int32_T(&ipiv, 2);
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(ipiv, i);
    if ((int32_T)info_t < 0) {
      for (i = 0; i < 2; i++) {
        b_A[i] = A->size[i];
      }

      i = A->size[0] * A->size[1];
      A->size[0] = b_A[0];
      A->size[1] = b_A[1];
      emxEnsureCapacity_real_T(A, i);
      yk = b_A[0] * b_A[1];
      for (i = 0; i < yk; i++) {
        A->data[i] = rtNaN;
      }

      i = ipiv->size[1];
      yk = i / 4 * 4;
      b_n = yk - 4;
      for (k = 0; k <= b_n; k += 4) {
        r = _mm_add_epi32(_mm_add_epi32(_mm_set1_epi32(k), _mm_loadu_si128((
          const __m128i *)&offsets[0])), _mm_set1_epi32(1));
        _mm_storeu_si128((__m128i *)&ipiv->data[k], r);
      }

      for (k = yk; k < i; k++) {
        ipiv->data[k] = k + 1;
      }
    } else {
      i = ipiv->size[1];
      for (k = 0; k < i; k++) {
        ipiv->data[k] = (int32_T)ipiv_t->data[k];
      }
    }

    emxFree_ptrdiff_t(&ipiv_t);
    b_st.site = &fk_emlrtRSI;
    c_st.site = &bj_emlrtRSI;
    d_st.site = &cj_emlrtRSI;
    e_st.site = &dj_emlrtRSI;
    assert_pmaxsize(&e_st, true);
    b_n = x->size[0];
    emxInit_int32_T(&p, 2);
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = b_n;
    emxEnsureCapacity_int32_T1(p, i);
    p->data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }

    i = ipiv->size[1] - 1;
    for (k = 0; k <= i; k++) {
      if (ipiv->data[k] > k + 1) {
        yk = p->data[ipiv->data[k] - 1];
        p->data[ipiv->data[k] - 1] = p->data[k];
        p->data[k] = yk;
      }
    }

    emxFree_int32_T(&ipiv);
    for (k = 0; k < n; k++) {
      yk = p->data[k] - 1;
      y->data[k + y->size[0] * (p->data[k] - 1)] = 1.0;
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y->data[(b_n + y->size[0] * yk) - 1] != 0.0) {
          for (i = b_n + 1; i <= n; i++) {
            y->data[(i + y->size[0] * yk) - 1] -= y->data[(b_n + y->size[0] * yk)
              - 1] * A->data[(i + A->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }

    emxFree_int32_T(&p);
    b_st.site = &gk_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &A->data[0],
          &lda_t, &y->data[0], &ldb_t);
    emxFree_real_T(&A);
    st.site = &dk_emlrtRSI;
    n1x = d_norm(x);
    n1xinv = d_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &if_emlrtRSI;
      b_warning(&b_st);
    } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      b_st.site = &jf_emlrtRSI;
      for (i = 0; i < 6; i++) {
        rfmt[i] = b_rfmt[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&d_y, m);
      e_y = NULL;
      m = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&e_y, m);
      c_st.site = &tm_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, d_y, e_y, &o_emlrtMCI),
                       "<output of sprintf>", str);
      b_st.site = &jf_emlrtRSI;
      c_warning(&b_st, str);
    }
  }
}

static real_T d_norm(emxArray_real_T *x)
{
  real_T s;
  real_T y;
  int32_T b_i;
  int32_T i;
  int32_T k;
  boolean_T MATRIX_INPUT_AND_P_IS_ONE;
  boolean_T VECTOR_INPUT_AND_P_IS_NUMERIC;
  boolean_T exitg1;
  VECTOR_INPUT_AND_P_IS_NUMERIC = false;
  MATRIX_INPUT_AND_P_IS_ONE = false;
  if ((x->size[0] == 1) || (x->size[1] == 1)) {
    VECTOR_INPUT_AND_P_IS_NUMERIC = true;
  } else {
    MATRIX_INPUT_AND_P_IS_ONE = true;
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 0.0;
  } else if (MATRIX_INPUT_AND_P_IS_ONE) {
    y = 0.0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
      s = 0.0;
      i = x->size[0] - 1;
      for (b_i = 0; b_i <= i; b_i++) {
        s += muDoubleScalarAbs(x->data[b_i + x->size[0] * k]);
      }

      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }

        k++;
      }
    }
  } else if (VECTOR_INPUT_AND_P_IS_NUMERIC) {
    y = 0.0;
    i = x->size[0] * x->size[1] - 1;
    for (k = 0; k <= i; k++) {
      y += muDoubleScalarAbs(x->data[k]);
    }
  } else {
    y = rtNaN;
  }

  return y;
}

static void diag(const emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d)
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 39 };

  static char_T c_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i', 'z',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  emlrtStack st;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *y;
  int32_T m;
  int32_T n;
  char_T b_u[39];
  st.prev = sp;
  st.tls = sp->tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T1(d, n);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] != 1) && (v->size[1] != 1))) {
      for (n = 0; n < 39; n++) {
        b_u[n] = c_u[n];
      }

      y = NULL;
      b_m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, b_m, &b_u[0]);
      emlrtAssign(&y, b_m);
      for (n = 0; n < 39; n++) {
        b_u[n] = c_u[n];
      }

      b_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, b_m, &b_u[0]);
      emlrtAssign(&b_y, b_m);
      st.site = &gm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, b_y, &hb_emlrtMCI),
               &hb_emlrtMCI), &hb_emlrtMCI);
    }

    m = v->size[0];
    n = v->size[1];
    if (v->size[1] > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }

    n = d->size[0];
    d->size[0] = m;
    emxEnsureCapacity_real_T1(d, n);
    for (n = 0; n < m; n++) {
      d->data[n] = v->data[n + v->size[0] * n];
    }
  }
}

static void assertCompatibleDims(const emlrtStack *sp, emxArray_real_T *x,
  emxArray_real_T *y)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'z',
    'e', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T i;
  char_T b_u[30];
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (y->size[0] == 1) || (x->size[0] == y->size[0])) {
  } else {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &fm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &ib_emlrtMCI),
             &ib_emlrtMCI), &ib_emlrtMCI);
  }
}

static void maximum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx)
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 39 };

  static const int32_T iv2[2] = { 1, 36 };

  static const int32_T iv3[2] = { 1, 39 };

  static char_T e_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T d_u[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  int32_T k;
  int32_T last;
  char_T c_u[39];
  char_T b_u[36];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 36, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &cm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, c_y, &jb_emlrtMCI),
             &jb_emlrtMCI), &jb_emlrtMCI);
  }

  if (!(x->size[0] >= 1)) {
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &bm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, d_y, &kb_emlrtMCI),
             &kb_emlrtMCI), &kb_emlrtMCI);
  }

  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] < x->data[x->size[0] - 1]) || (muDoubleScalarIsNaN
                (x->data[0]) && (!muDoubleScalarIsNaN(x->data[x->size[0] - 1]))))
    {
      *ex = x->data[x->size[0] - 1];
      *idx = x->size[0];
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= last; k++) {
        if (*ex < x->data[k - 1]) {
          *ex = x->data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void b_eml_find(const emlrtStack *sp, emxArray_boolean_T *x,
  emxArray_int32_T *i)
{
  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  int32_T nx;
  char_T b_u[30];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  nx = x->size[0];
  idx = 0;
  ii = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, ii);
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 <= nx - 1)) {
    if (x->data[ii - 1]) {
      idx++;
      i->data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (!(idx <= x->size[0])) {
    for (ii = 0; ii < 30; ii++) {
      b_u[ii] = c_u[ii];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (ii = 0; ii < 30; ii++) {
      b_u[ii] = c_u[ii];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &em_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &mb_emlrtMCI),
             &mb_emlrtMCI), &mb_emlrtMCI);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }

    iv[0] = 1;
    iv[1] = idx;
    st.site = &uf_emlrtRSI;
    indexShapeCheck(&st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = idx;
    emxEnsureCapacity_int32_T(i, ii);
  }
}

static void f_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static boolean_T any(const emlrtStack *sp, emxArray_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T b_b;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &dm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &fb_emlrtMCI),
             &fb_emlrtMCI), &fb_emlrtMCI);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    b_b = !x->data[ix];
    if (!b_b) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void minimum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx)
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 39 };

  static const int32_T iv2[2] = { 1, 36 };

  static const int32_T iv3[2] = { 1, 39 };

  static char_T e_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T d_u[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  int32_T k;
  int32_T last;
  char_T c_u[39];
  char_T b_u[36];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 36, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &cm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, c_y, &jb_emlrtMCI),
             &jb_emlrtMCI), &jb_emlrtMCI);
  }

  if (!(x->size[0] >= 1)) {
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &bm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, d_y, &kb_emlrtMCI),
             &kb_emlrtMCI), &kb_emlrtMCI);
  }

  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] > x->data[x->size[0] - 1]) || (muDoubleScalarIsNaN
                (x->data[0]) && (!muDoubleScalarIsNaN(x->data[x->size[0] - 1]))))
    {
      *ex = x->data[x->size[0] - 1];
      *idx = x->size[0];
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= last; k++) {
        if (*ex > x->data[k - 1]) {
          *ex = x->data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void i_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void j_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void g_mtimes(emxArray_real_T *A, real_T B[36], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 6;
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * 6;
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)6;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 6;
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void k_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &am_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &w_emlrtMCI), &w_emlrtMCI),
            &w_emlrtMCI);
  }
}

static void l_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static void m_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &yl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &am_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }
  }
}

static boolean_T isPositiveDefinite(real_T B[36])
{
  __m128d r;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T A[36];
  real_T alpha1;
  real_T beta1;
  real_T ssq;
  int32_T i;
  int32_T idxAjj;
  int32_T info;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T k;
  char_T TRANSA;
  boolean_T exitg1;
  st.site = &ik_emlrtRSI;
  b_st.site = &jk_emlrtRSI;
  c_st.site = &kk_emlrtRSI;
  d_st.site = &lk_emlrtRSI;
  memcpy(&A[0], &B[0], 36U * sizeof(real_T));
  info = 0;
  j = 1;
  exitg1 = false;
  while ((!exitg1) && (j - 1 < 6)) {
    idxAjj = (j + (j - 1) * 6) - 1;
    ssq = 0.0;
    if (!(j - 1 < 1)) {
      ix = j - 1;
      iy = j - 1;
      i = j - 2;
      for (k = 0; k <= i; k++) {
        ssq += A[ix] * A[iy];
        ix += 6;
        iy += 6;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (j < 6) {
        e_st.site = &mk_emlrtRSI;
        if (!(j - 1 < 1)) {
          alpha1 = -1.0;
          beta1 = 1.0;
          TRANSA = 'N';
          m_t = (ptrdiff_t)(6 - j);
          n_t = (ptrdiff_t)(j - 1);
          lda_t = (ptrdiff_t)6;
          incx_t = (ptrdiff_t)6;
          incy_t = (ptrdiff_t)1;
          dgemv(&TRANSA, &m_t, &n_t, &alpha1, &A[j], &lda_t, &A[j - 1], &incx_t,
                &beta1, &A[idxAjj + 1], &incy_t);
        }

        ssq = 1.0 / ssq;
        i = idxAjj - j;
        ix = (((i - idxAjj) + 6) / 2 * 2 + idxAjj) + 2;
        iy = ix - 2;
        for (k = idxAjj + 2; k <= iy; k += 2) {
          r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_mul_pd(_mm_set1_pd(ssq), r));
        }

        for (k = ix; k <= i + 7; k++) {
          A[k - 1] *= ssq;
        }
      }

      j++;
    } else {
      info = j;
      exitg1 = true;
    }
  }

  return info == 0;
}

static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[6])
{
  emlrtStack st;
  emxArray_boolean_T *r1;
  emxArray_real_T *a;
  emxArray_real_T *r;
  real_T d;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&r, 1);
  emxInit_boolean_T(&r1, 1);
  if (obj->ConstraintsOn) {
    i = a->size[0] * a->size[1];
    a->size[0] = obj->ConstraintMatrix->size[0];
    a->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(a, i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1];
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = obj->ConstraintMatrix->data[i];
    }

    st.site = &gh_emlrtRSI;
    dynamic_size_checks(&st, a, a->size[0]);
    st.site = &fh_emlrtRSI;
    b_mtimes(a, xNew, r);
    d = 2.2204460492503131E-16;
    st.site = &nk_emlrtRSI;
    b_sqrt(&st, &d);
    i = r1->size[0];
    if (obj->ConstraintBound->size[0] == 1) {
      r1->size[0] = r->size[0];
    } else {
      r1->size[0] = obj->ConstraintBound->size[0];
    }

    emxEnsureCapacity_boolean_T(r1, i);
    stride_0_0 = (r->size[0] != 1);
    stride_1_0 = (obj->ConstraintBound->size[0] != 1);
    aux_0_0 = 0;
    aux_1_0 = 0;
    if (obj->ConstraintBound->size[0] == 1) {
      loop_ub = r->size[0];
    } else {
      loop_ub = obj->ConstraintBound->size[0];
    }

    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (r->data[aux_0_0] - obj->ConstraintBound->data[aux_1_0] >
                     1.4901161193847656E-8);
      aux_1_0 += stride_1_0;
      aux_0_0 += stride_0_0;
    }

    st.site = &nk_emlrtRSI;
    if (any(&st, r1)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  return flag;
}

static void c_rand(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &o_emlrtRSI;
  i = r->size[0];
  r->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &rc_emlrtDCI,
    &b_st);
  emxEnsureCapacity_real_T1(r, i);
  i = (int32_T)varargin_1 - 1;
  for (k = 0; k <= i; k++) {
    c_st.site = &p_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void randn(InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &yk_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  i = r->size[0];
  r->size[0] = (int32_T)varargin_1[0];
  emxEnsureCapacity_real_T1(r, i);
  i = (int32_T)varargin_1[0] - 1;
  for (k = 0; k <= i; k++) {
    d_st.site = &al_emlrtRSI;
    d = b_eml_rand_mt19937ar(&d_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void g_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 55 };

  static char_T b_msgID[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'I', 'n', 'v', 'a', 'l', 'i',
    'd', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'R', 'e', 's', 'u', 'l', 't' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[55];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 55; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 55, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &sm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  real_T t23_LocalPose[16];
  real_T t23_WorldPose[16];
  real_T t21_MeshScale[3];
  real_T t23_MeshScale[3];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    st.site = &kl_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &i_emlrtRTEI, &st);
    for (b_i = 0; b_i <= i; b_i++) {
      b_st.site = &ll_emlrtRSI;
      i1 = obj->CollisionGeometries->size[1] - 1;
      r = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &qd_emlrtBCI, &b_st)];
      memcpy(&t23_LocalPose[0], &r.LocalPose[0], sizeof(real_T) << 4);
      memcpy(&t23_WorldPose[0], &r.WorldPose[0], sizeof(real_T) << 4);
      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = r.MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      c_st.site = &ml_emlrtRSI;
      collisioncodegen_destructGeometry(&r.CollisionPrimitive);
      i1 = obj->CollisionGeometries->size[1] - 1;
      for (i2 = 0; i2 < 3; i2++) {
        t23_MeshScale[i2] = t21_MeshScale[i2];
      }

      expl_temp.CollisionPrimitive = r.CollisionPrimitive;
      memcpy(&expl_temp.LocalPose[0], &t23_LocalPose[0], sizeof(real_T) << 4);
      memcpy(&expl_temp.WorldPose[0], &t23_WorldPose[0], sizeof(real_T) << 4);
      for (i2 = 0; i2 < 3; i2++) {
        expl_temp.MeshScale[i2] = t23_MeshScale[i2];
      }

      obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
        &pd_emlrtBCI, &st)] = expl_temp;
    }
  }
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  c_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30])
{
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 4, &pArrays[0],
    "message", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0], "feval",
    true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "feval",
                        true, location);
}

static const mxArray *d_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
    "message", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "sprintf", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0], "feval",
    true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 4, &pArrays[0], "feval",
    true, location);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(e_state)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &wl_emlrtRSI;
        b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &b_emlrtMCI),
                 &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2])
{
  int32_T j;
  int32_T kk;
  uint32_T mti;
  uint32_T y;
  for (j = 0; j < 2; j++) {
    mti = mt[624] + 1U;
    if (mti >= 625U) {
      for (kk = 0; kk < 227; kk++) {
        y = (mt[kk] & 2147483648U) | (mt[kk + 1] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk] = mt[kk + 397] ^ y;
      }

      for (kk = 0; kk < 396; kk++) {
        y = (mt[kk + 227] & 2147483648U) | (mt[kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk + 227] = mt[kk] ^ y;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        y >>= 1U;
      } else {
        y = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ y;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    b_u[j] = y;
  }
}

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  char_T d_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &ol_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &p_emlrtMCI),
             &p_emlrtMCI), &p_emlrtMCI);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[6])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T c_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T f_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T m_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T e_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T k_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T o_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T j_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *limits;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T sz[2];
  real_T b_sz;
  int32_T ii_data[6];
  int32_T indicesUpperBoundViolation_data[6];
  int32_T ii_size[1];
  int32_T b_ii_data;
  int32_T i;
  int32_T indicesUpperBoundViolation_size_idx_0;
  int32_T k;
  char_T b_u[52];
  char_T l_u[51];
  char_T d_u[46];
  char_T n_u[45];
  char_T g_u[38];
  char_T h_u[25];
  boolean_T b_ubOK[6];
  boolean_T lbOK[6];
  boolean_T ubOK[6];
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  b_st.site = &tf_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 52, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &rl_emlrtRSI;
    b_error(&d_st, y, getString(&d_st, message(&d_st, b_y, e_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  c_st.site = &kb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 52, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    d_st.site = &ql_emlrtRSI;
    b_error(&d_st, c_y, getString(&d_st, message(&d_st, f_y, i_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  c_st.site = &kb_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p && ((b_sz != b_sz) || ((!muDoubleScalarIsInf(b_sz)) && (b_sz >= 0.0) &&
          (b_sz == muDoubleScalarFloor(b_sz))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 38, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 38, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &xl_emlrtRSI;
    b_error(&d_st, d_y, getString(&d_st, b_message(&d_st, h_y, &r_emlrtMCI),
             &r_emlrtMCI), &r_emlrtMCI);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p) {
      if (b_sz != b_sz) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          i = 6;
        } else {
          i = 1;
        }

        if (b_sz == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&c_st, 51, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      n_u[i] = o_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &n_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&k_y, m);
    d_st.site = &pl_emlrtRSI;
    b_error(&d_st, g_y, getString(&d_st, message(&d_st, j_y, k_y, &s_emlrtMCI),
             &s_emlrtMCI), &s_emlrtMCI);
  }

  emxInit_real_T(&limits, 2);
  st.site = &qf_emlrtRSI;
  RigidBodyTree_get_JointPositionLimits(&st, obj, limits);
  if (limits->size[0] == 6) {
    for (i = 0; i < 6; i++) {
      ubOK[i] = (Q[i] <= limits->data[i + limits->size[0]] +
                 4.4408920985006262E-16);
    }
  } else {
    binary_expand_op_3(ubOK, Q, limits);
  }

  if (limits->size[0] == 6) {
    for (i = 0; i < 6; i++) {
      lbOK[i] = (Q[i] >= limits->data[i] - 4.4408920985006262E-16);
    }
  } else {
    binary_expand_op_2(lbOK, Q, limits);
  }

  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!ubOK[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  guard1 = false;
  if (p) {
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!lbOK[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (p) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    for (i = 0; i < 6; i++) {
      b_ubOK[i] = !ubOK[i];
    }

    st.site = &sf_emlrtRSI;
    eml_find(&st, b_ubOK, ii_data, ii_size);
    indicesUpperBoundViolation_size_idx_0 = ii_size[0];
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      b_ii_data = ii_data[i];
      ii_data[i] = b_ii_data;
      indicesUpperBoundViolation_data[i] = b_ii_data;
    }

    k = limits->size[0];
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1, k,
        &rd_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &l_emlrtECI,
      (emlrtConstCTX)sp);
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      Q[ii_data[i] - 1] = limits->data[(indicesUpperBoundViolation_data[i] +
        limits->size[0]) - 1];
    }

    for (i = 0; i < 6; i++) {
      ubOK[i] = !lbOK[i];
    }

    st.site = &sf_emlrtRSI;
    eml_find(&st, ubOK, ii_data, ii_size);
    indicesUpperBoundViolation_size_idx_0 = ii_size[0];
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      b_ii_data = ii_data[i];
      ii_data[i] = b_ii_data;
      indicesUpperBoundViolation_data[i] = b_ii_data;
    }

    k = limits->size[0];
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1, k,
        &sd_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &m_emlrtECI,
      (emlrtConstCTX)sp);
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      Q[ii_data[i] - 1] = limits->data[indicesUpperBoundViolation_data[i] - 1];
    }

    st.site = &rf_emlrtRSI;
    b_st.site = &yd_emlrtRSI;
    e_warning(&b_st);
  }

  emxFree_real_T(&limits);
}

static void c_sqrt(creal_T *x)
{
  real_T absxi;
  real_T absxr;
  real_T xi;
  real_T xr;
  xr = x->re;
  xi = x->im;
  if (xi == 0.0) {
    if (xr < 0.0) {
      absxr = 0.0;
      absxi = muDoubleScalarSqrt(-xr);
    } else {
      absxr = muDoubleScalarSqrt(xr);
      absxi = 0.0;
    }
  } else if (xr == 0.0) {
    if (xi < 0.0) {
      absxr = muDoubleScalarSqrt(-xi / 2.0);
      absxi = -absxr;
    } else {
      absxr = muDoubleScalarSqrt(xi / 2.0);
      absxi = absxr;
    }
  } else if (muDoubleScalarIsNaN(xr)) {
    absxr = rtNaN;
    absxi = rtNaN;
  } else if (muDoubleScalarIsNaN(xi)) {
    absxr = rtNaN;
    absxi = rtNaN;
  } else if (muDoubleScalarIsInf(xi)) {
    absxr = muDoubleScalarAbs(xi);
    absxi = xi;
  } else if (muDoubleScalarIsInf(xr)) {
    if (xr < 0.0) {
      absxr = 0.0;
      absxi = xi * -xr;
    } else {
      absxr = xr;
      absxi = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(xr);
    absxi = muDoubleScalarAbs(xi);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi);
      if (absxi > absxr) {
        absxr = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi +
          1.0);
      } else {
        absxr = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) *
        0.5);
    }

    if (xr > 0.0) {
      absxi = 0.5 * (xi / absxr);
    } else {
      if (xi < 0.0) {
        absxi = -absxr;
      } else {
        absxi = absxr;
      }

      absxr = 0.5 * (xi / absxi);
    }
  }

  x->re = absxr;
  x->im = absxi;
}

static real_T rescale(real_T *re, real_T *im)
{
  real_T absim;
  real_T scale;
  scale = muDoubleScalarAbs(*re);
  absim = muDoubleScalarAbs(*im);
  if (scale > absim) {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    *im /= scale;
  } else if (absim > scale) {
    *re /= absim;
    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }

    scale = absim;
  } else {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }
  }

  return scale;
}

static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  __m128d r;
  int32_T i;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  i = ix0 + n;
  scalarLB = (i - ix0) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k < i; k++) {
    x[k - 1] *= a;
  }
}

static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void b_xscal(real_T a, real_T x[3], int32_T ix0)
{
  __m128d r;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  scalarLB = 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}

static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xscal(real_T a, real_T x[9], int32_T ix0)
{
  __m128d r;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  scalarLB = 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s)
{
  *c = 0.0;
  *s = 0.0;
  drotg(a, b_b, c, s);
}

static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

static void d_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  int32_T nx;
  char_T b_u[30];
  char_T d_u[4];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  p = false;
  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    if (p || (x->data[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (nx = 0; nx < 4; nx++) {
      d_u[nx] = e_u[nx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &ol_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &p_emlrtMCI),
             &p_emlrtMCI), &p_emlrtMCI);
  }

  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  emlrtStack b_st;
  emlrtStack st;
  real_T b_u;
  real_T r;
  real_T x;
  int32_T exitg1;
  int32_T i;
  uint32_T u32[2];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)((int32_T)u32[1] &
           16777215)) * 2.2204460492503131E-16 - 1.0) * dv[i];
    if (muDoubleScalarAbs(r) <= dv[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      b_st.site = &cl_emlrtRSI;
      b_u = genrandu(&b_st, e_state);
      if (dv1[i] + b_u * (dv1[i - 1] - dv1[i]) < muDoubleScalarExp(-0.5 * r * r))
      {
        exitg1 = 1;
      }
    } else {
      do {
        b_st.site = &dl_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
        x = muDoubleScalarLog(b_u) * 0.273661237329758;
        b_st.site = &el_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
      } while (!(-2.0 * muDoubleScalarLog(b_u) > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static real_T genrandu(const emlrtStack *sp, uint32_T mt[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(mt, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(mt)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &wl_emlrtRSI;
        b_error(&st, y, getString(&st, b_message(&st, b_y, &b_emlrtMCI),
                 &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void plus(emxArray_real_T *in1, emxArray_real_T *in2, emxArray_real_T
                 *in3)
{
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] + in3->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_real_T(&b_in2);
}

static void times(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in1, 1);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  emxEnsureCapacity_real_T1(b_in1, i);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1->data[i] = in1->data[aux_0_0] * in2->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void minus(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in1, 1);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  emxEnsureCapacity_real_T1(b_in1, i);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1->data[i] = in1->data[aux_0_0] - in2->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void b_plus(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in1->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] + in1->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_real_T(&b_in2);
}

static void b_minus(real_T in1[36], emxArray_real_T *in2)
{
  real_T b_in1[36];
  int32_T aux_0_0;
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_0;
  int32_T stride_0_1;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 6; i++) {
    aux_0_0 = 0;
    for (i1 = 0; i1 < 6; i1++) {
      b_in1[i1 + 6 * i] = in1[i1 + 6 * i] - in2->data[aux_0_0 + in2->size[0] *
        aux_0_1];
      aux_0_0 += stride_0_0;
    }

    aux_0_1 += stride_0_1;
  }

  for (i = 0; i < 36; i++) {
    in1[i] = b_in1[i];
  }
}

static void c_minus(real_T in1[36], emxArray_real_T *in2)
{
  real_T b_in1[36];
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_1;
  stride_0_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      b_in1[i1 + 6 * i] = in1[i1 + 6 * i] - in2->data[i1 + 6 * aux_0_1];
    }

    aux_0_1 += stride_0_1;
  }

  for (i = 0; i < 36; i++) {
    in1[i] = b_in1[i];
  }
}

static void d_minus(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in1->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] - in1->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_real_T(&b_in2);
}

static void rdivide(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in1, 1);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  emxEnsureCapacity_real_T1(b_in1, i);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1->data[i] = in1->data[aux_0_0] / in2->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void binary_expand_op(const emlrtStack *sp, emlrtRSInfo in1,
  emxArray_real_T *in2, emxArray_real_T *in3, real_T *out1, int32_T *out2)
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] / in3->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  st.site = &in1;
  maximum(&st, b_in2, out1, out2);
  emxFree_real_T(&b_in2);
}

static void binary_expand_op_1(emxArray_boolean_T *in1, emxArray_real_T *in2,
  robotics_core_internal_DampedBFGSwGradientProjection *in3)
{
  emxArray_boolean_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_boolean_T(&b_in2, 1);
  i = b_in2->size[0];
  if (in3->ConstraintBound->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->ConstraintBound->size[0];
  }

  emxEnsureCapacity_boolean_T(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->ConstraintBound->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3->ConstraintBound->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->ConstraintBound->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = (in2->data[aux_0_0] >= in3->ConstraintBound->data[aux_1_0]);
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_boolean_T(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_boolean_T(&b_in2);
}

static void binary_expand_op_2(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3)
{
  int32_T aux_0_0;
  int32_T b_in3;
  int32_T i;
  boolean_T b_in2[6];
  b_in3 = in3->size[0];
  b_in3 = (b_in3 != 1);
  aux_0_0 = 0;
  for (i = 0; i < 6; i++) {
    b_in2[i] = (in2[i] >= in3->data[aux_0_0] - 4.4408920985006262E-16);
    aux_0_0 += b_in3;
  }

  for (i = 0; i < 6; i++) {
    in1[i] = b_in2[i];
  }
}

static void binary_expand_op_3(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3)
{
  int32_T aux_0_0;
  int32_T b_in3;
  int32_T i;
  boolean_T b_in2[6];
  b_in3 = in3->size[0];
  b_in3 = (b_in3 != 1);
  aux_0_0 = 0;
  for (i = 0; i < 6; i++) {
    b_in2[i] = (in2[i] <= in3->data[aux_0_0 + in3->size[0]] +
                4.4408920985006262E-16);
    aux_0_0 += b_in3;
  }

  for (i = 0; i < 6; i++) {
    in1[i] = b_in2[i];
  }
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxInitStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
  emxInitMatrix_rigidBodyJoint(pStruct->_pobj1);
  b_emxInitMatrix_robotics_manip_in(pStruct->_pobj2);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[13])
{
  int32_T i;
  for (i = 0; i < 13; i++) {
    c_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_robotics_manip_internal(&pStruct->CollisionGeometries, 2);
}

static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T b_numDimensions)
{
  emxArray_robotics_manip_interna *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_robotics_manip_interna *)emlrtMallocMex(sizeof
    (emxArray_robotics_manip_interna));
  emxArray = *pEmxArray;
  emxArray->data = (robotics_manip_internal_CollisionGeometry *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[13])
{
  int32_T i;
  for (i = 0; i < 13; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInit_real_T(&pStruct->PositionLimitsInternal, 2);
  emxInit_real_T1(&pStruct->HomePositionInternal, 1);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void b_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[12])
{
  int32_T i;
  for (i = 0; i < 12; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxInit_real_T(&pStruct->Limits, 2);
  d_emxInitStruct_robotics_manip_in(&pStruct->_pobj0);
  emxInitMatrix_rigidBodyJoint1(pStruct->_pobj1);
  c_emxInitMatrix_robotics_manip_in(pStruct->_pobj2);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj3);
  e_emxInitStruct_robotics_manip_in(&pStruct->_pobj4);
  emxInitStruct_robotics_core_int(&pStruct->_pobj5);
}

static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxInit_real_T1(&pStruct->ErrTemp, 1);
  emxInit_real_T1(&pStruct->GradTemp, 1);
}

static void emxInitMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[12])
{
  int32_T i;
  for (i = 0; i < 12; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void c_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  c_emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
  d_emxInitMatrix_robotics_manip_in(pStruct->_pobj1);
  emxInitMatrix_rigidBodyJoint2(pStruct->_pobj2);
}

static void d_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[7])
{
  int32_T i;
  for (i = 0; i < 7; i++) {
    c_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxInitMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[7])
{
  int32_T i;
  for (i = 0; i < 7; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxInit_real_T(&pStruct->ConstraintMatrix, 2);
  emxInit_real_T1(&pStruct->ConstraintBound, 1);
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
  emxFreeMatrix_rigidBodyJoint(pStruct->_pobj1);
  b_emxFreeMatrix_robotics_manip_in(pStruct->_pobj2);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[13])
{
  int32_T i;
  for (i = 0; i < 13; i++) {
    c_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_robotics_manip_interna *)NULL) {
    if (((*pEmxArray)->data != (robotics_manip_internal_CollisionGeometry *)NULL)
        && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_robotics_manip_interna *)NULL;
  }
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_robotics_manip_internal(&pStruct->CollisionGeometries);
}

static void emxFreeMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[13])
{
  int32_T i;
  for (i = 0; i < 13; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
  emxFree_char_T(&pStruct->NameInternal);
  emxFree_real_T(&pStruct->PositionLimitsInternal);
  emxFree_real_T(&pStruct->HomePositionInternal);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void b_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[12])
{
  int32_T i;
  for (i = 0; i < 12; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  b_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxFreeStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxFree_real_T(&pStruct->Limits);
  d_emxFreeStruct_robotics_manip_in(&pStruct->_pobj0);
  emxFreeMatrix_rigidBodyJoint1(pStruct->_pobj1);
  c_emxFreeMatrix_robotics_manip_in(pStruct->_pobj2);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj3);
  e_emxFreeStruct_robotics_manip_in(&pStruct->_pobj4);
  emxFreeStruct_robotics_core_int(&pStruct->_pobj5);
}

static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxFree_real_T(&pStruct->ErrTemp);
  emxFree_real_T(&pStruct->GradTemp);
}

static void emxFreeMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[12])
{
  int32_T i;
  for (i = 0; i < 12; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void c_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  c_emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
  d_emxFreeMatrix_robotics_manip_in(pStruct->_pobj1);
  emxFreeMatrix_rigidBodyJoint2(pStruct->_pobj2);
}

static void d_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[7])
{
  int32_T i;
  for (i = 0; i < 7; i++) {
    c_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[7])
{
  int32_T i;
  for (i = 0; i < 7; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxFree_real_T(&pStruct->ConstraintMatrix);
  emxFree_real_T(&pStruct->ConstraintBound);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof
      (robotics_manip_internal_CollisionGeometry));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof
             (robotics_manip_internal_CollisionGeometry) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (robotics_manip_internal_CollisionGeometry *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(ptrdiff_t));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(ptrdiff_t) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (ptrdiff_t *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_ptrdiff_t *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_ptrdiff_t *)emlrtMallocMex(sizeof(emxArray_ptrdiff_t));
  emxArray = *pEmxArray;
  emxArray->data = (ptrdiff_t *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray)
{
  if (*pEmxArray != (emxArray_ptrdiff_t *)NULL) {
    if (((*pEmxArray)->data != (ptrdiff_t *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_ptrdiff_t *)NULL;
  }
}

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  if (numerator < 0) {
    absNumerator = ~(uint32_T)numerator + 1U;
  } else {
    absNumerator = (uint32_T)numerator;
  }

  if (denominator < 0) {
    absDenominator = ~(uint32_T)denominator + 1U;
  } else {
    absDenominator = (uint32_T)denominator;
  }

  absNumerator /= absDenominator;
  if ((numerator < 0) != (denominator < 0)) {
    quotient = -(int32_T)absNumerator;
  } else {
    quotient = (int32_T)absNumerator;
  }

  return quotient;
}

static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroWarningOrError2018b(NULL, (emlrtConstCTX)sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    absNumerator /= absDenominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_q90jjkosYeYuVdZaEe63wB
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[16])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u1 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->b_y0 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_q90jjkosYeYuVdZaEe63wB(SimStruct *S, int_T tid)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_q90jjkosYeYuVdZaEe63wB(SimStruct *S, int_T tid)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static void mdlTerminate_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
  InstanceStruct_q90jjkosYeYuVdZaEe63wB *moduleInstance =
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB *)calloc(1, sizeof
    (InstanceStruct_q90jjkosYeYuVdZaEe63wB));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_q90jjkosYeYuVdZaEe63wB);
  ssSetmdlInitializeConditions(S, mdlInitialize_q90jjkosYeYuVdZaEe63wB);
  ssSetmdlUpdate(S, mdlUpdate_q90jjkosYeYuVdZaEe63wB);
  ssSetmdlDerivatives(S, mdlDerivatives_q90jjkosYeYuVdZaEe63wB);
  ssSetmdlTerminate(S, mdlTerminate_q90jjkosYeYuVdZaEe63wB);
  ssSetmdlEnable(S, mdlEnable_q90jjkosYeYuVdZaEe63wB);
  ssSetmdlDisable(S, mdlDisable_q90jjkosYeYuVdZaEe63wB);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_q90jjkosYeYuVdZaEe63wB(SimStruct *S)
{
}

void method_dispatcher_q90jjkosYeYuVdZaEe63wB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_q90jjkosYeYuVdZaEe63wB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_q90jjkosYeYuVdZaEe63wB(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: q90jjkosYeYuVdZaEe63wB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_q90jjkosYeYuVdZaEe63wB_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,4);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("blas.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("lapacke.h");
  mxSetCell(elem_5,3,elem_9);
  mxSetCell(elem_3,1,elem_5);
  elem_10 = mxCreateCellMatrix(1,4);
  elem_11 = mxCreateString("");
  mxSetCell(elem_10,0,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_10,1,elem_12);
  elem_13 = mxCreateString("");
  mxSetCell(elem_10,2,elem_13);
  elem_14 = mxCreateString("");
  mxSetCell(elem_10,3,elem_14);
  mxSetCell(elem_3,2,elem_10);
  elem_15 = mxCreateCellMatrix(1,4);
  elem_16 = mxCreateString("");
  mxSetCell(elem_15,0,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_15,1,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_15,2,elem_18);
  elem_19 = mxCreateString("");
  mxSetCell(elem_15,3,elem_19);
  mxSetCell(elem_3,3,elem_15);
  mxSetCell(elem_1,1,elem_3);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_20);
  elem_21 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_21);
  elem_22 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_22);
  elem_23 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_23);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_24 = mxCreateCellMatrix(1,4);
  elem_25 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_24,0,elem_25);
  elem_26 = mxCreateString("coder.internal.time.CoderTimeAPI");
  mxSetCell(elem_24,1,elem_26);
  elem_27 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_24,2,elem_27);
  elem_28 = mxCreateString("coder.internal.lapack.LAPACKApi");
  mxSetCell(elem_24,3,elem_28);
  mxSetCell(mxBIArgs,1,elem_24);
  elem_29 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_29);
  return mxBIArgs;
}

mxArray *cgxe_q90jjkosYeYuVdZaEe63wB_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
