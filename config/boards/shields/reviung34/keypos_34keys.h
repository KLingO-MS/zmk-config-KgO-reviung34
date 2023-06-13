/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 20  21  22  23  24 │ 25  26  27  28  29 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────────╮ 30  31 │ 32  33 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LTC  4  // left-top row
#define LTI  3
#define LTM  2
#define LTR  1
#define LTP  0

#define RTC  5  // right-top row
#define RTI  6
#define RTM  7
#define RTR  8
#define RTP  9

#define LMC 14  // left-middle row
#define LMI 13
#define LMM 12
#define LMR 11
#define LMP 10

#define RMC 15  // right-middle row
#define RMI 16
#define RMM 17
#define RMR 18
#define RMP 19

#define LBC 24  // left-bottom row
#define LBI 23
#define LBM 22
#define LBR 21
#define LBP 20

#define RBC 25  // right-bottom row
#define RBI 26
#define RBM 27
#define RBR 28
#define RBP 29

#define LHI 31  // left thumb keys
#define LHO 30

#define RHI 32  // right thumb keys
#define RHO 33

#define KEYS_L LTC LTI LTM LTR LTP LMC LMI LMM LMR LMP LBC LBI LBM LBR LBP  // left-hand keys
#define KEYS_R RTC RTI RTM RTR RTP RMC RMI RMM RMR RMP RBC RBI RBM RBR RBP  // right-hand keys
#define THUMBS LHO LHI RHI RHO
