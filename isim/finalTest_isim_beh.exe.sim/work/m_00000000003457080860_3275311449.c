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
static const char *ng0 = "G:/University/term5/Az memary/ComputerArthitectureLab/registerFile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "time: %t";
static const char *ng6 = "Register%d : %x";
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static int ng9[] = {4, 0};
static int ng10[] = {5, 0};
static int ng11[] = {6, 0};
static int ng12[] = {7, 0};
static int ng13[] = {8, 0};



static void Initial_16_0(char *t0)
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

LAB0:    xsi_set_current_line(16, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2728);
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

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2568);
    t16 = (t0 + 2568);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2568);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
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
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Cont_21_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4824);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4712);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_22_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_25_3(char *t0)
{
    char t13[8];
    char t37[8];
    char t38[8];
    char t57[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4744);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(35, ng0);
    t2 = xsi_vlog_time(t57, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t57, 64);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t28 = (t15 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t5, t14, t29, 2, 1, t35, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t2, 32, (char)118, t13, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB11;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB13:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(29, ng0);

LAB17:    xsi_set_current_line(31, ng0);
    t35 = (t0 + 1848U);
    t36 = *((char **)t35);
    t35 = (t0 + 2568);
    t39 = (t0 + 2568);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 2568);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 1368U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_array_indices(t37, t38, t41, t44, 2, 1, t46, 5, 2);
    t45 = (t37 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (!(t47));
    t49 = (t38 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB18;

LAB19:    goto LAB16;

LAB18:    t53 = *((unsigned int *)t37);
    t54 = *((unsigned int *)t38);
    t55 = (t53 - t54);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t35, t36, 0, *((unsigned int *)t38), t56);
    goto LAB19;

}


extern void work_m_00000000003457080860_3275311449_init()
{
	static char *pe[] = {(void *)Initial_16_0,(void *)Cont_21_1,(void *)Cont_22_2,(void *)Always_25_3};
	xsi_register_didat("work_m_00000000003457080860_3275311449", "isim/finalTest_isim_beh.exe.sim/work/m_00000000003457080860_3275311449.didat");
	xsi_register_executes(pe);
}
