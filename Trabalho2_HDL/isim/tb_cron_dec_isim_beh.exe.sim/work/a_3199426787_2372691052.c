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
static const char *ng0 = "/home/ise/ise_projs/trabalho_2/contador_dec.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3199426787_2372691052_p_0(char *t0)
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
    char *t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    int t16;
    int t17;

LAB0:    xsi_set_current_line(20, ng0);
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
LAB3:    t1 = (t0 + 4440);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 4552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 4616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)3);
    if (t9 == 1)
        goto LAB15;

LAB16:    t3 = (unsigned char)0;

LAB17:    if (t3 != 0)
        goto LAB13;

LAB14:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4552);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7000U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t3 = (t11 > 99);
    if (t3 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7000U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t5 = (t0 + 4616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = t11;
    xsi_driver_first_trans_fast(t5);

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 4616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 99;
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

LAB13:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t11 = *((int *)t6);
    t14 = (t11 == 0);
    if (t14 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t16 = (t11 - 1);
    t1 = (t0 + 4552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t16;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB8;

LAB15:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB17;

LAB18:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 4552);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t15 = *((char **)t10);
    *((int *)t15) = 59;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t3 = (t11 > 0);
    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t17 = (t16 - 1);
    t1 = (t0 + 4616);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = t17;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

}

static void work_a_3199426787_2372691052_p_1(char *t0)
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

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 8);
    t5 = (t0 + 4680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4456);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3199426787_2372691052_p_2(char *t0)
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

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, 8);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4472);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3199426787_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3199426787_2372691052_p_0,(void *)work_a_3199426787_2372691052_p_1,(void *)work_a_3199426787_2372691052_p_2};
	xsi_register_didat("work_a_3199426787_2372691052", "isim/tb_cron_dec_isim_beh.exe.sim/work/a_3199426787_2372691052.didat");
	xsi_register_executes(pe);
}
