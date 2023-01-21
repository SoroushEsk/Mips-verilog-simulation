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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002657861860_2947674639_init();
    work_m_00000000001911931533_1733832700_init();
    work_m_00000000004060608735_2279019646_init();
    work_m_00000000001705148682_1463177816_init();
    work_m_00000000001550525970_0275023633_init();
    work_m_00000000000771248293_3676974690_init();
    work_m_00000000001937603527_3024195590_init();
    work_m_00000000000289801274_0232636756_init();
    work_m_00000000003457080860_3275311449_init();
    work_m_00000000003636911896_4112152428_init();
    work_m_00000000001608059726_0460807745_init();
    work_m_00000000002487319671_1949656044_init();
    work_m_00000000003379413502_0864879315_init();
    work_m_00000000000695238202_2160256466_init();
    work_m_00000000000959446778_0886308060_init();
    work_m_00000000002848804721_4033376979_init();
    work_m_00000000002644384008_1746258098_init();
    work_m_00000000002566215755_3738482034_init();
    work_m_00000000001782046001_3581383273_init();
    work_m_00000000003567488224_1980989751_init();
    work_m_00000000004108043368_2461264495_init();
    work_m_00000000004034476051_2123651525_init();
    work_m_00000000003675221115_3856892259_init();
    work_m_00000000003978387178_3389104706_init();
    work_m_00000000001959046714_1368689344_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001959046714_1368689344");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
