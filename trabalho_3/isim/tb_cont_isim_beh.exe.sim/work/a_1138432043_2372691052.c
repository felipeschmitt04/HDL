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
static const char *ng0 = "/home/ise/ise_projs/trabalho_3/cont_min.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1138432043_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    char *t21;
    int t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 4512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 4608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 10;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 4672);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 4608);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = 12;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 7112);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7114);
    t3 = 1;
    if (2U == 2U)
        goto LAB30;

LAB31:    t3 = 0;

LAB32:    if (t3 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 4672);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t12;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 1512U);
    t14 = *((char **)t11);
    t7 = *((unsigned char *)t14);
    t15 = (t7 == (unsigned char)3);
    if (t15 == 1)
        goto LAB22;

LAB23:    t6 = (unsigned char)0;

LAB24:    if (t6 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB11;

LAB13:    t13 = 0;

LAB16:    if (t13 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t9 = (t5 + t13);
    t10 = (t2 + t13);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB14;

LAB18:    t13 = (t13 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 2632U);
    t19 = *((char **)t11);
    t12 = *((int *)t19);
    t20 = (t12 > 0);
    if (t20 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB20;

LAB22:    t11 = (t0 + 2472U);
    t16 = *((char **)t11);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t6 = t18;
    goto LAB24;

LAB25:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 2632U);
    t21 = *((char **)t11);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t11 = (t0 + 4672);
    t24 = (t11 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t23;
    xsi_driver_first_trans_fast(t11);
    goto LAB26;

LAB28:    xsi_set_current_line(41, ng0);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t4 = *((unsigned char *)t11);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB36;

LAB38:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB39;

LAB40:
LAB37:    goto LAB11;

LAB30:    t13 = 0;

LAB33:    if (t13 < 2U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t8 = (t2 + t13);
    t9 = (t1 + t13);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB31;

LAB35:    t13 = (t13 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(42, ng0);
    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 7016U);
    t12 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t14, t10);
    t16 = (t0 + 4672);
    t19 = (t16 + 56U);
    t21 = *((char **)t19);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    *((int *)t25) = t12;
    xsi_driver_first_trans_fast(t16);
    goto LAB37;

LAB39:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t1 = (t0 + 4672);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

}

static void work_a_1138432043_2372691052_p_1(char *t0)
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

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 4);
    t5 = (t0 + 4736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4528);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1138432043_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1138432043_2372691052_p_0,(void *)work_a_1138432043_2372691052_p_1};
	xsi_register_didat("work_a_1138432043_2372691052", "isim/tb_cont_isim_beh.exe.sim/work/a_1138432043_2372691052.didat");
	xsi_register_executes(pe);
}
