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
static const char *ng0 = "/home/ise/ise_projs/trabalho_3/cont_cen.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2605525974_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 4288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t2 = (t0 + 6596);
    t4 = 1;
    if (2U == 2U)
        goto LAB10;

LAB11:    t4 = 0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6598);
    t3 = 1;
    if (2U == 2U)
        goto LAB29;

LAB30:    t3 = 0;

LAB31:    if (t3 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB19;

LAB20:    t10 = (unsigned char)0;

LAB21:    if (t10 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB26:
LAB17:    goto LAB8;

LAB10:    t9 = 0;

LAB13:    if (t9 < 2U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t7 = (t5 + t9);
    t8 = (t2 + t9);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB11;

LAB15:    t9 = (t9 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(30, ng0);
    t11 = (t0 + 2472U);
    t18 = *((char **)t11);
    t19 = *((int *)t18);
    t20 = (t19 == 0);
    if (t20 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t25 = (t19 - 1);
    t1 = (t0 + 4288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t25;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB23:    goto LAB17;

LAB19:    t11 = (t0 + 1352U);
    t15 = *((char **)t11);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t10 = t17;
    goto LAB21;

LAB22:    xsi_set_current_line(31, ng0);
    t11 = (t0 + 4288);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 99;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB27:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 1992U);
    t11 = *((char **)t8);
    t4 = *((unsigned char *)t11);
    t10 = (t4 == (unsigned char)3);
    if (t10 != 0)
        goto LAB35;

LAB37:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB38;

LAB39:
LAB36:    goto LAB8;

LAB29:    t9 = 0;

LAB32:    if (t9 < 2U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t6 = (t2 + t9);
    t7 = (t1 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB30;

LAB34:    t9 = (t9 + 1);
    goto LAB32;

LAB35:    xsi_set_current_line(43, ng0);
    t8 = (t0 + 4288);
    t12 = (t8 + 56U);
    t15 = *((char **)t12);
    t18 = (t15 + 56U);
    t21 = *((char **)t18);
    *((int *)t21) = 0;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB36;

}

static void work_a_2605525974_2372691052_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 7);
    t5 = (t0 + 4416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4208);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2605525974_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2605525974_2372691052_p_0,(void *)work_a_2605525974_2372691052_p_1};
	xsi_register_didat("work_a_2605525974_2372691052", "isim/tb_cont_isim_beh.exe.sim/work/a_2605525974_2372691052.didat");
	xsi_register_executes(pe);
}
