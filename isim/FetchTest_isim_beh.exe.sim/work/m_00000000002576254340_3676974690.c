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
static const char *ng0 = "time : %0t  instMem : %h";
static const char *ng1 = "G:/University/term5/Az memary/ComputerArthitectureLab/FetchModule.v";

void Monitor_45_1(char *);
void Monitor_45_1(char *);


static void Monitor_45_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t1, 64, (char)118, t4, 128);

LAB1:    return;
}

static void Always_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng1);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng1);

LAB5:    xsi_set_current_line(45, ng1);
    Monitor_45_1(t0);
    goto LAB2;

}

void Monitor_45_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3544);
    t2 = (t0 + 4072);
    xsi_vlogfile_monitor((void *)Monitor_45_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002576254340_3676974690_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Monitor_45_1};
	xsi_register_didat("work_m_00000000002576254340_3676974690", "isim/FetchTest_isim_beh.exe.sim/work/m_00000000002576254340_3676974690.didat");
	xsi_register_executes(pe);
}
