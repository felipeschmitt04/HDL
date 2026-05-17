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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ise_projs/trabalho_1/projeto2/projeto2_tb.vhd";



static void work_a_1782340412_2372691052_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int64 t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(18, ng0);

LAB3:    t1 = (10 * 1000LL);
    t2 = (t0 + 4422);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_delta(t4, 0U, 2U, t1);
    t9 = (20 * 1000LL);
    t10 = (t0 + 4424);
    t12 = (t0 + 2728);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 2U);
    xsi_driver_subsequent_trans_delta(t12, 0U, 2U, t9);
    t17 = (30 * 1000LL);
    t18 = (t0 + 4426);
    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 2U);
    xsi_driver_subsequent_trans_delta(t20, 0U, 2U, t17);
    t25 = (t0 + 2728);
    xsi_driver_intertial_reject(t25, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1782340412_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1782340412_2372691052_p_0};
	xsi_register_didat("work_a_1782340412_2372691052", "isim/projeto2_tb_isim_beh.exe.sim/work/a_1782340412_2372691052.didat");
	xsi_register_executes(pe);
}
