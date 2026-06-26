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
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    int t34;

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
    goto LAB3;

LAB5:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)2);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB13;

LAB14:    t10 = (unsigned char)0;

LAB15:    if (t10 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6324);
    t3 = 1;
    if (2U == 2U)
        goto LAB33;

LAB34:    t3 = 0;

LAB35:    if (t3 != 0)
        goto LAB31;

LAB32:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(28, ng0);
    t25 = (t0 + 1832U);
    t26 = *((char **)t25);
    t25 = (t0 + 6248U);
    t27 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t26, t25);
    t28 = (t0 + 4128);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((int *)t32) = t27;
    xsi_driver_first_trans_fast(t28);
    goto LAB11;

LAB13:    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t2 = (t0 + 6320);
    t14 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t14 = 0;

LAB21:    if (t14 == 1)
        goto LAB16;

LAB17:    t18 = (t0 + 1352U);
    t19 = *((char **)t18);
    t18 = (t0 + 6322);
    t21 = 1;
    if (2U == 2U)
        goto LAB25;

LAB26:    t21 = 0;

LAB27:    t13 = t21;

LAB18:    t10 = t13;
    goto LAB15;

LAB16:    t13 = (unsigned char)1;
    goto LAB18;

LAB19:    t15 = 0;

LAB22:    if (t15 < 2U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t16 = (t7 + t15);
    t17 = (t2 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB20;

LAB24:    t15 = (t15 + 1);
    goto LAB22;

LAB25:    t22 = 0;

LAB28:    if (t22 < 2U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t23 = (t19 + t22);
    t24 = (t18 + t22);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB26;

LAB30:    t22 = (t22 + 1);
    goto LAB28;

LAB31:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 1672U);
    t16 = *((char **)t8);
    t4 = *((unsigned char *)t16);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB11;

LAB33:    t15 = 0;

LAB36:    if (t15 < 2U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t6 = (t2 + t15);
    t7 = (t1 + t15);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB34;

LAB38:    t15 = (t15 + 1);
    goto LAB36;

LAB39:    xsi_set_current_line(31, ng0);
    t8 = (t0 + 2312U);
    t17 = *((char **)t8);
    t27 = *((int *)t17);
    t10 = (t27 < 3);
    if (t10 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB40;

LAB42:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 2312U);
    t18 = *((char **)t8);
    t33 = *((int *)t18);
    t34 = (t33 + 1);
    t8 = (t0 + 4128);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = t34;
    xsi_driver_first_trans_fast(t8);
    goto LAB43;

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

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 2);
    t5 = (t0 + 4192);
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
	xsi_register_didat("work_a_3249781002_2372691052", "isim/tb_cron_basq_PI_isim_beh.exe.sim/work/a_3249781002_2372691052.didat");
	xsi_register_executes(pe);
}
