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
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
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
static const char *ng14 = "%x ";
static const char *ng15 = "%x";
static const char *ng16 = "================================================================";



static void Cont_19_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 8768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 9960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 9832);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_125_1(char *t0)
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

LAB0:    t1 = (t0 + 9016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4728U);
    t5 = *((char **)t2);
    t2 = (t0 + 4688U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
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

LAB38:    t114 = (t0 + 10024);
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
    t127 = (t0 + 9848);
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

LAB12:    t39 = (t0 + 5528U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng2)));
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

LAB30:    t108 = ((char*)((ng2)));
    goto LAB31;

LAB32:    t113 = ((char*)((ng3)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t108, 32, t113, 32);
    goto LAB38;

LAB36:    memcpy(t3, t108, 8);
    goto LAB38;

}

static void Cont_126_2(char *t0)
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

LAB0:    t1 = (t0 + 9264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
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

LAB16:    t25 = (t0 + 10088);
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
    t44 = (t0 + 9864);
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

static void Always_175_3(char *t0)
{
    char t4[16];
    char t7[8];
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

LAB0:    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 9880);
    *((int *)t2) = 1;
    t3 = (t0 + 9544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(175, ng0);

LAB5:    xsi_set_current_line(177, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 5688U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 7608U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    t2 = (t0 + 4408U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t5, 32, (char)118, t6, 32);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6968U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 7448U);
    t3 = *((char **)t2);
    t2 = (t0 + 6168U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t3, 5, (char)118, t5, 32);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6968U);
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
    xsi_set_current_line(189, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB2;

}


extern void work_m_00000000003978387178_3389104706_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Cont_125_1,(void *)Cont_126_2,(void *)Always_175_3};
	xsi_register_didat("work_m_00000000003978387178_3389104706", "isim/finalTest_isim_beh.exe.sim/work/m_00000000003978387178_3389104706.didat");
	xsi_register_executes(pe);
}
