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

char *WORK_P_1137118539;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *UNISIM_P_0947159679;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *UNISIM_P_3222816464;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_1137118539_init();
    ieee_p_1242562249_init();
    unisim_p_0947159679_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    unisim_a_1671394598_2381219257_init();
    work_a_1564937543_2752325160_init();
    ieee_p_0774719531_init();
    work_a_4263050755_2845133834_init();
    work_a_0562205178_2845133834_init();
    work_a_3853510154_1351276808_init();
    work_a_3433674798_2845133834_init();
    work_a_3199023679_2995317124_init();
    work_a_0832606739_2725559894_init();
    work_a_3926497698_1279674626_init();
    work_a_0945777706_1345475044_init();
    work_a_2399776393_3027548060_init();
    work_a_1230361436_1068956973_init();
    unisim_a_0807323703_0883528894_init();
    unisim_a_0032955683_0883528894_init();
    unisim_a_1795779624_0883528894_init();
    unisim_a_1305471703_0883528894_init();
    work_a_3446231986_3596787507_init();
    work_a_3658631153_2707795877_init();
    work_a_1632567566_3258266500_init();
    work_a_3221586690_3144259659_init();
    work_a_1186763621_1186763621_init();


    xsi_register_tops("work_a_1186763621_1186763621");

    WORK_P_1137118539 = xsi_get_engine_memory("work_p_1137118539");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");

    return xsi_run_simulation(argc, argv);

}
