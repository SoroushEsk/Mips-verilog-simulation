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
static const char *ng0 = "G:/University/term5/Az memary/ComputerArthitectureLab/MipsArthitecture.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "time : %t";
static const char *ng5 = "alu result : %x";
static const char *ng6 = "write reg :%x";
static const char *ng7 = "inst : %x  if_id : %x     sign : %x";
static const char *ng8 = "pc : %x";
static const char *ng9 = "branch : %x";
static const char *ng10 = "pcsrc : %x";
static const char *ng11 = "hit : %x";
static const char *ng12 = "regWrite = %x";
static const char *ng13 = "%x    %x";
static const char *ng14 = "%x      %x";
static const char *ng15 = "%x";
static const char *ng16 = "%x first %x second %x outOfForward";
static const char *ng17 = "rd = %x rs = %x rdn = %x rdnn = %x";
static const char *ng18 = "================================================================";
static int ng19[] = {4, 0};
static unsigned int ng20[] = {6U, 0U};
static unsigned int ng21[] = {4U, 0U};



static void Initial_12_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(12, ng0);

LAB2:    xsi_set_current_line(13, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8968);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9128);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_22_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 10296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 12016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 11856);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_123_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 10544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 8408U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 12080);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t27 = (t0 + 11872);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 7928U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 4088U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_124_3(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 10792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 8568U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 12144);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t27 = (t0 + 11888);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 7928U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 4248U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_150_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t11[8];
    char t27[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
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
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;

LAB0:    t1 = (t0 + 11040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4728U);
    t5 = *((char **)t2);
    t2 = (t0 + 4688U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB4:    if (t23 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;

LAB7:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t28) != 0)
        goto LAB10;

LAB11:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB12;

LAB13:    memcpy(t65, t27, 8);

LAB14:    memset(t4, 0, 8);
    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t97) != 0)
        goto LAB28;

LAB29:    t104 = (t4 + 4);
    t105 = *((unsigned int *)t4);
    t106 = *((unsigned int *)t104);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB30;

LAB31:    t109 = *((unsigned int *)t4);
    t110 = (~(t109));
    t111 = *((unsigned int *)t104);
    t112 = (t110 || t111);
    if (t112 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t104) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t113, 8);

LAB38:    t114 = (t0 + 12208);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    memset(t118, 0, 8);
    t119 = 1U;
    t120 = t119;
    t121 = (t3 + 4);
    t122 = *((unsigned int *)t3);
    t119 = (t119 & t122);
    t123 = *((unsigned int *)t121);
    t120 = (t120 & t123);
    t124 = (t118 + 4);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t125 | t119);
    t126 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t126 | t120);
    xsi_driver_vfirst_trans(t114, 0, 0);
    t127 = (t0 + 11904);
    *((int *)t127) = 1;

LAB1:    return;
LAB6:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB10:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB11;

LAB12:    t39 = (t0 + 5688U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t42 = (t40 + 4);
    t43 = (t39 + 4);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB18;

LAB15:    if (t53 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t41) = 1;

LAB18:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t58) != 0)
        goto LAB21;

LAB22:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t27 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB21:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB22;

LAB23:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t27 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t103 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB29;

LAB30:    t108 = ((char*)((ng3)));
    goto LAB31;

LAB32:    t113 = ((char*)((ng1)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t108, 32, t113, 32);
    goto LAB38;

LAB36:    memcpy(t3, t108, 8);
    goto LAB38;

}

static void Cont_151_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 11288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4728U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t25 = (t0 + 12272);
    t32 = (t25 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 31U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t25, 0, 4);
    t44 = (t0 + 11920);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 4888U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 5048U);
    t31 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 5, t26, 5, t31, 5);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Always_200_6(char *t0)
{
    char t4[16];
    char t7[8];
    char t18[8];
    char t28[8];
    char t56[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 11536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 11936);
    *((int *)t2) = 1;
    t3 = (t0 + 11568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(200, ng0);

LAB5:    xsi_set_current_line(202, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 7768U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    t2 = (t0 + 4408U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t5, 32, (char)118, t6, 32);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 6168U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 8968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t5, 1);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 7128U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 8088U);
    t3 = *((char **)t2);
    t2 = (t0 + 8248U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t3, 32, (char)118, t5, 32);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 7768U);
    t3 = *((char **)t2);
    t2 = (t0 + 7448U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)118, t3, 32, (char)118, t5, 32);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 7128U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 8408U);
    t3 = *((char **)t2);
    t2 = (t0 + 8568U);
    t5 = *((char **)t2);
    t2 = (t0 + 7928U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng16, 4, t0, (char)118, t3, 1, (char)118, t5, 1, (char)118, t6, 32);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t2 = (t0 + 6808U);
    t6 = *((char **)t2);
    t2 = (t0 + 7608U);
    t14 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 5, t0, (char)118, t3, 5, (char)118, t5, 5, (char)118, t6, 5, (char)118, t14, 5);
    xsi_set_current_line(216, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = (t0 + 6648U);
    t6 = *((char **)t2);
    t2 = (t0 + 6608U);
    t14 = (t2 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng19)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t15, 2, t16, 32, 1);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t7 + 4);
    t20 = (t17 + 4);
    t8 = *((unsigned int *)t7);
    t9 = *((unsigned int *)t17);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t19);
    t12 = *((unsigned int *)t20);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB9;

LAB6:    if (t24 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t18) = 1;

LAB9:    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = (t5 + 4);
    t33 = (t18 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB10;

LAB11:
LAB12:    t57 = *((unsigned int *)t3);
    t58 = *((unsigned int *)t28);
    t59 = (t57 & t58);
    *((unsigned int *)t56) = t59;
    t60 = (t3 + 4);
    t61 = (t28 + 4);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB13;

LAB14:
LAB15:    t88 = (t56 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t56);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB18:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng20)));
    memset(t18, 0, 8);
    t14 = (t7 + 4);
    t15 = (t6 + 4);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t6);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    t26 = (t24 ^ t25);
    t29 = (t23 | t26);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t15);
    t35 = (t30 | t31);
    t36 = (~(t35));
    t37 = (t29 & t36);
    if (t37 != 0)
        goto LAB23;

LAB20:    if (t35 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t18) = 1;

LAB23:    t17 = (t0 + 1368U);
    t19 = *((char **)t17);
    memset(t28, 0, 8);
    t17 = (t28 + 4);
    t20 = (t19 + 4);
    t38 = *((unsigned int *)t19);
    t39 = (t38 >> 26);
    *((unsigned int *)t28) = t39;
    t40 = *((unsigned int *)t20);
    t41 = (t40 >> 26);
    *((unsigned int *)t17) = t41;
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 63U);
    t45 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t45 & 63U);
    t27 = ((char*)((ng21)));
    memset(t56, 0, 8);
    t32 = (t28 + 4);
    t33 = (t27 + 4);
    t46 = *((unsigned int *)t28);
    t48 = *((unsigned int *)t27);
    t49 = (t46 ^ t48);
    t50 = *((unsigned int *)t32);
    t52 = *((unsigned int *)t33);
    t53 = (t50 ^ t52);
    t54 = (t49 | t53);
    t55 = *((unsigned int *)t32);
    t57 = *((unsigned int *)t33);
    t58 = (t55 | t57);
    t59 = (~(t58));
    t63 = (t54 & t59);
    if (t63 != 0)
        goto LAB27;

LAB24:    if (t58 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t56) = 1;

LAB27:    t64 = *((unsigned int *)t18);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    *((unsigned int *)t96) = t66;
    t42 = (t18 + 4);
    t43 = (t56 + 4);
    t60 = (t96 + 4);
    t67 = *((unsigned int *)t42);
    t68 = *((unsigned int *)t43);
    t69 = (t67 | t68);
    *((unsigned int *)t60) = t69;
    t72 = *((unsigned int *)t60);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB28;

LAB29:
LAB30:    t70 = (t96 + 4);
    t89 = *((unsigned int *)t70);
    t90 = (~(t89));
    t91 = *((unsigned int *)t96);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    goto LAB2;

LAB8:    t27 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB9;

LAB10:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t5 + 4);
    t43 = (t18 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t5);
    t47 = (t46 & t45);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t18);
    t51 = (t50 & t49);
    t52 = (~(t47));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    goto LAB12;

LAB13:    t68 = *((unsigned int *)t56);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t56) = (t68 | t69);
    t70 = (t3 + 4);
    t71 = (t28 + 4);
    t72 = *((unsigned int *)t3);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (~(t74));
    t76 = *((unsigned int *)t28);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (~(t78));
    t80 = (t73 & t75);
    t81 = (t77 & t79);
    t82 = (~(t80));
    t83 = (~(t81));
    t84 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t84 & t82);
    t85 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t85 & t83);
    t86 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t86 & t82);
    t87 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t87 & t83);
    goto LAB15;

LAB16:    xsi_set_current_line(218, ng0);

LAB19:    xsi_set_current_line(219, ng0);
    t94 = ((char*)((ng3)));
    t95 = (t0 + 8968);
    xsi_vlogvar_assign_value(t95, t94, 0, 0, 1);
    goto LAB18;

LAB22:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB26:    t34 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB27;

LAB28:    t74 = *((unsigned int *)t96);
    t75 = *((unsigned int *)t60);
    *((unsigned int *)t96) = (t74 | t75);
    t61 = (t18 + 4);
    t62 = (t56 + 4);
    t76 = *((unsigned int *)t61);
    t77 = (~(t76));
    t78 = *((unsigned int *)t18);
    t47 = (t78 & t77);
    t79 = *((unsigned int *)t62);
    t82 = (~(t79));
    t83 = *((unsigned int *)t56);
    t51 = (t83 & t82);
    t84 = (~(t47));
    t85 = (~(t51));
    t86 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t86 & t84);
    t87 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t87 & t85);
    goto LAB30;

LAB31:    xsi_set_current_line(223, ng0);
    t71 = ((char*)((ng1)));
    t88 = (t0 + 9128);
    xsi_vlogvar_assign_value(t88, t71, 0, 0, 1);
    goto LAB33;

}


extern void work_m_00000000004079332814_3389104706_init()
{
	static char *pe[] = {(void *)Initial_12_0,(void *)Cont_22_1,(void *)Cont_123_2,(void *)Cont_124_3,(void *)Cont_150_4,(void *)Cont_151_5,(void *)Always_200_6};
	xsi_register_didat("work_m_00000000004079332814_3389104706", "isim/finalTest_isim_beh.exe.sim/work/m_00000000004079332814_3389104706.didat");
	xsi_register_executes(pe);
}
