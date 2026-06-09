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
static const char *ng0 = "/home/ise/ise_projs/trabalho_3/cont_quarto.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3249781002_2372691052_p_0(char *t0)
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
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(23, ng0);
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
LAB3:    t1 = (t0 + 4032);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 4128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 4192);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 6388);
    t4 = 1;
    if (2U == 2U)
        goto LAB10;

LAB11:    t4 = 0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(28, ng0);
    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB25:
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

LAB16:    xsi_set_current_line(29, ng0);
    t10 = (t0 + 2312U);
    t14 = *((char **)t10);
    t15 = *((int *)t14);
    t16 = (t15 < 3);
    if (t16 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 3);
    if (t3 != 0)
        goto LAB22;

LAB23:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(30, ng0);
    t10 = (t0 + 2312U);
    t17 = *((char **)t10);
    t18 = *((int *)t17);
    t19 = (t18 + 1);
    t10 = (t0 + 4128);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = t19;
    xsi_driver_first_trans_fast(t10);
    goto LAB20;

LAB22:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 4192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB20;

LAB24:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 6320U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t5, t1);
    t6 = (t0 + 4128);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t15;
    xsi_driver_first_trans_fast(t6);
    goto LAB17;

}

static void work_a_3249781002_2372691052_p_1(char *t0)
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

LAB0:    xsi_set_current_line(40, ng0);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 2);
    t5 = (t0 + 4256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4048);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3249781002_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3249781002_2372691052_p_0,(void *)work_a_3249781002_2372691052_p_1};
	xsi_register_didat("work_a_3249781002_2372691052", "isim/tb_cont_isim_beh.exe.sim/work/a_3249781002_2372691052.didat");
	xsi_register_executes(pe);
}
