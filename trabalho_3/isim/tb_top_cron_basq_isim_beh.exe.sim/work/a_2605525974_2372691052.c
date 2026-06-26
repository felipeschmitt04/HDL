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
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;

LAB0:    xsi_set_current_line(25, ng0);
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
LAB3:    t1 = (t0 + 4600);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 4712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)2);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB13;

LAB14:    t10 = (unsigned char)0;

LAB15:    if (t10 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 7100);
    t3 = 1;
    if (2U == 2U)
        goto LAB33;

LAB34:    t3 = 0;

LAB35:    if (t3 != 0)
        goto LAB31;

LAB32:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 7102);
    t3 = 1;
    if (2U == 2U)
        goto LAB44;

LAB45:    t3 = 0;

LAB46:    if (t3 != 0)
        goto LAB42;

LAB43:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(30, ng0);
    t25 = (t0 + 4712);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((int *)t29) = 0;
    xsi_driver_first_trans_fast(t25);
    goto LAB11;

LAB13:    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t2 = (t0 + 7096);
    t14 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t14 = 0;

LAB21:    if (t14 == 1)
        goto LAB16;

LAB17:    t18 = (t0 + 1512U);
    t19 = *((char **)t18);
    t18 = (t0 + 7098);
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

LAB31:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 1832U);
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

LAB39:    xsi_set_current_line(33, ng0);
    t8 = (t0 + 4712);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((int *)t20) = 0;
    xsi_driver_first_trans_fast(t8);
    goto LAB40;

LAB42:    xsi_set_current_line(36, ng0);
    t8 = (t0 + 1672U);
    t16 = *((char **)t8);
    t9 = *((unsigned char *)t16);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB53;

LAB54:    t4 = (unsigned char)0;

LAB55:    if (t4 != 0)
        goto LAB50;

LAB52:
LAB51:    goto LAB11;

LAB44:    t15 = 0;

LAB47:    if (t15 < 2U)
        goto LAB48;
    else
        goto LAB46;

LAB48:    t6 = (t2 + t15);
    t7 = (t1 + t15);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB45;

LAB49:    t15 = (t15 + 1);
    goto LAB47;

LAB50:    xsi_set_current_line(37, ng0);
    t8 = (t0 + 2632U);
    t18 = *((char **)t8);
    t30 = *((int *)t18);
    t13 = (t30 == 0);
    if (t13 != 0)
        goto LAB56;

LAB58:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t30 = *((int *)t2);
    t31 = (t30 - 1);
    t1 = (t0 + 4712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t31;
    xsi_driver_first_trans_fast(t1);

LAB57:    goto LAB51;

LAB53:    t8 = (t0 + 1352U);
    t17 = *((char **)t8);
    t11 = *((unsigned char *)t17);
    t12 = (t11 == (unsigned char)2);
    t4 = t12;
    goto LAB55;

LAB56:    xsi_set_current_line(38, ng0);
    t8 = (t0 + 4712);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 99;
    xsi_driver_first_trans_fast(t8);
    goto LAB57;

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

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 7);
    t5 = (t0 + 4776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4616);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2605525974_2372691052_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t21 = (t0 + 4840);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 4632);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 4840);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t3 = (t0 + 1512U);
    t10 = *((char **)t3);
    t3 = (t0 + 7104);
    t12 = 1;
    if (2U == 2U)
        goto LAB11;

LAB12:    t12 = 0;

LAB13:    t1 = t12;
    goto LAB7;

LAB8:    t3 = (t0 + 1672U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;
    goto LAB10;

LAB11:    t13 = 0;

LAB14:    if (t13 < 2U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t14 = (t10 + t13);
    t15 = (t3 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB12;

LAB16:    t13 = (t13 + 1);
    goto LAB14;

LAB18:    goto LAB2;

}


extern void work_a_2605525974_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2605525974_2372691052_p_0,(void *)work_a_2605525974_2372691052_p_1,(void *)work_a_2605525974_2372691052_p_2};
	xsi_register_didat("work_a_2605525974_2372691052", "isim/tb_top_cron_basq_isim_beh.exe.sim/work/a_2605525974_2372691052.didat");
	xsi_register_executes(pe);
}
