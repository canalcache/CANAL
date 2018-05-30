int init1[256] __attribute__ ((aligned (64)));
int init2[256] __attribute__ ((aligned (64)));

unsigned int data[2] __attribute__ ((aligned (64)));
unsigned int s[32] __attribute__ ((aligned (64)));	
unsigned int l __attribute__ ((aligned (64)));
unsigned int r __attribute__ ((aligned (64)));
unsigned int t __attribute__ ((aligned (64)));
unsigned int u __attribute__ ((aligned (64)));
unsigned int tt __attribute__ ((aligned (64)));

const unsigned int DES_SPtrans1[64] __attribute__ ((aligned (64))) = {

        0x02080800L, 0x00080000L, 0x02000002L, 0x02080802L,
        0x02000000L, 0x00080802L, 0x00080002L, 0x02000002L,
        0x00080802L, 0x02080800L, 0x02080000L, 0x00000802L,
        0x02000802L, 0x02000000L, 0x00000000L, 0x00080002L,
        0x00080000L, 0x00000002L, 0x02000800L, 0x00080800L,
        0x02080802L, 0x02080000L, 0x00000802L, 0x02000800L,
        0x00000002L, 0x00000800L, 0x00080800L, 0x02080002L,
        0x00000800L, 0x02000802L, 0x02080002L, 0x00000000L,
        0x00000000L, 0x02080802L, 0x02000800L, 0x00080002L,
        0x02080800L, 0x00080000L, 0x00000802L, 0x02000800L,
        0x02080002L, 0x00000800L, 0x00080800L, 0x02000002L,
        0x00080802L, 0x00000002L, 0x02000002L, 0x02080000L,
        0x02080802L, 0x00080800L, 0x02080000L, 0x02000802L,
        0x02000000L, 0x00000802L, 0x00080002L, 0x00000000L,
        0x00080000L, 0x02000000L, 0x02000802L, 0x02080800L,
        0x00000002L, 0x02080002L, 0x00000800L, 0x00080802L,
};

const unsigned int DES_SPtrans2[64] __attribute__ ((aligned (64)))= {

        0x40108010L, 0x00000000L, 0x00108000L, 0x40100000L,
        0x40000010L, 0x00008010L, 0x40008000L, 0x00108000L,
        0x00008000L, 0x40100010L, 0x00000010L, 0x40008000L,
        0x00100010L, 0x40108000L, 0x40100000L, 0x00000010L,
        0x00100000L, 0x40008010L, 0x40100010L, 0x00008000L,
        0x00108010L, 0x40000000L, 0x00000000L, 0x00100010L,
        0x40008010L, 0x00108010L, 0x40108000L, 0x40000010L,
        0x40000000L, 0x00100000L, 0x00008010L, 0x40108010L,
        0x00100010L, 0x40108000L, 0x40008000L, 0x00108010L,
        0x40108010L, 0x00100010L, 0x40000010L, 0x00000000L,
        0x40000000L, 0x00008010L, 0x00100000L, 0x40100010L,
        0x00008000L, 0x40000000L, 0x00108010L, 0x40008010L,
        0x40108000L, 0x00008000L, 0x00000000L, 0x40000010L,
        0x00000010L, 0x40108010L, 0x00108000L, 0x40100000L,
        0x40100010L, 0x00100000L, 0x00008010L, 0x40008000L,
        0x40008010L, 0x00000010L, 0x40100000L, 0x00108000L,
};

const unsigned int DES_SPtrans3[64] __attribute__ ((aligned (64)))= {

        0x04000001L, 0x04040100L, 0x00000100L, 0x04000101L,
        0x00040001L, 0x04000000L, 0x04000101L, 0x00040100L,
        0x04000100L, 0x00040000L, 0x04040000L, 0x00000001L,
        0x04040101L, 0x00000101L, 0x00000001L, 0x04040001L,
        0x00000000L, 0x00040001L, 0x04040100L, 0x00000100L,
        0x00000101L, 0x04040101L, 0x00040000L, 0x04000001L,
        0x04040001L, 0x04000100L, 0x00040101L, 0x04040000L,
        0x00040100L, 0x00000000L, 0x04000000L, 0x00040101L,
        0x04040100L, 0x00000100L, 0x00000001L, 0x00040000L,
        0x00000101L, 0x00040001L, 0x04040000L, 0x04000101L,
        0x00000000L, 0x04040100L, 0x00040100L, 0x04040001L,
        0x00040001L, 0x04000000L, 0x04040101L, 0x00000001L,
        0x00040101L, 0x04000001L, 0x04000000L, 0x04040101L,
        0x00040000L, 0x04000100L, 0x04000101L, 0x00040100L,
        0x04000100L, 0x00000000L, 0x04040001L, 0x00000101L,
        0x04000001L, 0x00040101L, 0x00000100L, 0x04040000L,
};
const unsigned int DES_SPtrans4[64] __attribute__ ((aligned (64)))= {

        0x00401008L, 0x10001000L, 0x00000008L, 0x10401008L,
        0x00000000L, 0x10400000L, 0x10001008L, 0x00400008L,
        0x10401000L, 0x10000008L, 0x10000000L, 0x00001008L,
        0x10000008L, 0x00401008L, 0x00400000L, 0x10000000L,
        0x10400008L, 0x00401000L, 0x00001000L, 0x00000008L,
        0x00401000L, 0x10001008L, 0x10400000L, 0x00001000L,
        0x00001008L, 0x00000000L, 0x00400008L, 0x10401000L,
        0x10001000L, 0x10400008L, 0x10401008L, 0x00400000L,
        0x10400008L, 0x00001008L, 0x00400000L, 0x10000008L,
        0x00401000L, 0x10001000L, 0x00000008L, 0x10400000L,
        0x10001008L, 0x00000000L, 0x00001000L, 0x00400008L,
        0x00000000L, 0x10400008L, 0x10401000L, 0x00001000L,
        0x10000000L, 0x10401008L, 0x00401008L, 0x00400000L,
        0x10401008L, 0x00000008L, 0x10001000L, 0x00401008L,
        0x00400008L, 0x00401000L, 0x10400000L, 0x10001008L,
        0x00001008L, 0x10000000L, 0x10000008L, 0x10401000L,
};

const unsigned int DES_SPtrans5[64] __attribute__ ((aligned (64)))= {

        0x08000000L, 0x00010000L, 0x00000400L, 0x08010420L,
        0x08010020L, 0x08000400L, 0x00010420L, 0x08010000L,
        0x00010000L, 0x00000020L, 0x08000020L, 0x00010400L,
        0x08000420L, 0x08010020L, 0x08010400L, 0x00000000L,
        0x00010400L, 0x08000000L, 0x00010020L, 0x00000420L,
        0x08000400L, 0x00010420L, 0x00000000L, 0x08000020L,
        0x00000020L, 0x08000420L, 0x08010420L, 0x00010020L,
        0x08010000L, 0x00000400L, 0x00000420L, 0x08010400L,
        0x08010400L, 0x08000420L, 0x00010020L, 0x08010000L,
        0x00010000L, 0x00000020L, 0x08000020L, 0x08000400L,
        0x08000000L, 0x00010400L, 0x08010420L, 0x00000000L,
        0x00010420L, 0x08000000L, 0x00000400L, 0x00010020L,
        0x08000420L, 0x00000400L, 0x00000000L, 0x08010420L,
        0x08010020L, 0x08010400L, 0x00000420L, 0x00010000L,
        0x00010400L, 0x08010020L, 0x08000400L, 0x00000420L,
        0x00000020L, 0x00010420L, 0x08010000L, 0x08000020L,
};

const unsigned int DES_SPtrans6[64] __attribute__ ((aligned (64)))= {

        0x80000040L, 0x00200040L, 0x00000000L, 0x80202000L,
        0x00200040L, 0x00002000L, 0x80002040L, 0x00200000L,
        0x00002040L, 0x80202040L, 0x00202000L, 0x80000000L,
        0x80002000L, 0x80000040L, 0x80200000L, 0x00202040L,
        0x00200000L, 0x80002040L, 0x80200040L, 0x00000000L,
        0x00002000L, 0x00000040L, 0x80202000L, 0x80200040L,
        0x80202040L, 0x80200000L, 0x80000000L, 0x00002040L,
        0x00000040L, 0x00202000L, 0x00202040L, 0x80002000L,
        0x00002040L, 0x80000000L, 0x80002000L, 0x00202040L,
        0x80202000L, 0x00200040L, 0x00000000L, 0x80002000L,
        0x80000000L, 0x00002000L, 0x80200040L, 0x00200000L,
        0x00200040L, 0x80202040L, 0x00202000L, 0x00000040L,
        0x80202040L, 0x00202000L, 0x00200000L, 0x80002040L,
        0x80000040L, 0x80200000L, 0x00202040L, 0x00000000L,
        0x00002000L, 0x80000040L, 0x80002040L, 0x80202000L,
        0x80200000L, 0x00002040L, 0x00000040L, 0x80200040L,
};

const unsigned int DES_SPtrans7[64] __attribute__ ((aligned (64)))= {

        0x00004000L, 0x00000200L, 0x01000200L, 0x01000004L,
        0x01004204L, 0x00004004L, 0x00004200L, 0x00000000L,
        0x01000000L, 0x01000204L, 0x00000204L, 0x01004000L,
        0x00000004L, 0x01004200L, 0x01004000L, 0x00000204L,
        0x01000204L, 0x00004000L, 0x00004004L, 0x01004204L,
        0x00000000L, 0x01000200L, 0x01000004L, 0x00004200L,
        0x01004004L, 0x00004204L, 0x01004200L, 0x00000004L,
        0x00004204L, 0x01004004L, 0x00000200L, 0x01000000L,
        0x00004204L, 0x01004000L, 0x01004004L, 0x00000204L,
        0x00004000L, 0x00000200L, 0x01000000L, 0x01004004L,
        0x01000204L, 0x00004204L, 0x00004200L, 0x00000000L,
        0x00000200L, 0x01000004L, 0x00000004L, 0x01000200L,
        0x00000000L, 0x01000204L, 0x01000200L, 0x00004200L,
        0x00000204L, 0x00004000L, 0x01004204L, 0x01000000L,
        0x01004200L, 0x00000004L, 0x00004004L, 0x01004204L,
        0x01000004L, 0x01004200L, 0x01004000L, 0x00004004L,
};

const unsigned int DES_SPtrans8[64] __attribute__ ((aligned (64)))= {

        0x20800080L, 0x20820000L, 0x00020080L, 0x00000000L,
        0x20020000L, 0x00800080L, 0x20800000L, 0x20820080L,
        0x00000080L, 0x20000000L, 0x00820000L, 0x00020080L,
        0x00820080L, 0x20020080L, 0x20000080L, 0x20800000L,
        0x00020000L, 0x00820080L, 0x00800080L, 0x20020000L,
        0x20820080L, 0x20000080L, 0x00000000L, 0x00820000L,
        0x20000000L, 0x00800000L, 0x20020080L, 0x20800080L,
        0x00800000L, 0x00020000L, 0x20820000L, 0x00000080L,
        0x00800000L, 0x00020000L, 0x20000080L, 0x20820080L,
        0x00020080L, 0x20000000L, 0x00000000L, 0x00820000L,
        0x20800080L, 0x20020080L, 0x20020000L, 0x00800080L,
        0x20820000L, 0x00000080L, 0x00800080L, 0x20020000L,
        0x20820080L, 0x00800000L, 0x20800000L, 0x20000080L,
        0x00820000L, 0x00020080L, 0x20020080L, 0x20800000L,
        0x00000080L, 0x20820000L, 0x00820080L, 0x00000000L,
        0x20000000L, 0x20800080L, 0x00020000L, 0x00820080L,
};



int main() {
    // cache flush 
    init1[0] = 0, init1[1] = 0, init1[2] = 0, init1[3] = 0, init1[4] = 0, init1[5] = 0, init1[6] = 0, init1[7] = 0;
    init1[8] = 0, init1[9] = 0, init1[10] = 0, init1[11] = 0, init1[12] = 0, init1[13] = 0, init1[14] = 0, init1[15] = 0;
    init1[16] = 0, init1[17] = 0, init1[18] = 0, init1[19] = 0, init1[20] = 0, init1[21] = 0, init1[22] = 0, init1[23] = 0;
    init1[24] = 0, init1[25] = 0, init1[26] = 0, init1[27] = 0, init1[28] = 0, init1[29] = 0, init1[30] = 0, init1[31] = 0;
    init1[32] = 0, init1[33] = 0, init1[34] = 0, init1[35] = 0, init1[36] = 0, init1[37] = 0, init1[38] = 0, init1[39] = 0;
    init1[40] = 0, init1[41] = 0, init1[42] = 0, init1[43] = 0, init1[44] = 0, init1[45] = 0, init1[46] = 0, init1[47] = 0;
    init1[48] = 0, init1[49] = 0, init1[50] = 0, init1[51] = 0, init1[52] = 0, init1[53] = 0, init1[54] = 0, init1[55] = 0;
    init1[56] = 0, init1[57] = 0, init1[58] = 0, init1[59] = 0, init1[60] = 0, init1[61] = 0, init1[62] = 0, init1[63] = 0;
    init1[64] = 0, init1[65] = 0, init1[66] = 0, init1[67] = 0, init1[68] = 0, init1[69] = 0, init1[70] = 0, init1[71] = 0;
    init1[72] = 0, init1[73] = 0, init1[74] = 0, init1[75] = 0, init1[76] = 0, init1[77] = 0, init1[78] = 0, init1[79] = 0;
    init1[80] = 0, init1[81] = 0, init1[82] = 0, init1[83] = 0, init1[84] = 0, init1[85] = 0, init1[86] = 0, init1[87] = 0;
    init1[88] = 0, init1[89] = 0, init1[90] = 0, init1[91] = 0, init1[92] = 0, init1[93] = 0, init1[94] = 0, init1[95] = 0;
    init1[96] = 0, init1[97] = 0, init1[98] = 0, init1[99] = 0, init1[100] = 0, init1[101] = 0, init1[102] = 0, init1[103] = 0;
    init1[104] = 0, init1[105] = 0, init1[106] = 0, init1[107] = 0, init1[108] = 0, init1[109] = 0, init1[110] = 0, init1[111] = 0;
    init1[112] = 0, init1[113] = 0, init1[114] = 0, init1[115] = 0, init1[116] = 0, init1[117] = 0, init1[118] = 0, init1[119] = 0;
    init1[120] = 0, init1[121] = 0, init1[122] = 0, init1[123] = 0, init1[124] = 0, init1[125] = 0, init1[126] = 0, init1[127] = 0;
    init1[128] = 0, init1[129] = 0, init1[130] = 0, init1[131] = 0, init1[132] = 0, init1[133] = 0, init1[134] = 0, init1[135] = 0;
    init1[136] = 0, init1[137] = 0, init1[138] = 0, init1[139] = 0, init1[140] = 0, init1[141] = 0, init1[142] = 0, init1[143] = 0;
    init1[144] = 0, init1[145] = 0, init1[146] = 0, init1[147] = 0, init1[148] = 0, init1[149] = 0, init1[150] = 0, init1[151] = 0;
    init1[152] = 0, init1[153] = 0, init1[154] = 0, init1[155] = 0, init1[156] = 0, init1[157] = 0, init1[158] = 0, init1[159] = 0;
    init1[160] = 0, init1[161] = 0, init1[162] = 0, init1[163] = 0, init1[164] = 0, init1[165] = 0, init1[166] = 0, init1[167] = 0;
    init1[168] = 0, init1[169] = 0, init1[170] = 0, init1[171] = 0, init1[172] = 0, init1[173] = 0, init1[174] = 0, init1[175] = 0;
    init1[176] = 0, init1[177] = 0, init1[178] = 0, init1[179] = 0, init1[180] = 0, init1[181] = 0, init1[182] = 0, init1[183] = 0;
    init1[184] = 0, init1[185] = 0, init1[186] = 0, init1[187] = 0, init1[188] = 0, init1[189] = 0, init1[190] = 0, init1[191] = 0;
    init1[192] = 0, init1[193] = 0, init1[194] = 0, init1[195] = 0, init1[196] = 0, init1[197] = 0, init1[198] = 0, init1[199] = 0;
    init1[200] = 0, init1[201] = 0, init1[202] = 0, init1[203] = 0, init1[204] = 0, init1[205] = 0, init1[206] = 0, init1[207] = 0;
    init1[208] = 0, init1[209] = 0, init1[210] = 0, init1[211] = 0, init1[212] = 0, init1[213] = 0, init1[214] = 0, init1[215] = 0;
    init1[216] = 0, init1[217] = 0, init1[218] = 0, init1[219] = 0, init1[220] = 0, init1[221] = 0, init1[222] = 0, init1[223] = 0;
    init1[224] = 0, init1[225] = 0, init1[226] = 0, init1[227] = 0, init1[228] = 0, init1[229] = 0, init1[230] = 0, init1[231] = 0;
    init1[232] = 0, init1[233] = 0, init1[234] = 0, init1[235] = 0, init1[236] = 0, init1[237] = 0, init1[238] = 0, init1[239] = 0;
    init1[240] = 0, init1[241] = 0, init1[242] = 0, init1[243] = 0, init1[244] = 0, init1[245] = 0, init1[246] = 0, init1[247] = 0;
    init1[248] = 0, init1[249] = 0, init1[250] = 0, init1[251] = 0, init1[252] = 0, init1[253] = 0, init1[254] = 0, init1[255] = 0;


	data[0] = 2997065638;
	data[1] = 28487852;
    s[0] = 6844628;
    s[1] = 3469511488;
    s[2] = 342143220;
    s[3] = 3272347342;
    s[4] = 1554054224;
    s[5] = 2194246336;
    s[6] = 2690965736;
    s[7] = 2223738504;
    s[8] = 269806752;
    s[9] = 130646978;
    s[10] = 2016961768;
    s[11] = 68044486;
    s[12] = 1089760372;
    s[13] = 722383;
    s[14] = 3498596456;
    s[15] = 240075916;
    s[16] = 1683545208;
    s[17] = 84100492;
    s[18] = 144198700;
    s[19] = 2185580303;
    s[20] = 3771251772;
    s[21] = 147244293;
    s[22] = 2693012636;
    s[23] = 1259212553;
    s[24] = 2617817112;
    s[25] = 1229376962;
    s[26] = 1819068636;
    s[27] = 3238841089;
    s[28] = 474001596;
    s[29] = 2324022217;
    s[30] = 3696555156;
    s[31] = 1208863552;



    r = data[0];
    l = data[1];

    { 
        ((tt)=((((l)>>(4))^(r))&(0x0f0f0f0fL)), (r)^=(tt), (l)^=((tt)<<(4))); 
        ((tt)=((((r)>>(16))^(l))&(0x0000ffffL)), (l)^=(tt), (r)^=((tt)<<(16))); 
        ((tt)=((((l)>>(2))^(r))&(0x33333333L)), (r)^=(tt), (l)^=((tt)<<(2))); 
        ((tt)=((((r)>>(8))^(l))&(0x00ff00ffL)), (l)^=(tt), (r)^=((tt)<<(8))); 
        ((tt)=((((l)>>(1))^(r))&(0x55555555L)), (r)^=(tt), (l)^=((tt)<<(1))); 
    };

    # 86 "des_enc.c"

    r = (((r)>>(29))+((r)<<(32-(29)))) & 0xffffffffL;
    l = (((l)>>(29))+((l)<<(32-(29)))) & 0xffffffffL;


        { 
            u=r^s[0 ]; 
            t=r^s[0 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[2 ]; 
            t=l^s[2 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=r^s[4 ]; 
            t=r^s[4 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[6 ]; 
            t=l^s[6 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=r^s[8 ]; 
            t=r^s[8 +1];
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[10 ]; 
            t=l^s[10 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=r^s[12 ]; 
            t=r^s[12 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[14 ]; 
            t=l^s[14 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=r^s[16 ]; 
            t=r^s[16 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4))));
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[18 ]; 
            t=l^s[18 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=r^s[20 ];
            t=r^s[20 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4))));
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[22 ]; 
            t=l^s[22 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4))));
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        {
            u=r^s[24 ]; 
            t=r^s[24 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[26 ]; 
            t=l^s[26 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=r^s[28 ]; 
            t=r^s[28 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            l^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };

        { 
            u=l^s[30 ]; 
            t=l^s[30 +1]; 
            t=(((t)>>(4))+((t)<<(32-(4)))); 
            r^= DES_SPtrans1[(u>> 2L)&0x3f]^ DES_SPtrans3[(u>>10L)&0x3f]^ DES_SPtrans5[(u>>18L)&0x3f]^ DES_SPtrans7[(u>>26L)&0x3f]^ DES_SPtrans2[(t>> 2L)&0x3f]^ DES_SPtrans4[(t>>10L)&0x3f]^ DES_SPtrans6[(t>>18L)&0x3f]^ DES_SPtrans8[(t>>26L)&0x3f]; 
        };



    l = (((l)>>(3))+((l)<<(32-(3)))) & 0xffffffffL;
    r = (((r)>>(3))+((r)<<(32-(3)))) & 0xffffffffL;


    { 
        ((tt)=((((r)>>(1))^(l))&(0x55555555L)), (l)^=(tt), (r)^=((tt)<<(1))); 
        ((tt)=((((l)>>(8))^(r))&(0x00ff00ffL)), (r)^=(tt), (l)^=((tt)<<(8))); 
        ((tt)=((((r)>>(2))^(l))&(0x33333333L)), (l)^=(tt), (r)^=((tt)<<(2))); 
        ((tt)=((((l)>>(16))^(r))&(0x0000ffffL)), (r)^=(tt), (l)^=((tt)<<(16))); 
        ((tt)=((((r)>>(4))^(l))&(0x0f0f0f0fL)), (l)^=(tt), (r)^=((tt)<<(4))); 
    };

    data[0] = l;

    data[1] = r;

    l = r = t = u = 0;

    init2[0] = 0, init2[1] = 0, init2[2] = 0, init2[3] = 0, init2[4] = 0, init2[5] = 0, init2[6] = 0, init2[7] = 0;
    init2[8] = 0, init2[9] = 0, init2[10] = 0, init2[11] = 0, init2[12] = 0, init2[13] = 0, init2[14] = 0, init2[15] = 0;
    init2[16] = 0, init2[17] = 0, init2[18] = 0, init2[19] = 0, init2[20] = 0, init2[21] = 0, init2[22] = 0, init2[23] = 0;
    init2[24] = 0, init2[25] = 0, init2[26] = 0, init2[27] = 0, init2[28] = 0, init2[29] = 0, init2[30] = 0, init2[31] = 0;
    init2[32] = 0, init2[33] = 0, init2[34] = 0, init2[35] = 0, init2[36] = 0, init2[37] = 0, init2[38] = 0, init2[39] = 0;
    init2[40] = 0, init2[41] = 0, init2[42] = 0, init2[43] = 0, init2[44] = 0, init2[45] = 0, init2[46] = 0, init2[47] = 0;
    init2[48] = 0, init2[49] = 0, init2[50] = 0, init2[51] = 0, init2[52] = 0, init2[53] = 0, init2[54] = 0, init2[55] = 0;
    init2[56] = 0, init2[57] = 0, init2[58] = 0, init2[59] = 0, init2[60] = 0, init2[61] = 0, init2[62] = 0, init2[63] = 0;
    init2[64] = 0, init2[65] = 0, init2[66] = 0, init2[67] = 0, init2[68] = 0, init2[69] = 0, init2[70] = 0, init2[71] = 0;
    init2[72] = 0, init2[73] = 0, init2[74] = 0, init2[75] = 0, init2[76] = 0, init2[77] = 0, init2[78] = 0, init2[79] = 0;
    init2[80] = 0, init2[81] = 0, init2[82] = 0, init2[83] = 0, init2[84] = 0, init2[85] = 0, init2[86] = 0, init2[87] = 0;
    init2[88] = 0, init2[89] = 0, init2[90] = 0, init2[91] = 0, init2[92] = 0, init2[93] = 0, init2[94] = 0, init2[95] = 0;
    init2[96] = 0, init2[97] = 0, init2[98] = 0, init2[99] = 0, init2[100] = 0, init2[101] = 0, init2[102] = 0, init2[103] = 0;
    init2[104] = 0, init2[105] = 0, init2[106] = 0, init2[107] = 0, init2[108] = 0, init2[109] = 0, init2[110] = 0, init2[111] = 0;
    init2[112] = 0, init2[113] = 0, init2[114] = 0, init2[115] = 0, init2[116] = 0, init2[117] = 0, init2[118] = 0, init2[119] = 0;
    init2[120] = 0, init2[121] = 0, init2[122] = 0, init2[123] = 0, init2[124] = 0, init2[125] = 0, init2[126] = 0, init2[127] = 0;
    init2[128] = 0, init2[129] = 0, init2[130] = 0, init2[131] = 0, init2[132] = 0, init2[133] = 0, init2[134] = 0, init2[135] = 0;

    return 0;

}

