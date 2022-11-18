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
    work_m_00000000002657861860_0841532228_init();
    work_m_00000000002837851810_1733832700_init();
    work_m_00000000004060608735_2279019646_init();
    work_m_00000000001190451073_0275023633_init();
    work_m_00000000002576254340_3676974690_init();
    work_m_00000000003283132675_4281129319_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003283132675_4281129319");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
