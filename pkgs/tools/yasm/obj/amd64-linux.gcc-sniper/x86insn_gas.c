/* ANSI-C code produced by genperf */
/* Command-line: genperf /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf x86insn_gas.c */
#line 9 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
struct insnprefix_parse_data;
static const struct insnprefix_parse_data *
insnprefix_gas_find(const char *key, size_t len)
{
  static const struct insnprefix_parse_data pd[1966] = {
#line 850 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntss",	movntss_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 468 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fadds",	farith_insn,	7,	SUF_S,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 666 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"idivq",	div_insn,	8,	SUF_Q,	0x07,	0,	0,	ONLY_64,	0,	0,	0},
#line 527 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fincstp",	twobyte_insn,	1,	NONE,	0xD9,	0xF7,	0,	0,	CPU_FPU,	0,	0},
#line 1429 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sqrtps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 599 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fprem1",	twobyte_insn,	1,	NONE,	0xD9,	0xF5,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1853 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovsxbd",	sse4m32_insn,	2,	NONE,	0x21,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1329 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setbe",	setcc_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 752 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lfence",	threebyte_insn,	1,	NONE,	0x0F,	0xAE,	0xE8,	0,	CPU_P3,	0,	0},
#line 768 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lldtw",	prot286_insn,	1,	SUF_W,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 765 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lidtq",	twobytemem_insn,	1,	SUF_Q,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 143 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovlew",	cmovcc_insn,	3,	SUF_W,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 219 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovsw",	cmovcc_insn,	3,	SUF_W,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1583 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngtpd",	ssecmp_128_insn,	3,	NONE,	0x0A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1225 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpcklqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6C,	0,	0,	CPU_SSE2,	0,	0},
#line 828 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movdqu",	movau_insn,	6,	NONE,	0xF3,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 128 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovg",	cmovcc_insn,	3,	NONE,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1620 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptrueps",	ssecmp_128_insn,	3,	NONE,	0x0F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 172 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnge",	cmovcc_insn,	3,	NONE,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1099 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacsdqh",	sse5pmacs_insn,	1,	NONE,	0x9F,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1698 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmsubss",	fma_128_m32_insn,	3,	NONE,	0x7E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 32 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addsubpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 283 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comfalsesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 819 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movabsl",	movabs_insn,	9,	SUF_L,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 772 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loadall286",	twobyte_insn,	1,	NONE,	0x0F,	0x05,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 251 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnltsd",	ssecmp_64_insn,	4,	NONE,	0x05,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 106 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovaq",	cmovcc_insn,	3,	SUF_Q,	0x07,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1818 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpextrd",	pextrd_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 806 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"minpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 1185 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshaw",	sse5psh_insn,	2,	NONE,	0x05,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 114 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 497 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivr",	farith_insn,	7,	NONE,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 452 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 900 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"notw",	f6_insn,	4,	SUF_W,	0x02,	0,	0,	0,	0,	0,	0},
#line 1160 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popaw",	onebyte_insn,	1,	NONE,	0x61,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 958 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpistrm",	sse4pcmpstr_insn,	1,	NONE,	0x62,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 217 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovsl",	cmovcc_insn,	3,	SUF_L,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1640 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtpd2psy",	avx_cvt_xmm128_y_insn,	1,	NONE,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 498 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivrl",	farith_insn,	7,	SUF_L,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 454 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"dppd",	sse4imm_insn,	2,	NONE,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1377 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setpo",	setcc_insn,	1,	NONE,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1535 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgtpd",	ssecmp_128_insn,	3,	NONE,	0x0E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 651 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxsaveq",	twobytemem_insn,	1,	SUF_Q,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 660 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"hsubps",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1906 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpcklqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 24 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addw",	arith_insn,	22,	SUF_W,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 1907 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpcklwd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x61,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 516 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fidivr",	fiarith_insn,	2,	NONE,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1280 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexyz",	NULL,	X86_REX>>8,	0x43,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1381 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setz",	setcc_insn,	1,	NONE,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 969 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalseb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1725 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovd",	vmovd_insn,	2,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_AVX,	0},
#line 125 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovel",	cmovcc_insn,	3,	SUF_L,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 625 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstp",	fstp_insn,	4,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1470 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"testl",	test_insn,	20,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 177 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnll",	cmovcc_insn,	3,	SUF_L,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 685 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"insl",	onebyte_insn,	1,	NONE,	0x6D,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1954 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xchgq",	xchg_insn,	16,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1924 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsubpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1236 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushfq",	onebyte_insn,	1,	NONE,	0x9C,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 1244 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rclw",	shift_insn,	16,	SUF_W,	0x02,	0,	0,	0,	0,	0,	0},
#line 1616 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptrue_usps",	ssecmp_128_insn,	3,	NONE,	0x1F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1626 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunord_sss",	ssecmp_32_insn,	4,	NONE,	0x13,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 241 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpneqpd",	ssecmp_128_insn,	3,	NONE,	0x04,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 324 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnltps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1560 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_osps",	ssecmp_128_insn,	3,	NONE,	0x1C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1556 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_oqps",	ssecmp_128_insn,	3,	NONE,	0x0C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1546 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpless",	ssecmp_32_insn,	4,	NONE,	0x02,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1784 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddusb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1322 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"scasw",	onebyte_insn,	1,	NONE,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 309 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1908 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpxor",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1617 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptrue_ussd",	ssecmp_64_insn,	4,	NONE,	0x1F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1500 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_osps",	ssecmp_128_insn,	3,	NONE,	0x10,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1974 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xsha256",	padlock_insn,	1,	NONE,	0xD0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1865 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmuldq",	ssse3_insn,	3,	NONE,	0x28,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 613 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsetpm",	twobyte_insn,	1,	NONE,	0xDB,	0xE4,	0,	0,	CPU_286,	CPU_FPU,	CPU_Obs},
#line 1647 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsi2sd",	cvt_xmm_rmx_insn,	6,	NONE,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 739 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ldsl",	ldes_insn,	2,	SUF_L,	0xC5,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1742 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovntdqa",	movntdqa_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 753 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lfs",	lfgss_insn,	2,	NONE,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1575 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngepd",	ssecmp_128_insn,	3,	NONE,	0x09,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1093 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pinsrq",	pinsrq_insn,	2,	NONE,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 1326 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setaeb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1767 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmwriteq",	vmxmemwr_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 1266 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex",	NULL,	X86_REX>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 496 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivp",	farithp_insn,	3,	NONE,	0xF0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 119 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbew",	cmovcc_insn,	3,	SUF_W,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1378 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setpob",	setcc_insn,	1,	SUF_B,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 395 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtdq2pd",	xmm_xmm64_insn,	4,	NONE,	0xF3,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 948 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpeqd",	mmxsse2_insn,	2,	NONE,	0x76,	0,	0,	0,	CPU_MMX,	0,	0},
#line 794 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ltrw",	prot286_insn,	1,	SUF_W,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 705 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jg",	jcc_insn,	9,	NONE,	0x0F,	0,	0,	0,	0,	0,	0},
#line 76 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btc",	bittest_insn,	6,	NONE,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 784 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lretq",	retnf_insn,	6,	NONE,	0xCA,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 449 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divw",	div_insn,	8,	SUF_W,	0x06,	0,	0,	0,	0,	0,	0},
#line 394 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"crc32w",	crc32_insn,	5,	SUF_W,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1621 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptruesd",	ssecmp_64_insn,	4,	NONE,	0x0F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1363 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setno",	setcc_insn,	1,	NONE,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 397 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtpd2dq",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1146 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulhw",	mmxsse2_insn,	2,	NONE,	0xE5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1443 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stosq",	onebyte_insn,	1,	NONE,	0xAB,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1678 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vextractps",	extractps_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1019 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneqw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1750 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovupd",	movau_insn,	6,	NONE,	0x66,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 912 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"outsb",	onebyte_insn,	1,	NONE,	0x6E,	0x00,	0,	0,	0,	0,	0},
#line 1565 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_ussd",	ssecmp_64_insn,	4,	NONE,	0x14,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1482 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vaddpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1321 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"scasq",	onebyte_insn,	1,	NONE,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 203 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovow",	cmovcc_insn,	3,	SUF_W,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 694 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"iretl",	onebyte_insn,	1,	NONE,	0xCF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 950 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpeqw",	mmxsse2_insn,	2,	NONE,	0x75,	0,	0,	0,	CPU_MMX,	0,	0},
#line 156 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbe",	cmovcc_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1672 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vdpps",	sse4imm_256_insn,	3,	NONE,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 204 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovp",	cmovcc_insn,	3,	NONE,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 627 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstps",	fstp_insn,	4,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1857 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovsxwd",	sse4m64_insn,	2,	NONE,	0x23,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 87 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btsw",	bittest_insn,	6,	SUF_W,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 542 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisub",	fiarith_insn,	2,	NONE,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1273 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64yz",	NULL,	X86_REX>>8,	0x4B,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 998 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomleuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 254 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpordps",	ssecmp_128_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1843 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaxuw",	ssse3_insn,	3,	NONE,	0x3E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1082 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phminposuw",	sse4_insn,	2,	NONE,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 537 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisttp",	fildstp_insn,	3,	NONE,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1921 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsqrtsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 790 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lss",	lfgss_insn,	2,	NONE,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 566 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmaddsd",	sse5arith64_insn,	8,	NONE,	0x03,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1080 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddwd",	sse5two_insn,	1,	NONE,	0x46,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1727 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovdqa",	movau_insn,	6,	NONE,	0x66,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 674 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"inb",	in_insn,	12,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 27 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addr16",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1922 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1734 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovlps",	movhlp_insn,	3,	NONE,	0x00,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 917 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pabsw",	ssse3_insn,	3,	NONE,	0x1D,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1145 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulhuw",	mmxsse2_insn,	2,	NONE,	0xE4,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 85 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btsl",	bittest_insn,	6,	SUF_L,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 628 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstpt",	fldstpt_insn,	1,	WEAK,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 953 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpgtb",	mmxsse2_insn,	2,	NONE,	0x64,	0,	0,	0,	CPU_MMX,	0,	0},
#line 689 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"into",	onebyte_insn,	1,	NONE,	0xCE,	0,	0,	NOT_64,	0,	0,	0},
#line 1388 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shl",	shift_insn,	16,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 985 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 646 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxam",	twobyte_insn,	1,	NONE,	0xD9,	0xE5,	0,	0,	CPU_FPU,	0,	0},
#line 590 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstcw",	fldnstcw_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1880 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsignw",	ssse3_insn,	3,	NONE,	0x09,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1282 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rol",	shift_insn,	16,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 1864 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovzxwq",	sse4m32_insn,	2,	NONE,	0x34,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1428 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sqrtpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 1092 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pinsrd",	pinsrd_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1130 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovsxbw",	sse4m64_insn,	2,	NONE,	0x20,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 503 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ffreep",	ffree_insn,	1,	NONE,	0xDF,	0,	0,	0,	CPU_686,	CPU_FPU,	CPU_Undoc},
#line 561 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldpi",	twobyte_insn,	1,	NONE,	0xD9,	0xEB,	0,	0,	CPU_FPU,	0,	0},
#line 528 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"finit",	threebyte_insn,	1,	NONE,	0x9B,	0xDB,	0xE3,	0,	CPU_FPU,	0,	0},
#line 1821 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpextrwl",	pextrw_insn,	7,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1459 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"svldt",	cyrixsmm_insn,	1,	NONE,	0x7A,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 92 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cbw",	onebyte_insn,	1,	NONE,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 989 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 141 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovlel",	cmovcc_insn,	3,	SUF_L,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 278 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comeqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 832 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movlhps",	movhllhps_insn,	2,	NONE,	0x16,	0,	0,	0,	CPU_SSE,	0,	0},
#line 663 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"idiv",	div_insn,	8,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 1293 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"roundps",	sse4imm_insn,	2,	NONE,	0x08,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1748 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovsldup",	avx_xmm_xmm128_insn,	2,	NONE,	0xF3,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1694 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmaddss",	fma_128_m32_insn,	3,	NONE,	0x7A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1102 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacssdqh",	sse5pmacs_insn,	1,	NONE,	0x8F,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1671 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vdppd",	sse4imm_insn,	2,	NONE,	0x41,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1800 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpgtb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x64,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1889 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsrlq",	vpshift_insn,	4,	NONE,	0xD3,	0x73,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1910 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vrcpss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x53,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 637 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubrs",	farith_insn,	7,	SUF_S,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 1333 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sete",	setcc_insn,	1,	NONE,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1963 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xor",	arith_insn,	22,	NONE,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 1475 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ud1",	twobyte_insn,	1,	NONE,	0x0F,	0xB9,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 242 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpneqps",	ssecmp_128_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_SSE,	0,	0},
#line 933 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pandn",	mmxsse2_insn,	2,	NONE,	0xDF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 911 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"outw",	out_insn,	12,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1876 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpshufhw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF3,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 758 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgdtq",	twobytemem_insn,	1,	SUF_Q,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1530 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgess",	ssecmp_32_insn,	4,	NONE,	0x0D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 751 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lesw",	ldes_insn,	2,	SUF_W,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 1619 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptruepd",	ssecmp_128_insn,	3,	NONE,	0x0F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1117 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaxud",	sse4_insn,	2,	NONE,	0x3F,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1532 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgt_oqps",	ssecmp_128_insn,	3,	NONE,	0x1E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1206 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psrlq",	pshift_insn,	4,	NONE,	0xD3,	0x73,	0x02,	0,	CPU_MMX,	0,	0},
#line 1881 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpslld",	vpshift_insn,	4,	NONE,	0xF2,	0x72,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1695 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmsubpd",	fma_128_256_insn,	4,	NONE,	0x7D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1472 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"testw",	test_insn,	20,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 15 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"adc",	arith_insn,	22,	NONE,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 1272 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64y",	NULL,	X86_REX>>8,	0x4A,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 675 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"inl",	in_insn,	12,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 764 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lidtl",	twobytemem_insn,	1,	SUF_L,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1718 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vminsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1589 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnle_uqsd",	ssecmp_64_insn,	4,	NONE,	0x16,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1842 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaxud",	ssse3_insn,	3,	NONE,	0x3F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1038 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomw",	sse5com_insn,	1,	NONE,	0x4D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 632 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubl",	farith_insn,	7,	SUF_L,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 433 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cwtd",	onebyte_insn,	1,	NONE,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 1006 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1162 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popcntl",	cnt_insn,	3,	SUF_L,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1824 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphaddsw",	ssse3_insn,	3,	NONE,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 746 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leavel",	onebyte_insn,	1,	NONE,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 169 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovngl",	cmovcc_insn,	3,	SUF_L,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1008 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 137 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovll",	cmovcc_insn,	3,	SUF_L,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 745 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leave",	onebyte_insn,	1,	NONE,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 1721 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmload",	svm_rax_insn,	2,	NONE,	0xDA,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1576 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngeps",	ssecmp_128_insn,	3,	NONE,	0x09,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1323 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"seta",	setcc_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 298 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 665 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"idivl",	div_insn,	8,	SUF_L,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 773 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lock",	NULL,	X86_LOCKREP>>8,	0xF0,	0,	0,	0,	0,	0,	0,	0},
#line 870 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movups",	movau_insn,	6,	NONE,	0x00,	0x10,	0x01,	0,	CPU_SSE,	0,	0},
#line 1371 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"seto",	setcc_insn,	1,	NONE,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 1014 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneqq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 36 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aesdeclast",	aes_insn,	1,	NONE,	0x38,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 151 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnaew",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1731 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovhps",	movhlp_insn,	3,	NONE,	0x00,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1795 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpeqd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x76,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1201 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psllw",	pshift_insn,	4,	NONE,	0xF1,	0x71,	0x06,	0,	CPU_MMX,	0,	0},
#line 813 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movb",	mov_insn,	69,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1258 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"repe",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 849 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntsd",	movntsd_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1269 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64xy",	NULL,	X86_REX>>8,	0x4E,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1210 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubq",	mmxsse2_insn,	2,	NONE,	0xFB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1248 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcrb",	shift_insn,	16,	SUF_B,	0x03,	0,	0,	0,	0,	0,	0},
#line 1359 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnl",	setcc_insn,	1,	NONE,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 1607 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpordpd",	ssecmp_128_insn,	3,	NONE,	0x07,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 104 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmova",	cmovcc_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1705 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vlddqu",	lddqu_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1226 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpcklwd",	mmxsse2_insn,	2,	NONE,	0x61,	0,	0,	0,	CPU_MMX,	0,	0},
#line 629 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstsw",	fstsw_insn,	2,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 615 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsincos",	twobyte_insn,	1,	NONE,	0xD9,	0xFB,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 314 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 60 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"boundw",	bound_insn,	2,	SUF_W,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 382 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunltss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 859 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsldup",	xmm_xmm128_insn,	2,	NONE,	0xF3,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 700 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jbe",	jcc_insn,	9,	NONE,	0x06,	0,	0,	0,	0,	0,	0},
#line 1835 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpinsrwq",	pinsrw_insn,	9,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1525 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpge_oqsd",	ssecmp_64_insn,	4,	NONE,	0x1D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1918 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vshufps",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x00,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1783 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xED,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1136 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovzxbw",	sse4m64_insn,	2,	NONE,	0x30,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1240 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcl",	shift_insn,	16,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 385 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunordsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 370 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1813 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermilpd",	vpermil_insn,	4,	NONE,	0x05,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1474 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ucomiss",	xmm_xmm32_insn,	4,	NONE,	0x00,	0x2E,	0,	0,	CPU_SSE,	0,	0},
#line 907 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"orps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x56,	0,	0,	CPU_SSE,	0,	0},
#line 589 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnsaves",	onebytemem_insn,	1,	SUF_S,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1480 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"unpcklpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x14,	0,	0,	CPU_SSE2,	0,	0},
#line 168 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovng",	cmovcc_insn,	3,	NONE,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 690 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"invd",	twobyte_insn,	1,	NONE,	0x0F,	0x08,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 1862 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovzxdq",	sse4m64_insn,	2,	NONE,	0x35,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1199 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pslldq",	pslrldq_insn,	2,	NONE,	0x07,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 383 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunordpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1330 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setbeb",	setcc_insn,	1,	SUF_B,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 1252 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rdmsr",	twobyte_insn,	1,	NONE,	0x0F,	0x32,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 844 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntil",	movnti_insn,	2,	SUF_L,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 417 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtss2sd",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1193 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshuflw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF2,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 1736 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovmskpdl",	movmsk_insn,	4,	SUF_L,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1827 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphsubd",	ssse3_insn,	3,	NONE,	0x06,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 895 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"nop",	onebyte_insn,	1,	NONE,	0x90,	0,	0,	0,	0,	0,	0},
#line 1230 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushw",	push_insn,	33,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1028 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrueq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1679 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmaddpd",	fma_128_256_insn,	4,	NONE,	0x69,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1025 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomq",	sse5com_insn,	1,	NONE,	0x4F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 317 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 1194 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshufw",	pshufw_insn,	1,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1484 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vaddsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 519 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fild",	fildstp_insn,	3,	NONE,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 341 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comueqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 1251 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcrw",	shift_insn,	16,	SUF_W,	0x03,	0,	0,	0,	0,	0,	0},
#line 766 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lidtw",	twobytemem_insn,	1,	SUF_W,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1178 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"protd",	sse5prot_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1346 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnaeb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1153 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmvzb",	cyrixmmx_insn,	1,	NONE,	0x58,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1419 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smintold",	twobyte_insn,	1,	NONE,	0x0F,	0x7E,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_Obs},
#line 29 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addr64",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 350 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1740 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovmskpsq",	movmsk_insn,	4,	SUF_Q,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 105 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmoval",	cmovcc_insn,	3,	SUF_L,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1051 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfadd",	now3d_insn,	1,	NONE,	0x9E,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1191 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshufd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 988 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 682 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"insb",	onebyte_insn,	1,	NONE,	0x6C,	0x00,	0,	0,	0,	0,	0},
#line 1005 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 550 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldl",	fld_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1697 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmsubsd",	fma_128_m64_insn,	3,	NONE,	0x7F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 515 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fidivs",	fiarith_insn,	2,	SUF_S,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 656 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"haddps",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 658 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"hnt",	NULL,	X86_SEGREG>>8,	0x2E,	0,	0,	0,	0,	0,	0,	0},
#line 318 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 1485 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vaddss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 510 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ficomp",	fiarith_insn,	2,	NONE,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 956 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpgtw",	mmxsse2_insn,	2,	NONE,	0x65,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1405 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrdw",	shlrd_insn,	9,	SUF_W,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 167 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnew",	cmovcc_insn,	3,	SUF_W,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 997 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomleud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 524 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fimul",	fiarith_insn,	2,	NONE,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1442 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stosl",	onebyte_insn,	1,	NONE,	0xAB,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1412 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"skinit",	skinit_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 302 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comltss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 57 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"blendvps",	sse4xmm0_insn,	2,	NONE,	0x14,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 488 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcompl",	fcom_insn,	5,	SUF_L,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 117 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbel",	cmovcc_insn,	3,	SUF_L,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 455 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"dpps",	sse4imm_insn,	2,	NONE,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1898 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 856 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsd",	movsd_insn,	5,	NONE,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 811 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"montmul",	padlock_insn,	1,	NONE,	0xC0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 479 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovne",	fcmovcc_insn,	1,	NONE,	0xDB,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1398 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrb",	shift_insn,	16,	SUF_B,	0x05,	0,	0,	0,	0,	0,	0},
#line 1121 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pminsw",	mmxsse2_insn,	2,	NONE,	0xEA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 380 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunltps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 931 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"palignr",	ssse3imm_insn,	2,	NONE,	0x0F,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1717 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vminps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 702 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jcxz",	jcxz_insn,	2,	NONE,	0x10,	0,	0,	0,	0,	0,	0},
#line 1933 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vunpckhps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 475 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovbe",	fcmovcc_insn,	1,	NONE,	0xDA,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 402 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtpi2ps",	cvt_xmm_mm_ps_insn,	1,	NONE,	0x2A,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1951 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xchg",	xchg_insn,	16,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 63 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsfq",	bsfr_insn,	3,	SUF_Q,	0xBC,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1416 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sldtw",	sldtmsw_insn,	6,	SUF_W,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 1509 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_ussd",	ssecmp_64_insn,	4,	NONE,	0x18,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1249 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcrl",	shift_insn,	16,	SUF_L,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1250 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcrq",	shift_insn,	16,	SUF_Q,	0x03,	0,	0,	ONLY_64,	0,	0,	0},
#line 281 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comfalsepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 422 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttpd2pi",	cvt_mm_xmm_insn,	1,	NONE,	0x66,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1281 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexz",	NULL,	X86_REX>>8,	0x41,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1542 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmple_oqss",	ssecmp_32_insn,	4,	NONE,	0x12,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 890 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"neg",	f6_insn,	4,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 719 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnle",	jcc_insn,	9,	NONE,	0x0F,	0,	0,	0,	0,	0,	0},
#line 437 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"data16",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 54 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"blendpd",	sse4imm_insn,	2,	NONE,	0x0D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1537 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgtsd",	ssecmp_64_insn,	4,	NONE,	0x0E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 587 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnsave",	onebytemem_insn,	1,	NONE,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 638 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubrp",	farithp_insn,	3,	NONE,	0xE8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 499 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivrs",	farith_insn,	7,	SUF_S,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 655 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"haddpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 311 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 363 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuneqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 1948 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xaddq",	cmpxchgxadd_insn,	4,	SUF_Q,	0xC0,	0,	0,	ONLY_64,	CPU_486,	0,	0},
#line 1298 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rsm",	twobyte_insn,	1,	NONE,	0x0F,	0xAA,	0,	0,	CPU_586,	CPU_SMM,	0},
#line 631 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsub",	farith_insn,	7,	NONE,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 1707 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaskmovdqu",	maskmovdqu_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1044 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pextrq",	pextrq_insn,	1,	NONE,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 649 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxrstorq",	twobytemem_insn,	1,	SUF_Q,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 463 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"extrq",	extrq_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1848 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpminud",	ssse3_insn,	3,	NONE,	0x3B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1746 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovsd",	movsd_insn,	5,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 643 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fucomp",	fcom2_insn,	2,	NONE,	0xDD,	0xE8,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 825 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movddup",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 1046 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pextrwl",	pextrw_insn,	7,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1407 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shufps",	xmm_xmm128_imm_insn,	1,	NONE,	0x00,	0xC6,	0,	0,	CPU_SSE,	0,	0},
#line 136 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovl",	cmovcc_insn,	3,	NONE,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1047 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pextrwq",	pextrw_insn,	7,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 1316 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sbbl",	arith_insn,	22,	SUF_L,	0x18,	0x03,	0,	0,	CPU_386,	0,	0},
#line 1491 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vandps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1382 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setzb",	setcc_insn,	1,	SUF_B,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1846 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpminsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 53 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aword",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 556 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldenvs",	onebytemem_insn,	1,	SUF_S,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 39 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aesimc",	aes_insn,	1,	NONE,	0x38,	0xDB,	0,	0,	CPU_AES,	0,	0},
#line 554 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldenv",	onebytemem_insn,	1,	NONE,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1325 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setae",	setcc_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 90 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"callq",	call_insn,	26,	NONE,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1373 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setp",	setcc_insn,	1,	NONE,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1390 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shll",	shift_insn,	16,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 396 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtdq2ps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 1611 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmppd",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x66,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 121 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovcl",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 986 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1510 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_usss",	ssecmp_32_insn,	4,	NONE,	0x18,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 155 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbw",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1970 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xrstor",	twobytemem_insn,	1,	NONE,	0x05,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 464 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"f2xm1",	twobyte_insn,	1,	NONE,	0xD9,	0xF0,	0,	0,	CPU_FPU,	0,	0},
#line 154 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1597 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnlt_uqsd",	ssecmp_64_insn,	4,	NONE,	0x15,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1056 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfmin",	now3d_insn,	1,	NONE,	0x94,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 343 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1873 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsadbw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1923 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vstmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 786 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lsl",	bsfr_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 339 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comueqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 1751 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovups",	movau_insn,	6,	NONE,	0x00,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 571 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmsubss",	sse5arith32_insn,	8,	NONE,	0x0A,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 209 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpel",	cmovcc_insn,	3,	SUF_L,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1090 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pi2fw",	now3d_insn,	1,	NONE,	0x0C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 586 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnop",	twobyte_insn,	1,	NONE,	0xD9,	0xD0,	0,	0,	CPU_FPU,	0,	0},
#line 1943 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"wrmsr",	twobyte_insn,	1,	NONE,	0x0F,	0x30,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 624 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstenvs",	twobytemem_insn,	1,	SUF_S,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 620 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstcw",	fstcw_insn,	1,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1310 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sarb",	shift_insn,	16,	SUF_B,	0x07,	0,	0,	0,	0,	0,	0},
#line 905 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"orw",	arith_insn,	22,	SUF_W,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 398 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtpd2pi",	cvt_mm_xmm_insn,	1,	NONE,	0x66,	0x2D,	0,	0,	CPU_SSE2,	0,	0},
#line 1600 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnltps",	ssecmp_128_insn,	3,	NONE,	0x05,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 146 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnaq",	cmovcc_insn,	3,	SUF_Q,	0x06,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1106 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacswd",	sse5pmacs_insn,	1,	NONE,	0x96,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1312 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sarq",	shift_insn,	16,	SUF_Q,	0x07,	0,	0,	ONLY_64,	0,	0,	0},
#line 787 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lsll",	bsfr_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1723 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovapd",	movau_insn,	6,	NONE,	0x66,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1577 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngesd",	ssecmp_64_insn,	4,	NONE,	0x09,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 875 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzwq",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1781 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1878 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsignb",	ssse3_insn,	3,	NONE,	0x08,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1380 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setsb",	setcc_insn,	1,	SUF_B,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 804 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"maxss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1232 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushal",	onebyte_insn,	1,	NONE,	0x60,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 226 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpl",	arith_insn,	22,	SUF_L,	0x38,	0x07,	0,	0,	CPU_386,	0,	0},
#line 882 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mull",	f6_insn,	4,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 990 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 653 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fyl2x",	twobyte_insn,	1,	NONE,	0xD9,	0xF1,	0,	0,	CPU_FPU,	0,	0},
#line 1572 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnge_uqps",	ssecmp_128_insn,	3,	NONE,	0x19,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 419 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1883 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsllq",	vpshift_insn,	4,	NONE,	0xF3,	0x73,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1641 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtps2dq",	avx_xmm_xmm128_insn,	2,	NONE,	0x66,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1211 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubsb",	mmxsse2_insn,	2,	NONE,	0xE8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 347 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 614 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsin",	twobyte_insn,	1,	NONE,	0xD9,	0xFE,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 453 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 1885 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsrad",	vpshift_insn,	4,	NONE,	0xE2,	0x72,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 668 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"imul",	imul_insn,	19,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 540 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisttps",	fildstp_insn,	3,	SUF_S,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 495 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivs",	farith_insn,	7,	SUF_S,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 827 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movdqa",	movau_insn,	6,	NONE,	0x66,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 1663 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 126 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmoveq",	cmovcc_insn,	3,	SUF_Q,	0x04,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 688 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"int3",	onebyte_insn,	1,	NONE,	0xCC,	0,	0,	0,	0,	0,	0},
#line 1396 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shldw",	shlrd_insn,	9,	SUF_W,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 733 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"larl",	bsfr_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1810 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermilmo2ps",	vpermil2_fixed_insn,	4,	NONE,	0x48,	0x02,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 127 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovew",	cmovcc_insn,	3,	SUF_W,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 616 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsqrt",	twobyte_insn,	1,	NONE,	0xD9,	0xFA,	0,	0,	CPU_FPU,	0,	0},
#line 234 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpleps",	ssecmp_128_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 914 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"outsw",	onebyte_insn,	1,	NONE,	0x6F,	0x10,	0,	0,	0,	0,	0},
#line 881 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulb",	f6_insn,	4,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 952 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpestrm",	sse4pcmpstr_insn,	1,	NONE,	0x60,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 763 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lidt",	twobytemem_insn,	1,	NONE,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 635 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubr",	farith_insn,	7,	NONE,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 113 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbl",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1687 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmsubpd",	fma_128_256_insn,	4,	NONE,	0x6D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 351 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comulepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 414 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsi2ss",	cvt_xmm_rmx_insn,	6,	NONE,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 232 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpeqss",	ssecmp_32_insn,	4,	NONE,	0x00,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 436 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"das",	onebyte_insn,	1,	NONE,	0x2F,	0,	0,	NOT_64,	0,	0,	0},
#line 1549 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmplt_oqsd",	ssecmp_64_insn,	4,	NONE,	0x11,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1072 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddsw",	ssse3_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 74 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btq",	bittest_insn,	6,	SUF_Q,	0xA3,	0x04,	0,	ONLY_64,	CPU_386,	0,	0},
#line 720 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jno",	jcc_insn,	9,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 1796 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpeqq",	ssse3_insn,	3,	NONE,	0x29,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1453 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subw",	arith_insn,	22,	SUF_W,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 802 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"maxps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1033 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtruew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 253 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpordpd",	ssecmp_128_insn,	3,	NONE,	0x07,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1133 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovsxwq",	sse4m32_insn,	2,	NONE,	0x24,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1587 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnle_uqpd",	ssecmp_128_insn,	3,	NONE,	0x16,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1176 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"prefetchw",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 1175 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"prefetcht2",	twobytemem_insn,	1,	NONE,	0x03,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1143 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulhrwa",	now3d_insn,	1,	NONE,	0xB7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 186 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnoq",	cmovcc_insn,	3,	SUF_Q,	0x01,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 269 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchg",	cmpxchgxadd_insn,	4,	NONE,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 747 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leaveq",	onebyte_insn,	1,	NONE,	0xC9,	0x00,	0x40,	ONLY_64,	0,	0,	0},
#line 1163 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popcntq",	cnt_insn,	3,	SUF_Q,	0xB8,	0,	0,	ONLY_64,	CPU_SSE42,	0,	0},
#line 650 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxsave",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 271 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchg8b",	cmpxchg8b_insn,	1,	NONE,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 307 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comneqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1115 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaxsw",	mmxsse2_insn,	2,	NONE,	0xEE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 17 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"adcl",	arith_insn,	22,	SUF_L,	0x10,	0x02,	0,	0,	CPU_386,	0,	0},
#line 442 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"decl",	incdec_insn,	6,	SUF_L,	0x48,	0x01,	0,	0,	CPU_386,	0,	0},
#line 770 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lmsww",	prot286_insn,	1,	SUF_W,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 826 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movdq2q",	movdq2q_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1224 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpckldq",	mmxsse2_insn,	2,	NONE,	0x62,	0,	0,	0,	CPU_MMX,	0,	0},
#line 337 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comtruesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 1547 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmplt_oqpd",	ssecmp_128_insn,	3,	NONE,	0x11,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1026 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrueb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1286 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rolw",	shift_insn,	16,	SUF_W,	0x00,	0,	0,	0,	0,	0,	0},
#line 1003 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1531 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgt_oqpd",	ssecmp_128_insn,	3,	NONE,	0x1E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 378 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1389 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shlb",	shift_insn,	16,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 1235 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushfl",	onebyte_insn,	1,	NONE,	0x9C,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1107 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacsww",	sse5pmacs_insn,	1,	NONE,	0x95,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 749 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"les",	ldes_insn,	2,	NONE,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 457 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"emms",	twobyte_insn,	1,	NONE,	0x0F,	0x77,	0,	0,	CPU_MMX,	0,	0},
#line 1604 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpord_sps",	ssecmp_128_insn,	3,	NONE,	0x17,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1311 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sarl",	shift_insn,	16,	SUF_L,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 1754 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmptrst",	vmxtwobytemem_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_P4,	0,	0},
#line 182 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnleq",	cmovcc_insn,	3,	SUF_Q,	0x0F,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 965 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomequd",	sse5comcc_insn,	1,	NONE,	0x6E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1256 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rdtscp",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xF9,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1376 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setpeb",	setcc_insn,	1,	SUF_B,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1109 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmadcswd",	sse5pmacs_insn,	1,	NONE,	0xB6,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1216 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubw",	mmxsse2_insn,	2,	NONE,	0xF9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1669 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vdivsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1534 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgt_oqss",	ssecmp_32_insn,	4,	NONE,	0x1E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 122 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovcq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 809 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"minss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 1936 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vxorpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1187 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshld",	sse5psh_insn,	2,	NONE,	0x02,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1276 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexxy",	NULL,	X86_REX>>8,	0x46,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1554 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpltss",	ssecmp_32_insn,	4,	NONE,	0x01,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 983 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgeuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 371 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 247 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnlesd",	ssecmp_64_insn,	4,	NONE,	0x06,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 821 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movabsw",	movabs_insn,	9,	SUF_W,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1055 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfmax",	now3d_insn,	1,	NONE,	0xA4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1946 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xaddb",	cmpxchgxadd_insn,	4,	SUF_B,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1275 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexx",	NULL,	X86_REX>>8,	0x44,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1118 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaxuw",	sse4_insn,	2,	NONE,	0x3E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 112 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovb",	cmovcc_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 98 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"clgi",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xDD,	0,	CPU_SVM,	0,	0},
#line 1132 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovsxwd",	sse4m64_insn,	2,	NONE,	0x23,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 957 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpistri",	sse4pcmpstr_insn,	1,	NONE,	0x63,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 424 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttps2pi",	cvt_mm_xmm64_insn,	2,	NONE,	0x2C,	0,	0,	0,	CPU_SSE,	0,	0},
#line 797 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lzcntq",	cnt_insn,	3,	SUF_Q,	0xBD,	0,	0,	ONLY_64,	CPU_686,	CPU_AMD,	0},
#line 265 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpunordpd",	ssecmp_128_insn,	3,	NONE,	0x03,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1012 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneqb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1477 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"umov",	umov_insn,	6,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1362 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnleb",	setcc_insn,	1,	SUF_B,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 423 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttps2dq",	xmm_xmm128_insn,	2,	NONE,	0xF3,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 319 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnlepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1173 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"prefetcht0",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1304 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"salb",	shift_insn,	16,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 1871 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmuludq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1452 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subq",	arith_insn,	22,	SUF_Q,	0x28,	0x05,	0,	ONLY_64,	0,	0,	0},
#line 1925 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsubps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 352 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 1076 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddudq",	sse5two_insn,	1,	NONE,	0x5B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 878 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzxw",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1517 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalse_ossd",	ssecmp_64_insn,	4,	NONE,	0x1B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1764 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmulss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1929 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vtestps",	sse4_insn,	2,	NONE,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 46 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andnpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x55,	0,	0,	CPU_SSE2,	0,	0},
#line 1088 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phsubwd",	sse5two_insn,	1,	NONE,	0x62,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 161 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovncl",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 573 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmull",	farith_insn,	7,	SUF_L,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 1805 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpistrm",	sse4pcmpstr_insn,	1,	NONE,	0x62,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1905 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpckldq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x62,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 636 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubrl",	farith_insn,	7,	SUF_L,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 835 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movmskpd",	movmsk_insn,	4,	NONE,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1204 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psrld",	pshift_insn,	4,	NONE,	0xD2,	0x72,	0x02,	0,	CPU_MMX,	0,	0},
#line 731 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lahf",	onebyte_insn,	1,	NONE,	0x9F,	0,	0,	0,	0,	0,	0},
#line 1151 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmvlzb",	cyrixmmx_insn,	1,	NONE,	0x5B,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1422 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smovq",	onebyte_insn,	1,	NONE,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 509 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ficoms",	fiarith_insn,	2,	SUF_S,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1017 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomnequq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 943 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pclmullqhqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x10,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 1469 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"testb",	test_insn,	20,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 72 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bt",	bittest_insn,	6,	NONE,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 1888 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsrldq",	pslrldq_insn,	2,	NONE,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1231 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pusha",	onebyte_insn,	1,	NONE,	0x60,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 1941 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"wbinvd",	twobyte_insn,	1,	NONE,	0x0F,	0x09,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 582 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmsubpd",	sse5arith_insn,	4,	NONE,	0x19,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 830 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movhpd",	movhlp_insn,	3,	NONE,	0x66,	0x16,	0,	0,	CPU_SSE2,	0,	0},
#line 300 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comltps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1760 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmsave",	svm_rax_insn,	2,	NONE,	0xDB,	0,	0,	0,	CPU_SVM,	0,	0},
#line 133 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovgel",	cmovcc_insn,	3,	SUF_L,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 508 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ficoml",	fiarith_insn,	2,	SUF_L,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 330 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comordss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 978 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomged",	sse5comcc_insn,	1,	NONE,	0x4E,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1425 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smswl",	sldtmsw_insn,	6,	SUF_L,	0x04,	0x01,	0,	0,	CPU_386,	0,	0},
#line 975 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalseuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1851 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovmskbl",	pmovmskb_insn,	4,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 212 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpo",	cmovcc_insn,	3,	NONE,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 567 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmaddss",	sse5arith32_insn,	8,	NONE,	0x02,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1342 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setleb",	setcc_insn,	1,	SUF_B,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1315 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sbbb",	arith_insn,	22,	SUF_B,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 1927 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsubss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1411 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sidtw",	twobytemem_insn,	1,	SUF_W,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1615 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptrue_uspd",	ssecmp_128_insn,	3,	NONE,	0x1F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1208 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubb",	mmxsse2_insn,	2,	NONE,	0xF8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 67 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsrq",	bsfr_insn,	3,	SUF_Q,	0xBD,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 412 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsi2sdl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 1975 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xstore",	padlock_insn,	1,	NONE,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 713 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnbe",	jcc_insn,	9,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 594 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstenvs",	onebytemem_insn,	1,	SUF_S,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 884 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulw",	f6_insn,	4,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 1599 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnltpd",	ssecmp_128_insn,	3,	NONE,	0x05,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1086 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phsubsw",	ssse3_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1937 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vxorps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1344 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnab",	setcc_insn,	1,	SUF_B,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 520 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fildl",	fildstp_insn,	3,	SUF_L,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 815 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movq",	mov_insn,	69,	SUF_Q,	0,	0,	0,	0,	0,	0,	0},
#line 1478 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"unpckhpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x15,	0,	0,	CPU_SSE2,	0,	0},
#line 1581 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngt_uqsd",	ssecmp_64_insn,	4,	NONE,	0x1A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1877 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpshuflw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF2,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 591 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstcww",	fldnstcw_insn,	1,	SUF_W,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 678 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"incb",	incdec_insn,	6,	SUF_B,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1297 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rsldt",	cyrixsmm_insn,	1,	NONE,	0x7B,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1833 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpinsrw",	pinsrw_insn,	9,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1089 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pi2fd",	now3d_insn,	1,	NONE,	0x0D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1073 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddubd",	sse5two_insn,	1,	NONE,	0x52,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 368 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1127 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovmskbq",	pmovmskb_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 841 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntdq",	movnt_insn,	1,	NONE,	0x66,	0xE7,	0,	0,	CPU_SSE2,	0,	0},
#line 111 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovaew",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 91 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cbtw",	onebyte_insn,	1,	NONE,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 190 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnpq",	cmovcc_insn,	3,	SUF_Q,	0x0B,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1715 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmclear",	vmxthreebytemem_insn,	1,	NONE,	0x66,	0,	0,	0,	CPU_P4,	0,	0},
#line 474 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovb",	fcmovcc_insn,	1,	NONE,	0xDA,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 518 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fidivrs",	fiarith_insn,	2,	SUF_S,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 742 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leal",	lea_insn,	3,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1063 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfrsqit1",	now3d_insn,	1,	NONE,	0xA7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 873 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzbw",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1177 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"protb",	sse5prot_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 883 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulq",	f6_insn,	4,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 1217 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pswapd",	now3d_insn,	1,	NONE,	0xBB,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1903 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpckhwd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x69,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1430 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sqrtsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 1874 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpshufb",	ssse3_insn,	3,	NONE,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1499 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_ospd",	ssecmp_128_insn,	3,	NONE,	0x10,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 228 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpw",	arith_insn,	22,	SUF_W,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1354 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setneb",	setcc_insn,	1,	SUF_B,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 42 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andb",	arith_insn,	22,	SUF_B,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 429 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 201 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovol",	cmovcc_insn,	3,	SUF_L,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 1776 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpacksswb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x63,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1050 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfacc",	now3d_insn,	1,	NONE,	0xAE,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 909 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"outb",	out_insn,	12,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 892 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"negl",	f6_insn,	4,	SUF_L,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1113 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaxsb",	sse4_insn,	2,	NONE,	0x3C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 721 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnp",	jcc_insn,	9,	NONE,	0x0B,	0,	0,	0,	0,	0,	0},
#line 40 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aeskeygenassist",	aes_imm_insn,	1,	NONE,	0x3A,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 1043 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pextrd",	pextrd_insn,	1,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1071 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phadddq",	sse5two_insn,	1,	NONE,	0x4B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 357 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comultsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 1952 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xchgb",	xchg_insn,	16,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1075 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddubw",	sse5two_insn,	1,	NONE,	0x51,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 65 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsr",	bsfr_insn,	3,	NONE,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 1271 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64xz",	NULL,	X86_REX>>8,	0x4D,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 568 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmsubpd",	sse5arith_insn,	4,	NONE,	0x09,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 358 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comultss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 1135 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovzxbq",	sse4m16_insn,	2,	NONE,	0x32,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1610 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpordss",	ssecmp_32_insn,	4,	NONE,	0x07,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1614 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpss",	xmm_xmm32_imm_insn,	4,	NONE,	0xF3,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1424 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smsw",	sldtmsw_insn,	6,	NONE,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 851 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movq2dq",	movq2dq_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1383 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sfence",	threebyte_insn,	1,	NONE,	0x0F,	0xAE,	0xF8,	0,	CPU_P3,	0,	0},
#line 1401 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrw",	shift_insn,	16,	SUF_W,	0x05,	0,	0,	0,	0,	0,	0},
#line 59 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"boundl",	bound_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1801 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpgtd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 69 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bswap",	bswap_insn,	2,	NONE,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 1703 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vinsertf128",	vinsertf128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1468 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"test",	test_insn,	20,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 287 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 180 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnle",	cmovcc_insn,	3,	NONE,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1351 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnc",	setcc_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1246 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcpss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 1659 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttpd2dqy",	avx_cvt_xmm128_y_insn,	1,	NONE,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 692 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"invlpga",	invlpga_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 229 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpeqpd",	ssecmp_128_insn,	3,	NONE,	0x00,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1307 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"salw",	shift_insn,	16,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 1902 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpckhqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 526 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fimuls",	fiarith_insn,	2,	SUF_S,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 845 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntiq",	movnti_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 1515 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalse_ospd",	ssecmp_128_insn,	3,	NONE,	0x1B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1313 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sarw",	shift_insn,	16,	SUF_W,	0x07,	0,	0,	0,	0,	0,	0},
#line 461 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"enterw",	enter_insn,	3,	SUF_W,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 373 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1439 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sti",	onebyte_insn,	1,	NONE,	0xFB,	0,	0,	0,	0,	0,	0},
#line 1458 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"svdc",	svdc_insn,	1,	NONE,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1580 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngt_uqps",	ssecmp_128_insn,	3,	NONE,	0x1A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1837 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaddwd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 391 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"crc32b",	crc32_insn,	5,	SUF_B,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1816 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermiltd2ps",	vpermil2_fixed_insn,	4,	NONE,	0x48,	0x00,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 818 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movabsb",	movabs_insn,	9,	SUF_B,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 757 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgdtl",	twobytemem_insn,	1,	SUF_L,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 994 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomled",	sse5comcc_insn,	1,	NONE,	0x4E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 140 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovle",	cmovcc_insn,	3,	NONE,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1493 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vblendps",	sse4imm_256_insn,	3,	NONE,	0x0C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1400 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrq",	shift_insn,	16,	SUF_Q,	0x05,	0,	0,	ONLY_64,	0,	0,	0},
#line 810 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"monitor",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC8,	0,	CPU_SSE3,	0,	0},
#line 1461 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"swapgs",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xF8,	ONLY_64,	0,	0,	0},
#line 224 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmp",	arith_insn,	22,	NONE,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 737 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ldmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 974 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalseuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1828 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphsubsw",	ssse3_insn,	3,	NONE,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1684 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmaddsubps",	fma_128_256_insn,	4,	NONE,	0x5C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1785 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddusw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 979 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgeq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1840 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaxsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1613 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpsd",	cmpsd_insn,	5,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 374 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1020 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 734 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"larq",	bsfr_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 562 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldt",	fldstpt_insn,	1,	WEAK,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 659 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"hsubpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 489 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcomps",	fcom_insn,	5,	SUF_S,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 187 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnow",	cmovcc_insn,	3,	SUF_W,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 1737 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovmskpdq",	movmsk_insn,	4,	SUF_Q,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 301 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comltsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 703 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"je",	jcc_insn,	9,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 973 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalseud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 438 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"data32",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1462 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"syscall",	twobyte_insn,	1,	NONE,	0x0F,	0x05,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 1367 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setns",	setcc_insn,	1,	NONE,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 925 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddsb",	mmxsse2_insn,	2,	NONE,	0xEC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1335 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setg",	setcc_insn,	1,	NONE,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1591 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnlepd",	ssecmp_128_insn,	3,	NONE,	0x06,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 977 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgeb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1374 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setpb",	setcc_insn,	1,	SUF_B,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1214 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubusb",	mmxsse2_insn,	2,	NONE,	0xD8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1832 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpinsrq",	pinsrq_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 605 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frndint",	twobyte_insn,	1,	NONE,	0xD9,	0xFC,	0,	0,	CPU_FPU,	0,	0},
#line 936 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pavgb",	mmxsse2_insn,	2,	NONE,	0xE0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 366 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuness",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 214 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpoq",	cmovcc_insn,	3,	SUF_Q,	0x0B,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 270 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchg16b",	cmpxchg16b_insn,	1,	NONE,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 78 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btcq",	bittest_insn,	6,	SUF_Q,	0xBB,	0x07,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1265 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"retw",	retnf_insn,	6,	NONE,	0xC2,	0x10,	0,	0,	0,	0,	0},
#line 257 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmppd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0xC2,	0,	0,	CPU_SSE2,	0,	0},
#line 52 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"arplw",	arpl_insn,	1,	SUF_W,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 1437 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"std",	onebyte_insn,	1,	NONE,	0xFD,	0,	0,	0,	0,	0,	0},
#line 1279 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexy",	NULL,	X86_REX>>8,	0x42,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1596 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnlt_uqps",	ssecmp_128_insn,	3,	NONE,	0x15,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 716 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jng",	jcc_insn,	9,	NONE,	0x0E,	0,	0,	0,	0,	0,	0},
#line 305 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comneqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 486 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcomip",	fcom2_insn,	2,	NONE,	0xDF,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 313 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 401 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtpi2pd",	cvt_xmm_mm_ss_insn,	1,	NONE,	0x66,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 1584 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngtps",	ssecmp_128_insn,	3,	NONE,	0x0A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1334 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"seteb",	setcc_insn,	1,	SUF_B,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 440 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"dec",	incdec_insn,	6,	NONE,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 430 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2C,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1081 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddwq",	sse5two_insn,	1,	NONE,	0x47,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 505 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fiaddl",	fiarith_insn,	2,	SUF_L,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 697 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ja",	jcc_insn,	9,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 1712 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaxsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 565 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmaddps",	sse5arith_insn,	4,	NONE,	0x00,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1812 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermilmz2ps",	vpermil2_fixed_insn,	4,	NONE,	0x48,	0x03,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1668 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vdivps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1884 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsllw",	vpshift_insn,	4,	NONE,	0xF1,	0x71,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 531 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fists",	fiarith_insn,	2,	SUF_S,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 683 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"insertps",	insertps_insn,	4,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 778 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loop",	loop_insn,	8,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 84 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bts",	bittest_insn,	6,	NONE,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1650 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsi2ss",	cvt_xmm_rmx_insn,	6,	NONE,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 543 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisubl",	fiarith_insn,	2,	SUF_L,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1495 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vblendvps",	avx_sse4xmm0_insn,	2,	NONE,	0x4A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 548 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fld",	fld_insn,	4,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1096 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pinsrwq",	pinsrw_insn,	9,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 1296 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rsdc",	rsdc_insn,	1,	NONE,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1586 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngtss",	ssecmp_32_insn,	4,	NONE,	0x0A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1976 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xstorerng",	padlock_insn,	1,	NONE,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 791 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lssl",	lfgss_insn,	2,	SUF_L,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 937 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pavgusb",	now3d_insn,	1,	NONE,	0xBF,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1693 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmaddsd",	fma_128_m64_insn,	3,	NONE,	0x7B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 476 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmove",	fcmovcc_insn,	1,	NONE,	0xDA,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1845 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpminsd",	ssse3_insn,	3,	NONE,	0x39,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1257 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rep",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 817 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movabs",	movabs_insn,	9,	NONE,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1523 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpge_oqpd",	ssecmp_128_insn,	3,	NONE,	0x1D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 645 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fwait",	onebyte_insn,	1,	NONE,	0x9B,	0,	0,	0,	CPU_FPU,	0,	0},
#line 755 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lfsw",	lfgss_insn,	2,	SUF_W,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1242 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcll",	shift_insn,	16,	SUF_L,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 967 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomequw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 823 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movaps",	movau_insn,	6,	NONE,	0x00,	0x28,	0x01,	0,	CPU_SSE,	0,	0},
#line 115 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbw",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 855 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsbw",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1285 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rolq",	shift_insn,	16,	SUF_Q,	0x00,	0,	0,	ONLY_64,	0,	0,	0},
#line 961 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomeqb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 677 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"inc",	incdec_insn,	6,	NONE,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1268 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64x",	NULL,	X86_REX>>8,	0x4C,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1182 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshab",	sse5psh_insn,	2,	NONE,	0x04,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1352 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setncb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1171 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"prefetch",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 148 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnae",	cmovcc_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 971 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalseq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 724 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jo",	jcc_insn,	9,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 1609 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpordsd",	ssecmp_64_insn,	4,	NONE,	0x07,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1931 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vucomiss",	avx_xmm_xmm32_insn,	2,	NONE,	0x00,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 198 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnzq",	cmovcc_insn,	3,	SUF_Q,	0x05,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1901 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpckhdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 621 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstcww",	fstcw_insn,	1,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1803 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpgtw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x65,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1040 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"permpd",	sse5arith_insn,	4,	NONE,	0x21,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 328 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comordps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1847 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpminub",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 667 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"idivw",	div_insn,	8,	SUF_W,	0x07,	0,	0,	0,	0,	0,	0},
#line 1447 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"strq",	str_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 1105 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacssww",	sse5pmacs_insn,	1,	NONE,	0x85,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 273 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchgb",	cmpxchgxadd_insn,	4,	SUF_B,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 267 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpunordsd",	ssecmp_64_insn,	4,	NONE,	0x03,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 673 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"in",	in_insn,	12,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1237 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushfw",	onebyte_insn,	1,	NONE,	0x9C,	0x10,	0x40,	0,	0,	0,	0},
#line 1625 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunord_ssd",	ssecmp_64_insn,	4,	NONE,	0x13,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1503 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_uqpd",	ssecmp_128_insn,	3,	NONE,	0x08,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1809 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermilmo2pd",	vpermil2_fixed_insn,	4,	NONE,	0x49,	0x02,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1184 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshaq",	sse5psh_insn,	2,	NONE,	0x07,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 687 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"int",	int_insn,	1,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 266 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpunordps",	ssecmp_128_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 493 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdiv",	farith_insn,	7,	NONE,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 62 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsfl",	bsfr_insn,	3,	SUF_L,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 1706 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vldmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1911 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vroundpd",	avx_sse4imm_insn,	3,	NONE,	0x09,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 1337 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setge",	setcc_insn,	1,	NONE,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 1720 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmlaunch",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC2,	0,	CPU_P4,	0,	0},
#line 1166 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popfl",	onebyte_insn,	1,	NONE,	0x9D,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 435 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"daa",	onebyte_insn,	1,	NONE,	0x27,	0,	0,	NOT_64,	0,	0,	0},
#line 501 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"femms",	twobyte_insn,	1,	NONE,	0x0F,	0x0E,	0,	0,	CPU_3DNow,	0,	0},
#line 602 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frczps",	sse5two_insn,	1,	NONE,	0x10,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1752 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmpsadbw",	sse4imm_insn,	2,	NONE,	0x42,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1292 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"roundpd",	sse4imm_insn,	2,	NONE,	0x09,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1004 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1218 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ptest",	sse4_insn,	2,	NONE,	0x17,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 549 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fld1",	twobyte_insn,	1,	NONE,	0xD9,	0xE8,	0,	0,	CPU_FPU,	0,	0},
#line 588 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnsavel",	onebytemem_insn,	1,	SUF_L,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1732 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovlhps",	movhllhps_insn,	2,	NONE,	0x16,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1016 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomnequd",	sse5comcc_insn,	1,	NONE,	0x6E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1661 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 86 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btsq",	bittest_insn,	6,	SUF_Q,	0xAB,	0x05,	0,	ONLY_64,	CPU_386,	0,	0},
#line 523 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fildll",	fbldstp_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 521 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fildq",	fildstp_insn,	3,	SUF_Q,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 1260 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"repnz",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1103 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacssdql",	sse5pmacs_insn,	1,	NONE,	0x87,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1451 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subl",	arith_insn,	22,	SUF_L,	0x28,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1364 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnob",	setcc_insn,	1,	SUF_B,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 1465 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sysret",	twobyte_insn,	1,	NONE,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 852 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsb",	onebyte_insn,	1,	NONE,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 487 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcomp",	fcom_insn,	5,	NONE,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 887 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 1170 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pperm",	sse5arith_insn,	4,	NONE,	0x23,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1001 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1730 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovhpd",	movhlp_insn,	3,	NONE,	0x66,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1045 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pextrw",	pextrw_insn,	7,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1392 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shlw",	shift_insn,	16,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 1140 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmuldq",	sse4_insn,	2,	NONE,	0x28,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1518 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalse_osss",	ssecmp_32_insn,	4,	NONE,	0x1B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1263 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"retl",	retnf_insn,	6,	NONE,	0xC2,	0,	0,	NOT_64,	0,	0,	0},
#line 260 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpsd",	cmpsd_insn,	5,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 836 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movmskpdl",	movmsk_insn,	4,	SUF_L,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1077 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phadduwd",	sse5two_insn,	1,	NONE,	0x56,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 664 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"idivb",	div_insn,	8,	SUF_B,	0x07,	0,	0,	0,	0,	0,	0},
#line 1869 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmulld",	ssse3_insn,	3,	NONE,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 288 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 81 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btrl",	bittest_insn,	6,	SUF_L,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 1464 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sysexit",	twobyte_insn,	1,	NONE,	0x0F,	0x35,	0,	NOT_64,	CPU_686,	CPU_Priv,	0},
#line 612 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fscale",	twobyte_insn,	1,	NONE,	0xD9,	0xFD,	0,	0,	CPU_FPU,	0,	0},
#line 932 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pand",	mmxsse2_insn,	2,	NONE,	0xDB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1892 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 484 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcoms",	fcom_insn,	5,	SUF_S,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 1692 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmaddps",	fma_128_256_insn,	4,	NONE,	0x78,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1690 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmsubss",	fma_128_m32_insn,	3,	NONE,	0x6E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1221 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpckhqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6D,	0,	0,	CPU_SSE2,	0,	0},
#line 1702 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vhsubps",	xmm_xmm128_256_insn,	3,	NONE,	0xF2,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1220 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpckhdq",	mmxsse2_insn,	2,	NONE,	0x6A,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1434 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sscaq",	onebyte_insn,	1,	NONE,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1213 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubsw",	mmxsse2_insn,	2,	NONE,	0xE9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 662 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ibts",	ibts_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 946 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmov",	sse5arith_insn,	4,	NONE,	0x22,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 507 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ficom",	fiarith_insn,	2,	NONE,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1778 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpackuswb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x67,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 197 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnzl",	cmovcc_insn,	3,	SUF_L,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 706 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jge",	jcc_insn,	9,	NONE,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1558 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_oqss",	ssecmp_32_insn,	4,	NONE,	0x0C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1603 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpord_spd",	ssecmp_128_insn,	3,	NONE,	0x17,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 935 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paveb",	cyrixmmx_insn,	1,	NONE,	0x50,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 709 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jmp",	jmp_insn,	27,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1856 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovsxdq",	sse4m64_insn,	2,	NONE,	0x25,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 477 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovnb",	fcmovcc_insn,	1,	NONE,	0xDB,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1128 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovsxbd",	sse4m32_insn,	2,	NONE,	0x21,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1972 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xsetbv",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xD1,	0,	CPU_386,	CPU_Priv,	CPU_XSAVE},
#line 1896 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubusb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 230 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpeqps",	ssecmp_128_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1142 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulhrsw",	ssse3_insn,	3,	NONE,	0x0B,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1314 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sbb",	arith_insn,	22,	NONE,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 1198 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pslld",	pshift_insn,	4,	NONE,	0xF2,	0x72,	0x06,	0,	CPU_MMX,	0,	0},
#line 563 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldz",	twobyte_insn,	1,	NONE,	0xD9,	0xEE,	0,	0,	CPU_FPU,	0,	0},
#line 189 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnpl",	cmovcc_insn,	3,	SUF_L,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1305 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sall",	shift_insn,	16,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1506 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_uqss",	ssecmp_32_insn,	4,	NONE,	0x08,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1636 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtpd2dqx",	avx_cvt_xmm128_x_insn,	1,	NONE,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1399 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrl",	shift_insn,	16,	SUF_L,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1441 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stosb",	onebyte_insn,	1,	NONE,	0xAA,	0x00,	0,	0,	0,	0,	0},
#line 11 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aaa",	onebyte_insn,	1,	NONE,	0x37,	0,	0,	NOT_64,	0,	0,	0},
#line 1657 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttpd2dq",	avx_cvt_xmm128_insn,	2,	NONE,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1427 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smsww",	sldtmsw_insn,	6,	SUF_W,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 1365 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnp",	setcc_insn,	1,	NONE,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 604 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frczss",	sse5two32_insn,	2,	NONE,	0x12,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 480 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovnu",	fcmovcc_insn,	1,	NONE,	0xDB,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 418 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 869 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movupd",	movau_insn,	6,	NONE,	0x66,	0x10,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1548 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmplt_oqps",	ssecmp_128_insn,	3,	NONE,	0x11,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1036 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomuq",	sse5com_insn,	1,	NONE,	0x6F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1454 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 465 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fabs",	twobyte_insn,	1,	NONE,	0xD9,	0xE1,	0,	0,	CPU_FPU,	0,	0},
#line 1915 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vrsqrtps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x52,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 120 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovc",	cmovcc_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1444 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stosw",	onebyte_insn,	1,	NONE,	0xAB,	0x10,	0,	0,	0,	0,	0},
#line 1665 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1505 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_uqsd",	ssecmp_64_insn,	4,	NONE,	0x08,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 38 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aesenclast",	aes_insn,	1,	NONE,	0x38,	0xDD,	0,	0,	CPU_AES,	0,	0},
#line 1278 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexxz",	NULL,	X86_REX>>8,	0x45,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 829 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movhlps",	movhllhps_insn,	2,	NONE,	0x12,	0,	0,	0,	CPU_SSE,	0,	0},
#line 377 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunlesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1227 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"push",	push_insn,	33,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 470 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fbld",	fbldstp_insn,	1,	NONE,	0x04,	0,	0,	0,	CPU_FPU,	0,	0},
#line 407 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 1336 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setgb",	setcc_insn,	1,	SUF_B,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 863 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsw",	onebyte_insn,	1,	NONE,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 147 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnaw",	cmovcc_insn,	3,	SUF_W,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1345 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnae",	setcc_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1144 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulhrwc",	cyrixmmx_insn,	1,	NONE,	0x59,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 789 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lslw",	bsfr_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1944 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"wrshr",	rdwrshr_insn,	1,	NONE,	0x01,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 512 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ficomps",	fiarith_insn,	2,	SUF_S,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1137 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovzxdq",	sse4m64_insn,	2,	NONE,	0x35,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 444 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"decw",	incdec_insn,	6,	SUF_W,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1758 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmresume",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC3,	0,	CPU_P4,	0,	0},
#line 980 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgeub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1394 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shldl",	shlrd_insn,	9,	SUF_L,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 1084 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phsubd",	ssse3_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1791 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpavgw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1262 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ret",	retnf_insn,	6,	NONE,	0xC2,	0,	0,	0,	0,	0,	0},
#line 1203 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psraw",	pshift_insn,	4,	NONE,	0xE1,	0x71,	0x04,	0,	CPU_MMX,	0,	0},
#line 1253 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rdpmc",	twobyte_insn,	1,	NONE,	0x0F,	0x33,	0,	0,	CPU_686,	0,	0},
#line 972 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalseub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1516 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalse_osps",	ssecmp_128_insn,	3,	NONE,	0x1B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1966 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xorq",	arith_insn,	22,	SUF_Q,	0x30,	0x06,	0,	ONLY_64,	0,	0,	0},
#line 840 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movmskpsq",	movmsk_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1402 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrd",	shlrd_insn,	9,	NONE,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 216 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovs",	cmovcc_insn,	3,	NONE,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1749 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovss",	movss_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 445 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"div",	div_insn,	8,	NONE,	0x06,	0,	0,	0,	0,	0,	0},
#line 466 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fadd",	farith_insn,	7,	NONE,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 569 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmsubps",	sse5arith_insn,	4,	NONE,	0x08,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 513 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fidiv",	fiarith_insn,	2,	NONE,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 769 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lmsw",	prot286_insn,	1,	NONE,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1164 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popcntw",	cnt_insn,	3,	SUF_W,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 814 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movl",	mov_insn,	69,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 657 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"hlt",	onebyte_insn,	1,	NONE,	0xF4,	0,	0,	0,	CPU_Priv,	0,	0},
#line 679 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"incl",	incdec_insn,	6,	SUF_L,	0x40,	0x00,	0,	0,	CPU_386,	0,	0},
#line 1000 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomlew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 227 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpq",	arith_insn,	22,	SUF_Q,	0x38,	0x07,	0,	ONLY_64,	0,	0,	0},
#line 693 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"iret",	onebyte_insn,	1,	NONE,	0xCF,	0,	0,	0,	0,	0,	0},
#line 547 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisubrs",	fiarith_insn,	2,	SUF_S,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 922 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddb",	mmxsse2_insn,	2,	NONE,	0xFC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 482 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcom",	fcom_insn,	5,	NONE,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 1638 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtpd2ps",	avx_cvt_xmm128_insn,	2,	NONE,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1431 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 1645 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 848 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntq",	movntq_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 376 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 801 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"maxpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 1483 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vaddps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 858 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsl",	onebyte_insn,	1,	NONE,	0xA5,	0x20,	0,	0,	CPU_386,	0,	0},
#line 872 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzbq",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 388 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cqo",	onebyte_insn,	1,	NONE,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1212 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubsiw",	cyrixmmx_insn,	1,	NONE,	0x55,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1415 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sldtq",	sldtmsw_insn,	6,	SUF_Q,	0x00,	0x00,	0,	ONLY_64,	CPU_286,	0,	0},
#line 1912 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vroundps",	avx_sse4imm_insn,	3,	NONE,	0x08,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 310 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comness",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1290 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rorq",	shift_insn,	16,	SUF_Q,	0x01,	0,	0,	ONLY_64,	0,	0,	0},
#line 901 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"or",	arith_insn,	22,	NONE,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 1122 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pminub",	mmxsse2_insn,	2,	NONE,	0xDA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1956 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xcryptcbc",	padlock_insn,	1,	NONE,	0xD0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1111 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaddwd",	mmxsse2_insn,	2,	NONE,	0xF5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1926 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsubsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1404 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrdq",	shlrd_insn,	9,	SUF_Q,	0xAC,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 405 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtps2ph",	cvtps2ph_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 323 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnltpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1838 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaxsb",	ssse3_insn,	3,	NONE,	0x3C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1656 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 174 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovngeq",	cmovcc_insn,	3,	SUF_Q,	0x0C,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1971 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xsave",	twobytemem_insn,	1,	NONE,	0x04,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 446 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divb",	div_insn,	8,	SUF_B,	0x06,	0,	0,	0,	0,	0,	0},
#line 1487 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vaddsubps",	xmm_xmm128_256_insn,	3,	NONE,	0xF2,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 921 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"packuswb",	mmxsse2_insn,	2,	NONE,	0x67,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1440 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1820 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpextrw",	pextrw_insn,	7,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1438 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stgi",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xDC,	0,	CPU_SVM,	0,	0},
#line 894 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"negw",	f6_insn,	4,	SUF_W,	0x03,	0,	0,	0,	0,	0,	0},
#line 1338 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setgeb",	setcc_insn,	1,	SUF_B,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 1391 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shlq",	shift_insn,	16,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 896 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"not",	f6_insn,	4,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 338 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comtruess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 1319 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"scasb",	onebyte_insn,	1,	NONE,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 962 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomeqd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 533 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fistpl",	fildstp_insn,	3,	SUF_L,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 1058 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfnacc",	now3d_insn,	1,	NONE,	0x8A,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 159 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbew",	cmovcc_insn,	3,	SUF_W,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1652 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsi2ssq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1700 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vhaddps",	xmm_xmm128_256_insn,	3,	NONE,	0xF2,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 555 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldenvl",	onebytemem_insn,	1,	SUF_L,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1018 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomnequw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 124 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmove",	cmovcc_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 263 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpss",	xmm_xmm32_imm_insn,	4,	NONE,	0xF3,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 640 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fucom",	fcom2_insn,	2,	NONE,	0xDD,	0xE0,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 160 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnc",	cmovcc_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 920 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"packusdw",	sse4_insn,	2,	NONE,	0x2B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 926 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddsiw",	cyrixmmx_insn,	1,	NONE,	0x51,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 681 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"incw",	incdec_insn,	6,	SUF_W,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 16 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"adcb",	arith_insn,	22,	SUF_B,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 375 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunlepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 807 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"minps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 1917 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vshufpd",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x66,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 434 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cwtl",	onebyte_insn,	1,	NONE,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 715 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jne",	jcc_insn,	9,	NONE,	0x05,	0,	0,	0,	0,	0,	0},
#line 942 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pclmulhqlqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x01,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 1154 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pop",	pop_insn,	21,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1664 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1466 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sysretl",	twobyte_insn,	1,	SUF_L,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 95 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"clc",	onebyte_insn,	1,	NONE,	0xF8,	0,	0,	0,	0,	0,	0},
#line 258 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpps",	xmm_xmm128_imm_insn,	1,	NONE,	0x00,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 771 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loadall",	twobyte_insn,	1,	NONE,	0x0F,	0x07,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 976 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalsew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1455 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 1264 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"retq",	retnf_insn,	6,	NONE,	0xC2,	0,	0,	ONLY_64,	0,	0,	0},
#line 99 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cli",	onebyte_insn,	1,	NONE,	0xFA,	0,	0,	0,	0,	0,	0},
#line 1773 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpabsd",	avx_ssse3_2op_insn,	1,	NONE,	0x1E,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 77 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btcl",	bittest_insn,	6,	SUF_L,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 303 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 244 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpneqss",	ssecmp_32_insn,	4,	NONE,	0x04,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1291 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rorw",	shift_insn,	16,	SUF_W,	0x01,	0,	0,	0,	0,	0,	0},
#line 14 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aas",	onebyte_insn,	1,	NONE,	0x3F,	0,	0,	NOT_64,	0,	0,	0},
#line 839 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movmskpsl",	movmsk_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1551 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpltpd",	ssecmp_128_insn,	3,	NONE,	0x01,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 367 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 861 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsq",	onebyte_insn,	1,	NONE,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 406 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtps2pi",	cvt_mm_xmm64_insn,	2,	NONE,	0x2D,	0,	0,	0,	CPU_SSE,	0,	0},
#line 546 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisubrl",	fiarith_insn,	2,	SUF_L,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 992 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1078 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phadduwq",	sse5two_insn,	1,	NONE,	0x57,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1165 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popf",	onebyte_insn,	1,	NONE,	0x9D,	0x00,	0x40,	0,	0,	0,	0},
#line 1308 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"salc",	onebyte_insn,	1,	NONE,	0xD6,	0,	0,	NOT_64,	CPU_Undoc,	0,	0},
#line 1011 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 597 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fpatan",	twobyte_insn,	1,	NONE,	0xD9,	0xF3,	0,	0,	CPU_FPU,	0,	0},
#line 1964 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xorb",	arith_insn,	22,	SUF_B,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 728 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jrcxz",	jcxz_insn,	2,	NONE,	0x40,	0,	0,	ONLY_64,	0,	0,	0},
#line 389 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cqto",	onebyte_insn,	1,	NONE,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 410 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsd2ss",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1188 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshlq",	sse5psh_insn,	2,	NONE,	0x03,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 776 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lodsq",	onebyte_insn,	1,	NONE,	0xAD,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1119 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pminsb",	sse4_insn,	2,	NONE,	0x38,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 256 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpordss",	ssecmp_32_insn,	4,	NONE,	0x07,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 345 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1147 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulld",	sse4_insn,	2,	NONE,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1488 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vandnpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1605 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpord_ssd",	ssecmp_64_insn,	4,	NONE,	0x17,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1965 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xorl",	arith_insn,	22,	SUF_L,	0x30,	0x06,	0,	0,	CPU_386,	0,	0},
#line 1409 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sidtl",	twobytemem_insn,	1,	SUF_L,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1002 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1520 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalseps",	ssecmp_128_insn,	3,	NONE,	0x0B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 158 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbeq",	cmovcc_insn,	3,	SUF_Q,	0x07,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 282 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comfalseps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 686 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"insw",	onebyte_insn,	1,	NONE,	0x6D,	0x10,	0,	0,	0,	0,	0},
#line 1519 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalsepd",	ssecmp_128_insn,	3,	NONE,	0x0B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1067 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddbd",	sse5two_insn,	1,	NONE,	0x42,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 202 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovoq",	cmovcc_insn,	3,	SUF_Q,	0x00,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 469 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"faddp",	farithp_insn,	3,	NONE,	0xC0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1489 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vandnps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1807 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermil2pd",	vpermil2_insn,	4,	NONE,	0x49,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 885 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 145 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnal",	cmovcc_insn,	3,	SUF_L,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 897 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"notb",	f6_insn,	4,	SUF_B,	0x02,	0,	0,	0,	0,	0,	0},
#line 879 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mpsadbw",	sse4imm_insn,	2,	NONE,	0x42,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 306 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comneqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 744 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leaw",	lea_insn,	3,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1729 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovhlps",	movhllhps_insn,	2,	NONE,	0x12,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1524 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpge_oqps",	ssecmp_128_insn,	3,	NONE,	0x1D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 93 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cdq",	onebyte_insn,	1,	NONE,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1387 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sgdtw",	twobytemem_insn,	1,	SUF_W,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1802 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpgtq",	ssse3_insn,	3,	NONE,	0x37,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 344 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 558 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldl2t",	twobyte_insn,	1,	NONE,	0xD9,	0xE9,	0,	0,	CPU_FPU,	0,	0},
#line 1098 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacsdd",	sse5pmacs_insn,	1,	NONE,	0x9E,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1543 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmplepd",	ssecmp_128_insn,	3,	NONE,	0x02,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 886 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 1819 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpextrq",	pextrq_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 213 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpol",	cmovcc_insn,	3,	SUF_L,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 188 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnp",	cmovcc_insn,	3,	NONE,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 648 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxrstor",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 1756 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmreadl",	vmxmemrd_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_P4,	0,	0},
#line 639 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ftst",	twobyte_insn,	1,	NONE,	0xD9,	0xE4,	0,	0,	CPU_FPU,	0,	0},
#line 964 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomequb",	sse5comcc_insn,	1,	NONE,	0x6C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1891 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 22 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addl",	arith_insn,	22,	SUF_L,	0x00,	0x00,	0,	0,	CPU_386,	0,	0},
#line 938 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pavgw",	mmxsse2_insn,	2,	NONE,	0xE3,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1557 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_oqsd",	ssecmp_64_insn,	4,	NONE,	0x0C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1150 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmvgezb",	cyrixmmx_insn,	1,	NONE,	0x5C,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 704 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jecxz",	jcxz_insn,	2,	NONE,	0x20,	0,	0,	0,	CPU_386,	0,	0},
#line 1691 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmaddpd",	fma_128_256_insn,	4,	NONE,	0x79,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1789 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpandn",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 108 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovae",	cmovcc_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1882 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpslldq",	pslrldq_insn,	2,	NONE,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1935 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vunpcklps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1804 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpistri",	sse4pcmpstr_insn,	1,	NONE,	0x63,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1473 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ucomisd",	xmm_xmm64_insn,	4,	NONE,	0x66,	0x2E,	0,	0,	CPU_SSE2,	0,	0},
#line 139 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovlw",	cmovcc_insn,	3,	SUF_W,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 584 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmsubsd",	sse5arith64_insn,	8,	NONE,	0x1B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 162 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovncq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1755 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmread",	vmxmemrd_insn,	2,	NONE,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1630 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunordss",	ssecmp_32_insn,	4,	NONE,	0x03,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1681 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmaddsd",	fma_128_m64_insn,	3,	NONE,	0x6B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 808 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"minsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 552 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldcw",	fldnstcw_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 413 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsi2sdq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF2,	0x2A,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 321 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnlesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 245 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnlepd",	ssecmp_128_insn,	3,	NONE,	0x06,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 297 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comlesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1243 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rclq",	shift_insn,	16,	SUF_Q,	0x02,	0,	0,	ONLY_64,	0,	0,	0},
#line 327 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comordpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 30 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 1034 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomub",	sse5com_insn,	1,	NONE,	0x6C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1460 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"svts",	cyrixsmm_insn,	1,	NONE,	0x7C,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 473 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fclex",	threebyte_insn,	1,	NONE,	0x9B,	0xDB,	0xE2,	0,	CPU_FPU,	0,	0},
#line 1471 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"testq",	test_insn,	20,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1528 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgeps",	ssecmp_128_insn,	3,	NONE,	0x0D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 485 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcomi",	fcom2_insn,	2,	NONE,	0xDB,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 991 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 80 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btr",	bittest_insn,	6,	NONE,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 1283 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rolb",	shift_insn,	16,	SUF_B,	0x00,	0,	0,	0,	0,	0,	0},
#line 200 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovo",	cmovcc_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 191 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnpw",	cmovcc_insn,	3,	SUF_W,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1662 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 392 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"crc32l",	crc32_insn,	5,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 606 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frstor",	onebytemem_insn,	1,	NONE,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 34 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"adword",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1190 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshufb",	ssse3_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1666 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 838 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movmskps",	movmsk_insn,	4,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1302 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sahf",	onebyte_insn,	1,	NONE,	0x9E,	0,	0,	0,	0,	0,	0},
#line 218 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovsq",	cmovcc_insn,	3,	SUF_Q,	0x08,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 619 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsts",	fst_insn,	3,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 854 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsbq",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 707 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jl",	jcc_insn,	9,	NONE,	0x0C,	0,	0,	0,	0,	0,	0},
#line 916 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pabsd",	ssse3_insn,	3,	NONE,	0x1E,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 289 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1061 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfrcpit1",	now3d_insn,	1,	NONE,	0xA6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1724 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovaps",	movau_insn,	6,	NONE,	0x00,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1306 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"salq",	shift_insn,	16,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 316 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 857 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movshdup",	xmm_xmm128_insn,	2,	NONE,	0xF3,	0x16,	0,	0,	CPU_SSE3,	0,	0},
#line 1739 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovmskpsl",	movmsk_insn,	4,	SUF_L,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 135 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovgew",	cmovcc_insn,	3,	SUF_W,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1138 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovzxwd",	sse4m64_insn,	2,	NONE,	0x33,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 918 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"packssdw",	mmxsse2_insn,	2,	NONE,	0x6B,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1570 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneqss",	ssecmp_32_insn,	4,	NONE,	0x04,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 261 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpsl",	onebyte_insn,	1,	NONE,	0xA7,	0x20,	0,	0,	CPU_386,	0,	0},
#line 596 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstsww",	fnstsw_insn,	2,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 308 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comneqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 803 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"maxsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 356 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comultps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 425 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 280 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comeqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 279 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comeqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1592 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnleps",	ssecmp_128_insn,	3,	NONE,	0x06,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 31 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 1414 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sldtl",	sldtmsw_insn,	6,	SUF_L,	0x00,	0x00,	0,	0,	CPU_386,	0,	0},
#line 1395 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shldq",	shlrd_insn,	9,	SUF_Q,	0xA4,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 783 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lretl",	retnf_insn,	6,	NONE,	0xCA,	0,	0,	0,	0,	0,	0},
#line 1087 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phsubw",	ssse3_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 178 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnlq",	cmovcc_insn,	3,	SUF_Q,	0x0D,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1318 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sbbw",	arith_insn,	22,	SUF_W,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 1261 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"repz",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 1649 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsi2sdq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1852 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovmskbq",	pmovmskb_insn,	4,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1777 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpackusdw",	ssse3_insn,	3,	NONE,	0x2B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 906 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"orpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x56,	0,	0,	CPU_SSE2,	0,	0},
#line 1850 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovmskb",	pmovmskb_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1238 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pxor",	mmxsse2_insn,	2,	NONE,	0xEF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1234 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushf",	onebyte_insn,	1,	NONE,	0x9C,	0x00,	0x40,	0,	0,	0,	0},
#line 451 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 1632 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcomiss",	avx_xmm_xmm32_insn,	2,	NONE,	0x00,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1973 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xsha1",	padlock_insn,	1,	NONE,	0xC8,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1179 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"protq",	sse5prot_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 609 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsave",	twobytemem_insn,	1,	NONE,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 833 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movlpd",	movhlp_insn,	3,	NONE,	0x66,	0x12,	0,	0,	CPU_SSE2,	0,	0},
#line 1355 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setng",	setcc_insn,	1,	NONE,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 481 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovu",	fcmovcc_insn,	1,	NONE,	0xDA,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 243 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpneqsd",	ssecmp_64_insn,	4,	NONE,	0x04,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 898 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"notl",	f6_insn,	4,	SUF_L,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 891 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"negb",	f6_insn,	4,	SUF_B,	0x03,	0,	0,	0,	0,	0,	0},
#line 231 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpeqsd",	ssecmp_64_insn,	4,	NONE,	0x00,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1022 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 494 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivl",	farith_insn,	7,	SUF_L,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 1779 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1403 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shrdl",	shlrd_insn,	9,	SUF_L,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 1094 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pinsrw",	pinsrw_insn,	9,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 183 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnlew",	cmovcc_insn,	3,	SUF_W,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1148 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmullw",	mmxsse2_insn,	2,	NONE,	0xD5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1521 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalsesd",	ssecmp_64_insn,	4,	NONE,	0x0B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1825 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphaddw",	ssse3_insn,	3,	NONE,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1722 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmmcall",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xD9,	0,	CPU_SVM,	0,	0},
#line 1733 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovlpd",	movhlp_insn,	3,	NONE,	0x66,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1635 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtpd2dq",	avx_cvt_xmm128_insn,	2,	NONE,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 735 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"larw",	bsfr_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 427 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2C,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1962 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xlatb",	onebyte_insn,	1,	NONE,	0xD7,	0x00,	0,	0,	0,	0,	0},
#line 1588 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnle_uqps",	ssecmp_128_insn,	3,	NONE,	0x16,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1013 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneqd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 805 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mfence",	threebyte_insn,	1,	NONE,	0x0F,	0xAE,	0xF0,	0,	CPU_P3,	0,	0},
#line 1930 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vucomisd",	avx_xmm_xmm64_insn,	2,	NONE,	0x66,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 502 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ffree",	ffree_insn,	1,	NONE,	0xDD,	0,	0,	0,	CPU_FPU,	0,	0},
#line 777 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lodsw",	onebyte_insn,	1,	NONE,	0xAD,	0x10,	0,	0,	0,	0,	0},
#line 732 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lar",	bsfr_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1180 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"protw",	sse5prot_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1934 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vunpcklpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 903 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"orl",	arith_insn,	22,	SUF_L,	0x08,	0x01,	0,	0,	CPU_386,	0,	0},
#line 1863 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovzxwd",	sse4m64_insn,	2,	NONE,	0x33,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 581 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmaddss",	sse5arith32_insn,	8,	NONE,	0x12,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1631 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcomisd",	avx_xmm_xmm64_insn,	2,	NONE,	0x66,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1432 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sscab",	onebyte_insn,	1,	NONE,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 1897 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubusw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1239 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"qword",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 551 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"flds",	fld_insn,	4,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1539 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmple_oqpd",	ssecmp_128_insn,	3,	NONE,	0x12,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 722 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jns",	jcc_insn,	9,	NONE,	0x09,	0,	0,	0,	0,	0,	0},
#line 1566 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_usss",	ssecmp_32_insn,	4,	NONE,	0x14,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 362 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuneqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 670 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"imull",	imul_insn,	19,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1677 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vextractf128",	vextractf128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1124 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pminuw",	sse4_insn,	2,	NONE,	0x3A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1932 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vunpckhpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1624 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunord_sps",	ssecmp_128_insn,	3,	NONE,	0x13,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1959 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xcryptecb",	padlock_insn,	1,	NONE,	0xC8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1053 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfcmpge",	now3d_insn,	1,	NONE,	0x90,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1699 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vhaddpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 196 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnz",	cmovcc_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 511 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ficompl",	fiarith_insn,	2,	SUF_L,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1538 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgtss",	ssecmp_32_insn,	4,	NONE,	0x0E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1823 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphaddd",	ssse3_insn,	3,	NONE,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 583 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmsubps",	sse5arith_insn,	4,	NONE,	0x18,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1854 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovsxbq",	sse4m16_insn,	2,	NONE,	0x22,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1563 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_uspd",	ssecmp_128_insn,	3,	NONE,	0x14,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1349 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnbe",	setcc_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 384 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunordps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 250 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnltps",	ssecmp_128_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_SSE,	0,	0},
#line 607 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frstorl",	onebytemem_insn,	1,	SUF_L,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1074 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddubq",	sse5two_insn,	1,	NONE,	0x53,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1007 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomltuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 868 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsxw",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1849 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpminuw",	ssse3_insn,	3,	NONE,	0x3A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1768 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmxoff",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC4,	0,	CPU_P4,	0,	0},
#line 1683 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmaddsubpd",	fma_128_256_insn,	4,	NONE,	0x5D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 75 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btw",	bittest_insn,	6,	SUF_W,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 871 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzbl",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 652 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxtract",	twobyte_insn,	1,	NONE,	0xD9,	0xF4,	0,	0,	CPU_FPU,	0,	0},
#line 940 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pblendw",	sse4imm_insn,	2,	NONE,	0x0E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1627 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunordpd",	ssecmp_128_insn,	3,	NONE,	0x03,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 860 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movslq",	movsxd_insn,	1,	SUF_L,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 633 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubs",	farith_insn,	7,	SUF_S,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 1397 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shr",	shift_insn,	16,	NONE,	0x05,	0,	0,	0,	0,	0,	0},
#line 1822 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpextrwq",	pextrw_insn,	7,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1052 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfcmpeq",	now3d_insn,	1,	NONE,	0xB0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 238 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpltps",	ssecmp_128_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1875 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpshufd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 644 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fucompp",	twobyte_insn,	1,	NONE,	0xDA,	0xE9,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 743 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leaq",	lea_insn,	3,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 987 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgtq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1590 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnle_uqss",	ssecmp_32_insn,	4,	NONE,	0x16,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 577 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fninit",	twobyte_insn,	1,	NONE,	0xDB,	0xE3,	0,	0,	CPU_FPU,	0,	0},
#line 1629 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunordsd",	ssecmp_64_insn,	4,	NONE,	0x03,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1544 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpleps",	ssecmp_128_insn,	3,	NONE,	0x02,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1068 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddbq",	sse5two_insn,	1,	NONE,	0x43,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1229 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushq",	push_insn,	33,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 290 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1714 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmcall",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC1,	0,	CPU_P4,	0,	0},
#line 175 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovngew",	cmovcc_insn,	3,	SUF_W,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 710 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jna",	jcc_insn,	9,	NONE,	0x06,	0,	0,	0,	0,	0,	0},
#line 1894 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubsb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1406 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shufpd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0xC6,	0,	0,	CPU_SSE2,	0,	0},
#line 864 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movswl",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 557 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldl2e",	twobyte_insn,	1,	NONE,	0xD9,	0xEA,	0,	0,	CPU_FPU,	0,	0},
#line 1745 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovq",	vmovq_insn,	5,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1512 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeqps",	ssecmp_128_insn,	3,	NONE,	0x00,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 736 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lddqu",	lddqu_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 1866 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmulhrsw",	ssse3_insn,	3,	NONE,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1245 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcpps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 1628 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunordps",	ssecmp_128_insn,	3,	NONE,	0x03,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1826 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphminposuw",	avx_ssse3_2op_insn,	1,	NONE,	0x41,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 708 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jle",	jcc_insn,	9,	NONE,	0x0E,	0,	0,	0,	0,	0,	0},
#line 66 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsrl",	bsfr_insn,	3,	SUF_L,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 1644 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1585 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngtsd",	ssecmp_64_insn,	4,	NONE,	0x0A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 837 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movmskpdq",	movmsk_insn,	4,	SUF_Q,	0x66,	0,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1288 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rorb",	shift_insn,	16,	SUF_B,	0x01,	0,	0,	0,	0,	0,	0},
#line 171 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovngw",	cmovcc_insn,	3,	SUF_W,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 459 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"enterl",	enter_insn,	3,	SUF_L,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 1340 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setlb",	setcc_insn,	1,	SUF_B,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 680 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"incq",	incdec_insn,	6,	SUF_Q,	0x40,	0x00,	0,	ONLY_64,	0,	0,	0},
#line 1573 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnge_uqsd",	ssecmp_64_insn,	4,	NONE,	0x19,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1097 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmachriw",	pmachriw_insn,	1,	NONE,	0,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1511 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeqpd",	ssecmp_128_insn,	3,	NONE,	0x00,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 846 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntpd",	movnt_insn,	1,	NONE,	0x66,	0x2B,	0,	0,	CPU_SSE2,	0,	0},
#line 1083 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phsubbw",	sse5two_insn,	1,	NONE,	0x61,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 103 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmc",	onebyte_insn,	1,	NONE,	0xF5,	0,	0,	0,	0,	0,	0},
#line 1360 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnlb",	setcc_insn,	1,	SUF_B,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 277 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comeqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1101 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacssdd",	sse5pmacs_insn,	1,	NONE,	0x8E,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 723 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnz",	jcc_insn,	9,	NONE,	0x05,	0,	0,	0,	0,	0,	0},
#line 1676 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"verww",	prot286_insn,	1,	SUF_W,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1552 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpltps",	ssecmp_128_insn,	3,	NONE,	0x01,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1782 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddsb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1735 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovmskpd",	movmsk_insn,	4,	NONE,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1435 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sscaw",	onebyte_insn,	1,	NONE,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 1753 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmptrld",	vmxtwobytemem_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_P4,	0,	0},
#line 1423 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smovw",	onebyte_insn,	1,	NONE,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 1408 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sidt",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 13 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aam",	aadm_insn,	2,	NONE,	0x00,	0,	0,	NOT_64,	0,	0,	0},
#line 1579 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngt_uqpd",	ssecmp_128_insn,	3,	NONE,	0x1A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 661 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ht",	NULL,	X86_SEGREG>>8,	0x3E,	0,	0,	0,	0,	0,	0,	0},
#line 1674 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"verrw",	prot286_insn,	1,	SUF_W,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1834 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpinsrwl",	pinsrw_insn,	9,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1960 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xcryptofb",	padlock_insn,	1,	NONE,	0xE8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1501 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_ossd",	ssecmp_64_insn,	4,	NONE,	0x10,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1811 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermilmz2pd",	vpermil2_fixed_insn,	4,	NONE,	0x49,	0x03,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 331 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"compd",	sse5com_insn,	1,	NONE,	0x2D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 304 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comneps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1757 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmreadq",	vmxmemrd_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 593 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstenvl",	onebytemem_insn,	1,	SUF_L,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1027 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrued",	sse5comcc_insn,	1,	NONE,	0x4E,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1741 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovntdq",	movnt_insn,	1,	NONE,	0x66,	0xE7,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 800 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"maskmovq",	maskmovq_insn,	1,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 774 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lodsb",	onebyte_insn,	1,	NONE,	0xAC,	0x00,	0,	0,	0,	0,	0},
#line 335 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comtruepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 1593 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnlesd",	ssecmp_64_insn,	4,	NONE,	0x06,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 428 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 506 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fiadds",	fiarith_insn,	2,	SUF_S,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 939 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pblendvb",	sse4xmm0_insn,	2,	NONE,	0x10,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 421 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttpd2dq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 641 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fucomi",	fcom2_insn,	2,	NONE,	0xDB,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 951 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpestri",	sse4pcmpstr_insn,	1,	NONE,	0x61,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 286 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 822 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movapd",	movau_insn,	6,	NONE,	0x66,	0x28,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1886 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsraw",	vpshift_insn,	4,	NONE,	0xE1,	0x71,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1254 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rdshr",	rdwrshr_insn,	1,	NONE,	0x00,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 1916 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vrsqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x52,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1716 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vminpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1332 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setcb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 600 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fptan",	twobyte_insn,	1,	NONE,	0xD9,	0xF2,	0,	0,	CPU_FPU,	0,	0},
#line 775 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lodsl",	onebyte_insn,	1,	NONE,	0xAD,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1341 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setle",	setcc_insn,	1,	NONE,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 431 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cwd",	onebyte_insn,	1,	NONE,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 714 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnc",	jcc_insn,	9,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 611 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsaves",	twobytemem_insn,	1,	SUF_S,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 386 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunordss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 41 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"and",	arith_insn,	22,	NONE,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 626 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstpl",	fstp_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 68 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsrw",	bsfr_insn,	3,	SUF_W,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 669 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"imulb",	imul_insn,	19,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1719 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vminss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 471 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fbstp",	fbldstp_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_FPU,	0,	0},
#line 25 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 1899 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vptest",	sse4_insn,	2,	NONE,	0x17,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 575 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmulp",	farithp_insn,	3,	NONE,	0xC8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1637 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtpd2dqy",	avx_cvt_xmm128_y_insn,	1,	NONE,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 867 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsxb",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1814 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermilps",	vpermil_insn,	4,	NONE,	0x04,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1131 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovsxdq",	sse4m64_insn,	2,	NONE,	0x25,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1759 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmrun",	svm_rax_insn,	2,	NONE,	0xD8,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1205 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psrldq",	pslrldq_insn,	2,	NONE,	0x03,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 152 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnb",	cmovcc_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1228 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushl",	push_insn,	33,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 246 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnleps",	ssecmp_128_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1445 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"str",	str_insn,	4,	NONE,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1426 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smswq",	sldtmsw_insn,	6,	SUF_Q,	0x04,	0x01,	0,	ONLY_64,	CPU_286,	0,	0},
#line 211 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpew",	cmovcc_insn,	3,	SUF_W,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 312 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 782 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loopz",	loop_insn,	8,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 1353 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setne",	setcc_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 889 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mwait",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC9,	0,	CPU_SSE3,	0,	0},
#line 1743 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovntpd",	movnt_insn,	1,	NONE,	0x66,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1780 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1223 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpcklbw",	mmxsse2_insn,	2,	NONE,	0x60,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1710 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaxpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 834 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movlps",	movhlp_insn,	3,	NONE,	0x00,	0x12,	0,	0,	CPU_SSE,	0,	0},
#line 1379 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sets",	setcc_insn,	1,	NONE,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 601 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frczpd",	sse5two_insn,	1,	NONE,	0x11,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1009 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1450 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subb",	arith_insn,	22,	SUF_B,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 924 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddq",	mmxsse2_insn,	2,	NONE,	0xD4,	0,	0,	0,	CPU_MMX,	0,	0},
#line 458 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"enter",	enter_insn,	3,	NONE,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 908 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"out",	out_insn,	12,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 43 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andl",	arith_insn,	22,	SUF_L,	0x20,	0x04,	0,	0,	CPU_386,	0,	0},
#line 48 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x54,	0,	0,	CPU_SSE2,	0,	0},
#line 1787 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpalignr",	sse4imm_insn,	2,	NONE,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 462 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"extractps",	extractps_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 23 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addq",	arith_insn,	22,	SUF_Q,	0x00,	0x00,	0,	ONLY_64,	0,	0,	0},
#line 760 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgs",	lfgss_insn,	2,	NONE,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 237 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpltpd",	ssecmp_128_insn,	3,	NONE,	0x01,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1270 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64xyz",	NULL,	X86_REX>>8,	0x4F,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1808 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermil2ps",	vpermil2_insn,	4,	NONE,	0x48,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1494 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vblendvpd",	avx_sse4xmm0_insn,	2,	NONE,	0x4B,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 483 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcoml",	fcom_insn,	5,	SUF_L,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 1571 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnge_uqpd",	ssecmp_128_insn,	3,	NONE,	0x19,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1799 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpestrm",	sse4pcmpstr_insn,	1,	NONE,	0x60,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 205 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpl",	cmovcc_insn,	3,	SUF_L,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1967 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xorw",	arith_insn,	22,	SUF_W,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 173 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovngel",	cmovcc_insn,	3,	SUF_L,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1350 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnbeb",	setcc_insn,	1,	SUF_B,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 944 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pclmullqlqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x00,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 456 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"dword",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1762 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmulps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1567 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneqpd",	ssecmp_128_insn,	3,	NONE,	0x04,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 12 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aad",	aadm_insn,	2,	NONE,	0x01,	0,	0,	NOT_64,	0,	0,	0},
#line 1642 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtps2pd",	avx_cvt_xmm64_insn,	3,	NONE,	0x00,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1806 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vperm2f128",	vperm2f128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 49 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x54,	0,	0,	CPU_SSE,	0,	0},
#line 220 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovz",	cmovcc_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 450 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 1161 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popcnt",	cnt_insn,	3,	NONE,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1274 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64z",	NULL,	X86_REX>>8,	0x49,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1317 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sbbq",	arith_insn,	22,	SUF_Q,	0x18,	0x03,	0,	ONLY_64,	0,	0,	0},
#line 1420 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smovb",	onebyte_insn,	1,	NONE,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 268 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpunordss",	ssecmp_32_insn,	4,	NONE,	0x03,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1267 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rex64",	NULL,	X86_REX>>8,	0x48,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1112 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmagw",	cyrixmmx_insn,	1,	NONE,	0x52,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 712 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnb",	jcc_insn,	9,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 1375 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setpe",	setcc_insn,	1,	NONE,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1855 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovsxbw",	sse4m64_insn,	2,	NONE,	0x20,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 799 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"maskmovdqu",	maskmovdqu_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 364 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuneqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 1860 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovzxbq",	sse4m16_insn,	2,	NONE,	0x32,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 741 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lea",	lea_insn,	3,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1320 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"scasl",	onebyte_insn,	1,	NONE,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1728 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovdqu",	movau_insn,	6,	NONE,	0xF3,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1289 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rorl",	shift_insn,	16,	SUF_L,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 866 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsx",	movszx_insn,	5,	NONE,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1152 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmvnzb",	cyrixmmx_insn,	1,	NONE,	0x5A,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 393 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"crc32q",	crc32_insn,	5,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_SSE42,	0,	0},
#line 831 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movhps",	movhlp_insn,	3,	NONE,	0x00,	0x16,	0,	0,	CPU_SSE,	0,	0},
#line 332 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comps",	sse5com_insn,	1,	NONE,	0x2C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1704 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vinsertps",	insertps_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 372 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 672 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"imulw",	imul_insn,	19,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 812 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mov",	mov_insn,	69,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1775 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpackssdw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 208 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpe",	cmovcc_insn,	3,	NONE,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 118 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbeq",	cmovcc_insn,	3,	SUF_Q,	0x06,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1134 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovzxbd",	sse4m32_insn,	2,	NONE,	0x31,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 541 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisttpll",	fildstp_insn,	3,	SUF_Q,	0x07,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 369 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comungesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 847 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntps",	movnt_insn,	1,	NONE,	0x00,	0x2B,	0,	0,	CPU_SSE,	0,	0},
#line 252 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnltss",	ssecmp_32_insn,	4,	NONE,	0x05,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1141 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmulhriw",	cyrixmmx_insn,	1,	NONE,	0x5D,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 295 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comlepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1868 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmulhw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 179 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnlw",	cmovcc_insn,	3,	SUF_W,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1939 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vzeroupper",	vzero_insn,	1,	NONE,	0xC0,	0,	0,	0,	CPU_AVX,	0,	0},
#line 730 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jz",	jcc_insn,	9,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 536 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fistpll",	fbldstp_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 163 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovncw",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 102 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"clts",	twobyte_insn,	1,	NONE,	0x0F,	0x06,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1433 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sscal",	onebyte_insn,	1,	NONE,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 225 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpb",	arith_insn,	22,	SUF_B,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1919 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsqrtpd",	avx_xmm_xmm128_insn,	2,	NONE,	0x66,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1029 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrueub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 134 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovgeq",	cmovcc_insn,	3,	SUF_Q,	0x0D,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1024 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomnew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 534 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fistpq",	fildstp_insn,	3,	SUF_Q,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 564 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmaddpd",	sse5arith_insn,	4,	NONE,	0x01,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 403 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtps2dq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 963 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomeqq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 441 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"decb",	incdec_insn,	6,	SUF_B,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1010 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomned",	sse5comcc_insn,	1,	NONE,	0x4E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 993 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomleb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1950 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xbts",	xbts_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 843 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movnti",	movnti_insn,	2,	NONE,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1568 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneqps",	ssecmp_128_insn,	3,	NONE,	0x04,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1155 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popl",	pop_insn,	21,	SUF_L,	0,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1660 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttps2dq",	avx_xmm_xmm128_insn,	2,	NONE,	0xF3,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1654 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1594 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnless",	ssecmp_32_insn,	4,	NONE,	0x06,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1168 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popfw",	onebyte_insn,	1,	NONE,	0x9D,	0x10,	0x40,	0,	0,	0,	0},
#line 1327 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setb",	setcc_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 779 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loope",	loop_insn,	8,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 1815 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpermiltd2pd",	vpermil2_fixed_insn,	4,	NONE,	0x49,	0x00,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1841 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaxub",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 142 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovleq",	cmovcc_insn,	3,	SUF_Q,	0x0E,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 913 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"outsl",	onebyte_insn,	1,	NONE,	0x6F,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1522 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpfalsess",	ssecmp_32_insn,	4,	NONE,	0x0B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1448 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"strw",	str_insn,	4,	SUF_W,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1769 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmxon",	vmxthreebytemem_insn,	1,	NONE,	0xF3,	0,	0,	0,	CPU_P4,	0,	0},
#line 696 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"iretw",	onebyte_insn,	1,	NONE,	0xCF,	0x10,	0,	0,	0,	0,	0},
#line 1555 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_oqpd",	ssecmp_128_insn,	3,	NONE,	0x0C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1476 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ud2",	twobyte_insn,	1,	NONE,	0x0F,	0x0B,	0,	0,	CPU_286,	0,	0},
#line 676 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"inw",	in_insn,	12,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 490 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcompp",	twobyte_insn,	1,	NONE,	0xDE,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 342 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comueqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 1913 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vroundsd",	sse4m64imm_insn,	4,	NONE,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1309 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sar",	shift_insn,	16,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 404 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtps2pd",	xmm_xmm64_insn,	4,	NONE,	0x00,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1844 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpminsb",	ssse3_insn,	3,	NONE,	0x38,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1479 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"unpckhps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x15,	0,	0,	CPU_SSE,	0,	0},
#line 359 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 1928 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vtestpd",	sse4_insn,	2,	NONE,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1550 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmplt_oqss",	ssecmp_32_insn,	4,	NONE,	0x11,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 539 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisttpq",	fildstp_insn,	3,	SUF_Q,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1786 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpaddw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 50 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aqword",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1646 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsd2ss",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1339 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setl",	setcc_insn,	1,	NONE,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1947 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xaddl",	cmpxchgxadd_insn,	4,	SUF_L,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1222 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpckhwd",	mmxsse2_insn,	2,	NONE,	0x69,	0,	0,	0,	CPU_MMX,	0,	0},
#line 56 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"blendvpd",	sse4xmm0_insn,	2,	NONE,	0x15,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1839 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaxsd",	ssse3_insn,	3,	NONE,	0x3D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1181 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psadbw",	mmxsse2_insn,	2,	NONE,	0xF6,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 426 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvttsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 982 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgeuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 107 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovaw",	cmovcc_insn,	3,	SUF_W,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1658 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvttpd2dqx",	avx_cvt_xmm128_x_insn,	1,	NONE,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 296 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1015 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomnequb",	sse5comcc_insn,	1,	NONE,	0x6C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1361 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnle",	setcc_insn,	1,	NONE,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1241 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rclb",	shift_insn,	16,	SUF_B,	0x02,	0,	0,	0,	0,	0,	0},
#line 1969 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xorps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x57,	0,	0,	CPU_SSE,	0,	0},
#line 1685 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmsubaddpd",	fma_128_256_insn,	4,	NONE,	0x5F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 572 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmul",	farith_insn,	7,	NONE,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 170 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovngq",	cmovcc_insn,	3,	SUF_Q,	0x0E,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 82 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btrq",	bittest_insn,	6,	SUF_Q,	0xB3,	0x06,	0,	ONLY_64,	CPU_386,	0,	0},
#line 101 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cltq",	onebyte_insn,	1,	NONE,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1514 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeqss",	ssecmp_32_insn,	4,	NONE,	0x00,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1366 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnpb",	setcc_insn,	1,	SUF_B,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1633 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtdq2pd",	avx_cvt_xmm64_insn,	3,	NONE,	0xF3,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 355 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comultpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 1870 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmullw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 381 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunltsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 164 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovne",	cmovcc_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 529 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fist",	fiarith_insn,	2,	NONE,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 1774 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpabsw",	avx_ssse3_2op_insn,	1,	NONE,	0x1D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1553 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpltsd",	ssecmp_64_insn,	4,	NONE,	0x01,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 361 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuneqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 1159 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popal",	onebyte_insn,	1,	NONE,	0x61,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1541 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmple_oqsd",	ssecmp_64_insn,	4,	NONE,	0x12,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 999 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomleuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1900 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpckhbw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x68,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1914 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vroundss",	sse4m32imm_insn,	4,	NONE,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1527 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgepd",	ssecmp_128_insn,	3,	NONE,	0x0D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1564 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_usps",	ssecmp_128_insn,	3,	NONE,	0x14,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1149 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmuludq",	mmxsse2_insn,	2,	NONE,	0xF4,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1284 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"roll",	shift_insn,	16,	SUF_L,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 622 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstenv",	twobytemem_insn,	1,	NONE,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 1957 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xcryptcfb",	padlock_insn,	1,	NONE,	0xE0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 759 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgdtw",	twobytemem_insn,	1,	SUF_W,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 740 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ldsw",	ldes_insn,	2,	SUF_W,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 1680 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmaddps",	fma_128_256_insn,	4,	NONE,	0x68,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1287 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ror",	shift_insn,	16,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 1348 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnbb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1357 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnge",	setcc_insn,	1,	NONE,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1157 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popw",	pop_insn,	21,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1508 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_usps",	ssecmp_128_insn,	3,	NONE,	0x18,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1569 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneqsd",	ssecmp_64_insn,	4,	NONE,	0x04,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1747 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovshdup",	avx_xmm_xmm128_insn,	2,	NONE,	0xF3,	0x16,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 467 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"faddl",	farith_insn,	7,	SUF_L,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 325 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnltsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1104 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacsswd",	sse5pmacs_insn,	1,	NONE,	0x86,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 595 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstsw",	fnstsw_insn,	2,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1893 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1023 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1085 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phsubdq",	sse5two_insn,	1,	NONE,	0x63,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 272 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchg8bq",	cmpxchg8b_insn,	1,	SUF_Q,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 1738 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovmskps",	movmsk_insn,	4,	NONE,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1667 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vdivpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 618 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstl",	fst_insn,	3,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1608 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpordps",	ssecmp_128_insn,	3,	NONE,	0x07,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1606 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpord_sss",	ssecmp_32_insn,	4,	NONE,	0x17,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1369 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnz",	setcc_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 788 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lslq",	bsfr_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 1368 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnsb",	setcc_insn,	1,	SUF_B,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 927 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddsw",	mmxsse2_insn,	2,	NONE,	0xED,	0,	0,	0,	CPU_MMX,	0,	0},
#line 610 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsavel",	twobytemem_insn,	1,	SUF_L,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 206 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpq",	cmovcc_insn,	3,	SUF_Q,	0x0A,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 131 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovgw",	cmovcc_insn,	3,	SUF_W,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 334 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comss",	sse5com32_insn,	2,	NONE,	0x2E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1623 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpunord_spd",	ssecmp_128_insn,	3,	NONE,	0x13,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 157 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbel",	cmovcc_insn,	3,	SUF_L,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 955 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpgtq",	sse4_insn,	2,	NONE,	0x37,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1582 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngt_uqss",	ssecmp_32_insn,	4,	NONE,	0x1A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1059 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfpnacc",	now3d_insn,	1,	NONE,	0x8E,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1859 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovzxbd",	sse4m32_insn,	2,	NONE,	0x31,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 71 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bswapq",	bswap_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 654 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fyl2xp1",	twobyte_insn,	1,	NONE,	0xD9,	0xF9,	0,	0,	CPU_FPU,	0,	0},
#line 1504 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_uqps",	ssecmp_128_insn,	3,	NONE,	0x08,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1545 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmplesd",	ssecmp_64_insn,	4,	NONE,	0x02,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 718 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnl",	jcc_insn,	9,	NONE,	0x0D,	0,	0,	0,	0,	0,	0},
#line 235 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmplesd",	ssecmp_64_insn,	4,	NONE,	0x02,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1060 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfrcp",	now3d_insn,	1,	NONE,	0x96,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1797 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpeqw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x75,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1301 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rsts",	cyrixsmm_insn,	1,	NONE,	0x7D,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1949 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xaddw",	cmpxchgxadd_insn,	4,	SUF_W,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 274 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchgl",	cmpxchgxadd_insn,	4,	SUF_L,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 409 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2D,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1139 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovzxwq",	sse4m32_insn,	2,	NONE,	0x34,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 695 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"iretq",	onebyte_insn,	1,	NONE,	0xCF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 94 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cdqe",	onebyte_insn,	1,	NONE,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1940 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"wait",	onebyte_insn,	1,	NONE,	0x9B,	0,	0,	0,	0,	0,	0},
#line 1370 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnzb",	setcc_insn,	1,	SUF_B,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1129 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovsxbq",	sse4m16_insn,	2,	NONE,	0x22,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 353 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comulesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 1410 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sidtq",	twobytemem_insn,	1,	SUF_Q,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 55 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"blendps",	sse4imm_insn,	2,	NONE,	0x0C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 460 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"enterq",	enter_insn,	3,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_186,	0,	0},
#line 432 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cwde",	onebyte_insn,	1,	NONE,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1331 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setc",	setcc_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 262 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpsq",	onebyte_insn,	1,	NONE,	0xA7,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1793 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpblendw",	sse4imm_insn,	2,	NONE,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 959 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomb",	sse5com_insn,	1,	NONE,	0x4C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 500 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdivrp",	farithp_insn,	3,	NONE,	0xF8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1021 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomneud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1513 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeqsd",	ssecmp_64_insn,	4,	NONE,	0x00,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 608 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frstors",	onebytemem_insn,	1,	SUF_S,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1207 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psrlw",	pshift_insn,	4,	NONE,	0xD1,	0x71,	0x02,	0,	CPU_MMX,	0,	0},
#line 1744 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovntps",	movnt_insn,	1,	NONE,	0x00,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 934 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pause",	onebyte_prefix_insn,	1,	NONE,	0xF3,	0x90,	0,	0,	CPU_P4,	0,	0},
#line 1872 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpor",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1792 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpblendvb",	avx_sse4xmm0_insn,	2,	NONE,	0x4C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1559 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_ospd",	ssecmp_128_insn,	3,	NONE,	0x1C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 150 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnaeq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1049 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pf2iw",	now3d_insn,	1,	NONE,	0x1C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1595 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnlt_uqpd",	ssecmp_128_insn,	3,	NONE,	0x15,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1670 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vdivss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 415 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsi2ssl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 365 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 684 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"insertq",	insertq_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1421 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smovl",	onebyte_insn,	1,	NONE,	0xA5,	0x20,	0,	0,	CPU_386,	0,	0},
#line 820 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movabsq",	movabs_insn,	9,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1598 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnlt_uqss",	ssecmp_32_insn,	4,	NONE,	0x15,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 33 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addsubps",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1904 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpunpcklbw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x60,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 671 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"imulq",	imul_insn,	19,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1953 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xchgl",	xchg_insn,	16,	SUF_L,	0,	0,	0,	0,	0,	0,	0},
#line 420 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2D,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 902 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"orb",	arith_insn,	22,	SUF_B,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 1686 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmsubaddps",	fma_128_256_insn,	4,	NONE,	0x5E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 123 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovcw",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1492 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vblendpd",	sse4imm_256_insn,	3,	NONE,	0x0D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1041 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"permps",	sse5arith_insn,	4,	NONE,	0x20,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 129 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovgl",	cmovcc_insn,	3,	SUF_L,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1158 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popa",	onebyte_insn,	1,	NONE,	0x61,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 64 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsfw",	bsfr_insn,	3,	SUF_W,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 532 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fistp",	fildstp_insn,	3,	NONE,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 97 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"clflush",	clflush_insn,	1,	NONE,	0,	0,	0,	0,	CPU_P3,	0,	0},
#line 1502 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_osss",	ssecmp_32_insn,	4,	NONE,	0x10,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 276 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchgw",	cmpxchgxadd_insn,	4,	SUF_W,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 166 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovneq",	cmovcc_insn,	3,	SUF_Q,	0x05,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 210 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpeq",	cmovcc_insn,	3,	SUF_Q,	0x0A,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1069 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddbw",	sse5two_insn,	1,	NONE,	0x41,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 336 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comtrueps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 1578 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpngess",	ssecmp_32_insn,	4,	NONE,	0x09,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1770 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vorpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 110 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovaeq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 149 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnael",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1303 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sal",	shift_insn,	16,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 928 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddusb",	mmxsse2_insn,	2,	NONE,	0xDC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1233 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pushaw",	onebyte_insn,	1,	NONE,	0x60,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 1639 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtpd2psx",	avx_cvt_xmm128_x_insn,	1,	NONE,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1347 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setnb",	setcc_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1156 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popq",	pop_insn,	21,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 275 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpxchgq",	cmpxchgxadd_insn,	4,	SUF_Q,	0xB0,	0,	0,	ONLY_64,	CPU_486,	0,	0},
#line 89 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"calll",	call_insn,	26,	NONE,	0,	0,	0,	NOT_64,	0,	0,	0},
#line 630 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstsww",	fstsw_insn,	2,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1328 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setbb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 239 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpltsd",	ssecmp_64_insn,	4,	NONE,	0x01,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 761 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgsl",	lfgss_insn,	2,	SUF_L,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 996 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomleub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 88 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"call",	call_insn,	26,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 184 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovno",	cmovcc_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 592 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnstenv",	onebytemem_insn,	1,	NONE,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1183 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshad",	sse5psh_insn,	2,	NONE,	0x06,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1612 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpps",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x00,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1689 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmsubsd",	fma_128_m64_insn,	3,	NONE,	0x6F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1709 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaskmovps",	vmaskmov_insn,	4,	NONE,	0x2C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 754 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lfsl",	lfgss_insn,	2,	SUF_L,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1817 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpextrb",	pextrb_insn,	3,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 73 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btl",	bittest_insn,	6,	SUF_L,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 1123 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pminud",	sse4_insn,	2,	NONE,	0x3B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1708 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaskmovpd",	vmaskmov_insn,	4,	NONE,	0x2D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 390 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"crc32",	crc32_insn,	5,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1467 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sysretq",	twobyte_insn,	1,	SUF_Q,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1486 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vaddsubpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1385 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sgdtl",	twobytemem_insn,	1,	SUF_L,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 954 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpgtd",	mmxsse2_insn,	2,	NONE,	0x66,	0,	0,	0,	CPU_MMX,	0,	0},
#line 842 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movntdqa",	movntdqa_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1030 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrueud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 945 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pclmulqdq",	aes_imm_insn,	1,	NONE,	0x3A,	0x44,	0,	0,	CPU_CLMUL,	0,	0},
#line 1765 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmwrite",	vmxmemwr_insn,	2,	NONE,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 100 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cltd",	onebyte_insn,	1,	NONE,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 259 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpsb",	onebyte_insn,	1,	NONE,	0xA6,	0x00,	0,	0,	0,	0,	0},
#line 1673 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"verr",	prot286_insn,	1,	NONE,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1456 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 699 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jb",	jcc_insn,	9,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 1562 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_osss",	ssecmp_32_insn,	4,	NONE,	0x1C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 750 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lesl",	ldes_insn,	2,	SUF_L,	0xC4,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 18 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"adcq",	arith_insn,	22,	SUF_Q,	0x10,	0x02,	0,	ONLY_64,	0,	0,	0},
#line 249 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnltpd",	ssecmp_128_insn,	3,	NONE,	0x05,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 185 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnol",	cmovcc_insn,	3,	SUF_L,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 517 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fidivrl",	fiarith_insn,	2,	SUF_L,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 165 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnel",	cmovcc_insn,	3,	SUF_L,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 634 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fsubp",	farithp_insn,	3,	NONE,	0xE0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1788 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpand",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 727 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jpo",	jcc_insn,	9,	NONE,	0x0B,	0,	0,	0,	0,	0,	0},
#line 824 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movd",	movd_insn,	8,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_MMX,	0},
#line 862 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movss",	movss_insn,	4,	NONE,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 930 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddw",	mmxsse2_insn,	2,	NONE,	0xFD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1174 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"prefetcht1",	twobytemem_insn,	1,	NONE,	0x02,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1798 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpestri",	sse4pcmpstr_insn,	1,	NONE,	0x61,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1062 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfrcpit2",	now3d_insn,	1,	NONE,	0xB6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1920 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vsqrtps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 792 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lssw",	lfgss_insn,	2,	SUF_W,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 329 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comordsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 576 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnclex",	twobyte_insn,	1,	NONE,	0xDB,	0xE2,	0,	0,	CPU_FPU,	0,	0},
#line 1696 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfnmsubps",	fma_128_256_insn,	4,	NONE,	0x7C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 333 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comsd",	sse5com64_insn,	2,	NONE,	0x2F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1771 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vorps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1540 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmple_oqps",	ssecmp_128_insn,	3,	NONE,	0x12,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 109 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovael",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1299 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rsqrtps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 1958 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xcryptctr",	padlock_insn,	1,	NONE,	0xD8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 585 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmsubss",	sse5arith32_insn,	8,	NONE,	0x1A,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1890 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsrlw",	vpshift_insn,	4,	NONE,	0xD1,	0x71,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1938 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vzeroall",	vzero_insn,	1,	NONE,	0xC4,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1648 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsi2sdl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 51 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"arpl",	arpl_insn,	1,	NONE,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 1125 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovmskb",	pmovmskb_insn,	4,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 379 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comunltpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 1202 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psrad",	pshift_insn,	4,	NONE,	0xE2,	0x72,	0x04,	0,	CPU_MMX,	0,	0},
#line 411 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsi2sd",	cvt_xmm_rmx_insn,	6,	NONE,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 284 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comfalsess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 44 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andq",	arith_insn,	22,	SUF_Q,	0x20,	0x04,	0,	ONLY_64,	0,	0,	0},
#line 240 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpltss",	ssecmp_32_insn,	4,	NONE,	0x01,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 816 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movw",	mov_insn,	69,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1790 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpavgb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 535 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fistps",	fildstp_insn,	3,	SUF_S,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 1247 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rcr",	shift_insn,	16,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 1197 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psignw",	ssse3_insn,	3,	NONE,	0x09,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 525 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fimull",	fiarith_insn,	2,	SUF_L,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 919 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"packsswb",	mmxsse2_insn,	2,	NONE,	0x63,	0,	0,	0,	CPU_MMX,	0,	0},
#line 199 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnzw",	cmovcc_insn,	3,	SUF_W,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1186 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshlb",	sse5psh_insn,	2,	NONE,	0x00,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1066 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfsubr",	now3d_insn,	1,	NONE,	0xAA,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1766 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmwritel",	vmxmemwr_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_P4,	0,	0},
#line 1831 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpinsrd",	pinsrd_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 538 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisttpl",	fildstp_insn,	3,	SUF_L,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1054 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfcmpgt",	now3d_insn,	1,	NONE,	0xA0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 236 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpless",	ssecmp_32_insn,	4,	NONE,	0x02,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1196 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psignd",	ssse3_insn,	3,	NONE,	0x0A,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 96 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cld",	onebyte_insn,	1,	NONE,	0xFC,	0,	0,	0,	0,	0,	0},
#line 1095 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pinsrwl",	pinsrw_insn,	9,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1711 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaxps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1772 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpabsb",	avx_ssse3_2op_insn,	1,	NONE,	0x1C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 798 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lzcntw",	cnt_insn,	3,	SUF_W,	0xBD,	0,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 1172 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"prefetchnta",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1065 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfsub",	now3d_insn,	1,	NONE,	0x9A,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1167 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"popfq",	onebyte_insn,	1,	NONE,	0x9D,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 1701 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vhsubpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1794 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpcmpeqb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x74,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1675 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"verw",	prot286_insn,	1,	NONE,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 19 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"adcw",	arith_insn,	22,	SUF_W,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 947 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpeqb",	mmxsse2_insn,	2,	NONE,	0x74,	0,	0,	0,	CPU_MMX,	0,	0},
#line 264 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpsw",	onebyte_insn,	1,	NONE,	0xA7,	0x10,	0,	0,	0,	0,	0},
#line 1533 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgt_oqsd",	ssecmp_64_insn,	4,	NONE,	0x1E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1120 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pminsd",	sse4_insn,	2,	NONE,	0x39,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1457 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"subss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 893 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"negq",	f6_insn,	4,	SUF_Q,	0x03,	0,	0,	ONLY_64,	0,	0,	0},
#line 1601 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnltsd",	ssecmp_64_insn,	4,	NONE,	0x05,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1300 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rsqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 915 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pabsb",	ssse3_insn,	3,	NONE,	0x1C,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 553 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldcww",	fldnstcw_insn,	1,	SUF_W,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 58 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bound",	bound_insn,	2,	NONE,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 984 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1955 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xchgw",	xchg_insn,	16,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1108 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmadcsswd",	sse5pmacs_insn,	1,	NONE,	0xA6,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 349 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 876 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzx",	movszx_insn,	5,	NONE,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 447 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divl",	div_insn,	8,	SUF_L,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 910 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"outl",	out_insn,	12,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1294 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"roundsd",	sse4m64imm_insn,	4,	NONE,	0x0B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1446 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"strl",	str_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_Prot,	0},
#line 1343 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setna",	setcc_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 20 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"add",	arith_insn,	22,	NONE,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 560 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldln2",	twobyte_insn,	1,	NONE,	0xD9,	0xED,	0,	0,	CPU_FPU,	0,	0},
#line 579 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmaddps",	sse5arith_insn,	4,	NONE,	0x10,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 26 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 1761 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmulpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 966 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomequq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1682 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmaddss",	fma_128_m32_insn,	3,	NONE,	0x6A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 711 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnae",	jcc_insn,	9,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 574 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmuls",	farith_insn,	7,	SUF_S,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 315 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comngtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 522 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"filds",	fildstp_insn,	3,	SUF_S,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 617 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fst",	fst_insn,	3,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 47 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andnps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x55,	0,	0,	CPU_SSE,	0,	0},
#line 1064 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfrsqrt",	now3d_insn,	1,	NONE,	0x97,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 995 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomleq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 320 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 781 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loopnz",	loop_insn,	8,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 780 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"loopne",	loop_insn,	8,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 1726 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmovddup",	vmovddup_insn,	3,	NONE,	0xF2,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1032 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrueuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 970 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomfalsed",	sse5comcc_insn,	1,	NONE,	0x4E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1909 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vrcpps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x53,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1490 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vandpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 70 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bswapl",	bswap_insn,	2,	SUF_L,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 559 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fldlg2",	twobyte_insn,	1,	NONE,	0xD9,	0xEC,	0,	0,	CPU_FPU,	0,	0},
#line 83 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btrw",	bittest_insn,	6,	SUF_W,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 37 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aesenc",	aes_insn,	1,	NONE,	0x38,	0xDC,	0,	0,	CPU_AES,	0,	0},
#line 1057 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pfmul",	now3d_insn,	1,	NONE,	0xB4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 762 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgsw",	lfgss_insn,	2,	SUF_W,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 1259 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"repne",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1039 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pdistib",	cyrixmmx_insn,	1,	NONE,	0x54,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1126 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmovmskbl",	pmovmskb_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1209 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubd",	mmxsse2_insn,	2,	NONE,	0xFA,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1413 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sldt",	sldtmsw_insn,	6,	NONE,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 144 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovna",	cmovcc_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1651 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsi2ssl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1622 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptruess",	ssecmp_32_insn,	4,	NONE,	0x0F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1048 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pf2id",	now3d_insn,	1,	NONE,	0x1D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 725 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jp",	jcc_insn,	9,	NONE,	0x0A,	0,	0,	0,	0,	0,	0},
#line 756 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lgdt",	twobytemem_insn,	1,	NONE,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1887 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsrld",	vpshift_insn,	4,	NONE,	0xD2,	0x72,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1384 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sgdt",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1035 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomud",	sse5com_insn,	1,	NONE,	0x6E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 195 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnsw",	cmovcc_insn,	3,	SUF_W,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 623 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fstenvl",	twobytemem_insn,	1,	SUF_L,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 767 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lldt",	prot286_insn,	1,	NONE,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 1830 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpinsrb",	pinsrb_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1536 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgtps",	ssecmp_128_insn,	3,	NONE,	0x0E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 326 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnltss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1507 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpeq_uspd",	ssecmp_128_insn,	3,	NONE,	0x18,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 285 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 130 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovgq",	cmovcc_insn,	3,	SUF_Q,	0x0F,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 698 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jae",	jcc_insn,	9,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 248 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpnless",	ssecmp_32_insn,	4,	NONE,	0x06,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1386 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sgdtq",	twobytemem_insn,	1,	SUF_Q,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1110 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaddubsw",	ssse3_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 691 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"invlpg",	twobytemem_insn,	1,	NONE,	0x07,	0x0F,	0x01,	0,	CPU_486,	CPU_Priv,	0},
#line 416 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsi2ssq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF3,	0x2A,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 255 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmpordsd",	ssecmp_64_insn,	4,	NONE,	0x07,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 215 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpow",	cmovcc_insn,	3,	SUF_W,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 544 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisubs",	fiarith_insn,	2,	SUF_S,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 701 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jc",	jcc_insn,	9,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 1574 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnge_uqss",	ssecmp_32_insn,	4,	NONE,	0x19,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1192 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshufhw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF3,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 981 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomgeud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 322 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comnless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 360 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuneps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 748 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"leavew",	onebyte_insn,	1,	NONE,	0xC9,	0x10,	0x00,	0,	CPU_186,	0,	0},
#line 1829 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vphsubw",	ssse3_insn,	3,	NONE,	0x05,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1070 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddd",	ssse3_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 193 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnsl",	cmovcc_insn,	3,	SUF_L,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 941 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pclmulhqhqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x11,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 726 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jpe",	jcc_insn,	9,	NONE,	0x0A,	0,	0,	0,	0,	0,	0},
#line 1393 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"shld",	shlrd_insn,	9,	NONE,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 1618 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmptrue_usss",	ssecmp_32_insn,	4,	NONE,	0x1F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1277 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rexxyz",	NULL,	X86_REX>>8,	0x47,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1356 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setngb",	setcc_insn,	1,	SUF_B,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 181 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnlel",	cmovcc_insn,	3,	SUF_L,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 387 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cpuid",	twobyte_insn,	1,	NONE,	0x0F,	0xA2,	0,	0,	CPU_486,	0,	0},
#line 1417 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smi",	onebyte_insn,	1,	NONE,	0xF1,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1634 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtdq2ps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 865 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movswq",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 880 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mul",	f6_insn,	4,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 570 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fmsubsd",	sse5arith64_insn,	8,	NONE,	0x0B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1655 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 504 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fiadd",	fiarith_insn,	2,	NONE,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 346 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1116 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaxub",	mmxsse2_insn,	2,	NONE,	0xDE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1463 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sysenter",	twobyte_insn,	1,	NONE,	0x0F,	0x34,	0,	NOT_64,	CPU_686,	0,	0},
#line 899 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"notq",	f6_insn,	4,	SUF_Q,	0x02,	0,	0,	ONLY_64,	0,	0,	0},
#line 400 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtph2ps",	cvtph2ps_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 207 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovpw",	cmovcc_insn,	3,	SUF_W,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 598 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fprem",	twobyte_insn,	1,	NONE,	0xD9,	0xF8,	0,	0,	CPU_FPU,	0,	0},
#line 929 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddusw",	mmxsse2_insn,	2,	NONE,	0xDD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1114 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmaxsd",	sse4_insn,	2,	NONE,	0x3D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 578 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmaddpd",	sse5arith_insn,	4,	NONE,	0x11,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 61 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"bsf",	bsfr_insn,	3,	NONE,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 28 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addr32",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1688 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vfmsubps",	fma_128_256_insn,	4,	NONE,	0x6C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1713 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmaxss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1836 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmaddubsw",	ssse3_insn,	3,	NONE,	0x04,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1200 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psllq",	pshift_insn,	4,	NONE,	0xF3,	0x73,	0x06,	0,	CPU_MMX,	0,	0},
#line 647 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fxch",	fxch_insn,	4,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 968 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomeqw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 348 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comugtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 793 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"ltr",	prot286_insn,	1,	NONE,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 904 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"orq",	arith_insn,	22,	SUF_Q,	0x08,	0x01,	0,	ONLY_64,	0,	0,	0},
#line 1215 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psubusw",	mmxsse2_insn,	2,	NONE,	0xD9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 785 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lretw",	retnf_insn,	6,	NONE,	0xCA,	0x10,	0,	0,	0,	0,	0},
#line 1189 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pshlw",	sse5psh_insn,	2,	NONE,	0x01,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1195 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"psignb",	ssse3_insn,	3,	NONE,	0x08,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 292 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1037 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomuw",	sse5com_insn,	1,	NONE,	0x6D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 738 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lds",	ldes_insn,	2,	NONE,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 1031 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomtrueuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1169 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"por",	mmxsse2_insn,	2,	NONE,	0xEB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1526 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpge_oqss",	ssecmp_32_insn,	4,	NONE,	0x1D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1091 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pinsrb",	pinsrb_insn,	4,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1879 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsignd",	ssse3_insn,	3,	NONE,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1497 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vbroadcastsd",	vbroadcastsd_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1324 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setab",	setcc_insn,	1,	SUF_B,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 448 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"divq",	div_insn,	8,	SUF_Q,	0x06,	0,	0,	ONLY_64,	0,	0,	0},
#line 194 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnsq",	cmovcc_insn,	3,	SUF_Q,	0x09,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 888 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"mulss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 1529 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpgesd",	ssecmp_64_insn,	4,	NONE,	0x0D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 796 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lzcntl",	cnt_insn,	3,	SUF_L,	0xBD,	0,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 949 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcmpeqq",	sse4_insn,	2,	NONE,	0x29,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 116 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovbe",	cmovcc_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 222 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovzq",	cmovcc_insn,	3,	SUF_Q,	0x04,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 923 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"paddd",	mmxsse2_insn,	2,	NONE,	0xFE,	0,	0,	0,	CPU_MMX,	0,	0},
#line 35 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"aesdec",	aes_insn,	1,	NONE,	0x38,	0xDE,	0,	0,	CPU_AES,	0,	0},
#line 294 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comiss",	xmm_xmm32_insn,	4,	NONE,	0x00,	0x2F,	0,	0,	CPU_SSE,	0,	0},
#line 1219 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"punpckhbw",	mmxsse2_insn,	2,	NONE,	0x68,	0,	0,	0,	CPU_MMX,	0,	0},
#line 399 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtpd2ps",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1861 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovzxbw",	sse4m64_insn,	2,	NONE,	0x30,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 729 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"js",	jcc_insn,	9,	NONE,	0x08,	0,	0,	0,	0,	0,	0},
#line 354 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comuless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 439 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"data64",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1436 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"stc",	onebyte_insn,	1,	NONE,	0xF9,	0,	0,	0,	0,	0,	0},
#line 853 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movsbl",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1602 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpnltss",	ssecmp_32_insn,	4,	NONE,	0x05,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1418 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"smint",	twobyte_insn,	1,	NONE,	0x0F,	0x38,	0,	0,	CPU_686,	CPU_Cyrix,	0},
#line 1968 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xorpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x57,	0,	0,	CPU_SSE2,	0,	0},
#line 1295 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"roundss",	sse4m32imm_insn,	4,	NONE,	0x0A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1945 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xadd",	cmpxchgxadd_insn,	4,	NONE,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 478 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcmovnbe",	fcmovcc_insn,	1,	NONE,	0xDB,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1496 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vbroadcastf128",	vbroadcastf128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 153 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnbl",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 717 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"jnge",	jcc_insn,	9,	NONE,	0x0C,	0,	0,	0,	0,	0,	0},
#line 138 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovlq",	cmovcc_insn,	3,	SUF_Q,	0x0C,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1653 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtss2sd",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1358 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setngeb",	setcc_insn,	1,	SUF_B,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1961 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"xgetbv",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xD0,	0,	CPU_386,	CPU_XSAVE,	0},
#line 1255 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"rdtsc",	twobyte_insn,	1,	NONE,	0x0F,	0x31,	0,	0,	CPU_586,	0,	0},
#line 472 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fchs",	twobyte_insn,	1,	NONE,	0xD9,	0xE0,	0,	0,	CPU_FPU,	0,	0},
#line 132 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovge",	cmovcc_insn,	3,	NONE,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1643 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcvtsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1763 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vmulsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 492 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fdecstp",	twobyte_insn,	1,	NONE,	0xD9,	0xF6,	0,	0,	CPU_FPU,	0,	0},
#line 514 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fidivl",	fiarith_insn,	2,	SUF_L,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 580 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fnmaddsd",	sse5arith64_insn,	8,	NONE,	0x13,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1895 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpsubsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 299 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comltpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 642 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fucomip",	fcom2_insn,	2,	NONE,	0xDF,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 795 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"lzcnt",	cnt_insn,	3,	NONE,	0xBD,	0,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 340 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comueqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 1079 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"phaddw",	ssse3_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 877 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzxb",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1449 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"sub",	arith_insn,	22,	NONE,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 443 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"decq",	incdec_insn,	6,	SUF_Q,	0x48,	0x01,	0,	ONLY_64,	0,	0,	0},
#line 874 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"movzwl",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 192 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovns",	cmovcc_insn,	3,	NONE,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 223 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovzw",	cmovcc_insn,	3,	SUF_W,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 1858 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmovsxwq",	sse4m32_insn,	2,	NONE,	0x24,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 176 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovnl",	cmovcc_insn,	3,	NONE,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1372 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"setob",	setcc_insn,	1,	SUF_B,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 603 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"frczsd",	sse5two64_insn,	2,	NONE,	0x13,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1498 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vbroadcastss",	vbroadcastss_insn,	2,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1942 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"word",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 45 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"andw",	arith_insn,	22,	SUF_W,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 233 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmplepd",	ssecmp_128_insn,	3,	NONE,	0x02,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1100 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pmacsdql",	sse5pmacs_insn,	1,	NONE,	0x97,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1042 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pextrb",	pextrb_insn,	3,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 408 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cvtsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 21 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"addb",	arith_insn,	22,	SUF_B,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 491 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fcos",	twobyte_insn,	1,	NONE,	0xD9,	0xFF,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 291 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comgtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1561 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vcmpneq_ossd",	ssecmp_64_insn,	4,	NONE,	0x1C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 960 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"pcomd",	sse5com_insn,	1,	NONE,	0x4E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 293 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"comisd",	xmm_xmm64_insn,	4,	NONE,	0x66,	0x2F,	0,	0,	CPU_SSE2,	0,	0},
#line 530 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fistl",	fiarith_insn,	2,	SUF_L,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 1481 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"unpcklps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x14,	0,	0,	CPU_SSE,	0,	0},
#line 79 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"btcw",	bittest_insn,	6,	SUF_W,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 545 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"fisubr",	fiarith_insn,	2,	NONE,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1867 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"vpmulhuw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 221 "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_gas.gperf"
    {"cmovzl",	cmovcc_insn,	3,	SUF_L,	0x04,	0,	0,	0,	CPU_686,	0,	0}
  };
  static const unsigned short tab[] = {
    1791,281,702,1613,2040,11,197,1477,121,764,1312,1042,1509,546,323,1586,
    517,1203,1379,721,0,665,1481,83,1116,988,1116,1295,764,1140,0,94,
    244,1295,1042,1896,764,1212,0,333,1140,1140,0,1934,1034,580,764,1310,
    1042,281,11,341,630,1035,2017,1513,665,864,348,0,824,1949,1109,0,
    323,1834,1116,323,1140,336,1586,702,1920,506,95,1383,864,1140,0,1849,
    1513,1550,864,1823,323,1042,2014,1791,83,1949,1312,1920,1920,1550,83,0,
    11,1550,333,1042,281,173,702,323,1095,668,427,1042,0,174,83,1705,
    1639,1044,0,846,323,760,2014,764,1550,1543,11,159,1042,1140,1042,1823,
    1822,517,323,440,1473,764,668,1654,1243,1676,1834,1506,630,442,1140,1053,
    517,323,795,665,281,1938,799,1042,764,83,0,1549,281,764,1042,323,
    1896,665,1849,1044,351,1244,892,281,1116,342,1232,1042,1027,0,1920,1949,
    281,0,336,1042,824,1107,1042,1552,1453,359,1042,109,281,665,0,972,
    298,2025,281,762,159,904,888,0,793,1805,351,1989,665,1042,1050,733,
    1896,1920,525,1027,1140,323,702,281,755,630,323,0,1223,888,1749,1748,
    764,120,728,288,702,1042,0,3,1107,281,517,1654,605,528,764,1044,
    336,0,1074,307,702,1822,988,111,1849,1217,1042,158,1140,2038,1550,1834,
    517,1140,1218,665,1689,829,281,1074,764,864,891,1453,1654,1823,1344,1140,
    11,748,988,1791,1151,159,733,1379,336,1699,1644,884,2014,764,517,6,
    1412,859,1822,764,605,230,1550,1900,630,0,1306,764,764,1896,281,281,
    1212,0,764,1140,427,665,764,574,1550,525,1951,1138,336,1698,888,1574,
    665,1949,1834,1550,338,1938,1550,1107,580,762,1896,435,976,1232,0,1896,
    1639,1186,1755,986,64,1919,891,1020,871,1140,443,119,1312,1550,788,1908,
    1218,213,1338,1654,1550,1186,788,698,1252,864,395,0,1789,1822,293,1027,
    1713,1593,913,1920,1352,0,1191,288,1977,1212,1922,0,1638,665,630,733,
    1423,2014,823,1000,764,1586,1135,975,1312,605,1041,1721,1481,1103,286,580,
    2023,11,770,898,1550,1116,1044,764,1432,1544,525,1213,856,1639,48,517,
    1618,1042,1689,4,1367,1761,1042,1896,0,999,348,333,1827,0,1513,1689,
    333,1312,1107,1481,764,665,517,281,1977,1477,1869,762,1654,755,795,442,
    1822,781,665,323,36,1042,528,399,444,1822,764,1082,284,1185,1324,351,
    1095,1173,303,1552,1791,508,1975,971,358,764,1212,427,1791,1109,1103,665,
    913,1980,1749,1689,1044,460,307,89,1089,522,174,815,781,160,1255,1351,
    630,802,1593,1586,1202,284,630,515,302,707,0,1044,1082,1569,1954,1678,
  };

  const struct insnprefix_parse_data *ret;
  unsigned long rsl, val = phash_lookup(key, len, 0xb1a0f135UL);
  rsl = ((val>>23)^tab[val&0x1ff]);
  if (rsl >= 1966) return NULL;
  ret = &pd[rsl];
  if (strcmp(key, ret->name) != 0) return NULL;
  return ret;
}

