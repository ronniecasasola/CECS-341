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
    work_m_00000000001541511901_2392487284_init();
    work_m_00000000000124112270_1752074898_init();
    work_m_00000000000086637181_1733863084_init();
    work_m_00000000001541511901_1785477647_init();
    work_m_00000000002276338233_3148384703_init();
    work_m_00000000002763550941_0886308060_init();
    work_m_00000000003954124719_1790630962_init();
    work_m_00000000000886966244_0747027408_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000886966244_0747027408");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
