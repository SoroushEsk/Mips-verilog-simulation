/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/University/term5/Az memary/ComputerArthitectureLab/InstCache.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {127, 0};
static int ng7[] = {152, 0};
static int ng8[] = {128, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {153, 0};
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {134217728U, 0U};



static void Initial_15_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(16, ng0);
    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB6:    xsi_set_current_line(17, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2088);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(16, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_23_1(char *t0)
{
    char t6[8];
    char t8[8];
    char t12[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    char *t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t4, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 4);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 4);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 7U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 7U);
    xsi_vlog_generic_convert_array_indices(t6, t8, t7, t11, 2, 1, t12, 3, 2);
    t27 = (t0 + 2088);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    t31 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t24, t25, t26, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t6 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t8 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    t43 = (t25 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    t47 = (t26 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (!(t48));
    t50 = (t46 && t49);
    if (t50 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 7);
    *((unsigned int *)t6) = t19;
    t20 = *((unsigned int *)t7);
    t21 = (t20 >> 7);
    *((unsigned int *)t5) = t21;
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 33554431U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 33554431U);
    t9 = (t0 + 2088);
    t10 = (t0 + 2088);
    t11 = (t10 + 72U);
    t13 = *((char **)t11);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2408);
    t27 = (t17 + 56U);
    t28 = *((char **)t27);
    memset(t24, 0, 8);
    t29 = (t24 + 4);
    t30 = (t28 + 4);
    t33 = *((unsigned int *)t28);
    t36 = (t33 >> 4);
    *((unsigned int *)t24) = t36;
    t40 = *((unsigned int *)t30);
    t44 = (t40 >> 4);
    *((unsigned int *)t29) = t44;
    t48 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t48 & 7U);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & 7U);
    xsi_vlog_generic_convert_array_indices(t8, t12, t13, t16, 2, 1, t24, 3, 2);
    t31 = (t0 + 2088);
    t32 = (t31 + 72U);
    t35 = *((char **)t32);
    t39 = ((char*)((ng7)));
    t43 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t25, t26, t60, ((int*)(t35)), 2, t39, 32, 1, t43, 32, 1);
    t47 = (t8 + 4);
    t53 = *((unsigned int *)t47);
    t34 = (!(t53));
    t61 = (t12 + 4);
    t54 = *((unsigned int *)t61);
    t37 = (!(t54));
    t38 = (t34 && t37);
    t62 = (t25 + 4);
    t56 = *((unsigned int *)t62);
    t41 = (!(t56));
    t42 = (t38 && t41);
    t63 = (t26 + 4);
    t57 = *((unsigned int *)t63);
    t45 = (!(t57));
    t46 = (t42 && t45);
    t64 = (t60 + 4);
    t65 = *((unsigned int *)t64);
    t49 = (!(t65));
    t50 = (t46 && t49);
    if (t50 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 4);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 4);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 7U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 7U);
    xsi_vlog_generic_convert_array_indices(t6, t8, t7, t11, 2, 1, t12, 3, 2);
    t27 = (t0 + 2088);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t24, t29, 2, t30, 32, 1);
    t31 = (t6 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (!(t33));
    t32 = (t8 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (!(t36));
    t38 = (t34 && t37);
    t35 = (t24 + 4);
    t40 = *((unsigned int *)t35);
    t41 = (!(t40));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB10;

LAB11:    goto LAB2;

LAB6:    t51 = *((unsigned int *)t26);
    t52 = (t51 + 0);
    t53 = *((unsigned int *)t8);
    t54 = *((unsigned int *)t25);
    t55 = (t53 + t54);
    t56 = *((unsigned int *)t24);
    t57 = *((unsigned int *)t25);
    t58 = (t56 - t57);
    t59 = (t58 + 1);
    xsi_vlogvar_assign_value(t2, t3, t52, t55, t59);
    goto LAB7;

LAB8:    t66 = *((unsigned int *)t60);
    t52 = (t66 + 0);
    t67 = *((unsigned int *)t12);
    t68 = *((unsigned int *)t26);
    t55 = (t67 + t68);
    t69 = *((unsigned int *)t25);
    t70 = *((unsigned int *)t26);
    t58 = (t69 - t70);
    t59 = (t58 + 1);
    xsi_vlogvar_assign_value(t9, t6, t52, t55, t59);
    goto LAB9;

LAB10:    t44 = *((unsigned int *)t8);
    t48 = *((unsigned int *)t24);
    t45 = (t44 + t48);
    xsi_vlogvar_assign_value(t3, t2, 0, t45, 1);
    goto LAB11;

}

static void Always_32_2(char *t0)
{
    char t7[40];
    char t14[8];
    char t24[8];
    char t34[8];
    char t44[8];
    char t60[8];
    char t75[40];
    char t82[8];
    char t92[8];
    char t98[8];
    char t114[8];
    char t122[8];
    char t160[8];
    char t175[40];
    char t182[8];
    char t192[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    int t171;
    char *t172;
    char *t173;
    char *t174;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 4);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 4);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 154, t6, t10, t13, 2, 1, t14, 3, 2);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t26 = (t7 + 32);
    t27 = (t7 + 36);
    t28 = *((unsigned int *)t26);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t25) = t31;
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 33554431U);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 33554431U);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 7);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 7);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 33554431U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 33554431U);
    memset(t44, 0, 8);
    t45 = (t24 + 4);
    t46 = (t34 + 4);
    t47 = *((unsigned int *)t24);
    t48 = *((unsigned int *)t34);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB9;

LAB6:    if (t56 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t44) = 1;

LAB9:    memset(t60, 0, 8);
    t61 = (t44 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t44);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t61) != 0)
        goto LAB12;

LAB13:    t68 = (t60 + 4);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t68);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB14;

LAB15:    memcpy(t122, t60, 8);

LAB16:    t154 = (t122 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t122);
    t158 = (t157 & t156);
    t159 = (t158 != 0);
    if (t159 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);

LAB42:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB30:    goto LAB2;

LAB8:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t60) = 1;
    goto LAB13;

LAB12:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB13;

LAB14:    t72 = (t0 + 2088);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t76 = (t0 + 2088);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t0 + 2088);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (t86 >> 4);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 4);
    *((unsigned int *)t83) = t89;
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 7U);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 7U);
    xsi_vlog_generic_get_array_select_value(t75, 154, t74, t78, t81, 2, 1, t82, 3, 2);
    t93 = (t0 + 2088);
    t94 = (t93 + 72U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t92, 32, t75, t95, 2, t96, 32, 1);
    t97 = ((char*)((ng4)));
    memset(t98, 0, 8);
    t99 = (t92 + 4);
    t100 = (t97 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t97);
    t103 = (t101 ^ t102);
    t104 = *((unsigned int *)t99);
    t105 = *((unsigned int *)t100);
    t106 = (t104 ^ t105);
    t107 = (t103 | t106);
    t108 = *((unsigned int *)t99);
    t109 = *((unsigned int *)t100);
    t110 = (t108 | t109);
    t111 = (~(t110));
    t112 = (t107 & t111);
    if (t112 != 0)
        goto LAB20;

LAB17:    if (t110 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t98) = 1;

LAB20:    memset(t114, 0, 8);
    t115 = (t98 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t98);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t115) != 0)
        goto LAB23;

LAB24:    t123 = *((unsigned int *)t60);
    t124 = *((unsigned int *)t114);
    t125 = (t123 & t124);
    *((unsigned int *)t122) = t125;
    t126 = (t60 + 4);
    t127 = (t114 + 4);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t126);
    t130 = *((unsigned int *)t127);
    t131 = (t129 | t130);
    *((unsigned int *)t128) = t131;
    t132 = *((unsigned int *)t128);
    t133 = (t132 != 0);
    if (t133 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t113 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t114) = 1;
    goto LAB24;

LAB23:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB24;

LAB25:    t134 = *((unsigned int *)t122);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t122) = (t134 | t135);
    t136 = (t60 + 4);
    t137 = (t114 + 4);
    t138 = *((unsigned int *)t60);
    t139 = (~(t138));
    t140 = *((unsigned int *)t136);
    t141 = (~(t140));
    t142 = *((unsigned int *)t114);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (~(t144));
    t146 = (t139 & t141);
    t147 = (t143 & t145);
    t148 = (~(t146));
    t149 = (~(t147));
    t150 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t150 & t148);
    t151 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t151 & t149);
    t152 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t152 & t148);
    t153 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t153 & t149);
    goto LAB27;

LAB28:    xsi_set_current_line(33, ng0);

LAB31:    xsi_set_current_line(35, ng0);
    t161 = (t0 + 1048U);
    t162 = *((char **)t161);
    memset(t160, 0, 8);
    t161 = (t160 + 4);
    t163 = (t162 + 4);
    t164 = *((unsigned int *)t162);
    t165 = (t164 >> 2);
    *((unsigned int *)t160) = t165;
    t166 = *((unsigned int *)t163);
    t167 = (t166 >> 2);
    *((unsigned int *)t161) = t167;
    t168 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t168 & 3U);
    t169 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t169 & 3U);

LAB32:    t170 = ((char*)((ng11)));
    t171 = xsi_vlog_unsigned_case_compare(t160, 2, t170, 2);
    if (t171 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t146 = xsi_vlog_unsigned_case_compare(t160, 2, t2, 2);
    if (t146 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng12)));
    t146 = xsi_vlog_unsigned_case_compare(t160, 2, t2, 2);
    if (t146 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng13)));
    t146 = xsi_vlog_unsigned_case_compare(t160, 2, t2, 2);
    if (t146 == 1)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB33:    xsi_set_current_line(36, ng0);
    t172 = (t0 + 2088);
    t173 = (t172 + 56U);
    t174 = *((char **)t173);
    t176 = (t0 + 2088);
    t177 = (t176 + 72U);
    t178 = *((char **)t177);
    t179 = (t0 + 2088);
    t180 = (t179 + 64U);
    t181 = *((char **)t180);
    t183 = (t0 + 1048U);
    t184 = *((char **)t183);
    memset(t182, 0, 8);
    t183 = (t182 + 4);
    t185 = (t184 + 4);
    t186 = *((unsigned int *)t184);
    t187 = (t186 >> 4);
    *((unsigned int *)t182) = t187;
    t188 = *((unsigned int *)t185);
    t189 = (t188 >> 4);
    *((unsigned int *)t183) = t189;
    t190 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t190 & 7U);
    t191 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t191 & 7U);
    xsi_vlog_generic_get_array_select_value(t175, 154, t174, t178, t181, 2, 1, t182, 3, 2);
    memset(t192, 0, 8);
    t193 = (t192 + 4);
    t194 = (t175 + 4);
    t195 = *((unsigned int *)t175);
    t196 = (t195 >> 0);
    *((unsigned int *)t192) = t196;
    t197 = *((unsigned int *)t194);
    t198 = (t197 >> 0);
    *((unsigned int *)t193) = t198;
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t199 & 4294967295U);
    t200 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t200 & 4294967295U);
    t201 = (t0 + 1768);
    xsi_vlogvar_assign_value(t201, t192, 0, 0, 32);
    goto LAB41;

LAB35:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2088);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    memset(t14, 0, 8);
    t13 = (t14 + 4);
    t16 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 4);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 4);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 154, t5, t9, t12, 2, 1, t14, 3, 2);
    memset(t24, 0, 8);
    t17 = (t24 + 4);
    t25 = (t7 + 8);
    t26 = (t7 + 12);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 0);
    *((unsigned int *)t17) = t31;
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 4294967295U);
    t33 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t33 & 4294967295U);
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t24, 0, 0, 32);
    goto LAB41;

LAB37:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2088);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    memset(t14, 0, 8);
    t13 = (t14 + 4);
    t16 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 4);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 4);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 154, t5, t9, t12, 2, 1, t14, 3, 2);
    memset(t24, 0, 8);
    t17 = (t24 + 4);
    t25 = (t7 + 16);
    t26 = (t7 + 20);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 0);
    *((unsigned int *)t17) = t31;
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 4294967295U);
    t33 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t33 & 4294967295U);
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t24, 0, 0, 32);
    goto LAB41;

LAB39:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2088);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    memset(t14, 0, 8);
    t13 = (t14 + 4);
    t16 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 4);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 4);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 154, t5, t9, t12, 2, 1, t14, 3, 2);
    memset(t24, 0, 8);
    t17 = (t24 + 4);
    t25 = (t7 + 24);
    t26 = (t7 + 28);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 0);
    *((unsigned int *)t17) = t31;
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 4294967295U);
    t33 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t33 & 4294967295U);
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t24, 0, 0, 32);
    goto LAB41;

}


extern void work_m_00000000001550525970_0275023633_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_23_1,(void *)Always_32_2};
	xsi_register_didat("work_m_00000000001550525970_0275023633", "isim/finalTest_isim_beh.exe.sim/work/m_00000000001550525970_0275023633.didat");
	xsi_register_executes(pe);
}
