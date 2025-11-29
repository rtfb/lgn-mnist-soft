int do_inference(char *inp, char *out, int out_sz) {
	char l1[4000] = {
	inp[137] & !inp[53],
	!(inp[98] ^ inp[85]),
	!(inp[117] | inp[88]),
	inp[88] ^ inp[197],
	!inp[168] | (inp[168] & inp[163]),
	!(inp[39] ^ inp[134]),
	!(inp[38] ^ inp[66]),
	!(inp[147] ^ inp[149]),
	!(inp[186] | inp[63]),
	inp[131],
	!(inp[219] ^ inp[251]),
	inp[138] & !inp[164],
	!(inp[101] | inp[197]),
	!(inp[138] | inp[124]),
	!(inp[153] ^ inp[114]),
	inp[59],
	!(inp[242] | inp[250]),
	inp[102] & !inp[113],
	!(inp[132] ^ inp[166]),
	inp[250] ^ inp[164],
	!(inp[103] ^ inp[54]),
	inp[9],
	!(inp[219] | inp[58]),
	inp[217] | inp[77],
	inp[154] & !inp[173],
	inp[115],
	inp[116] & !inp[137],
	!inp[87] | (inp[87] & inp[52]),
	inp[71] & !inp[151],
	!(inp[55] ^ inp[197]),
	inp[103] ^ inp[107],
	inp[143] ^ inp[213],
	!inp[250] | (inp[250] & inp[132]),
	!(inp[189] | inp[24]),
	inp[247] ^ inp[203],
	!(inp[89] | inp[171]),
	!(inp[36] ^ inp[178]),
	!inp[185] | (inp[135] & inp[185]),
	!inp[76] | (inp[76] & inp[183]),
	inp[39] | inp[55],
	!inp[11] | (inp[92] & inp[11]),
	!(inp[68] ^ inp[80]),
	inp[93] ^ inp[91],
	inp[170] ^ inp[139],
	inp[188] | inp[171],
	inp[231],
	inp[135],
	inp[75] & !inp[20],
	inp[162] ^ inp[180],
	!(inp[90] ^ inp[108]),
	inp[166] & !inp[233],
	inp[134] ^ inp[185],
	!(inp[195] ^ inp[187]),
	inp[63] ^ inp[114],
	inp[68] ^ inp[71],
	inp[251] ^ inp[218],
	!(inp[186] ^ inp[84]),
	!inp[69] | (inp[185] & inp[69]),
	inp[58] ^ inp[52],
	!(inp[120] | inp[76]),
	inp[131] & !inp[118],
	inp[212] ^ inp[227],
	inp[73],
	inp[235],
	!(inp[147] | inp[102]),
	inp[101] | inp[70],
	inp[243] ^ inp[196],
	!(inp[139] & inp[136]),
	!(inp[242] | inp[192]),
	!(inp[24] ^ inp[72]),
	!(inp[119] | inp[74]),
	!(inp[244] | inp[113]),
	inp[196] ^ inp[247],
	!(inp[24] ^ inp[27]),
	inp[56] & !inp[141],
	!(inp[221] ^ inp[36]),
	inp[129] ^ inp[131],
	inp[132] ^ inp[100],
	!(inp[53] ^ inp[39]),
	inp[232] | inp[165],
	inp[87] ^ inp[230],
	!(inp[36] ^ inp[68]),
	inp[103] ^ inp[184],
	inp[24] ^ inp[212],
	inp[198] & !inp[136],
	!(inp[116] ^ inp[130]),
	!inp[123] | (inp[123] & inp[30]),
	inp[123] ^ inp[137],
	!inp[151] | (inp[151] & inp[157]),
	!(inp[198] | inp[212]),
	!inp[73],
	inp[236] | inp[163],
	inp[6] ^ inp[37],
	inp[45] & !inp[41],
	inp[91] & inp[139],
	inp[89] & !inp[211],
	inp[9] & !inp[170],
	!(inp[107] | inp[89]),
	inp[219],
	0,
	!inp[153],
	inp[41],
	inp[93] & !inp[165],
	!(inp[99] ^ inp[97]),
	!inp[181] | (inp[131] & inp[181]),
	!(inp[67] ^ inp[148]),
	!(inp[34] | inp[91]),
	inp[247] | inp[183],
	inp[104] ^ inp[87],
	inp[7] | inp[155],
	inp[52] ^ inp[155],
	!(inp[119] | inp[228]),
	!inp[228] | (inp[228] & inp[23]),
	inp[23] ^ inp[227],
	!(inp[198] ^ inp[105]),
	!inp[122],
	!inp[90] | (inp[78] & inp[90]),
	!inp[196] | (inp[147] & inp[196]),
	!(inp[241] | inp[253]),
	!(inp[166] ^ inp[132]),
	!(inp[91] ^ inp[93]),
	inp[71] | inp[40],
	inp[24] & !inp[21],
	!inp[252] | (inp[252] & inp[41]),
	inp[164] ^ inp[153],
	inp[21],
	!inp[219],
	inp[249] ^ inp[203],
	!(inp[120] ^ inp[166]),
	inp[91] & !inp[26],
	!inp[180],
	!(inp[180] | inp[143]),
	inp[163] ^ inp[122],
	inp[65] | inp[90],
	!inp[214] | (inp[214] & inp[120]),
	!inp[245] | (inp[172] & inp[245]),
	inp[103] ^ inp[116],
	inp[221] & !inp[86],
	inp[24] & inp[71],
	inp[110] | inp[87],
	!(inp[121] ^ inp[89]),
	inp[170] & !inp[22],
	inp[104] ^ inp[142],
	!inp[6],
	!(inp[124] ^ inp[119]),
	inp[183] | inp[116],
	!(inp[248] ^ inp[216]),
	!inp[233],
	inp[131] | inp[199],
	inp[125],
	inp[249],
	!(inp[50] | inp[94]),
	inp[109] ^ inp[111],
	!(inp[88] ^ inp[41]),
	inp[99] | inp[70],
	inp[119] | inp[166],
	inp[61] ^ inp[27],
	inp[211] ^ inp[233],
	inp[157] | inp[155],
	inp[83] ^ inp[243],
	inp[181] & !inp[187],
	inp[168] & !inp[52],
	inp[81] | inp[226],
	inp[71] ^ inp[24],
	!(inp[215] ^ inp[230]),
	inp[205] ^ inp[235],
	inp[136] ^ inp[117],
	!(inp[170] ^ inp[247]),
	inp[146] & !inp[195],
	inp[118] | inp[131],
	inp[61] | inp[66],
	!(inp[28] | inp[29]),
	inp[151] ^ inp[119],
	inp[200] & !inp[229],
	!(inp[205] | inp[164]),
	inp[197] | inp[115],
	!inp[59] | (inp[59] & inp[84]),
	!(inp[68] ^ inp[201]),
	inp[158] | inp[198],
	!(inp[180] ^ inp[182]),
	!(inp[60] | inp[155]),
	!(inp[39] ^ inp[140]),
	!(inp[51] ^ inp[221]),
	!(inp[119] ^ inp[90]),
	inp[178],
	!(inp[117] ^ inp[103]),
	!(inp[163] | inp[99]),
	!(inp[35] ^ inp[50]),
	!inp[12],
	inp[9] | inp[50],
	!(inp[143] ^ inp[157]),
	!inp[104] | (inp[223] & inp[104]),
	!inp[99] | (inp[99] & inp[86]),
	!(inp[167] ^ inp[243]),
	inp[166],
	inp[140] ^ inp[89],
	!(inp[152] | inp[120]),
	!(inp[88] ^ inp[77]),
	!(inp[125] | inp[46]),
	!inp[20],
	!(inp[153] ^ inp[82]),
	!(inp[182] ^ inp[148]),
	inp[84] & !inp[71],
	inp[42] & !inp[138],
	inp[120] ^ inp[73],
	!(inp[156] | inp[180]),
	inp[215] | inp[200],
	inp[83] & !inp[177],
	inp[177] | inp[157],
	!inp[86] | (inp[68] & inp[86]),
	inp[235] ^ inp[34],
	inp[137],
	!(inp[204] | inp[76]),
	inp[114] | inp[100],
	!inp[126],
	inp[27] | inp[194],
	!(inp[98] ^ inp[99]),
	inp[228] | inp[40],
	inp[238] | inp[194],
	!(inp[108] | inp[141]),
	inp[209] ^ inp[163],
	!(inp[104] | inp[184]),
	!inp[120] | (inp[120] & inp[118]),
	!inp[43] | (inp[43] & inp[106]),
	inp[167] | inp[183],
	!inp[138],
	inp[163] & !inp[119],
	!(inp[244] ^ inp[165]),
	!inp[130] | (inp[130] & inp[98]),
	inp[106] & !inp[115],
	!(inp[115] | inp[251]),
	inp[168] & !inp[172],
	!inp[181] | (inp[105] & inp[181]),
	!(inp[203] ^ inp[180]),
	inp[6] | inp[27],
	!(inp[119] ^ inp[148]),
	!(inp[182] ^ inp[135]),
	!(inp[164] | inp[103]),
	inp[78] | inp[54],
	!(inp[134] | inp[178]),
	inp[43] ^ inp[73],
	!(inp[248] ^ inp[69]),
	!inp[21] | (inp[243] & inp[21]),
	!(inp[34] ^ inp[66]),
	!(inp[69] ^ inp[36]),
	!(inp[42] | inp[213]),
	!(inp[131] ^ inp[216]),
	inp[88] ^ inp[41],
	!(inp[63] | inp[46]),
	!inp[248],
	inp[137] ^ inp[22],
	inp[178] | inp[27],
	inp[197] ^ inp[51],
	!(inp[34] | inp[243]),
	inp[117] & inp[184],
	inp[104] ^ inp[166],
	inp[121] ^ inp[99],
	!(inp[12] ^ inp[63]),
	!(inp[249] | inp[45]),
	inp[79] | inp[87],
	!(inp[168] ^ inp[110]),
	!(inp[107] & inp[106]),
	inp[148] & !inp[150],
	!(inp[153] ^ inp[27]),
	inp[121] & !inp[179],
	!(inp[83] | inp[120]),
	!(inp[30] ^ inp[79]),
	!(inp[115] | inp[87]),
	inp[142] ^ inp[24],
	!(inp[179] & inp[109]),
	inp[73] & !inp[151],
	inp[181] ^ inp[179],
	!(inp[108] ^ inp[59]),
	!inp[57] | (inp[57] & inp[131]),
	inp[214] & !inp[87],
	inp[218] ^ inp[181],
	!inp[71] | (inp[181] & inp[71]),
	inp[60] ^ inp[89],
	!(inp[135] | inp[54]),
	inp[85],
	inp[252] ^ inp[6],
	inp[123] ^ inp[186],
	inp[117] ^ inp[130],
	inp[83] ^ inp[109],
	!inp[54],
	!(inp[110] ^ inp[113]),
	inp[156] | inp[92],
	inp[232] ^ inp[211],
	!(inp[70] ^ inp[88]),
	inp[227] & !inp[40],
	inp[176] ^ inp[202],
	!(inp[196] ^ inp[130]),
	!(inp[90] | inp[58]),
	inp[59] | inp[75],
	!(inp[89] | inp[110]),
	inp[73] & !inp[21],
	inp[91] ^ inp[78],
	inp[219],
	!(inp[159] | inp[186]),
	inp[102],
	inp[7] | inp[214],
	!(inp[250] ^ inp[202]),
	inp[90] | inp[70],
	!(inp[170] ^ inp[167]),
	inp[245] & !inp[25],
	!(inp[41] ^ inp[88]),
	inp[152] ^ inp[183],
	!(inp[231] ^ inp[216]),
	inp[212] | inp[58],
	inp[158] & !inp[87],
	!inp[85],
	!inp[60],
	!inp[40],
	!(inp[136] ^ inp[249]),
	inp[9],
	!inp[182] | (inp[110] & inp[182]),
	!(inp[164] | inp[181]),
	!(inp[165] ^ inp[202]),
	inp[149] ^ inp[151],
	!(inp[249] ^ inp[100]),
	inp[82] ^ inp[105],
	inp[57] & !inp[219],
	inp[197] ^ inp[245],
	!(inp[79] ^ inp[47]),
	!(inp[126] | inp[127]),
	inp[11] ^ inp[206],
	inp[217] ^ inp[211],
	inp[186] | inp[53],
	!(inp[214] & inp[134]),
	!(inp[230] | inp[195]),
	inp[249] ^ inp[236],
	inp[102] | inp[79],
	inp[137] ^ inp[154],
	!(inp[55] ^ inp[53]),
	!(inp[55] ^ inp[39]),
	!(inp[125] ^ inp[134]),
	!inp[135],
	inp[26] | inp[108],
	!(inp[52] ^ inp[106]),
	!(inp[60] | inp[52]),
	!(inp[54] ^ inp[7]),
	inp[197] | inp[94],
	!(inp[107] ^ inp[139]),
	!inp[171] | (inp[171] & inp[104]),
	!(inp[155] | inp[12]),
	inp[235] ^ inp[89],
	inp[76] | inp[211],
	!(inp[60] ^ inp[72]),
	!(inp[117] | inp[102]),
	inp[119] & !inp[60],
	!(inp[223] ^ inp[253]),
	!inp[130] | (inp[135] & inp[130]),
	inp[198] ^ inp[216],
	inp[142],
	inp[6] | inp[50],
	inp[199] & !inp[245],
	inp[135] | inp[150],
	!(inp[185] ^ inp[188]),
	!(inp[146] ^ inp[148]),
	inp[228] & !inp[30],
	!(inp[172] | inp[198]),
	!(inp[184] ^ inp[230]),
	inp[156] & inp[72],
	!(inp[87] ^ inp[72]),
	inp[84] ^ inp[181],
	!(inp[141] ^ inp[19]),
	inp[135],
	inp[219] ^ inp[173],
	inp[163] ^ inp[184],
	!inp[134],
	!inp[51],
	inp[88] ^ inp[119],
	inp[105] ^ inp[169],
	!inp[113],
	!inp[165],
	inp[129] ^ inp[137],
	!(inp[214] ^ inp[229]),
	!(inp[28] | inp[92]),
	!(inp[125] & inp[114]),
	!inp[140],
	inp[75] | inp[76],
	!(inp[78] ^ inp[206]),
	inp[39] | inp[59],
	!(inp[111] ^ inp[109]),
	!(inp[197] ^ inp[85]),
	!inp[104] | (inp[104] & inp[135]),
	inp[90] ^ inp[122],
	inp[68] & !inp[211],
	!inp[135] | (inp[135] & inp[139]),
	!(inp[242] | inp[22]),
	!(inp[101] | inp[92]),
	!(inp[225] ^ inp[246]),
	inp[181] ^ inp[85],
	inp[126] ^ inp[125],
	!(inp[172] | inp[179]),
	!(inp[177] | inp[26]),
	!(inp[110] ^ inp[108]),
	!(inp[180] | inp[217]),
	!inp[71] | (inp[71] & inp[227]),
	!(inp[135] | inp[251]),
	inp[58] & !inp[200],
	!(inp[209] ^ inp[143]),
	inp[187] ^ inp[232],
	!inp[198] | (inp[198] & inp[220]),
	!(inp[131] ^ inp[133]),
	!inp[75] | (inp[220] & inp[75]),
	inp[149] ^ inp[117],
	inp[91] ^ inp[56],
	inp[110] & !inp[231],
	inp[221] ^ inp[249],
	inp[57] & !inp[157],
	!(inp[67] ^ inp[117]),
	inp[23] | inp[93],
	!(inp[77] ^ inp[78]),
	inp[73] ^ inp[88],
	!(inp[21] ^ inp[85]),
	inp[230] & !inp[178],
	inp[134] & !inp[13],
	!(inp[234] | inp[196]),
	inp[197],
	inp[146] ^ inp[163],
	!(inp[46] ^ inp[236]),
	!(inp[233] | inp[211]),
	!(inp[155] | inp[177]),
	!(inp[97] ^ inp[77]),
	!inp[143],
	!inp[89] | (inp[89] & inp[27]),
	!(inp[167] ^ inp[99]),
	!(inp[182] ^ inp[164]),
	!(inp[123] ^ inp[140]),
	inp[46] ^ inp[29],
	inp[249],
	inp[130],
	!(inp[132] | inp[10]),
	inp[136] | inp[197],
	!(inp[206] ^ inp[236]),
	!inp[30] | (inp[30] & inp[92]),
	inp[78] | inp[231],
	inp[106] & !inp[61],
	inp[85] | inp[93],
	!inp[78],
	inp[166] | inp[24],
	!(inp[51] ^ inp[229]),
	!(inp[142] | inp[132]),
	!inp[103] | (inp[103] & inp[84]),
	!(inp[109] | inp[136]),
	inp[153] ^ inp[122],
	!(inp[151] ^ inp[182]),
	!inp[75],
	!(inp[148] ^ inp[134]),
	inp[249] ^ inp[215],
	inp[57] & !inp[155],
	!(inp[88] | inp[9]),
	inp[25] ^ inp[28],
	!(inp[51] ^ inp[11]),
	!(inp[53] | inp[38]),
	!(inp[52] ^ inp[83]),
	inp[150] ^ inp[98],
	!inp[143],
	!inp[122],
	inp[115] & !inp[188],
	inp[57] ^ inp[41],
	!(inp[140] ^ inp[141]),
	!(inp[204] ^ inp[236]),
	inp[178] | inp[231],
	inp[133] | inp[116],
	!(inp[231] | inp[94]),
	inp[135] ^ inp[101],
	inp[52] | inp[91],
	inp[197] ^ inp[228],
	inp[92] | inp[105],
	!(inp[98] ^ inp[87]),
	inp[56] | inp[72],
	inp[235],
	!inp[51] | (inp[35] & inp[51]),
	inp[119] ^ inp[133],
	!inp[153] | (inp[153] & inp[59]),
	!(inp[122] ^ inp[156]),
	inp[72] | inp[40],
	inp[88] ^ inp[132],
	inp[106] ^ inp[108],
	inp[99] | inp[150],
	inp[100] ^ inp[105],
	!inp[56] | (inp[8] & inp[56]),
	inp[152] | inp[183],
	inp[235],
	inp[125] | inp[155],
	!inp[167],
	!(inp[182] ^ inp[185]),
	inp[133],
	inp[9] ^ inp[12],
	!(inp[213] ^ inp[244]),
	inp[164] ^ inp[182],
	!(inp[58] | inp[71]),
	!(inp[20] | inp[179]),
	inp[217] ^ inp[249],
	!(inp[155] | inp[99]),
	inp[116],
	inp[45] ^ inp[76],
	!(inp[50] ^ inp[248]),
	!(inp[109] | inp[39]),
	inp[181] & !inp[107],
	inp[117] | inp[34],
	inp[248],
	inp[248] & !inp[214],
	inp[7] ^ inp[214],
	inp[135] ^ inp[166],
	!(inp[76] ^ inp[120]),
	inp[74] & !inp[56],
	inp[165] | inp[178],
	inp[97] | inp[247],
	inp[87] ^ inp[100],
	!(inp[98] ^ inp[183]),
	inp[148] ^ inp[130],
	!(inp[9] ^ inp[148]),
	!(inp[125] | inp[102]),
	!(inp[108] ^ inp[90]),
	inp[121] ^ inp[250],
	inp[99] ^ inp[117],
	inp[231] | inp[231],
	!(inp[50] | inp[20]),
	inp[170] & !inp[213],
	inp[30],
	!(inp[218] ^ inp[183]),
	!inp[72] | (inp[72] & inp[47]),
	!(inp[56] ^ inp[25]),
	!(inp[181] ^ inp[85]),
	!(inp[170] ^ inp[227]),
	!(inp[180] | inp[195]),
	!(inp[214] ^ inp[22]),
	inp[185] ^ inp[235],
	inp[75] ^ inp[106],
	!inp[169],
	!(inp[235] | inp[212]),
	!(inp[228] ^ inp[198]),
	!(inp[108] | inp[110]),
	!inp[189],
	inp[185] ^ inp[150],
	inp[162] ^ inp[104],
	!(inp[99] ^ inp[101]),
	!(inp[140] | inp[122]),
	inp[217] ^ inp[249],
	!(inp[236] | inp[201]),
	!(inp[251] | inp[51]),
	inp[46] | inp[235],
	inp[20] | inp[186],
	!inp[86],
	!inp[41],
	!(inp[120] | inp[245]),
	inp[151] | inp[93],
	!(inp[213] ^ inp[245]),
	inp[53] ^ inp[92],
	!(inp[85] ^ inp[36]),
	inp[236],
	inp[86],
	!inp[105],
	!(inp[140] ^ inp[126]),
	inp[188] | inp[149],
	inp[103] ^ inp[116],
	inp[149] ^ inp[183],
	inp[246] | inp[214],
	inp[51] | inp[194],
	inp[210] | inp[37],
	!(inp[71] ^ inp[170]),
	inp[143] ^ inp[27],
	!(inp[91] ^ inp[102]),
	inp[168] & !inp[177],
	inp[93],
	!inp[56] | (inp[101] & inp[56]),
	inp[141] ^ inp[139],
	inp[59] ^ inp[55],
	!inp[180],
	!(inp[120] | inp[88]),
	inp[120] & !inp[172],
	inp[133] & !inp[107],
	!inp[148] | (inp[98] & inp[148]),
	inp[244] | inp[231],
	inp[242] | inp[8],
	inp[199] ^ inp[186],
	!(inp[165] ^ inp[167]),
	!(inp[155] | inp[86]),
	inp[103] ^ inp[117],
	!(inp[202] ^ inp[51]),
	!(inp[121] ^ inp[153]),
	inp[217],
	inp[59] & !inp[106],
	inp[142] | inp[169],
	!inp[179],
	inp[168] | inp[137],
	inp[141],
	!(inp[67] ^ inp[35]),
	!(inp[250] | inp[167]),
	inp[36] ^ inp[104],
	!(inp[38] | inp[187]),
	inp[148] ^ inp[119],
	!(inp[22] ^ inp[53]),
	!inp[182],
	inp[59] ^ inp[235],
	inp[223] | inp[8],
	inp[154] & !inp[221],
	!(inp[91] | inp[183]),
	!(inp[175] | inp[162]),
	!(inp[106] | inp[138]),
	!inp[117] | (inp[117] & inp[151]),
	!(inp[95] | inp[11]),
	!inp[58] | (inp[121] & inp[58]),
	!(inp[35] | inp[132]),
	inp[106] ^ inp[108],
	inp[115] ^ inp[116],
	!inp[44] | (inp[70] & inp[44]),
	!(inp[105] ^ inp[43]),
	!(inp[109] & inp[110]),
	inp[159] | inp[183],
	!(inp[100] ^ inp[102]),
	!(inp[68] | inp[120]),
	!inp[86] | (inp[22] & inp[86]),
	!(inp[163] ^ inp[109]),
	!inp[151] | (inp[151] & inp[86]),
	!(inp[211] | inp[104]),
	!inp[248] | (inp[248] & inp[169]),
	inp[67] | inp[184],
	inp[150],
	!(inp[42] ^ inp[86]),
	!(inp[249] ^ inp[236]),
	inp[133] | inp[151],
	inp[134] ^ inp[235],
	!(inp[24] ^ inp[196]),
	0,
	inp[151] ^ inp[122],
	!(inp[245] | inp[247]),
	!(inp[6] ^ inp[188]),
	inp[10] | inp[12],
	!inp[153] | (inp[179] & inp[153]),
	inp[41] ^ inp[71],
	!inp[40] | (inp[10] & inp[40]),
	inp[69] | inp[91],
	inp[26] ^ inp[59],
	inp[165] ^ inp[213],
	!(inp[105] | inp[162]),
	inp[38] ^ inp[247],
	!inp[198] | (inp[198] & inp[210]),
	!inp[120] | (inp[162] & inp[120]),
	inp[219] | inp[204],
	!(inp[143] | inp[195]),
	inp[91] ^ inp[77],
	!(inp[89] ^ inp[104]),
	inp[140] ^ inp[87],
	inp[57] & !inp[213],
	inp[102] ^ inp[129],
	inp[129] ^ inp[101],
	!(inp[136] ^ inp[70]),
	!inp[57] | (inp[54] & inp[57]),
	inp[30] ^ inp[215],
	!inp[165],
	!inp[250] | (inp[250] & inp[188]),
	inp[170],
	inp[162] ^ inp[165],
	inp[159] ^ inp[213],
	!inp[244],
	inp[95] | inp[83],
	!inp[79],
	!inp[54] | (inp[140] & inp[54]),
	!(inp[221] ^ inp[154]),
	!inp[140] | (inp[140] & inp[60]),
	inp[221] ^ inp[69],
	!inp[115] | (inp[195] & inp[115]),
	inp[168] ^ inp[248],
	inp[233] ^ inp[231],
	!(inp[26] | inp[29]),
	inp[153] & !inp[8],
	inp[138] ^ inp[187],
	inp[115] & !inp[120],
	inp[154] & !inp[196],
	!(inp[154] ^ inp[24]),
	!(inp[198] ^ inp[245]),
	inp[143] ^ inp[196],
	inp[134] ^ inp[103],
	!(inp[187] | inp[225]),
	!(inp[75] ^ inp[106]),
	!(inp[42] ^ inp[123]),
	inp[9] & !inp[232],
	inp[62] ^ inp[44],
	!inp[157] | (inp[157] & inp[86]),
	inp[244] | inp[24],
	inp[106] | inp[67],
	!inp[149],
	!(inp[183] | inp[180]),
	inp[84] | inp[108],
	inp[167],
	!(inp[152] ^ inp[199]),
	!(inp[232] ^ inp[183]),
	inp[163] | inp[157],
	inp[28],
	inp[102],
	inp[170] ^ inp[250],
	!(inp[25] ^ inp[44]),
	!(inp[252] ^ inp[149]),
	!(inp[30] ^ inp[79]),
	!(inp[97] ^ inp[99]),
	!(inp[202] ^ inp[234]),
	!(inp[250] ^ inp[70]),
	inp[154] & !inp[77],
	!(inp[95] | inp[45]),
	!(inp[195] | inp[198]),
	inp[73] ^ inp[75],
	!(inp[109] | inp[124]),
	inp[86] & !inp[41],
	!(inp[225] | inp[105]),
	!(inp[132] | inp[143]),
	!inp[36] | (inp[103] & inp[36]),
	inp[156] | inp[230],
	inp[165] | inp[167],
	inp[204] ^ inp[140],
	inp[19] ^ inp[101],
	!(inp[77] ^ inp[90]),
	!(inp[130] ^ inp[57]),
	inp[165] ^ inp[69],
	!(inp[167] | inp[237]),
	!(inp[119] ^ inp[232]),
	!(inp[93] ^ inp[73]),
	inp[210] | inp[61],
	!inp[165] | (inp[165] & inp[169]),
	inp[136] ^ inp[167],
	inp[184] & !inp[54],
	!(inp[85] ^ inp[39]),
	!inp[89] | (inp[89] & inp[10]),
	!(inp[164] | inp[181]),
	!(inp[248] | inp[136]),
	inp[95] | inp[79],
	inp[173] ^ inp[205],
	inp[119] & !inp[186],
	inp[121] & inp[122],
	!(inp[183] ^ inp[77]),
	inp[98] | inp[101],
	!(inp[98] | inp[38]),
	!(inp[156] | inp[100]),
	inp[110] ^ inp[92],
	inp[25] ^ inp[93],
	inp[68] ^ inp[86],
	!(inp[231] | inp[228]),
	inp[175] ^ inp[218],
	inp[31] | inp[76],
	!inp[181],
	inp[242] ^ inp[248],
	!(inp[82] | inp[158]),
	!inp[234],
	inp[97] ^ inp[103],
	!(inp[117] ^ inp[131]),
	inp[153] & !inp[237],
	!(inp[237] ^ inp[82]),
	inp[137] & !inp[232],
	!inp[193],
	inp[57] & !inp[37],
	!inp[181],
	!(inp[135] ^ inp[102]),
	!(inp[124] | inp[91]),
	inp[138] & !inp[204],
	!(inp[104] ^ inp[74]),
	inp[193] | inp[47],
	inp[185] | inp[146],
	!(inp[56] | inp[72]),
	!(inp[28] ^ inp[194]),
	!(inp[107] ^ inp[124]),
	inp[186] & !inp[235],
	inp[23] ^ inp[186],
	!inp[70] | (inp[70] & inp[68]),
	inp[137] & !inp[214],
	inp[121] & !inp[219],
	!inp[57] | (inp[152] & inp[57]),
	inp[104] ^ inp[74],
	inp[154] & !inp[59],
	!(inp[195] | inp[135]),
	inp[177] | inp[222],
	inp[167] ^ inp[108],
	inp[180] ^ inp[150],
	inp[165] ^ inp[101],
	!inp[146] | (inp[146] & inp[120]),
	inp[219] | inp[204],
	!(inp[38] ^ inp[66]),
	!(inp[116] | inp[118]),
	inp[105] | inp[106],
	inp[110] ^ inp[109],
	inp[177] ^ inp[190],
	inp[20] ^ inp[90],
	inp[196] ^ inp[165],
	inp[217] & !inp[249],
	!(inp[163] | inp[27]),
	inp[46] ^ inp[234],
	inp[90] | inp[69],
	inp[52] ^ inp[58],
	inp[170],
	!(inp[197] ^ inp[85]),
	inp[61] | inp[146],
	!(inp[108] | inp[93]),
	!(inp[127] ^ inp[43]),
	inp[68] ^ inp[105],
	inp[165],
	!(inp[69] ^ inp[170]),
	!(inp[245] | inp[250]),
	inp[179] | inp[180],
	inp[182],
	inp[155] | inp[198],
	inp[55] | inp[45],
	!inp[19],
	!(inp[216] ^ inp[195]),
	inp[189] | inp[245],
	!(inp[161] | inp[223]),
	!(inp[31] ^ inp[74]),
	inp[196] ^ inp[204],
	inp[102] ^ inp[84],
	inp[91] | inp[164],
	!inp[84] | (inp[84] & inp[137]),
	!inp[116] | (inp[116] & inp[183]),
	inp[150] | inp[180],
	!(inp[163] | inp[215]),
	!(inp[131] ^ inp[167]),
	inp[186] & !inp[197],
	inp[74] & !inp[125],
	inp[8],
	!(inp[195] | inp[38]),
	!(inp[91] ^ inp[93]),
	!(inp[195] | inp[4]),
	inp[122] & !inp[170],
	inp[91] ^ inp[109],
	!(inp[91] ^ inp[93]),
	!(inp[7] ^ inp[219]),
	inp[113] | inp[114],
	!(inp[34] ^ inp[104]),
	inp[118] & !inp[24],
	!inp[89] | (inp[89] & inp[135]),
	inp[58] ^ inp[29],
	!inp[120] | (inp[120] & inp[168]),
	inp[72] | inp[93],
	inp[71] ^ inp[212],
	inp[9] ^ inp[63],
	!(inp[148] ^ inp[183]),
	inp[207] | inp[26],
	!inp[183] | (inp[250] & inp[183]),
	!(inp[130] ^ inp[180]),
	!inp[103] | (inp[170] & inp[103]),
	inp[253] | inp[202],
	inp[115],
	!(inp[118] ^ inp[113]),
	!(inp[27] ^ inp[24]),
	!(inp[199] ^ inp[89]),
	inp[213] & !inp[156],
	inp[105] & inp[118],
	!(inp[195] ^ inp[250]),
	!inp[41],
	inp[70] ^ inp[22],
	!(inp[86] ^ inp[72]),
	inp[228] | inp[199],
	!(inp[6] | inp[120]),
	!(inp[103] ^ inp[56]),
	!(inp[105] ^ inp[26]),
	!(inp[201] | inp[164]),
	inp[230],
	inp[60] | inp[86],
	inp[87] ^ inp[24],
	!(inp[209] | inp[109]),
	!(inp[41] | inp[56]),
	!inp[86],
	!(inp[19] ^ inp[102]),
	!(inp[221] ^ inp[212]),
	!(inp[75] ^ inp[42]),
	!(inp[155] | inp[162]),
	inp[61] | inp[40],
	inp[94] & !inp[243],
	inp[85] | inp[196],
	inp[228] ^ inp[56],
	!(inp[118] ^ inp[173]),
	!inp[126],
	inp[194] | inp[179],
	!(inp[70] ^ inp[201]),
	inp[41] | inp[9],
	!(inp[103] ^ inp[70]),
	inp[73] | inp[94],
	!inp[213] | (inp[213] & inp[137]),
	!inp[76],
	inp[86],
	!(inp[219] | inp[132]),
	!(inp[158] ^ inp[108]),
	inp[164] ^ inp[135],
	!(inp[104] | inp[180]),
	!(inp[44] ^ inp[42]),
	!(inp[132] & inp[132]),
	!(inp[198] ^ inp[228]),
	!inp[168] | (inp[165] & inp[168]),
	!(inp[148] & inp[54]),
	inp[148] ^ inp[150],
	inp[39] & !inp[227],
	inp[40] ^ inp[71],
	!(inp[193] | inp[242]),
	!(inp[147] | inp[154]),
	inp[157] ^ inp[227],
	inp[154] ^ inp[202],
	inp[233] & !inp[166],
	!(inp[115] ^ inp[21]),
	!(inp[63] ^ inp[63]),
	!(inp[97] ^ inp[98]),
	!(inp[181] | inp[205]),
	inp[139] | inp[99],
	inp[141] ^ inp[7],
	inp[130] & !inp[188],
	inp[126] & !inp[138],
	!(inp[115] | inp[243]),
	!inp[211] | (inp[232] & inp[211]),
	!(inp[87] ^ inp[243]),
	!(inp[190] ^ inp[65]),
	!inp[188] | (inp[188] & inp[37]),
	inp[245],
	inp[54] & !inp[182],
	inp[115] ^ inp[113],
	inp[183] ^ inp[218],
	inp[23] ^ inp[54],
	!(inp[216] ^ inp[247]),
	!(inp[152] ^ inp[179]),
	inp[104] & !inp[151],
	!(inp[95] | inp[104]),
	inp[92] ^ inp[102],
	inp[193] ^ inp[157],
	inp[9],
	inp[152] & !inp[164],
	!inp[214] | (inp[214] & inp[19]),
	inp[158],
	inp[107] & inp[121],
	inp[151] ^ inp[187],
	!inp[170],
	inp[41] & !inp[54],
	!inp[169] | (inp[232] & inp[169]),
	inp[85] ^ inp[21],
	!(inp[162] ^ inp[164]),
	inp[118] & !inp[162],
	!(inp[179] | inp[104]),
	!inp[121] | (inp[178] & inp[121]),
	!(inp[227] ^ inp[84]),
	!(inp[28] | inp[194]),
	!(inp[34] | inp[78]),
	inp[127] & !inp[219],
	inp[56] & !inp[141],
	inp[52] ^ inp[81],
	inp[84] ^ inp[71],
	!(inp[116] | inp[115]),
	!(inp[69] ^ inp[38]),
	!inp[167],
	inp[90] & !inp[196],
	!inp[218] | (inp[218] & inp[38]),
	!(inp[133] ^ inp[154]),
	inp[70],
	!(inp[164] ^ inp[183]),
	!(inp[185] | inp[131]),
	inp[171] ^ inp[125],
	inp[55] & !inp[168],
	!(inp[191] ^ inp[23]),
	!inp[221],
	!(inp[233] ^ inp[201]),
	!(inp[152] ^ inp[8]),
	inp[77] | inp[168],
	inp[118] | inp[222],
	inp[27] | inp[7],
	inp[7] ^ inp[21],
	inp[59] & !inp[141],
	inp[164] & !inp[246],
	!(inp[182] ^ inp[199]),
	inp[53] & !inp[219],
	inp[121],
	inp[167] & inp[166],
	!(inp[118] ^ inp[38]),
	!inp[37] | (inp[37] & inp[171]),
	!inp[103],
	inp[173] ^ inp[196],
	inp[92] & !inp[136],
	inp[98] & !inp[35],
	inp[94] | inp[72],
	!(inp[138] ^ inp[156]),
	!(inp[91] ^ inp[71]),
	!(inp[190] | inp[8]),
	inp[60] | inp[175],
	!inp[135],
	inp[212],
	!(inp[219] | inp[251]),
	inp[249] & !inp[167],
	inp[142] ^ inp[123],
	!(inp[138] ^ inp[117]),
	inp[138] | inp[10],
	!(inp[44] | inp[123]),
	inp[60] ^ inp[130],
	!inp[89],
	!(inp[87] | inp[157]),
	inp[103] | inp[99],
	!inp[9],
	inp[8] | inp[28],
	!(inp[79] ^ inp[124]),
	!(inp[133] | inp[20]),
	inp[36] & !inp[67],
	!(inp[164] | inp[211]),
	inp[137] ^ inp[55],
	inp[231] ^ inp[136],
	!(inp[178] ^ inp[196]),
	inp[197] | inp[173],
	!(inp[132] ^ inp[10]),
	!(inp[71] ^ inp[74]),
	inp[59] ^ inp[90],
	inp[231] ^ inp[250],
	inp[157] | inp[35],
	!inp[168] | (inp[69] & inp[168]),
	inp[99] ^ inp[97],
	!(inp[133] | inp[78]),
	inp[150] | inp[19],
	!(inp[87] ^ inp[57]),
	inp[186],
	!inp[61] | (inp[143] & inp[61]),
	inp[163] ^ inp[165],
	inp[47] | inp[63],
	inp[8] ^ inp[34],
	!inp[172] | (inp[210] & inp[172]),
	!(inp[78] | inp[83]),
	inp[242] | inp[80],
	inp[124] | inp[110],
	inp[197] | inp[161],
	!inp[47],
	!(inp[88] ^ inp[90]),
	inp[40] & !inp[45],
	!(inp[206] ^ inp[197]),
	inp[120] & !inp[109],
	inp[58] | inp[252],
	inp[75] ^ inp[61],
	!(inp[134] ^ inp[40]),
	!inp[101] | (inp[101] & inp[215]),
	!(inp[101] ^ inp[100]),
	inp[93] | inp[82],
	inp[11] ^ inp[29],
	inp[60] ^ inp[138],
	!(inp[99] | inp[30]),
	0,
	!(inp[217] | inp[201]),
	inp[133] | inp[131],
	inp[89] & !inp[184],
	!inp[92] | (inp[92] & inp[149]),
	inp[179] & inp[109],
	inp[172],
	inp[104] | inp[135],
	!(inp[138] ^ inp[168]),
	inp[95] | inp[107],
	!inp[69],
	!inp[181] | (inp[236] & inp[181]),
	inp[59] | inp[45],
	inp[19] ^ inp[155],
	!inp[46],
	inp[19],
	!(inp[34] | inp[242]),
	inp[198] | inp[142],
	inp[229] & !inp[198],
	inp[57] & !inp[151],
	!(inp[79] | inp[210]),
	inp[63],
	!(inp[170] ^ inp[155]),
	!(inp[171] ^ inp[120]),
	!(inp[72] ^ inp[38]),
	!(inp[58] | inp[42]),
	!(inp[67] | inp[69]),
	inp[194] ^ inp[70],
	!inp[59] | (inp[186] & inp[59]),
	!inp[132],
	!(inp[170] | inp[155]),
	!(inp[215] ^ inp[171]),
	inp[62] | inp[158],
	inp[184] | inp[162],
	inp[83] ^ inp[74],
	inp[42],
	!(inp[187] ^ inp[234]),
	!(inp[241] ^ inp[8]),
	!(inp[126] | inp[214]),
	!inp[104] | (inp[104] & inp[148]),
	inp[146] ^ inp[121],
	inp[8] | inp[6],
	!inp[76] | (inp[76] & inp[29]),
	!inp[139],
	!inp[197] | (inp[197] & inp[188]),
	!(inp[52] | inp[42]),
	inp[229] | inp[53],
	inp[100] ^ inp[47],
	!inp[165],
	!(inp[245] ^ inp[217]),
	inp[119],
	inp[46] ^ inp[79],
	!(inp[24] | inp[158]),
	inp[214] ^ inp[58],
	!(inp[183] ^ inp[135]),
	!inp[182] | (inp[182] & inp[90]),
	inp[68] ^ inp[42],
	!inp[35] | (inp[35] & inp[30]),
	inp[9] | inp[21],
	inp[124] ^ inp[83],
	!(inp[132] ^ inp[147]),
	inp[167],
	inp[139] ^ inp[171],
	inp[52],
	inp[229],
	!(inp[203] ^ inp[248]),
	inp[20] | inp[210],
	!inp[90] | (inp[232] & inp[90]),
	inp[124],
	!(inp[75] ^ inp[77]),
	inp[185] ^ inp[218],
	inp[135] ^ inp[151],
	inp[100] ^ inp[87],
	inp[153] & !inp[102],
	!inp[217] | (inp[214] & inp[217]),
	!(inp[219] ^ inp[58]),
	!(inp[229] | inp[228]),
	!inp[38],
	inp[86] ^ inp[41],
	inp[66] ^ inp[150],
	inp[122] & inp[106],
	!(inp[219] | inp[187]),
	inp[101] & !inp[22],
	!(inp[178] ^ inp[65]),
	inp[46] ^ inp[94],
	!(inp[84] | inp[221]),
	!(inp[149] | inp[229]),
	inp[231] ^ inp[183],
	inp[214] ^ inp[245],
	!(inp[244] ^ inp[124]),
	!(inp[102] ^ inp[87]),
	!(inp[165] ^ inp[148]),
	inp[57] | inp[81],
	inp[100] ^ inp[102],
	!(inp[137] ^ inp[172]),
	inp[38] ^ inp[234],
	inp[45] ^ inp[79],
	!inp[194],
	!(inp[198] ^ inp[244]),
	!inp[130],
	!(inp[203] | inp[29]),
	!(inp[204] ^ inp[193]),
	inp[148] | inp[246],
	!(inp[190] ^ inp[7]),
	!(inp[214] ^ inp[22]),
	!(inp[77] | inp[78]),
	0,
	!(inp[59] & inp[77]),
	inp[151] ^ inp[198],
	!(inp[37] ^ inp[186]),
	!(inp[236] | inp[86]),
	!(inp[186] ^ inp[234]),
	!(inp[78] | inp[53]),
	!(inp[52] | inp[207]),
	!(inp[160] ^ inp[34]),
	!(inp[152] | inp[140]),
	!(inp[182] | inp[104]),
	inp[235] ^ inp[221],
	!(inp[50] | inp[186]),
	!(inp[231] ^ inp[134]),
	!(inp[132] ^ inp[150]),
	!(inp[218] ^ inp[220]),
	!inp[9] | (inp[171] & inp[9]),
	!(inp[197] | inp[127]),
	!inp[133],
	!(inp[216] | inp[189]),
	inp[107] ^ inp[156],
	inp[72],
	inp[71] ^ inp[39],
	inp[20],
	inp[248] | inp[200],
	inp[135],
	!inp[179] | (inp[179] & inp[121]),
	!(inp[148] ^ inp[212]),
	!inp[198] | (inp[198] & inp[12]),
	!(inp[215] ^ inp[162]),
	inp[182] ^ inp[164],
	1,
	inp[134] & !inp[59],
	!(inp[241] | inp[100]),
	!(inp[94] ^ inp[184]),
	!(inp[201] ^ inp[105]),
	!(inp[164] | inp[183]),
	!inp[182],
	inp[38],
	inp[73] ^ inp[88],
	!(inp[119] ^ inp[148]),
	inp[51] ^ inp[155],
	!(inp[155] | inp[243]),
	inp[184] ^ inp[67],
	!(inp[213] ^ inp[61]),
	inp[218] | inp[140],
	inp[44] | inp[39],
	!(inp[107] ^ inp[139]),
	!(inp[119] ^ inp[149]),
	!(inp[51] | inp[213]),
	inp[242] ^ inp[99],
	!(inp[120] ^ inp[104]),
	!(inp[139] ^ inp[141]),
	inp[239] | inp[252],
	inp[76] | inp[40],
	!(inp[249] | inp[236]),
	inp[213] ^ inp[78],
	!inp[188] | (inp[188] & inp[129]),
	inp[91] ^ inp[93],
	inp[100] ^ inp[182],
	inp[10] ^ inp[20],
	inp[38],
	!inp[179] | (inp[179] & inp[47]),
	!(inp[148] | inp[123]),
	inp[231] & !inp[152],
	!(inp[114] | inp[226]),
	inp[90] & !inp[196],
	!inp[87],
	inp[57] ^ inp[141],
	!inp[36] | (inp[36] & inp[215]),
	!(inp[73] ^ inp[38]),
	inp[57] ^ inp[88],
	!inp[51] | (inp[227] & inp[51]),
	inp[23] | inp[187],
	!(inp[40] ^ inp[98]),
	!inp[155] | (inp[210] & inp[155]),
	!inp[56],
	!(inp[73] & inp[214]),
	!(inp[123] ^ inp[76]),
	inp[133] & !inp[136],
	inp[118] | inp[210],
	!(inp[180] | inp[194]),
	inp[67] ^ inp[104],
	!(inp[149] ^ inp[127]),
	!(inp[66] ^ inp[35]),
	inp[111] ^ inp[109],
	!inp[209] | (inp[117] & inp[209]),
	!inp[115] | (inp[115] & inp[192]),
	!(inp[99] | inp[87]),
	!inp[88],
	!(inp[135] | inp[195]),
	inp[166] ^ inp[211],
	!(inp[11] | inp[102]),
	inp[220] ^ inp[250],
	inp[244] ^ inp[83],
	inp[77] ^ inp[139],
	inp[107] ^ inp[118],
	!inp[24] | (inp[24] & inp[42]),
	inp[164],
	inp[168],
	!(inp[60] ^ inp[234]),
	!(inp[55] & inp[69]),
	!(inp[196] ^ inp[204]),
	!(inp[152] ^ inp[121]),
	inp[83] | inp[120],
	inp[149] ^ inp[147],
	!(inp[179] ^ inp[236]),
	!(inp[181] ^ inp[78]),
	!(inp[88] ^ inp[120]),
	inp[197],
	inp[182] & !inp[116],
	inp[186] | inp[85],
	inp[90] | inp[105],
	!inp[122] | (inp[122] & inp[172]),
	!(inp[220] | inp[23]),
	inp[111] ^ inp[109],
	!(inp[188] ^ inp[154]),
	!(inp[78] | inp[77]),
	inp[124] ^ inp[252],
	inp[221] ^ inp[111],
	!(inp[53] ^ inp[134]),
	!inp[120] | (inp[138] & inp[120]),
	1,
	inp[60] ^ inp[166],
	!inp[36],
	!inp[199] | (inp[109] & inp[199]),
	!(inp[84] ^ inp[119]),
	inp[176],
	!(inp[124] | inp[58]),
	!(inp[135] ^ inp[103]),
	inp[30],
	!inp[231] | (inp[231] & inp[76]),
	inp[59] | inp[61],
	inp[148] | inp[220],
	!(inp[157] ^ inp[193]),
	!(inp[190] ^ inp[225]),
	!(inp[147] ^ inp[120]),
	inp[110] | inp[155],
	!inp[70] | (inp[164] & inp[70]),
	inp[231] & !inp[107],
	inp[68] ^ inp[85],
	inp[21] ^ inp[91],
	!inp[218] | (inp[218] & inp[81]),
	!(inp[101] ^ inp[170]),
	!(inp[98] ^ inp[169]),
	!(inp[62] ^ inp[73]),
	inp[138] | inp[197],
	!inp[121] | (inp[181] & inp[121]),
	inp[107] & inp[120],
	inp[230],
	inp[86] ^ inp[120],
	inp[118] & !inp[105],
	!inp[136] | (inp[187] & inp[136]),
	inp[244] ^ inp[195],
	inp[62] | inp[68],
	!inp[26] | (inp[26] & inp[245]),
	!(inp[79] ^ inp[51]),
	inp[19] ^ inp[76],
	!(inp[39] ^ inp[122]),
	!(inp[102] | inp[101]),
	!(inp[88] ^ inp[214]),
	inp[119] ^ inp[113],
	inp[115] | inp[200],
	inp[214] ^ inp[199],
	!inp[183] | (inp[183] & inp[249]),
	!inp[132] | (inp[11] & inp[132]),
	inp[105] ^ inp[107],
	!(inp[93] ^ inp[110]),
	inp[88] ^ inp[119],
	inp[102] ^ inp[70],
	inp[7] ^ inp[143],
	inp[141],
	!inp[104] | (inp[123] & inp[104]),
	inp[92] ^ inp[199],
	!(inp[177] | inp[155]),
	!inp[105],
	inp[169] | inp[57],
	inp[138],
	inp[38] & !inp[19],
	!(inp[218] ^ inp[186]),
	!(inp[159] ^ inp[28]),
	inp[210] | inp[251],
	!(inp[170] | inp[142]),
	inp[5] | inp[127],
	inp[212] ^ inp[71],
	!inp[166] | (inp[214] & inp[166]),
	!(inp[30] ^ inp[93]),
	inp[182] & !inp[78],
	!(inp[153] ^ inp[156]),
	!(inp[140] ^ inp[183]),
	!(inp[198] ^ inp[180]),
	!(inp[76] ^ inp[78]),
	!(inp[229] | inp[227]),
	inp[44] | inp[61],
	inp[246],
	!(inp[150] ^ inp[25]),
	!(inp[76] | inp[90]),
	inp[232] ^ inp[153],
	inp[119] | inp[77],
	inp[105] & !inp[152],
	!(inp[54] | inp[99]),
	inp[239] | inp[107],
	inp[9] & !inp[102],
	!inp[191],
	!(inp[166] | inp[174]),
	inp[73] | inp[58],
	!(inp[167] ^ inp[165]),
	inp[179] ^ inp[197],
	inp[244] | inp[165],
	!(inp[218] ^ inp[212]),
	!(inp[166] ^ inp[164]),
	!inp[56] | (inp[203] & inp[56]),
	!inp[116] | (inp[186] & inp[116]),
	inp[53] ^ inp[101],
	inp[116] ^ inp[150],
	!(inp[134] | inp[170]),
	!(inp[119] ^ inp[150]),
	!inp[179],
	inp[25] ^ inp[58],
	!(inp[104] | inp[133]),
	inp[182] ^ inp[220],
	inp[40] ^ inp[87],
	!(inp[59] | inp[124]),
	!inp[104] | (inp[139] & inp[104]),
	inp[165] ^ inp[8],
	!(inp[216] ^ inp[234]),
	!inp[252],
	inp[85] ^ inp[87],
	inp[81],
	inp[163] | inp[182],
	inp[100],
	inp[85] ^ inp[52],
	inp[89] & !inp[104],
	!(inp[220] | inp[222]),
	!(inp[85] | inp[252]),
	!(inp[159] | inp[89]),
	!(inp[187] | inp[157]),
	!(inp[178] ^ inp[107]),
	inp[185],
	inp[36] ^ inp[235],
	1,
	!(inp[134] | inp[150]),
	!inp[74] | (inp[74] & inp[46]),
	!inp[50] | (inp[110] & inp[50]),
	!inp[42] | (inp[248] & inp[42]),
	inp[74] & !inp[61],
	inp[185] ^ inp[211],
	!(inp[70] ^ inp[23]),
	!inp[74] | (inp[74] & inp[251]),
	!inp[149] | (inp[53] & inp[149]),
	!(inp[183] ^ inp[165]),
	inp[179] & inp[30],
	inp[103] ^ inp[117],
	!inp[245],
	inp[99] | inp[248],
	inp[181] ^ inp[230],
	!(inp[58] ^ inp[89]),
	!(inp[177] | inp[67]),
	!inp[182] | (inp[57] & inp[182]),
	!(inp[78] ^ inp[104]),
	inp[89] ^ inp[107],
	!(inp[149] | inp[244]),
	!(inp[110] | inp[85]),
	!(inp[206] ^ inp[174]),
	!inp[41] | (inp[123] & inp[41]),
	inp[132] & inp[148],
	!(inp[36] | inp[101]),
	!(inp[107] ^ inp[94]),
	inp[79] ^ inp[228],
	!(inp[57] | inp[104]),
	!(inp[165] ^ inp[147]),
	!(inp[134] | inp[21]),
	inp[119] ^ inp[102],
	inp[135] | inp[194],
	inp[227] ^ inp[136],
	!(inp[81] | inp[50]),
	!(inp[196] ^ inp[182]),
	!(inp[42] ^ inp[76]),
	!(inp[132] | inp[130]),
	inp[132] & !inp[183],
	!(inp[137] ^ inp[171]),
	0,
	inp[72] ^ inp[44],
	inp[167] | inp[79],
	!inp[42],
	!inp[115],
	inp[154] & !inp[194],
	!(inp[79] ^ inp[114]),
	inp[46] ^ inp[63],
	!(inp[163] | inp[75]),
	!(inp[193] | inp[135]),
	!(inp[23] ^ inp[163]),
	inp[42] ^ inp[89],
	inp[108] ^ inp[94],
	inp[183],
	inp[36] | inp[179],
	!inp[218],
	inp[173] ^ inp[111],
	!inp[154],
	inp[36] & !inp[68],
	inp[106] ^ inp[95],
	!(inp[108] ^ inp[232]),
	inp[124] ^ inp[92],
	inp[107] ^ inp[23],
	inp[63] | inp[54],
	!(inp[166] ^ inp[230]),
	inp[166] | inp[149],
	inp[124],
	inp[85] ^ inp[24],
	inp[105] ^ inp[10],
	inp[231] | inp[244],
	!(inp[135] & inp[136]),
	inp[220],
	inp[155],
	inp[235] | inp[152],
	!(inp[131] ^ inp[129]),
	!inp[188],
	inp[137] ^ inp[146],
	!inp[152] | (inp[152] & inp[146]),
	inp[71] & !inp[179],
	!(inp[179] | inp[200]),
	inp[22] | inp[37],
	!(inp[84] ^ inp[98]),
	inp[93] ^ inp[171],
	inp[115] ^ inp[113],
	inp[103],
	inp[72] | inp[112],
	inp[109] ^ inp[106],
	!(inp[211] | inp[165]),
	!(inp[135] ^ inp[152]),
	!(inp[140] ^ inp[122]),
	inp[142] & !inp[138],
	!(inp[73] ^ inp[97]),
	inp[169] & !inp[214],
	!(inp[37] | inp[27]),
	!(inp[176] | inp[176]),
	!(inp[153] ^ inp[119]),
	!(inp[152] | inp[137]),
	!(inp[39] ^ inp[76]),
	!(inp[134] ^ inp[164]),
	!(inp[85] ^ inp[100]),
	!(inp[166] | inp[211]),
	inp[232] & !inp[106],
	inp[93] | inp[151],
	!(inp[202] & inp[156]),
	inp[196] ^ inp[237],
	!inp[147],
	inp[63] | inp[30],
	inp[91] ^ inp[89],
	!(inp[99] ^ inp[102]),
	!inp[218] | (inp[101] & inp[218]),
	!(inp[108] ^ inp[61]),
	!(inp[56] ^ inp[25]),
	inp[159] ^ inp[12],
	!(inp[197] ^ inp[231]),
	inp[211] ^ inp[72],
	!(inp[149] ^ inp[163]),
	!(inp[88] ^ inp[44]),
	!inp[184],
	!(inp[204] ^ inp[235]),
	!inp[162],
	!inp[19],
	inp[78],
	!(inp[93] ^ inp[91]),
	inp[28] | inp[143],
	!inp[10] | (inp[37] & inp[10]),
	!inp[115],
	inp[108] ^ inp[91],
	inp[190] ^ inp[95],
	inp[70] ^ inp[38],
	inp[131] & !inp[179],
	!inp[197],
	!(inp[103] | inp[99]),
	!inp[36],
	!(inp[77] | inp[247]),
	!(inp[117] | inp[131]),
	inp[174],
	!inp[108] | (inp[95] & inp[108]),
	inp[166] ^ inp[135],
	!(inp[100] ^ inp[86]),
	inp[93] ^ inp[45],
	inp[155] | inp[123],
	inp[121] & !inp[139],
	!inp[88] | (inp[88] & inp[42]),
	inp[196] ^ inp[62],
	!inp[247],
	inp[34] ^ inp[162],
	inp[220] | inp[205],
	!(inp[108] ^ inp[167]),
	!(inp[34] | inp[147]),
	!inp[100] | (inp[100] & inp[24]),
	inp[187] ^ inp[218],
	inp[107] | inp[150],
	inp[102] ^ inp[53],
	inp[166] ^ inp[135],
	inp[136] ^ inp[105],
	inp[137] & !inp[156],
	inp[81] | inp[52],
	inp[22] | inp[20],
	!(inp[126] ^ inp[74]),
	inp[190] | inp[158],
	!(inp[230] ^ inp[98]),
	!(inp[8] ^ inp[147]),
	!(inp[49] | inp[94]),
	inp[56] & !inp[147],
	!(inp[87] ^ inp[42]),
	!(inp[178] | inp[180]),
	inp[201] | inp[232],
	!(inp[121] ^ inp[167]),
	inp[236] ^ inp[220],
	!(inp[101] ^ inp[19]),
	inp[203],
	!(inp[162] ^ inp[180]),
	inp[148] & !inp[66],
	!(inp[121] ^ inp[116]),
	!(inp[29] & inp[196]),
	inp[89] ^ inp[77],
	!(inp[229] ^ inp[196]),
	inp[211],
	inp[249] | inp[92],
	!(inp[30] | inp[166]),
	!inp[130] | (inp[130] & inp[120]),
	!(inp[206] ^ inp[235]),
	inp[229] | inp[72],
	inp[73] & !inp[9],
	!inp[186] | (inp[186] & inp[210]),
	inp[98],
	!(inp[188] ^ inp[219]),
	!(inp[21] | inp[237]),
	inp[9] | inp[27],
	!(inp[169] ^ inp[187]),
	inp[219] | inp[172],
	!(inp[177] | inp[226]),
	inp[72] & !inp[151],
	!inp[83],
	!inp[107] | (inp[73] & inp[107]),
	!(inp[202] ^ inp[233]),
	inp[90] & !inp[78],
	inp[21] | inp[77],
	inp[59] ^ inp[89],
	inp[230] | inp[151],
	!(inp[188] ^ inp[220]),
	!(inp[36] | inp[79]),
	inp[21] | inp[190],
	inp[158] | inp[197],
	inp[104],
	!(inp[101] ^ inp[136]),
	inp[120] ^ inp[151],
	!(inp[181] ^ inp[202]),
	!(inp[90] ^ inp[54]),
	!(inp[60] ^ inp[164]),
	!(inp[41] ^ inp[43]),
	!(inp[30] | inp[149]),
	!inp[136] | (inp[136] & inp[177]),
	inp[181] | inp[195],
	!(inp[9] ^ inp[168]),
	!(inp[142] ^ inp[88]),
	!(inp[116] ^ inp[114]),
	!(inp[55] ^ inp[87]),
	!inp[153] | (inp[153] & inp[235]),
	!(inp[234] | inp[213]),
	!(inp[25] | inp[38]),
	inp[75] | inp[249],
	inp[177],
	!(inp[207] | inp[11]),
	inp[136] | inp[120],
	!(inp[92] ^ inp[55]),
	!(inp[58] ^ inp[181]),
	!(inp[133] ^ inp[162]),
	!(inp[159] | inp[206]),
	!(inp[127] ^ inp[9]),
	!(inp[136] ^ inp[101]),
	!(inp[99] ^ inp[37]),
	!inp[55] | (inp[55] & inp[186]),
	!(inp[130] ^ inp[172]),
	!inp[245],
	inp[181] | inp[230],
	inp[107] ^ inp[121],
	inp[153] ^ inp[133],
	!inp[102] | (inp[84] & inp[102]),
	inp[163] | inp[99],
	inp[167] & !inp[248],
	inp[65],
	inp[10] ^ inp[7],
	!(inp[174] | inp[126]),
	inp[168] & !inp[212],
	!(inp[104] | inp[97]),
	inp[228] | inp[243],
	!(inp[102] ^ inp[54]),
	!(inp[155] | inp[195]),
	!(inp[77] | inp[62]),
	inp[41] & !inp[109],
	inp[54] ^ inp[109],
	inp[73] | inp[95],
	!(inp[232] ^ inp[25]),
	inp[124],
	!(inp[245] ^ inp[229]),
	inp[58] & !inp[181],
	!(inp[184] ^ inp[149]),
	inp[88] & !inp[107],
	inp[250] ^ inp[122],
	!(inp[76] ^ inp[74]),
	inp[134] & !inp[116],
	inp[106] ^ inp[108],
	inp[5] ^ inp[179],
	!(inp[196] ^ inp[203]),
	!inp[100] | (inp[100] & inp[132]),
	inp[213] ^ inp[134],
	inp[103] & !inp[54],
	!(inp[84] ^ inp[98]),
	inp[247] ^ inp[243],
	inp[228] & !inp[140],
	!inp[150] | (inp[150] & inp[105]),
	inp[136] ^ inp[167],
	inp[143],
	inp[168],
	inp[118] ^ inp[116],
	inp[186] ^ inp[34],
	!inp[98],
	!inp[92],
	inp[209] ^ inp[11],
	!inp[199] | (inp[199] & inp[148]),
	!(inp[52] & inp[185]),
	inp[251] | inp[244],
	inp[210] | inp[26],
	inp[25] | inp[146],
	inp[149] & !inp[167],
	!inp[58] | (inp[58] & inp[29]),
	inp[186] & !inp[99],
	!(inp[43] ^ inp[75]),
	inp[186] & !inp[198],
	!(inp[243] ^ inp[227]),
	!(inp[130] | inp[131]),
	inp[251] ^ inp[204],
	!(inp[37] ^ inp[51]),
	!(inp[247] ^ inp[137]),
	!(inp[246] ^ inp[215]),
	!inp[55] | (inp[102] & inp[55]),
	inp[90],
	!(inp[159] | inp[156]),
	inp[199] ^ inp[101],
	!(inp[196] ^ inp[38]),
	!(inp[115] ^ inp[63]),
	!(inp[165] | inp[199]),
	inp[165] | inp[179],
	inp[123] | inp[203],
	!(inp[147] | inp[199]),
	!(inp[88] | inp[94]),
	!(inp[131] ^ inp[117]),
	!(inp[75] ^ inp[27]),
	!inp[218] | (inp[109] & inp[218]),
	!inp[121],
	!(inp[67] | inp[72]),
	!(inp[221] ^ inp[86]),
	inp[137] & !inp[178],
	inp[231] | inp[250],
	inp[221] ^ inp[189],
	!(inp[24] ^ inp[126]),
	inp[113] ^ inp[100],
	!(inp[109] | inp[12]),
	inp[133] ^ inp[146],
	inp[145] | inp[159],
	!(inp[122] ^ inp[166]),
	!(inp[236] | inp[168]),
	!(inp[25] | inp[143]),
	inp[52] | inp[83],
	inp[234] ^ inp[219],
	inp[197] ^ inp[53],
	!inp[76] | (inp[221] & inp[76]),
	!(inp[186] ^ inp[54]),
	!(inp[178] ^ inp[165]),
	inp[100] | inp[72],
	inp[198] | inp[213],
	inp[114] ^ inp[101],
	!(inp[220] ^ inp[215]),
	!inp[196],
	!(inp[162] | inp[166]),
	!(inp[41] ^ inp[243]),
	!(inp[117] | inp[190]),
	inp[108] ^ inp[27],
	!inp[219],
	!inp[135] | (inp[246] & inp[135]),
	!(inp[154] | inp[68]),
	!(inp[190] ^ inp[126]),
	inp[45] ^ inp[230],
	!inp[9],
	inp[243] | inp[141],
	!(inp[41] | inp[72]),
	inp[149] ^ inp[147],
	inp[231] & !inp[184],
	inp[197] & !inp[22],
	inp[102],
	!(inp[11] | inp[251]),
	inp[214] & !inp[85],
	!(inp[88] ^ inp[66]),
	!(inp[132] ^ inp[103]),
	!(inp[232] | inp[50]),
	!(inp[126] ^ inp[108]),
	!inp[235],
	inp[182] ^ inp[110],
	!inp[136],
	inp[153] ^ inp[122],
	!inp[118],
	inp[134],
	!(inp[165] | inp[198]),
	inp[232] ^ inp[204],
	!inp[216] | (inp[146] & inp[216]),
	inp[125] ^ inp[105],
	!(inp[89] | inp[172]),
	!(inp[140] ^ inp[126]),
	inp[230] ^ inp[55],
	!(inp[91] | inp[170]),
	inp[105] & !inp[54],
	!(inp[63] | inp[248]),
	inp[228] | inp[210],
	inp[129],
	inp[88] & !inp[108],
	!inp[57] | (inp[152] & inp[57]),
	!(inp[213] ^ inp[89]),
	!inp[38],
	!(inp[211] | inp[5]),
	inp[147],
	!(inp[174] ^ inp[219]),
	!(inp[152] ^ inp[47]),
	!(inp[243] ^ inp[212]),
	!(inp[103] ^ inp[139]),
	inp[149] ^ inp[102],
	inp[221] | inp[194],
	!(inp[43] ^ inp[116]),
	!(inp[235] ^ inp[203]),
	inp[216] | inp[22],
	!(inp[73] ^ inp[52]),
	!(inp[166] ^ inp[198]),
	!inp[228],
	inp[216] ^ inp[232],
	inp[121] | inp[182],
	inp[104] ^ inp[169],
	inp[180] | inp[194],
	inp[196] & !inp[227],
	inp[21] ^ inp[82],
	inp[11] | inp[158],
	inp[183] & !inp[242],
	inp[24] ^ inp[72],
	inp[55] & !inp[27],
	inp[230] | inp[244],
	!(inp[167] ^ inp[119]),
	!(inp[130] | inp[147]),
	!(inp[163] | inp[90]),
	!(inp[190] ^ inp[118]),
	!(inp[168] ^ inp[150]),
	inp[73] ^ inp[42],
	!(inp[77] ^ inp[45]),
	inp[47] | inp[10],
	inp[233] | inp[204],
	!(inp[46] ^ inp[93]),
	inp[173] | inp[75],
	inp[199] & !inp[85],
	inp[58] | inp[90],
	!(inp[119] ^ inp[132]),
	inp[73] ^ inp[237],
	!(inp[167] ^ inp[211]),
	inp[201] ^ inp[182],
	inp[123] | inp[140],
	!(inp[172] | inp[27]),
	inp[35] ^ inp[101],
	!inp[42] | (inp[219] & inp[42]),
	inp[46],
	!inp[150] | (inp[183] & inp[150]),
	!(inp[60] ^ inp[234]),
	inp[151],
	!inp[85],
	!(inp[212] ^ inp[82]),
	!(inp[149] ^ inp[131]),
	inp[34] | inp[243],
	!inp[137],
	inp[133] | inp[69],
	!(inp[147] ^ inp[168]),
	inp[140] ^ inp[102],
	inp[83] ^ inp[77],
	!(inp[245] ^ inp[217]),
	!(inp[205] ^ inp[166]),
	!(inp[202] ^ inp[248]),
	inp[60] | inp[104],
	!inp[214] | (inp[214] & inp[105]),
	inp[183] ^ inp[214],
	inp[166] ^ inp[201],
	inp[37] ^ inp[198],
	inp[136] ^ inp[22],
	inp[59] ^ inp[183],
	inp[204] ^ inp[173],
	inp[88] & !inp[106],
	inp[155] ^ inp[182],
	inp[173] | inp[204],
	!inp[230] | (inp[230] & inp[183]),
	inp[148] | inp[130],
	inp[244] ^ inp[34],
	!(inp[41] ^ inp[183]),
	inp[197] ^ inp[136],
	!inp[149] | (inp[149] & inp[179]),
	inp[36] | inp[74],
	inp[100],
	!inp[103],
	!(inp[21] & inp[213]),
	inp[194] & !inp[81],
	!(inp[235] ^ inp[20]),
	!(inp[187] ^ inp[205]),
	!(inp[107] ^ inp[76]),
	inp[90] & !inp[86],
	inp[61] ^ inp[27],
	inp[131] & !inp[96],
	inp[11] ^ inp[209],
	!inp[152] | (inp[152] & inp[177]),
	inp[251],
	inp[154] ^ inp[135],
	inp[100] | inp[156],
	!(inp[245] | inp[52]),
	inp[47] | inp[52],
	!(inp[139] | inp[156]),
	inp[165] | inp[120],
	!inp[217] | (inp[217] & inp[39]),
	inp[150] | inp[27],
	!(inp[184] & inp[249]),
	inp[251] ^ inp[158],
	inp[93] & !inp[182],
	inp[196] ^ inp[182],
	!(inp[21] | inp[138]),
	!(inp[68] ^ inp[88]),
	!inp[165] | (inp[123] & inp[165]),
	inp[41] & !inp[124],
	inp[84] ^ inp[119],
	!(inp[184] ^ inp[138]),
	inp[40] ^ inp[87],
	!(inp[61] ^ inp[89]),
	!(inp[89] | inp[243]),
	!(inp[228] ^ inp[182]),
	inp[107] ^ inp[109],
	!inp[229] | (inp[180] & inp[229]),
	!(inp[93] ^ inp[105]),
	inp[53],
	!(inp[87] ^ inp[42]),
	!(inp[177] | inp[5]),
	!(inp[39] | inp[39]),
	!(inp[74] ^ inp[119]),
	inp[165] & !inp[244],
	inp[198] | inp[114],
	inp[167] ^ inp[104],
	!(inp[116] | inp[113]),
	!(inp[201] ^ inp[220]),
	!(inp[78] ^ inp[56]),
	inp[197] | inp[198],
	inp[166] & !inp[85],
	inp[234] ^ inp[219],
	!(inp[22] | inp[188]),
	!(inp[109] ^ inp[120]),
	!inp[155] | (inp[246] & inp[155]),
	!inp[163] | (inp[211] & inp[163]),
	inp[140] ^ inp[157],
	!inp[200] | (inp[171] & inp[200]),
	inp[94] | inp[76],
	!inp[101] | (inp[53] & inp[101]),
	!inp[66],
	inp[5] ^ inp[53],
	inp[245] & !inp[181],
	inp[69] & !inp[118],
	inp[198] ^ inp[170],
	inp[118] ^ inp[87],
	!(inp[249] | inp[221]),
	inp[92] ^ inp[189],
	inp[132],
	inp[242] | inp[129],
	inp[165] ^ inp[163],
	!(inp[136] | inp[168]),
	inp[35] | inp[181],
	inp[201] | inp[232],
	inp[68] ^ inp[230],
	inp[251],
	inp[210] | inp[194],
	!inp[234] | (inp[135] & inp[234]),
	inp[90] | inp[106],
	!(inp[87] | inp[72]),
	!inp[76] | (inp[76] & inp[165]),
	inp[38] | inp[205],
	inp[220] ^ inp[9],
	inp[99] & !inp[78],
	inp[75],
	!(inp[58] ^ inp[11]),
	inp[152] | inp[121],
	inp[92] ^ inp[73],
	!(inp[38] ^ inp[58]),
	!inp[53],
	!(inp[116] ^ inp[149]),
	!(inp[134] ^ inp[248]),
	!inp[85] | (inp[71] & inp[85]),
	!inp[176],
	inp[89] | inp[75],
	inp[180] | inp[116],
	inp[92] ^ inp[167],
	!(inp[116] & inp[84]),
	!(inp[129] | inp[47]),
	inp[175] | inp[62],
	inp[171] & !inp[212],
	!(inp[126] | inp[116]),
	!(inp[27] ^ inp[60]),
	inp[177] ^ inp[209],
	!(inp[173] ^ inp[242]),
	!inp[166] | (inp[166] & inp[212]),
	inp[76] | inp[123],
	inp[218] & !inp[98],
	!inp[136] | (inp[136] & inp[202]),
	inp[233] ^ inp[212],
	inp[217] & !inp[210],
	!(inp[225] | inp[37]),
	inp[241] ^ inp[138],
	inp[73] ^ inp[43],
	!(inp[98] ^ inp[88]),
	inp[57] ^ inp[25],
	inp[97] ^ inp[98],
	inp[19],
	inp[22],
	inp[104] & !inp[186],
	inp[38] ^ inp[70],
	!(inp[141] | inp[8]),
	inp[176] | inp[6],
	!(inp[73] ^ inp[235]),
	inp[109] | inp[70],
	inp[143],
	inp[166] ^ inp[117],
	inp[163] ^ inp[114],
	!(inp[126] | inp[195]),
	!(inp[167] & inp[89]),
	!(inp[98] ^ inp[85]),
	inp[27] ^ inp[57],
	inp[105] & !inp[72],
	!inp[117] | (inp[69] & inp[117]),
	!inp[248] | (inp[248] & inp[153]),
	!inp[168] | (inp[168] & inp[163]),
	!(inp[201] ^ inp[143]),
	inp[103] ^ inp[134],
	!(inp[53] ^ inp[99]),
	!(inp[119] ^ inp[154]),
	inp[78] | inp[229],
	!(inp[51] ^ inp[37]),
	inp[148] ^ inp[28],
	inp[164] ^ inp[199],
	!(inp[99] | inp[196]),
	inp[75] | inp[60],
	inp[141],
	inp[187] ^ inp[196],
	!inp[50] | (inp[60] & inp[50]),
	inp[101],
	inp[214] | inp[227],
	!(inp[204] ^ inp[201]),
	inp[230],
	inp[173] | inp[51],
	inp[152] & !inp[188],
	inp[191] | inp[143],
	inp[203],
	!inp[85] | (inp[85] & inp[120]),
	!(inp[173] ^ inp[140]),
	inp[197] | inp[163],
	inp[107] ^ inp[89],
	!(inp[69] | inp[199]),
	inp[40] ^ inp[177],
	!(inp[84] | inp[109]),
	inp[177] & !inp[231],
	inp[212] & !inp[154],
	inp[231] | inp[73],
	!(inp[119] & inp[54]),
	!inp[9] | (inp[9] & inp[173]),
	inp[235],
	inp[6],
	inp[58] & !inp[54],
	!inp[137] | (inp[140] & inp[137]),
	!inp[185],
	inp[86] & !inp[42],
	inp[212] ^ inp[62],
	!inp[133],
	!inp[65],
	!(inp[81] ^ inp[34]),
	inp[37] ^ inp[101],
	!inp[200] | (inp[56] & inp[200]),
	inp[132] ^ inp[118],
	inp[7] ^ inp[20],
	inp[214] ^ inp[166],
	inp[149] ^ inp[146],
	inp[230] | inp[228],
	!inp[216] | (inp[138] & inp[216]),
	inp[140] ^ inp[109],
	!(inp[200] & inp[7]),
	inp[88],
	!(inp[247] | inp[244]),
	!(inp[204] ^ inp[22]),
	inp[132] ^ inp[165],
	!(inp[94] ^ inp[137]),
	!inp[152],
	!(inp[181] | inp[164]),
	!(inp[41] ^ inp[72]),
	inp[166] ^ inp[201],
	!(inp[197] ^ inp[228]),
	inp[146] ^ inp[62],
	!(inp[41] | inp[120]),
	inp[102] ^ inp[117],
	!inp[85] | (inp[22] & inp[85]),
	inp[35] ^ inp[235],
	inp[67] | inp[106],
	inp[5] | inp[162],
	!(inp[45] | inp[190]),
	!(inp[74] & inp[26]),
	!(inp[215] | inp[195]),
	inp[183] | inp[162],
	!(inp[173] ^ inp[118]),
	inp[106] ^ inp[179],
	inp[147] ^ inp[118],
	!(inp[123] ^ inp[76]),
	!inp[118] | (inp[118] & inp[111]),
	!(inp[229] ^ inp[214]),
	!(inp[184] ^ inp[220]),
	inp[205] | inp[173],
	inp[103] | inp[24],
	inp[187] ^ inp[235],
	inp[41] ^ inp[133],
	inp[166] ^ inp[211],
	inp[204] | inp[179],
	inp[5] | inp[209],
	inp[118] ^ inp[146],
	inp[194] ^ inp[9],
	!(inp[147] | inp[63]),
	inp[30] | inp[212],
	!(inp[103] ^ inp[189]),
	!(inp[199] ^ inp[133]),
	!inp[107],
	inp[141] ^ inp[59],
	!(inp[156] ^ inp[250]),
	inp[226] | inp[37],
	inp[65],
	inp[200] ^ inp[181],
	inp[116] ^ inp[130],
	inp[142] | inp[131],
	inp[188] | inp[251],
	inp[57] ^ inp[83],
	!(inp[172] ^ inp[118]),
	!inp[85] | (inp[85] & inp[193]),
	inp[227] ^ inp[243],
	inp[197] ^ inp[71],
	inp[60] & inp[247],
	inp[132] ^ inp[40],
	!(inp[52] ^ inp[117]),
	!inp[180] | (inp[180] & inp[61]),
	!(inp[143] | inp[141]),
	!(inp[76] ^ inp[44]),
	!inp[103],
	inp[171],
	!(inp[70] ^ inp[84]),
	!(inp[196] ^ inp[200]),
	!(inp[120] | inp[136]),
	inp[186] & !inp[86],
	!inp[219] | (inp[219] & inp[181]),
	!(inp[202] | inp[132]),
	!inp[189],
	inp[124] ^ inp[183],
	inp[41] ^ inp[73],
	inp[85] ^ inp[181],
	!(inp[206] ^ inp[237]),
	inp[59] & inp[213],
	!(inp[85] ^ inp[70]),
	inp[109] & !inp[79],
	inp[79] | inp[248],
	inp[163] ^ inp[181],
	!inp[131] | (inp[221] & inp[131]),
	!(inp[202] ^ inp[165]),
	inp[150] ^ inp[182],
	!inp[233],
	!(inp[168] ^ inp[166]),
	inp[122] & !inp[78],
	inp[74] & !inp[55],
	inp[38] & !inp[200],
	!inp[135] | (inp[241] & inp[135]),
	!(inp[79] ^ inp[221]),
	inp[117] & !inp[141],
	!inp[19],
	inp[77] | inp[120],
	!inp[41] | (inp[41] & inp[45]),
	!(inp[182] ^ inp[164]),
	inp[137] ^ inp[182],
	inp[6] ^ inp[221],
	inp[247] ^ inp[150],
	!(inp[185] ^ inp[182]),
	!inp[86] | (inp[234] & inp[86]),
	!(inp[248] ^ inp[219]),
	!(inp[166] ^ inp[60]),
	!inp[200] | (inp[71] & inp[200]),
	!inp[140] | (inp[140] & inp[78]),
	!(inp[165] ^ inp[150]),
	inp[178] & !inp[109],
	inp[51] ^ inp[197],
	inp[185] & !inp[66],
	!inp[87] | (inp[73] & inp[87]),
	!(inp[24] ^ inp[55]),
	inp[50] ^ inp[78],
	inp[74] ^ inp[125],
	inp[71] ^ inp[85],
	!(inp[120] ^ inp[134]),
	!(inp[70] | inp[186]),
	!(inp[249] ^ inp[235]),
	!(inp[105] ^ inp[52]),
	inp[27] ^ inp[149],
	!inp[26],
	inp[92] ^ inp[89],
	!(inp[194] | inp[135]),
	inp[98] | inp[70],
	!(inp[93] ^ inp[167]),
	inp[49] ^ inp[46],
	inp[109] ^ inp[111],
	!(inp[86] | inp[84]),
	!(inp[171] | inp[203]),
	inp[121] & !inp[140],
	inp[163] ^ inp[165],
	!inp[218],
	inp[54] | inp[249],
	inp[23] & !inp[98],
	!inp[197],
	inp[68] ^ inp[82],
	!(inp[199] ^ inp[231]),
	inp[26],
	!(inp[166] ^ inp[148]),
	!(inp[25] | inp[42]),
	!(inp[156] | inp[122]),
	!(inp[181] | inp[20]),
	!inp[184] | (inp[184] & inp[243]),
	inp[210] | inp[215],
	inp[206] | inp[28],
	inp[130],
	!(inp[184] ^ inp[99]),
	inp[243] | inp[97],
	inp[73] | inp[97],
	inp[46] | inp[29],
	!inp[58] | (inp[151] & inp[58]),
	!(inp[22] | inp[118]),
	!(inp[154] | inp[156]),
	!inp[154],
	inp[37] ^ inp[123],
	inp[23] & !inp[30],
	!(inp[95] ^ inp[93]),
	inp[133] & !inp[250],
	!inp[195],
	inp[218] | inp[60],
	!inp[139] | (inp[139] & inp[220]),
	inp[119] | inp[237],
	inp[200] ^ inp[182],
	inp[10] | inp[21],
	!inp[131],
	inp[69] ^ inp[22],
	inp[123],
	inp[133] ^ inp[119],
	inp[178],
	inp[140] ^ inp[105],
	inp[86],
	inp[138] | inp[183],
	inp[251] | inp[212],
	!inp[151] | (inp[107] & inp[151]),
	!(inp[25] ^ inp[158]),
	!inp[231],
	!inp[186] | (inp[122] & inp[186]),
	inp[6] ^ inp[35],
	inp[162] | inp[9],
	inp[136] ^ inp[213],
	!inp[154] | (inp[154] & inp[205]),
	!(inp[197] | inp[196]),
	!inp[123] | (inp[178] & inp[123]),
	!(inp[163] | inp[133]),
	!(inp[86] ^ inp[90]),
	!(inp[85] ^ inp[130]),
	inp[115],
	!(inp[119] ^ inp[142]),
	!(inp[117] | inp[163]),
	inp[124] ^ inp[70],
	inp[135] & inp[167],
	!(inp[45] | inp[158]),
	inp[76] & !inp[120],
	!(inp[59] ^ inp[103]),
	!(inp[134] | inp[170]),
	inp[192] | inp[9],
	inp[142] ^ inp[155],
	!(inp[246] | inp[193]),
	!inp[99] | (inp[99] & inp[197]),
	!inp[228] | (inp[228] & inp[69]),
	inp[132] | inp[146],
	inp[115],
	inp[137] | inp[225],
	inp[103] & !inp[117],
	!(inp[5] | inp[137]),
	inp[107] ^ inp[137],
	!inp[3] | (inp[3] & inp[119]),
	!(inp[217] | inp[251]),
	!(inp[148] ^ inp[196]),
	!(inp[217] | inp[86]),
	inp[53],
	!(inp[153] ^ inp[83]),
	inp[212] ^ inp[166],
	inp[59] | inp[92],
	!inp[57] | (inp[131] & inp[57]),
	!(inp[53] | inp[229]),
	inp[11] | inp[251],
	!(inp[168] ^ inp[203]),
	inp[121] ^ inp[23],
	inp[155] & !inp[182],
	inp[9],
	!(inp[212] | inp[116]),
	inp[67] | inp[242],
	inp[138] ^ inp[119],
	inp[198] ^ inp[213],
	inp[120],
	inp[136],
	inp[249],
	inp[250] ^ inp[168],
	!inp[117] | (inp[117] & inp[75]),
	inp[187] ^ inp[136],
	!(inp[236] | inp[203]),
	!inp[189] | (inp[189] & inp[157]),
	inp[145],
	inp[189] | inp[204],
	!inp[169],
	!(inp[197] ^ inp[247]),
	inp[83] | inp[65],
	!(inp[175] | inp[5]),
	!inp[218] | (inp[183] & inp[218]),
	inp[90] & !inp[116],
	!(inp[106] ^ inp[137]),
	inp[252] | inp[184],
	!(inp[100] ^ inp[98]),
	inp[88] & !inp[41],
	!(inp[242] | inp[5]),
	!(inp[57] ^ inp[59]),
	!(inp[116] | inp[101]),
	!(inp[123] ^ inp[137]),
	!(inp[55] | inp[118]),
	inp[136] ^ inp[104],
	!(inp[245] | inp[166]),
	inp[77] & !inp[137],
	!(inp[95] ^ inp[61]),
	!(inp[134] & inp[163]),
	!(inp[249] ^ inp[218]),
	!inp[136] | (inp[44] & inp[136]),
	!(inp[243] ^ inp[129]),
	!inp[170] | (inp[219] & inp[170]),
	!(inp[117] ^ inp[134]),
	inp[36] ^ inp[117],
	!(inp[135] ^ inp[140]),
	inp[167] ^ inp[198],
	inp[106] | inp[170],
	!(inp[114] | inp[244]),
	!(inp[185] ^ inp[232]),
	!(inp[155] | inp[123]),
	!(inp[22] ^ inp[136]),
	inp[177] | inp[65],
	!(inp[201] | inp[186]),
	!inp[215] | (inp[245] & inp[215]),
	inp[57],
	inp[22] | inp[221],
	inp[170] ^ inp[156],
	inp[156] ^ inp[122],
	!(inp[181] | inp[164]),
	!(inp[26] ^ inp[193]),
	!inp[137] | (inp[137] & inp[130]),
	inp[146] ^ inp[148],
	!(inp[166] ^ inp[244]),
	!(inp[156] | inp[98]),
	!(inp[29] | inp[184]),
	inp[101] & inp[214],
	inp[108] & !inp[214],
	inp[114],
	inp[142] | inp[137],
	inp[219] | inp[243],
	!(inp[148] | inp[146]),
	!(inp[196] | inp[198]),
	!(inp[251] ^ inp[137]),
	inp[101] & !inp[56],
	!(inp[34] ^ inp[65]),
	!(inp[41] ^ inp[82]),
	!inp[217] | (inp[106] & inp[217]),
	inp[219] ^ inp[251],
	!(inp[196] | inp[188]),
	!(inp[219] & inp[137]),
	inp[211] ^ inp[106],
	!inp[233] | (inp[230] & inp[233]),
	inp[223] | inp[79],
	inp[83] | inp[177],
	!(inp[217] ^ inp[232]),
	inp[66] ^ inp[93],
	inp[26] | inp[162],
	!(inp[106] | inp[19]),
	inp[53],
	!inp[217] | (inp[217] & inp[72]),
	inp[77],
	inp[69] ^ inp[102],
	!(inp[166] | inp[151]),
	!(inp[115] ^ inp[100]),
	!(inp[155] | inp[53]),
	inp[56],
	!(inp[182] & inp[150]),
	inp[154] ^ inp[12],
	inp[125],
	inp[177] | inp[25],
	!(inp[41] ^ inp[113]),
	!(inp[28] ^ inp[26]),
	inp[190] | inp[205],
	inp[211] | inp[180],
	inp[120] & !inp[37],
	!(inp[111] | inp[142]),
	inp[152] | inp[221],
	!(inp[121] | inp[154]),
	inp[124] & inp[43],
	!inp[74],
	!(inp[28] | inp[8]),
	inp[74] ^ inp[72],
	!(inp[70] ^ inp[100]),
	!inp[152] | (inp[252] & inp[152]),
	inp[177] | inp[88],
	inp[41] ^ inp[57],
	inp[45] | inp[65],
	!(inp[54] | inp[93]),
	!(inp[124] | inp[91]),
	inp[118],
	!(inp[102] ^ inp[117]),
	inp[88] ^ inp[57],
	inp[121] ^ inp[166],
	inp[70] ^ inp[74],
	inp[28] ^ inp[73],
	inp[39] & !inp[118],
	inp[27] | inp[179],
	!(inp[157] ^ inp[102]),
	inp[67] | inp[156],
	inp[171] ^ inp[140],
	!(inp[193] ^ inp[190]),
	!(inp[244] ^ inp[247]),
	inp[225] | inp[187],
	inp[148] ^ inp[90],
	inp[156],
	inp[95] ^ inp[39],
	inp[57] ^ inp[27],
	inp[76] | inp[168],
	!(inp[183] | inp[120]),
	!inp[40] | (inp[40] & inp[10]),
	!(inp[179] ^ inp[205]),
	!inp[228],
	!(inp[53] ^ inp[21]),
	!(inp[234] & inp[54]),
	!(inp[101] | inp[37]),
	!(inp[94] ^ inp[165]),
	inp[137] | inp[139],
	inp[185] ^ inp[119],
	!(inp[94] | inp[183]),
	!(inp[140] & inp[125]),
	!(inp[40] | inp[55]),
	inp[181] ^ inp[211],
	!inp[123],
	inp[172] ^ inp[50],
	!(inp[187] | inp[20]),
	inp[86] & !inp[206],
	inp[120] & inp[139],
	inp[145],
	inp[210] & !inp[92],
	!inp[168],
	inp[163] ^ inp[165],
	inp[155] ^ inp[252],
	inp[90] ^ inp[189],
	!inp[143],
	!(inp[131] ^ inp[177]),
	inp[104] | inp[119],
	!inp[122] | (inp[122] & inp[172]),
	inp[116] ^ inp[213],
	inp[121] ^ inp[183],
	inp[184] ^ inp[44],
	!(inp[170] ^ inp[195]),
	!(inp[119] | inp[134]),
	!(inp[170] ^ inp[93]),
	inp[116] | inp[22],
	inp[230] ^ inp[244],
	!(inp[89] ^ inp[53]),
	!(inp[198] ^ inp[30]),
	inp[178] | inp[28],
	!(inp[74] ^ inp[172]),
	inp[21] ^ inp[24],
	inp[41] & inp[55],
	inp[89] ^ inp[91],
	inp[37] | inp[24],
	!(inp[236] ^ inp[146]),
	!(inp[220] ^ inp[173]),
	!(inp[167] | inp[151]),
	inp[228] ^ inp[177],
	!inp[245] | (inp[165] & inp[245]),
	inp[245] & !inp[55],
	inp[153] & !inp[53],
	!(inp[78] | inp[98]),
	!(inp[197] ^ inp[179]),
	!(inp[7] | inp[210]),
	inp[58] ^ inp[89],
	!(inp[150] ^ inp[152]),
	!(inp[93] ^ inp[151]),
	inp[92] & !inp[151],
	inp[38] ^ inp[104],
	!inp[57],
	!(inp[122] ^ inp[197]),
	!(inp[154] ^ inp[119]),
	inp[67],
	!(inp[246] ^ inp[214]),
	!(inp[165] | inp[99]),
	inp[219],
	!(inp[42] | inp[52]),
	inp[90] ^ inp[94],
	inp[235] ^ inp[206],
	inp[142] & inp[57],
	!(inp[79] | inp[235]),
	inp[106] ^ inp[73],
	!(inp[108] & inp[75]),
	!(inp[131] | inp[43]),
	!inp[230] | (inp[245] & inp[230]),
	inp[92] ^ inp[94],
	!(inp[63] | inp[130]),
	!(inp[157] | inp[185]),
	inp[202] ^ inp[234],
	inp[40] ^ inp[164],
	inp[118] ^ inp[83],
	inp[135] ^ inp[85],
	inp[150] | inp[131],
	inp[183] ^ inp[155],
	!(inp[201] ^ inp[84]),
	inp[87] & !inp[131],
	!(inp[86] | inp[113]),
	!inp[168] | (inp[229] & inp[168]),
	!inp[5],
	inp[100] | inp[78],
	inp[146] | inp[164],
	inp[114] | inp[153],
	!(inp[77] ^ inp[78]),
	!(inp[143] | inp[74]),
	inp[211],
	!inp[86],
	inp[182],
	!(inp[194] ^ inp[197]),
	inp[119] | inp[141],
	!inp[137] | (inp[137] & inp[193]),
	!(inp[120] ^ inp[232]),
	inp[46] ^ inp[243],
	!(inp[113] ^ inp[73]),
	inp[42] ^ inp[73],
	inp[226] ^ inp[72],
	!(inp[6] | inp[19]),
	inp[42] ^ inp[68],
	!(inp[212] ^ inp[198]),
	!inp[164],
	!inp[105] | (inp[150] & inp[105]),
	inp[183] & !inp[210],
	inp[103] | inp[165],
	inp[251],
	inp[108] ^ inp[215],
	!(inp[8] | inp[148]),
	inp[213] & !inp[60],
	inp[165] | inp[148],
	!(inp[27] & inp[87]),
	inp[175] ^ inp[194],
	!inp[182] | (inp[182] & inp[103]),
	!(inp[133] | inp[204]),
	inp[213] ^ inp[5],
	!inp[203] | (inp[80] & inp[203]),
	inp[152],
	!(inp[35] ^ inp[185]),
	!inp[103] | (inp[103] & inp[189]),
	!(inp[156] ^ inp[68]),
	!(inp[145] | inp[242]),
	!(inp[204] | inp[52]),
	!(inp[100] ^ inp[86]),
	!(inp[164] | inp[143]),
	!(inp[246] ^ inp[211]),
	!(inp[190] | inp[175]),
	!inp[206],
	!(inp[158] | inp[171]),
	!inp[104] | (inp[104] & inp[148]),
	inp[197] ^ inp[138],
	!(inp[134] | inp[75]),
	!(inp[189] ^ inp[133]),
	!inp[171] | (inp[134] & inp[171]),
	!(inp[9] | inp[68]),
	!(inp[63] ^ inp[46]),
	!(inp[249] ^ inp[235]),
	inp[52] ^ inp[83],
	!inp[151] | (inp[151] & inp[214]),
	!(inp[141] ^ inp[59]),
	inp[231] ^ inp[200],
	!inp[118] | (inp[118] & inp[91]),
	inp[105] & !inp[222],
	inp[229] | inp[247],
	!inp[215] | (inp[215] & inp[131]),
	inp[116] | inp[159],
	inp[188] ^ inp[89],
	inp[116] | inp[87],
	inp[59] | inp[92],
	!(inp[185] | inp[115]),
	!(inp[198] ^ inp[140]),
	!inp[137] | (inp[213] & inp[137]),
	inp[150] | inp[37],
	!inp[84] | (inp[102] & inp[84]),
	inp[162] | inp[164],
	inp[8],
	!(inp[196] ^ inp[158]),
	inp[91] ^ inp[60],
	!(inp[49] | inp[71]),
	inp[210] ^ inp[165],
	inp[137] ^ inp[105],
	inp[249] ^ inp[131],
	inp[189] ^ inp[170],
	inp[166] ^ inp[119],
	!(inp[101] ^ inp[114]),
	inp[118],
	inp[53] ^ inp[200],
	!inp[72] | (inp[180] & inp[72]),
	inp[117],
	inp[55] & !inp[85],
	inp[172] ^ inp[74],
	inp[39] ^ inp[8],
	inp[94] & inp[117],
	inp[119] | inp[195],
	inp[78] | inp[26],
	!(inp[213] | inp[53]),
	inp[118] ^ inp[204],
	inp[87] | inp[98],
	!inp[185] | (inp[218] & inp[185]),
	inp[90] ^ inp[138],
	inp[24] | inp[92],
	inp[169] ^ inp[195],
	!(inp[116] | inp[108]),
	inp[246] | inp[227],
	!(inp[94] | inp[242]),
	inp[136] | inp[35],
	inp[251] ^ inp[151],
	!(inp[105] ^ inp[168]),
	!(inp[171] ^ inp[108]),
	!(inp[53] ^ inp[92]),
	inp[59] & !inp[26],
	inp[38] ^ inp[54],
	!inp[247] | (inp[247] & inp[213]),
	!(inp[72] ^ inp[74]),
	inp[119] ^ inp[71],
	!(inp[78] ^ inp[76]),
	!inp[36] | (inp[36] & inp[74]),
	inp[166] | inp[115],
	inp[65] ^ inp[94],
	!(inp[136] ^ inp[140]),
	!inp[242],
	!(inp[103] ^ inp[171]),
	inp[132] ^ inp[115],
	!(inp[103] | inp[205]),
	inp[168] & !inp[229],
	inp[27] ^ inp[61],
	inp[153],
	!(inp[227] ^ inp[51]),
	inp[142] | inp[236],
	inp[150] ^ inp[152],
	!(inp[106] ^ inp[137]),
	!(inp[151] ^ inp[217]),
	inp[101] & !inp[53],
	!(inp[123] | inp[44]),
	!inp[63] | (inp[63] & inp[140]),
	inp[103] & !inp[34],
	!(inp[74] ^ inp[106]),
	inp[140] & !inp[186],
	!(inp[242] | inp[156]),
	!(inp[214] & inp[232]),
	inp[249] ^ inp[60],
	inp[168],
	inp[179] | inp[203],
	inp[58] ^ inp[26],
	inp[148] ^ inp[170],
	inp[71] ^ inp[120],
	!(inp[196] ^ inp[131]),
	!(inp[147] ^ inp[130]),
	inp[221] | inp[27],
	!inp[145],
	inp[103] & inp[73],
	!(inp[86] | inp[54]),
	!(inp[217] | inp[187]),
	!(inp[195] | inp[68]),
	!inp[229],
	inp[138] & !inp[164],
	!inp[185] | (inp[162] & inp[185]),
	!(inp[138] ^ inp[121]),
	!(inp[228] ^ inp[198]),
	inp[42] ^ inp[89],
	!inp[200] | (inp[200] & inp[42]),
	inp[56] ^ inp[219],
	inp[190] & !inp[73],
	inp[131] | inp[226],
	!inp[232],
	inp[103] ^ inp[117],
	!inp[179] | (inp[179] & inp[150]),
	!(inp[195] ^ inp[248]),
	!(inp[87] ^ inp[101]),
	inp[56] ^ inp[87],
	!(inp[100] | inp[41]),
	!inp[19],
	inp[182] ^ inp[180],
	inp[40] | inp[118],
	!(inp[241] | inp[142]),
	!inp[148] | (inp[148] & inp[183]),
	inp[186],
	inp[151] ^ inp[180],
	inp[210] | inp[111],
	inp[71] | inp[79],
	inp[86] | inp[65],
	!(inp[173] ^ inp[204]),
	inp[149] ^ inp[103],
	inp[73] & !inp[151],
	inp[115] ^ inp[101],
	inp[105] ^ inp[92],
	!(inp[180] ^ inp[198]),
	inp[177] ^ inp[166],
	!(inp[230] ^ inp[215]),
	inp[221] ^ inp[179],
	inp[107] ^ inp[139],
	inp[213] | inp[198],
	!(inp[123] ^ inp[121]),
	inp[143],
	inp[177] ^ inp[7],
	!(inp[26] ^ inp[73]),
	!inp[233],
	!inp[85] | (inp[85] & inp[200]),
	inp[116] ^ inp[114],
	inp[70] | inp[45],
	!(inp[36] | inp[47]),
	inp[132] | inp[202],
	inp[76] ^ inp[182],
	inp[247] & !inp[92],
	!(inp[74] ^ inp[72]),
	!(inp[149] | inp[132]),
	!inp[137] | (inp[30] & inp[137]),
	inp[137] ^ inp[121],
	0,
	inp[91] & !inp[211],
	!(inp[209] ^ inp[156]),
	!(inp[228] | inp[39]),
	!inp[42] | (inp[181] & inp[42]),
	!(inp[59] ^ inp[93]),
	inp[88] ^ inp[175],
	inp[149],
	inp[119] ^ inp[133],
	!(inp[46] ^ inp[29]),
	inp[218] ^ inp[182],
	inp[216] & !inp[67],
	!inp[143] | (inp[235] & inp[143]),
	inp[45] ^ inp[70],
	inp[119] ^ inp[132],
	!(inp[76] ^ inp[74]),
	!(inp[124] ^ inp[157]),
	!inp[142] | (inp[138] & inp[142]),
	inp[134] ^ inp[164],
	!inp[72] | (inp[167] & inp[72]),
	inp[131] | inp[130],
	!(inp[148] ^ inp[167]),
	!inp[90] | (inp[90] & inp[119]),
	!inp[110],
	!inp[193],
	inp[236] | inp[249],
	inp[149] | inp[151],
	inp[199] | inp[85],
	inp[57] & !inp[121],
	!inp[37],
	!inp[131] | (inp[148] & inp[131]),
	inp[70] ^ inp[23],
	!(inp[77] | inp[72]),
	inp[102] & !inp[235],
	inp[149] ^ inp[181],
	!inp[135] | (inp[8] & inp[135]),
	!(inp[23] ^ inp[106]),
	!(inp[75] | inp[90]),
	inp[84],
	!(inp[210] | inp[227]),
	inp[27] ^ inp[26],
	inp[141] ^ inp[102],
	inp[181] | inp[109],
	inp[101] & !inp[191],
	inp[150] & !inp[155],
	inp[196] ^ inp[203],
	inp[107] | inp[44],
	inp[122] ^ inp[155],
	inp[97] & !inp[201],
	inp[77] ^ inp[88],
	!(inp[197] | inp[195]),
	inp[194] ^ inp[212],
	!(inp[199] ^ inp[201]),
	inp[91],
	inp[139] & !inp[158],
	inp[35] ^ inp[182],
	inp[55] & !inp[152],
	!(inp[79] ^ inp[114]),
	!inp[151] | (inp[154] & inp[151]),
	inp[52] | inp[118],
	!inp[251] | (inp[251] & inp[203]),
	!(inp[169] ^ inp[230]),
	inp[241] ^ inp[12],
	inp[252] & !inp[101],
	inp[236] ^ inp[99],
	!(inp[152] | inp[82]),
	!(inp[104] | inp[124]),
	!(inp[79] | inp[245]),
	!(inp[39] | inp[102]),
	inp[135] & !inp[52],
	inp[87] ^ inp[134],
	!inp[115] | (inp[199] & inp[115]),
	!(inp[22] ^ inp[36]),
	inp[171],
	inp[179] ^ inp[149],
	!(inp[26] | inp[88]),
	!(inp[132] | inp[197]),
	inp[123] & !inp[90],
	inp[164] ^ inp[182],
	inp[109] ^ inp[138],
	!(inp[91] ^ inp[89]),
	!inp[218] | (inp[166] & inp[218]),
	!(inp[207] ^ inp[222]),
	!(inp[25] ^ inp[72]),
	inp[72] | inp[41],
	inp[53] & !inp[9],
	inp[121] | inp[5],
	inp[103] ^ inp[73],
	inp[22] | inp[136],
	inp[45] | inp[8],
	!inp[139],
	!(inp[177] | inp[169]),
	!(inp[205] | inp[175]),
	!inp[253],
	!inp[193] | (inp[193] & inp[148]),
	!(inp[175] ^ inp[143]),
	inp[142] | inp[62],
	!(inp[172] | inp[74]),
	!(inp[105] ^ inp[152]),
	inp[115],
	inp[86] | inp[54],
	inp[83] ^ inp[202],
	!inp[151] | (inp[68] & inp[151]),
	!(inp[178] ^ inp[180]),
	inp[69] ^ inp[52],
	!(inp[205] | inp[173]),
	inp[99] ^ inp[41],
	!inp[25] | (inp[87] & inp[25]),
	!inp[135] | (inp[135] & inp[140]),
	!(inp[39] ^ inp[181]),
	!inp[40] | (inp[40] & inp[149]),
	!(inp[112] | inp[156]),
	1,
	inp[217] | inp[202],
	!(inp[150] | inp[83]),
	inp[182] ^ inp[180],
	inp[93] | inp[86],
	!(inp[203] | inp[23]),
	inp[72] ^ inp[107],
	inp[83] ^ inp[179],
	!(inp[185] ^ inp[247]),
	inp[92] & !inp[59],
	inp[67] | inp[155],
	inp[228],
	!inp[105] | (inp[105] & inp[202]),
	inp[24] & !inp[149],
	inp[72] ^ inp[210],
	inp[145] | inp[120],
	inp[108],
	!(inp[182] | inp[180]),
	inp[243] | inp[22],
	inp[172] ^ inp[72],
	inp[50] | inp[209],
	inp[115] | inp[30],
	inp[52] ^ inp[98],
	inp[137] ^ inp[215],
	!(inp[29] | inp[251]),
	inp[106] & !inp[72],
	inp[56] & !inp[244],
	inp[121] ^ inp[114],
	inp[44] & !inp[22],
	inp[54] | inp[69],
	inp[172],
	inp[74] & !inp[120],
	!(inp[154] | inp[131]),
	!inp[73] | (inp[73] & inp[126]),
	inp[135] & inp[140],
	inp[153] & !inp[132],
	inp[58],
	!(inp[233] | inp[216]),
	!inp[157],
	inp[180] ^ inp[151],
	inp[77] | inp[69],
	!(inp[147] | inp[103]),
	!inp[148],
	!(inp[87] ^ inp[107]),
	!(inp[122] | inp[23]),
	inp[133] | inp[135],
	inp[107] & !inp[201],
	inp[89] ^ inp[232],
	inp[229] & !inp[149],
	!(inp[36] | inp[81]),
	!(inp[75] ^ inp[93]),
	!(inp[85] | inp[164]),
	!inp[154] | (inp[154] & inp[229]),
	inp[134] & !inp[53],
	!(inp[37] | inp[210]),
	inp[106] ^ inp[125],
	!inp[91] | (inp[91] & inp[198]),
	inp[107] | inp[230],
	inp[87] | inp[78],
	!(inp[166] | inp[74]),
	inp[19],
	inp[131] | inp[129],
	!inp[75] | (inp[138] & inp[75]),
	!(inp[206] | inp[40]),
	!inp[184] | (inp[196] & inp[184]),
	inp[241] | inp[20],
	inp[73] ^ inp[28],
	!(inp[151] ^ inp[181]),
	inp[165],
	!(inp[131] ^ inp[149]),
	inp[186] ^ inp[166],
	!(inp[42] | inp[37]),
	!(inp[250] ^ inp[247]),
	!(inp[101] ^ inp[98]),
	!(inp[108] ^ inp[90]),
	inp[122],
	!inp[138] | (inp[204] & inp[138]),
	inp[237] | inp[169],
	inp[250] ^ inp[236],
	inp[165] & !inp[22],
	!(inp[182] | inp[180]),
	inp[52] & !inp[99],
	!inp[76] | (inp[76] & inp[117]),
	!(inp[37] ^ inp[89]),
	inp[217] | inp[252],
	!(inp[147] ^ inp[206]),
	!(inp[118] | inp[245]),
	!inp[86] | (inp[86] & inp[171]),
	inp[232] ^ inp[197],
	!(inp[180] ^ inp[181]),
	!inp[120] | (inp[120] & inp[188]),
	!(inp[108] ^ inp[90]),
	!(inp[178] | inp[40]),
	inp[53] ^ inp[22],
	inp[184] | inp[153],
	!(inp[203] | inp[21]),
	!(inp[85] | inp[106]),
	!(inp[148] | inp[113]),
	!inp[132],
	!(inp[199] ^ inp[36]),
	inp[120] & !inp[165],
	!(inp[148] ^ inp[166]),
	!inp[155],
	inp[182] ^ inp[200],
	!(inp[247] ^ inp[119]),
	!inp[7] | (inp[123] & inp[7]),
	!inp[149],
	inp[171] ^ inp[173],
	!inp[119],
	inp[72],
	!(inp[185] ^ inp[232]),
	!inp[68],
	inp[220],
	!(inp[26] ^ inp[184]),
	inp[4] | inp[193],
	inp[148] & !inp[120],
	inp[75] & !inp[87],
	inp[141] & !inp[61],
	!inp[171] | (inp[171] & inp[121]),
	inp[183] ^ inp[121],
	inp[243] | inp[171],
	inp[91] | inp[89],
	inp[203] ^ inp[234],
	inp[125] ^ inp[107],
	inp[23] | inp[76],
	!(inp[183] | inp[63]),
	!(inp[115] ^ inp[133]),
	inp[51] ^ inp[47],
	!(inp[146] | inp[200]),
	inp[131] | inp[129],
	inp[164] ^ inp[198],
	!(inp[141] | inp[58]),
	!(inp[83] | inp[109]),
	inp[203],
	!(inp[44] | inp[248]),
	inp[131] | inp[20],
	!inp[138],
	inp[53] ^ inp[89],
	inp[71] ^ inp[213],
	!(inp[130] ^ inp[117]),
	inp[147] & !inp[43],
	!(inp[245] | inp[194]),
	inp[106] & !inp[186],
	!(inp[139] | inp[103]),
	inp[40] ^ inp[56],
	!inp[54] | (inp[54] & inp[137]),
	!(inp[103] ^ inp[72]),
	!inp[119] | (inp[82] & inp[119]),
	inp[55] & inp[103],
	inp[210] & !inp[200],
	!(inp[213] ^ inp[244]),
	inp[199] ^ inp[45],
	!(inp[53] ^ inp[216]),
	!inp[90] | (inp[90] & inp[28]),
	!(inp[67] ^ inp[36]),
	!inp[141] | (inp[141] & inp[197]),
	!(inp[87] ^ inp[39]),
	inp[244] & !inp[216],
	!inp[137],
	inp[98] | inp[59],
	!(inp[131] | inp[148]),
	inp[93],
	!(inp[205] | inp[28]),
	inp[166] | inp[120],
	!(inp[167] | inp[151]),
	!(inp[151] | inp[60]),
	!inp[140] | (inp[59] & inp[140]),
	inp[196] ^ inp[242],
	inp[213] | inp[215],
	inp[87] ^ inp[228],
	inp[172] ^ inp[174],
	!(inp[43] ^ inp[199]),
	inp[246] & !inp[214],
	inp[168] & !inp[39],
	!(inp[157] ^ inp[188]),
	inp[92],
	!(inp[65] ^ inp[46]),
	inp[44] & inp[109],
	inp[79] ^ inp[93],
	!(inp[234] ^ inp[198]),
	inp[116] ^ inp[102],
	!inp[47],
	!(inp[47] | inp[130]),
	!(inp[124] ^ inp[156]),
	inp[58] | inp[42],
	inp[183] & !inp[249],
	inp[192] | inp[225],
	inp[178] ^ inp[199],
	inp[26] | inp[178],
	!inp[136] | (inp[177] & inp[136]),
	inp[228] ^ inp[197],
	inp[61] ^ inp[85],
	!(inp[180] | inp[222]),
	!inp[91],
	!inp[226] | (inp[181] & inp[226]),
	inp[252] | inp[137],
	inp[216] ^ inp[249],
	!(inp[154] ^ inp[171]),
	!(inp[243] | inp[171]),
	!(inp[248] ^ inp[12]),
	!inp[39] | (inp[166] & inp[39]),
	!(inp[168] ^ inp[251]),
	inp[100] ^ inp[165],
	!(inp[211] | inp[233]),
	inp[168],
	inp[207] | inp[23],
	!inp[109],
	!(inp[168] | inp[131]),
	!(inp[95] | inp[233]),
	!(inp[183] | inp[181]),
	!inp[155] | (inp[149] & inp[155]),
	inp[76] & !inp[122],
	inp[61] | inp[162],
	!(inp[154] & inp[138]),
	inp[39] | inp[212],
	inp[92] ^ inp[90],
	inp[155] | inp[99],
	inp[70],
	inp[53] | inp[67],
	!(inp[215] ^ inp[186]),
	!inp[151] | (inp[151] & inp[117]),
	inp[166],
	!(inp[21] ^ inp[51]),
	inp[152] & !inp[100],
	!(inp[210] ^ inp[69]),
	!(inp[151] ^ inp[120]),
	inp[251] ^ inp[138],
	!(inp[243] | inp[149]),
	inp[98],
	!(inp[97] ^ inp[130]),
	inp[197] | inp[179],
	!inp[230] | (inp[230] & inp[155]),
	!inp[53] | (inp[53] & inp[148]),
	inp[244],
	!(inp[164] ^ inp[181]),
	inp[194] ^ inp[135],
	inp[248] ^ inp[230],
	inp[40] | inp[56],
	!(inp[29] | inp[11]),
	inp[120] & !inp[140],
	!(inp[92] ^ inp[88]),
	!(inp[21] ^ inp[27]),
	inp[44] ^ inp[91],
	!(inp[52] | inp[57]),
	inp[150] & inp[149],
	!inp[58],
	!(inp[35] | inp[150]),
	!(inp[130] | inp[58]),
	inp[43] | inp[108],
	!(inp[183] ^ inp[88]),
	inp[182] ^ inp[228],
	inp[184] & !inp[60],
	inp[163] ^ inp[67],
	inp[103] & !inp[71],
	inp[205] ^ inp[178],
	!(inp[102] ^ inp[56]),
	!(inp[163] | inp[183]),
	inp[73] & !inp[213],
	!(inp[107] | inp[99]),
	!(inp[139] ^ inp[213]),
	inp[83] ^ inp[101],
	!(inp[9] | inp[27]),
	inp[157] | inp[140],
	!(inp[131] | inp[171]),
	inp[172] | inp[131],
	inp[120] | inp[34],
	!(inp[149] | inp[40]),
	!inp[101] | (inp[101] & inp[141]),
	inp[162] ^ inp[62],
	!(inp[113] ^ inp[123]),
	inp[106] ^ inp[58],
	!(inp[201] ^ inp[198]),
	inp[107] | inp[75],
	!inp[137] | (inp[137] & inp[171]),
	!(inp[172] ^ inp[88]),
	inp[55],
	!(inp[60] ^ inp[189]),
	inp[210] ^ inp[245],
	inp[54] & !inp[102],
	!(inp[111] | inp[109]),
	inp[139] | inp[120],
	!inp[73] | (inp[195] & inp[73]),
	inp[237] ^ inp[205],
	inp[187] ^ inp[232],
	inp[214] ^ inp[246],
	!(inp[154] & inp[150]),
	!(inp[180] ^ inp[182]),
	!(inp[174] | inp[157]),
	inp[165] | inp[118],
	!(inp[245] | inp[248]),
	!(inp[118] ^ inp[132]),
	!inp[213] | (inp[213] & inp[86]),
	inp[20] | inp[69],
	!(inp[78] | inp[162]),
	!(inp[106] ^ inp[103]),
	!(inp[4] | inp[95]),
	!(inp[211] ^ inp[219]),
	inp[114] ^ inp[100],
	!(inp[52] | inp[74]),
	inp[126] | inp[125],
	!inp[57] | (inp[194] & inp[57]),
	inp[181],
	inp[105],
	inp[147],
	!inp[89],
	inp[166] ^ inp[244],
	!inp[210],
	inp[78] ^ inp[54],
	inp[161] | inp[163],
	inp[164] ^ inp[199],
	inp[241] ^ inp[89],
	!(inp[206] | inp[130]),
	!inp[101],
	inp[130] ^ inp[82],
	!inp[132] | (inp[132] & inp[122]),
	!inp[173],
	inp[132] | inp[88],
	inp[247],
	inp[114] ^ inp[85],
	!(inp[149] | inp[146]),
	inp[111] | inp[205],
	inp[186] & !inp[233],
	inp[132] ^ inp[141],
	!(inp[119] ^ inp[150]),
	!(inp[56] ^ inp[109]),
	inp[21] ^ inp[154],
	inp[214],
	inp[222] ^ inp[190],
	!(inp[246] | inp[85]),
	inp[44] | inp[59],
	!inp[75] | (inp[75] & inp[118]),
	!(inp[196] ^ inp[187]),
	inp[27] & !inp[89],
	inp[199] & !inp[120],
	!(inp[45] | inp[63]),
	inp[98] | inp[38],
	inp[90] & !inp[26],
	inp[7] ^ inp[34],
	inp[164] ^ inp[182],
	inp[152] & !inp[40],
	inp[110] ^ inp[92],
	!(inp[163] ^ inp[194]),
	inp[151] & !inp[113],
	inp[141] | inp[230],
	!(inp[157] | inp[161]),
	!(inp[94] | inp[24]),
	!(inp[134] | inp[215]),
	inp[79] ^ inp[141],
	inp[152] ^ inp[89],
	!inp[236],
	!(inp[129] ^ inp[115]),
	!(inp[119] | inp[102]),
	!(inp[104] ^ inp[78]),
	inp[71] | inp[103],
	inp[231] ^ inp[171],
	inp[118] ^ inp[169],
	!inp[220] | (inp[220] & inp[76]),
	inp[40] ^ inp[75],
	!(inp[245] ^ inp[137]),
	!inp[101],
	inp[197] | inp[195],
	!(inp[8] | inp[11]),
	!(inp[121] ^ inp[186]),
	inp[57] & !inp[180],
	!inp[57],
	!inp[138] | (inp[138] & inp[178]),
	!(inp[97] | inp[234]),
	!(inp[103] ^ inp[194]),
	!inp[153],
	inp[55],
	inp[78] | inp[237],
	inp[88] ^ inp[57],
	inp[35] ^ inp[125],
	!(inp[187] ^ inp[204]),
	!inp[155] | (inp[196] & inp[155]),
	inp[227] | inp[212],
	inp[83] | inp[190],
	inp[93] ^ inp[70],
	!(inp[165] ^ inp[147]),
	!(inp[63] ^ inp[234]),
	!inp[163],
	inp[108] ^ inp[90],
	!(inp[89] ^ inp[58]),
	inp[63] ^ inp[11],
	inp[54] & !inp[116],
	inp[140] | inp[122],
	!(inp[30] | inp[79]),
	!inp[212] | (inp[231] & inp[212]),
	!(inp[218] | inp[233]),
	!inp[170] | (inp[221] & inp[170]),
	!(inp[23] ^ inp[58]),
	!inp[206],
	!inp[9] | (inp[43] & inp[9]),
	!(inp[213] ^ inp[150]),
	!(inp[73] & inp[202]),
	inp[250] ^ inp[165],
	!inp[228] | (inp[228] & inp[158]),
	inp[204] | inp[180],
	inp[47],
	!(inp[151] & inp[121]),
	!inp[76] | (inp[76] & inp[151]),
	inp[199] & !inp[245],
	!(inp[59] ^ inp[88]),
	inp[30] ^ inp[79],
	inp[163] ^ inp[211],
	inp[136] & !inp[141],
	!inp[222],
	inp[177] ^ inp[111],
	inp[131] & !inp[150],
	!inp[108] | (inp[218] & inp[108]),
	inp[36] ^ inp[86],
	!(inp[163] ^ inp[167]),
	inp[249] ^ inp[233],
	!(inp[202] ^ inp[36]),
	inp[139] ^ inp[183],
	!inp[131],
	inp[216] | inp[248],
	inp[197] ^ inp[169],
	inp[30],
	inp[242] ^ inp[141],
	!(inp[189] ^ inp[115]),
	inp[122] | inp[249],
	!(inp[150] | inp[142]),
	!(inp[136] ^ inp[164]),
	inp[8] ^ inp[10],
	inp[29] ^ inp[126],
	!inp[39],
	!inp[105],
	inp[109] ^ inp[102],
	inp[247] ^ inp[249],
	inp[167] ^ inp[135],
	inp[230] & !inp[21],
	!(inp[198] | inp[158]),
	inp[42] | inp[242],
	!(inp[195] ^ inp[112]),
	inp[132] | inp[110],
	!(inp[175] | inp[206]),
	inp[165] & !inp[95],
	inp[74] ^ inp[77],
	!(inp[88] | inp[210]),
	inp[135] & !inp[190],
	!(inp[98] | inp[100]),
	!(inp[168] | inp[166]),
	inp[29] ^ inp[11],
	inp[92] | inp[114],
	!(inp[181] ^ inp[163]),
	inp[91] ^ inp[73],
	inp[78] | inp[199],
	inp[214] | inp[245],
	inp[122] & !inp[60],
	!inp[202] | (inp[115] & inp[202]),
	inp[93] ^ inp[91],
	inp[142] | inp[245],
	!(inp[87] ^ inp[151]),
	!(inp[184] | inp[211]),
	inp[132] ^ inp[134],
	inp[123] ^ inp[154],
	inp[142],
	inp[43] ^ inp[79],
	inp[95] ^ inp[106],
	!(inp[74] ^ inp[94]),
	!(inp[172] | inp[180]),
	!inp[230] | (inp[92] & inp[230]),
	!inp[221],
	!(inp[205] ^ inp[150]),
	inp[231] | inp[247],
	!(inp[106] ^ inp[108]),
	!(inp[245] | inp[65]),
	!inp[88] | (inp[88] & inp[84]),
	!(inp[73] ^ inp[41]),
	!(inp[230] | inp[246]),
	inp[145] | inp[159],
	inp[100] ^ inp[183],
	!inp[98],
	inp[52] | inp[107],
	inp[105] ^ inp[72],
	inp[31] | inp[20],
	!(inp[90] ^ inp[59]),
	!(inp[92] ^ inp[131]),
	!inp[132] | (inp[132] & inp[206]),
	inp[138] | inp[72],
	!(inp[137] ^ inp[139]),
	!inp[211],
	inp[85] ^ inp[99],
	inp[134] ^ inp[143],
	inp[234] ^ inp[60],
	!(inp[119] | inp[234]),
	!(inp[195] | inp[215]),
	inp[70] & !inp[227],
	inp[241] | inp[101],
	!(inp[159] ^ inp[211]),
	inp[70] ^ inp[38],
	!(inp[116] | inp[22]),
	!(inp[132] | inp[84]),
	inp[181],
	inp[204] & !inp[216],
	!inp[140] | (inp[140] & inp[154]),
	inp[164] | inp[103],
	inp[67] | inp[84],
	inp[15] | inp[92],
	inp[40] | inp[247],
	inp[38] | inp[69],
	inp[150] | inp[41],
	inp[95] | inp[234],
	inp[143],
	inp[58] & !inp[237],
	!(inp[175] ^ inp[206]),
	inp[245] & !inp[141],
	!(inp[149] | inp[244]),
	!inp[110],
	inp[148] ^ inp[146],
	inp[196] ^ inp[178],
	!inp[202] | (inp[202] & inp[182]),
	inp[167] & !inp[93],
	!inp[109],
	inp[236] | inp[235],
	!(inp[34] ^ inp[117]),
	!(inp[104] ^ inp[123]),
	inp[184] & !inp[247],
	inp[118] ^ inp[104],
	inp[59],
	!(inp[206] ^ inp[136]),
	inp[137] ^ inp[162],
	inp[59] & !inp[103],
	!(inp[171] ^ inp[156]),
	!(inp[135] ^ inp[104]),
	!(inp[99] ^ inp[102]),
	!inp[134] | (inp[204] & inp[134]),
	!inp[242] | (inp[203] & inp[242]),
	inp[186] | inp[155],
	inp[235] | inp[199],
	inp[94],
	!(inp[99] & inp[83]),
	inp[148] ^ inp[39],
	!inp[119] | (inp[119] & inp[131]),
	inp[153],
	inp[231] | inp[231],
	!(inp[217] ^ inp[250]),
	inp[72] & !inp[138],
	inp[138],
	inp[166] | inp[147],
	!(inp[229] ^ inp[56]),
	inp[186] & !inp[152],
	!(inp[231] ^ inp[54]),
	!inp[231] | (inp[168] & inp[231]),
	!(inp[103] ^ inp[170]),
	inp[73] & !inp[111],
	!(inp[99] | inp[71]),
	inp[75] ^ inp[116],
	!(inp[204] | inp[106]),
	inp[115] ^ inp[101],
	!(inp[90] ^ inp[92]),
	!(inp[92] | inp[26]),
	inp[107] & !inp[74],
	!inp[236] | (inp[236] & inp[214]),
	!(inp[77] ^ inp[43]),
	!(inp[22] ^ inp[70]),
	inp[154],
	!(inp[167] | inp[118]),
	!(inp[104] ^ inp[212]),
	inp[243] ^ inp[234],
	!(inp[152] | inp[24]),
	inp[214] & !inp[179],
	inp[136] & inp[137],
	inp[213] ^ inp[211],
	!(inp[59] ^ inp[107]),
	!(inp[52] ^ inp[188]),
	!(inp[27] | inp[44]),
	inp[43] ^ inp[53],
	inp[131],
	inp[27] ^ inp[106],
	inp[142] ^ inp[156],
	inp[105],
	inp[197] | inp[235],
	inp[121] & !inp[197],
	!(inp[41] ^ inp[117]),
	!(inp[108] ^ inp[110]),
	!(inp[84] ^ inp[70]),
	!(inp[139] & inp[137]),
	!inp[198] | (inp[198] & inp[185]),
	!(inp[98] ^ inp[167]),
	!inp[130],
	inp[140] ^ inp[117],
	!(inp[176] | inp[136]),
	!(inp[105] ^ inp[54]),
	!(inp[246] ^ inp[215]),
	!(inp[242] | inp[251]),
	!(inp[54] ^ inp[60]),
	!inp[152] | (inp[93] & inp[152]),
	!(inp[216] ^ inp[187]),
	!inp[165] | (inp[165] & inp[86]),
	inp[213] | inp[159],
	!inp[157],
	!inp[59],
	inp[99] ^ inp[98],
	inp[118],
	!inp[70],
	inp[163] ^ inp[7],
	!(inp[241] | inp[147]),
	inp[190] ^ inp[86],
	inp[24] ^ inp[56],
	inp[152] ^ inp[105],
	inp[40],
	inp[51] ^ inp[99],
	inp[85] ^ inp[155],
	!(inp[102] ^ inp[170]),
	!inp[163] | (inp[163] & inp[13]),
	inp[142] ^ inp[46],
	inp[21],
	inp[118] ^ inp[88],
	!inp[97],
	inp[121] | inp[170],
	inp[245] & !inp[216],
	!(inp[205] ^ inp[198]),
	!(inp[87] | inp[246]),
	inp[39] ^ inp[87],
	!inp[200] | (inp[42] & inp[200]),
	!inp[57] | (inp[22] & inp[57]),
	inp[210] ^ inp[245],
	!(inp[189] ^ inp[220]),
	inp[113] | inp[163],
	inp[135] | inp[188],
	inp[102] ^ inp[236],
	inp[214] | inp[228],
	inp[200] ^ inp[52],
	inp[117] ^ inp[155],
	!inp[168] | (inp[168] & inp[126]),
	inp[179] & !inp[160],
	!inp[54],
	inp[25] | inp[190],
	!inp[167] | (inp[167] & inp[163]),
	!(inp[31] | inp[12]),
	!(inp[241] | inp[174]),
	inp[88] ^ inp[103],
	inp[37] | inp[197],
	!(inp[68] ^ inp[204]),
	!(inp[140] | inp[75]),
	!inp[152] | (inp[152] & inp[69]),
	!(inp[55] | inp[56]),
	!(inp[173] ^ inp[117]),
	inp[221] ^ inp[190],
	inp[139] | inp[113],
	inp[233] | inp[146],
	!(inp[195] ^ inp[137]),
	!inp[84],
	!(inp[42] | inp[53]),
	inp[25] & inp[148],
	inp[141] ^ inp[127],
	!(inp[147] ^ inp[133]),
	!(inp[90] ^ inp[92]),
	inp[209] ^ inp[152],
	!(inp[249] ^ inp[219]),
	inp[203] | inp[202],
	inp[207] | inp[9],
	inp[199] ^ inp[54],
	inp[101] & !inp[190],
	!(inp[28] ^ inp[47]),
	inp[207],
	inp[110] | inp[142],
	!(inp[76] ^ inp[44]),
	inp[188] | inp[21],
	!inp[136] | (inp[5] & inp[136]),
	!(inp[150] ^ inp[182]),
	inp[87] & !inp[212],
	!(inp[146] | inp[118]),
	inp[146] | inp[164],
	inp[192] | inp[11],
	!inp[75],
	!(inp[103] ^ inp[134]),
	!inp[121] | (inp[121] & inp[196]),
	inp[28] ^ inp[62],
	!(inp[157] | inp[90]),
	!(inp[136] ^ inp[181]),
	!(inp[139] ^ inp[24]),
	inp[107] & !inp[89],
	inp[213] ^ inp[211],
	inp[186] & inp[221],
	!inp[87] | (inp[87] & inp[242]),
	!inp[34],
	inp[57] & !inp[131],
	inp[143] ^ inp[190],
	inp[52] & !inp[38],
	!(inp[66] ^ inp[188]),
	!inp[153] | (inp[236] & inp[153]),
	!(inp[76] | inp[91]),
	!(inp[54] | inp[38]),
	inp[107] & !inp[41],
	inp[88] | inp[89],
	!(inp[40] ^ inp[87]),
	inp[118] ^ inp[133],
	inp[200] ^ inp[181],
	!inp[151],
	!(inp[103] ^ inp[86]),
	inp[50] ^ inp[82],
	!(inp[198] ^ inp[229]),
	inp[63] ^ inp[93],
	inp[40] ^ inp[72],
	inp[43] | inp[58],
	inp[164] | inp[90],
	!(inp[150] ^ inp[54]),
	!(inp[130] ^ inp[132]),
	inp[87] ^ inp[39],
	inp[203] ^ inp[234],
	!inp[171] | (inp[120] & inp[171]),
	inp[188] ^ inp[250],
	!inp[8] | (inp[42] & inp[8]),
	!(inp[75] ^ inp[107]),
	inp[119] & !inp[187],
	!inp[161],
	inp[221],
	inp[87] ^ inp[88],
	!(inp[250] ^ inp[58]),
	!inp[11],
	!(inp[111] ^ inp[93]),
	!(inp[218] ^ inp[187]),
	!(inp[183] ^ inp[180]),
	!(inp[12] | inp[203]),
	inp[124] | inp[157],
	!(inp[52] ^ inp[150]),
	inp[166] ^ inp[132],
	inp[54] ^ inp[22],
	inp[88] ^ inp[120],
	!(inp[102] | inp[200]),
	inp[76] | inp[83],
	inp[100] ^ inp[86],
	inp[150] ^ inp[148],
	!(inp[165] | inp[162]),
	inp[73] ^ inp[75],
	!(inp[152] | inp[121]),
	inp[147] | inp[85],
	!(inp[161] ^ inp[169]),
	!(inp[200] ^ inp[233]),
	inp[230] ^ inp[57],
	!(inp[236] & inp[67]),
	inp[175] ^ inp[243],
	inp[99] ^ inp[54],
	!(inp[117] | inp[79]),
	!(inp[113] | inp[223]),
	!(inp[215] ^ inp[55]),
	!(inp[149] ^ inp[147]),
	!(inp[92] ^ inp[94]),
	inp[107] ^ inp[140],
	inp[246] | inp[78],
	!(inp[124] ^ inp[231]),
	!(inp[232] ^ inp[21]),
	inp[76] ^ inp[139],
	inp[250],
	inp[92] ^ inp[95],
	inp[199] | inp[180],
	inp[166],
	inp[70] ^ inp[84],
	!(inp[242] | inp[120]),
	inp[103] ^ inp[117],
	inp[127] ^ inp[8],
	inp[251] | inp[235],
	!(inp[132] ^ inp[130]),
	!inp[169],
	!(inp[12] ^ inp[9]),
	inp[228] ^ inp[24],
	!inp[105],
	inp[50] | inp[171],
	inp[82] | inp[98],
	!(inp[132] ^ inp[134]),
	!(inp[198] ^ inp[61]),
	!inp[95],
	inp[20] & inp[56],
	inp[89],
	!(inp[77] ^ inp[75]),
	inp[39] & inp[174],
	!(inp[91] ^ inp[119]),
	inp[121] & !inp[118],
	!(inp[150] | inp[132]),
	inp[72] | inp[41],
	!inp[215] | (inp[215] & inp[150]),
	inp[156] ^ inp[138],
	!(inp[55] & inp[54]),
	inp[156] ^ inp[137],
	inp[45] ^ inp[79],
	inp[119] & !inp[115],
	inp[36] ^ inp[50],
	!(inp[98] | inp[147]),
	!inp[230] | (inp[170] & inp[230]),
	!inp[169] | (inp[20] & inp[169]),
	!(inp[53] | inp[211]),
	inp[12] | inp[200],
	inp[138] & !inp[39],
	!(inp[43] & inp[39]),
	inp[95] ^ inp[61],
	!inp[199],
	inp[102] ^ inp[162],
	!(inp[237] ^ inp[206]),
	!(inp[198] ^ inp[146]),
	!(inp[121] ^ inp[162]),
	!inp[138],
	inp[86] ^ inp[38],
	inp[219] | inp[194],
	inp[35] ^ inp[66],
	inp[138] ^ inp[156],
	!(inp[165] ^ inp[24]),
	inp[152] & !inp[108],
	!(inp[184] & inp[72]),
	inp[59] ^ inp[87],
	!(inp[125] | inp[191]),
	inp[198] ^ inp[244],
	!inp[120] | (inp[62] & inp[120]),
	!(inp[98] | inp[99]),
	!inp[216] | (inp[216] & inp[124]),
	!(inp[147] | inp[182]),
	!(inp[70] | inp[90]),
	!inp[199] | (inp[199] & inp[42]),
	!(inp[159] ^ inp[141]),
	!inp[149],
	!(inp[71] | inp[245]),
	inp[187] & !inp[38],
	inp[249] ^ inp[248],
	!(inp[164] | inp[182]),
	inp[162] ^ inp[249],
	!(inp[164] ^ inp[167]),
	inp[116] | inp[213],
	!inp[219] | (inp[99] & inp[219]),
	inp[203] & !inp[81],
	inp[249] ^ inp[246],
	!(inp[118] & inp[198]),
	inp[142] | inp[157],
	!inp[198] | (inp[198] & inp[244]),
	!(inp[211] | inp[237]),
	inp[149],
	inp[244],
	!inp[153] | (inp[203] & inp[153]),
	inp[141],
	inp[170],
	!(inp[100] ^ inp[114]),
	inp[55] ^ inp[25],
	inp[81] | inp[50],
	!(inp[168] ^ inp[183]),
	!(inp[150] ^ inp[76]),
	inp[133] | inp[142],
	inp[94] ^ inp[95],
	inp[202] & !inp[90],
	!(inp[172] ^ inp[242]),
	inp[91] ^ inp[93],
	inp[120] ^ inp[116],
	!inp[70] | (inp[70] & inp[26]),
	!(inp[91] | inp[92]),
	!inp[197],
	!(inp[71] | inp[57]),
	inp[62] | inp[196],
	inp[120] ^ inp[189],
	!(inp[123] ^ inp[90]),
	inp[194] ^ inp[213],
	!(inp[122] ^ inp[8]),
	inp[44] ^ inp[42],
	!(inp[154] ^ inp[20]),
	inp[55] ^ inp[103],
	inp[53] | inp[74],
	inp[173] | inp[132],
	!(inp[250] ^ inp[75]),
	inp[198] ^ inp[229],
	!inp[152],
	inp[170] ^ inp[179],
	!(inp[92] ^ inp[61]),
	inp[115] ^ inp[117],
	inp[168] & !inp[66],
	inp[197],
	inp[121] ^ inp[168],
	!(inp[149] ^ inp[134]),
	inp[119] ^ inp[69],
	inp[170] ^ inp[105],
	!(inp[148] | inp[146]),
	inp[20] & !inp[45],
	!(inp[212] ^ inp[249]),
	inp[114] ^ inp[101],
	inp[221] | inp[211],
	!(inp[221] | inp[235]),
	inp[5] ^ inp[53],
	inp[89] & !inp[8],
	inp[105] | inp[34],
	inp[106] & !inp[233],
	inp[217] ^ inp[151],
	!(inp[91] | inp[137]),
	inp[125] | inp[169],
	inp[139] | inp[92],
	!inp[148],
	inp[136] ^ inp[22],
	!inp[71] | (inp[130] & inp[71]),
	!inp[123] | (inp[123] & inp[164]),
	inp[113] | inp[244],
	!inp[244],
	!(inp[92] ^ inp[46]),
	inp[8],
	!(inp[181] | inp[164]),
	inp[236] | inp[158],
	!(inp[22] | inp[154]),
	inp[248] | inp[110],
	inp[43] ^ inp[106],
	!inp[126] | (inp[126] & inp[249]),
	inp[124] ^ inp[106],
	!(inp[181] ^ inp[199]),
	!(inp[133] ^ inp[131]),
	inp[78],
	!inp[164] | (inp[70] & inp[164]),
	inp[119] & inp[246],
	inp[213],
	!(inp[95] ^ inp[153]),
	inp[60] & !inp[136],
	!inp[44] | (inp[41] & inp[44]),
	!(inp[197] & inp[183]),
	!(inp[195] | inp[187]),
	!inp[57],
	!(inp[233] ^ inp[202]),
	!inp[75] | (inp[217] & inp[75]),
	!(inp[187] ^ inp[189]),
	inp[5] ^ inp[7],
	!inp[47],
	inp[91] & !inp[27],
	inp[26] | inp[9],
	inp[189] | inp[89],
	!inp[97] | (inp[93] & inp[97]),
	inp[140] | inp[184],
	inp[63] | inp[10],
	!(inp[139] ^ inp[79]),
	!(inp[236] ^ inp[212]),
	inp[120],
	!inp[132] | (inp[82] & inp[132]),
	!(inp[81] | inp[103]),
	inp[90] & !inp[233],
	inp[63] ^ inp[28],
	inp[164] | inp[135],
	inp[228] ^ inp[79],
	!(inp[241] ^ inp[245]),
	!(inp[113] ^ inp[110]),
	!(inp[82] ^ inp[151]),
	!(inp[85] ^ inp[7]),
	!inp[73] | (inp[73] & inp[135]),
	!inp[167] | (inp[196] & inp[167]),
	inp[180] ^ inp[245],
	!inp[88] | (inp[88] & inp[136]),
	!(inp[196] | inp[211]),
	inp[131] | inp[133],
	!inp[104] | (inp[67] & inp[104]),
	inp[88] ^ inp[50],
	!inp[221],
	inp[91] ^ inp[89],
	!(inp[107] ^ inp[149]),
	inp[57] & !inp[157],
	!(inp[140] & inp[147]),
	inp[125] ^ inp[123],
	!(inp[76] & inp[109]),
	inp[133] ^ inp[163],
	!(inp[74] | inp[252]),
	inp[103],
	!(inp[178] | inp[235]),
	inp[120] ^ inp[166],
	inp[103] & !inp[84],
	inp[58] | inp[88],
	!(inp[230] | inp[199]),
	!(inp[248] | inp[202]),
	inp[233] ^ inp[242],
	inp[69] & !inp[117],
	!(inp[52] | inp[24]),
	!inp[220],
	!(inp[245] ^ inp[214]),
	!(inp[76] ^ inp[107]),
	!(inp[226] ^ inp[181]),
	!(inp[10] | inp[71]),
	inp[80] ^ inp[242],
	inp[152] | inp[212],
	inp[22] ^ inp[56],
	!inp[157],
	inp[92] ^ inp[51],
	!inp[184] | (inp[184] & inp[126]),
	inp[115] ^ inp[101],
	inp[169] & inp[78],
	!inp[249],
	inp[180] ^ inp[178],
	inp[168] | inp[107],
	!(inp[39] | inp[213]),
	!(inp[198] | inp[206]),
	!(inp[81] | inp[73]),
	!inp[246] | (inp[246] & inp[25]),
	!(inp[108] ^ inp[139]),
	!inp[184] | (inp[40] & inp[184]),
	inp[199] ^ inp[92],
	inp[29] ^ inp[62],
	!(inp[247] ^ inp[241]),
	inp[200] ^ inp[167],
	!(inp[220] ^ inp[111]),
	inp[166] ^ inp[121],
	!(inp[77] | inp[214]),
	!(inp[251] ^ inp[219]),
	!inp[131] | (inp[131] & inp[219]),
	inp[74] ^ inp[119],
	!(inp[245] ^ inp[212]),
	inp[235] ^ inp[218],
	!(inp[41] | inp[44]),
	!(inp[166] ^ inp[164]),
	inp[53] ^ inp[21],
	inp[140] ^ inp[171],
	!(inp[142] | inp[250]),
	inp[164] | inp[125],
	inp[51] | inp[149],
	inp[102] ^ inp[23],
	!(inp[184] & inp[51]),
	!inp[66],
	inp[74] | inp[72],
	inp[125] | inp[122],
	inp[43] | inp[180],
	inp[51] ^ inp[155],
	inp[90] | inp[78],
	!(inp[234] ^ inp[216]),
	!(inp[203] ^ inp[38]),
	inp[41] & !inp[39],
	inp[56] & !inp[210],
	inp[104] & !inp[133],
	!(inp[72] | inp[93]),
	!(inp[78] | inp[51]),
	!(inp[27] | inp[150]),
	inp[91],
	inp[168] & !inp[163],
	!(inp[125] | inp[170]),
	inp[135] | inp[228],
	inp[53] ^ inp[99],
	!inp[165],
	!(inp[108] ^ inp[110]),
	inp[41] ^ inp[29],
	inp[205] | inp[25],
	inp[72] & !inp[108],
	!(inp[95] | inp[161]),
	!(inp[22] | inp[156]),
	!(inp[146] | inp[166]),
	!(inp[27] | inp[213]),
	!(inp[149] | inp[95]),
	!(inp[73] | inp[77]),
	!(inp[124] | inp[90]),
	inp[23] ^ inp[186],
	inp[102] ^ inp[170],
	!inp[105] | (inp[139] & inp[105]),
	!(inp[134] | inp[193]),
	!inp[142] | (inp[229] & inp[142]),
	inp[119] ^ inp[150],
	!(inp[50] ^ inp[210]),
	inp[120] & !inp[107],
	inp[100] | inp[149],
	inp[181] ^ inp[179],
	!inp[35],
	inp[233] ^ inp[188],
	inp[36] | inp[107],
	inp[74] & inp[42],
	!(inp[59] | inp[56]),
	inp[105] ^ inp[125],
	!(inp[248] | inp[106]),
	inp[136] | inp[6],
	inp[137],
	!inp[167] | (inp[110] & inp[167]),
	inp[164] | inp[168],
	!(inp[180] | inp[162]),
	inp[132] ^ inp[146],
	!(inp[227] ^ inp[72]),
	!(inp[93] | inp[80]),
	!(inp[143] | inp[35]),
	!(inp[126] | inp[196]),
	!(inp[155] | inp[155]),
	!inp[202] | (inp[202] & inp[131]),
	!inp[170],
	!(inp[181] ^ inp[229]),
	inp[213],
	!(inp[58] ^ inp[89]),
	!(inp[241] | inp[173]),
	inp[156] | inp[199],
	!(inp[119] ^ inp[149]),
	inp[58] ^ inp[90],
	inp[157] | inp[243],
	inp[182] & !inp[236],
	!(inp[199] ^ inp[136]),
	inp[79] | inp[235],
	inp[214] & !inp[89],
	!(inp[149] | inp[124]),
	inp[104] & !inp[92],
	inp[152] & !inp[10],
	inp[123],
	inp[170] & !inp[104],
	!(inp[104] | inp[231]),
	inp[229] | inp[231],
	!inp[155] | (inp[221] & inp[155]),
	inp[189] | inp[219],
	!(inp[202] | inp[233]),
	!inp[215],
	!(inp[83] | inp[178]),
	!(inp[44] ^ inp[186]),
	!(inp[10] ^ inp[59]),
	!(inp[22] ^ inp[162]),
	inp[185] ^ inp[103],
	!(inp[206] | inp[120]),
	inp[227],
	!inp[86],
	!(inp[243] ^ inp[155]),
	inp[36] | inp[25],
	inp[41] & !inp[109],
	!(inp[11] | inp[28]),
	inp[170] ^ inp[59],
	inp[152] ^ inp[177],
	inp[181] & !inp[6],
	!inp[153] | (inp[153] & inp[164]),
	!(inp[237] | inp[191]),
	!(inp[132] ^ inp[196]),
	!(inp[232] ^ inp[185]),
	inp[116] ^ inp[102],
	inp[163] | inp[131],
	inp[233] | inp[180],
	!inp[234] | (inp[234] & inp[121]),
	inp[104] | inp[25],
	!(inp[163] | inp[130]),
	!(inp[193] | inp[179]),
	inp[46],
	inp[102] ^ inp[243],
	!(inp[199] ^ inp[44]),
	inp[86] ^ inp[67],
	!inp[221],
	!inp[70] | (inp[70] & inp[83]),
	!inp[53],
	!inp[87] | (inp[251] & inp[87]),
	!(inp[133] ^ inp[75]),
	inp[86] & !inp[135],
	!(inp[248] ^ inp[185]),
	inp[229] & !inp[219],
	!inp[126] | (inp[126] & inp[135]),
	!(inp[131] | inp[227]),
	!(inp[118] | inp[148]),
	!(inp[110] ^ inp[108]),
	!(inp[115] ^ inp[117]),
	inp[68],
	inp[182],
	inp[104] & !inp[107],
	inp[195] ^ inp[143],
	!inp[103] | (inp[103] & inp[69]),
	!inp[154] | (inp[141] & inp[154]),
	inp[72] & inp[58],
	inp[35] | inp[176],
	inp[19],
	inp[180] ^ inp[105],
	inp[39] ^ inp[8],
	!(inp[52] ^ inp[82]),
	inp[130] ^ inp[39],
	inp[217] & !inp[83],
	!(inp[132] | inp[130]),
	inp[69] ^ inp[23],
	inp[76],
	!(inp[89] | inp[123]),
	inp[72] ^ inp[195],
	!inp[215] | (inp[215] & inp[229]),
	inp[248] | inp[118],
	!(inp[89] ^ inp[104]),
	inp[226] | inp[209],
	!inp[130],
	inp[103],
	inp[102],
	!inp[85] | (inp[85] & inp[148]),
	!(inp[114] ^ inp[101]),
	inp[150] | inp[82],
	!(inp[76] | inp[215]),
	inp[73] | inp[41],
	!inp[217] | (inp[217] & inp[171]),
	!inp[85],
	!inp[10] | (inp[10] & inp[228]),
	!(inp[69] ^ inp[102]),
	!(inp[74] & inp[69]),
	inp[250] | inp[108],
	!(inp[204] ^ inp[201]),
	inp[230] ^ inp[183],
	inp[101] & !inp[214],
	!(inp[124] ^ inp[166]),
	!inp[170] | (inp[170] & inp[204]),
	inp[163],
	inp[115] ^ inp[117],
	!inp[218] | (inp[218] & inp[125]),
	!(inp[156] ^ inp[137]),
	inp[87] ^ inp[116],
	!(inp[71] ^ inp[38]),
	!(inp[126] | inp[214]),
	!inp[71] | (inp[71] & inp[52]),
	!inp[116] | (inp[116] & inp[9]),
	!inp[67],
	inp[151] ^ inp[104],
	inp[212] ^ inp[94],
	!(inp[76] | inp[107]),
	!inp[136] | (inp[76] & inp[136]),
	!(inp[55] & inp[70]),
	!(inp[199] ^ inp[246]),
	!(inp[183] ^ inp[122]),
	!(inp[185] ^ inp[242]),
	!inp[182] | (inp[182] & inp[78]),
	!(inp[36] | inp[21]),
	inp[93] | inp[228],
	inp[167] & !inp[20],
	inp[63] | inp[139],
	!(inp[83] ^ inp[69]),
	!inp[178] | (inp[178] & inp[232]),
	inp[37] | inp[171],
	inp[121] ^ inp[131],
	inp[218] ^ inp[81],
	!(inp[158] | inp[62]),
	inp[82] | inp[40],
	inp[21] ^ inp[143],
	inp[52] ^ inp[81],
	!inp[138] | (inp[41] & inp[138]),
	!(inp[102] ^ inp[70]),
	!(inp[183] ^ inp[181]),
	!(inp[60] ^ inp[91]),
	inp[218] ^ inp[183],
	!(inp[107] ^ inp[125]),
	inp[121] ^ inp[140],
	inp[91] ^ inp[93],
	};

	out[0] = l1[1562] & l1[2267];
	out[1] = l1[3041] ^ l1[2261];
	out[2] = l1[3485] & l1[1315];
	out[3] = l1[2208] ^ l1[1920];
	out[4] = !l1[372];
	out[5] = !l1[3332] | (l1[2259] & l1[3332]);
	out[6] = l1[3377] & !l1[349];
	out[7] = !(l1[3946] | l1[358]);
	out[8] = l1[3973] & !l1[3263];
	out[9] = l1[2007] & l1[3393];
	out[10] = !l1[1561] | (l1[1561] & l1[1419]);
	out[11] = !l1[2858];
	out[12] = !l1[1166];
	out[13] = l1[1488] ^ l1[2803];
	out[14] = !(l1[3528] & l1[2541]);
	out[15] = !l1[1105];
	out[16] = !l1[3033];
	out[17] = !l1[3193];
	out[18] = l1[2774] & !l1[2228];
	out[19] = !l1[2453];
	out[20] = l1[2079] & !l1[386];
	out[21] = l1[1740] ^ l1[1670];
	out[22] = l1[2515] & !l1[3598];
	out[23] = !(l1[2178] ^ l1[2894]);
	out[24] = l1[3272] & !l1[2764];
	out[25] = l1[1191] & !l1[1758];
	out[26] = !l1[2205];
	out[27] = l1[3622] & !l1[1926];
	out[28] = !l1[2390];
	out[29] = l1[196] & !l1[534];
	out[30] = l1[262] ^ l1[1149];
	out[31] = l1[548] ^ l1[3966];
	out[32] = l1[1007] ^ l1[2899];
	out[33] = l1[1053] & !l1[521];
	out[34] = l1[868] & !l1[1737];
	out[35] = !(l1[3688] & l1[1333]);
	out[36] = !l1[3823];
	out[37] = l1[2901];
	out[38] = !l1[3652] | (l1[3652] & l1[2040]);
	out[39] = !(l1[134] ^ l1[304]);
	out[40] = l1[3731];
	out[41] = l1[3209] ^ l1[3034];
	out[42] = !l1[1129];
	out[43] = l1[2006] & !l1[2189];
	out[44] = !l1[1087];
	out[45] = l1[776] ^ l1[3783];
	out[46] = l1[1701] | l1[952];
	out[47] = l1[708] ^ l1[1411];
	out[48] = l1[3399] ^ l1[3241];
	out[49] = !l1[405] | (l1[405] & l1[2986]);
	out[50] = l1[1568] & l1[2989];
	out[51] = l1[3146];
	out[52] = l1[3196] & !l1[330];
	out[53] = l1[263] & !l1[1377];
	out[54] = l1[435] & l1[3890];
	out[55] = l1[391] ^ l1[2913];
	out[56] = !(l1[3242] ^ l1[324]);
	out[57] = !(l1[549] & l1[3671]);
	out[58] = !(l1[371] ^ l1[362]);
	out[59] = l1[2524] & !l1[1407];
	out[60] = l1[2791];
	out[61] = l1[1291];
	out[62] = !l1[2244];
	out[63] = l1[1026] & !l1[2043];
	out[64] = !l1[1300];
	out[65] = l1[75] ^ l1[3602];
	out[66] = l1[566] ^ l1[1691];
	out[67] = !(l1[51] | l1[89]);
	out[68] = l1[1653] ^ l1[2998];
	out[69] = l1[1543] ^ l1[676];
	out[70] = l1[1201] ^ l1[1906];
	out[71] = l1[1243];
	out[72] = l1[3268] ^ l1[1841];
	out[73] = l1[2261] & l1[3976];
	out[74] = l1[1433];
	out[75] = !(l1[2437] & l1[2406]);
	out[76] = l1[2549] & l1[2315];
	out[77] = l1[1019] & !l1[3035];
	out[78] = !(l1[1151] | l1[3351]);
	out[79] = l1[1615] & !l1[490];
	out[80] = l1[562];
	out[81] = !l1[1414];
	out[82] = !(l1[3415] ^ l1[2949]);
	out[83] = !l1[588];
	out[84] = l1[1911] & l1[3140];
	out[85] = !(l1[280] | l1[7]);
	out[86] = l1[518];
	out[87] = l1[3973];
	out[88] = !(l1[211] | l1[1452]);
	out[89] = l1[3591];
	out[90] = !(l1[224] ^ l1[846]);
	out[91] = l1[1191];
	out[92] = l1[3435];
	out[93] = l1[3371] & !l1[2465];
	out[94] = l1[1728];
	out[95] = !l1[462];
	out[96] = l1[306] ^ l1[1721];
	out[97] = !(l1[2983] | l1[2992]);
	out[98] = !l1[311] | (l1[311] & l1[3880]);
	out[99] = !(l1[1798] ^ l1[903]);
	out[100] = !(l1[1865] ^ l1[3758]);
	out[101] = l1[2061];
	out[102] = !(l1[1233] ^ l1[325]);
	out[103] = l1[990] & !l1[3551];
	out[104] = l1[1231];
	out[105] = !(l1[102] ^ l1[3995]);
	out[106] = !(l1[1024] | l1[431]);
	out[107] = !l1[1833];
	out[108] = l1[3087];
	out[109] = !l1[3389] | (l1[3389] & l1[608]);
	out[110] = l1[1775] ^ l1[1978];
	out[111] = !(l1[3683] ^ l1[1666]);
	out[112] = l1[2696] & l1[1795];
	out[113] = l1[3516] & l1[1842];
	out[114] = !l1[2129];
	out[115] = l1[1979];
	out[116] = l1[2381] & !l1[722];
	out[117] = l1[1732] & !l1[922];
	out[118] = !(l1[249] ^ l1[1155]);
	out[119] = l1[1573];
	out[120] = !(l1[1809] | l1[112]);
	out[121] = !(l1[1254] ^ l1[3761]);
	out[122] = !l1[2594] | (l1[2105] & l1[2594]);
	out[123] = !l1[3143];
	out[124] = l1[799] & !l1[1379];
	out[125] = l1[3333] ^ l1[2746];
	out[126] = !l1[1874] | (l1[3434] & l1[1874]);
	out[127] = l1[2590] & l1[3368];
	out[128] = !(l1[2574] | l1[1418]);
	out[129] = !l1[3749];
	out[130] = l1[1702];
	out[131] = l1[1476];
	out[132] = l1[796] ^ l1[1423];
	out[133] = !(l1[610] | l1[1202]);
	out[134] = l1[2026] ^ l1[3092];
	out[135] = !l1[2383] | (l1[2383] & l1[1729]);
	out[136] = l1[1870];
	out[137] = l1[623] & l1[3309];
	out[138] = !l1[172] | (l1[2278] & l1[172]);
	out[139] = l1[1011] ^ l1[1413];
	out[140] = !(l1[1247] & l1[2617]);
	out[141] = l1[2966];
	out[142] = l1[3038] & !l1[1827];
	out[143] = !(l1[707] ^ l1[1477]);
	out[144] = l1[2374] & l1[3961];
	out[145] = !(l1[165] | l1[2919]);
	out[146] = !(l1[1783] ^ l1[2168]);
	out[147] = !l1[1539] | (l1[1539] & l1[3259]);
	out[148] = !l1[2857];
	out[149] = !l1[2454] | (l1[2454] & l1[904]);
	out[150] = l1[1344] ^ l1[316];
	out[151] = l1[3634] ^ l1[84];
	out[152] = !(l1[965] ^ l1[2368]);
	out[153] = l1[1292] & !l1[2246];
	out[154] = !l1[1977];
	out[155] = l1[2128] & !l1[2133];
	out[156] = l1[1471];
	out[157] = !(l1[82] ^ l1[879]);
	out[158] = l1[2230] & l1[3414];
	out[159] = !(l1[620] & l1[2634]);
	out[160] = l1[116] ^ l1[877];
	out[161] = !l1[1710];
	out[162] = l1[1952] ^ l1[969];
	out[163] = l1[1355] ^ l1[3943];
	out[164] = !l1[3743];
	out[165] = l1[1844];
	out[166] = l1[3379] & !l1[446];
	out[167] = !l1[1058] | (l1[2103] & l1[1058]);
	out[168] = l1[2732];
	out[169] = !(l1[250] | l1[443]);
	out[170] = l1[2293] & !l1[921];
	out[171] = l1[393];
	out[172] = !l1[3879];
	out[173] = !(l1[717] ^ l1[2315]);
	out[174] = !l1[3827];
	out[175] = !(l1[3219] ^ l1[3597]);
	out[176] = l1[3545] & l1[2323];
	out[177] = !l1[179];
	out[178] = !l1[537];
	out[179] = !l1[1741];
	out[180] = !l1[2225] | (l1[2225] & l1[1724]);
	out[181] = !(l1[2948] | l1[750]);
	out[182] = !l1[636];
	out[183] = !(l1[1121] ^ l1[175]);
	out[184] = l1[1122] | l1[1965];
	out[185] = l1[2572] ^ l1[1776];
	out[186] = !(l1[3017] | l1[3913]);
	out[187] = !(l1[1891] | l1[2455]);
	out[188] = l1[1779] ^ l1[1088];
	out[189] = !(l1[349] | l1[2467]);
	out[190] = l1[1972] ^ l1[2741];
	out[191] = l1[417] ^ l1[3510];
	out[192] = !(l1[1968] | l1[351]);
	out[193] = !(l1[931] | l1[2759]);
	out[194] = l1[2143] & l1[536];
	out[195] = !l1[571] | (l1[632] & l1[571]);
	out[196] = l1[1910];
	out[197] = l1[221] ^ l1[3232];
	out[198] = !(l1[38] ^ l1[245]);
	out[199] = l1[1204] ^ l1[270];
	out[200] = l1[3637] & !l1[3360];
	out[201] = l1[1187];
	out[202] = l1[3243] & !l1[2314];
	out[203] = !l1[1706];
	out[204] = l1[268];
	out[205] = !l1[3413];
	out[206] = l1[2659] & l1[1842];
	out[207] = !(l1[2411] | l1[768]);
	out[208] = !l1[386];
	out[209] = !l1[2763];
	out[210] = l1[2704];
	out[211] = !(l1[1039] ^ l1[401]);
	out[212] = !(l1[3482] | l1[2762]);
	out[213] = l1[2443];
	out[214] = !(l1[2961] ^ l1[482]);
	out[215] = l1[1329];
	out[216] = !(l1[2197] ^ l1[1252]);
	out[217] = !l1[458] | (l1[458] & l1[3546]);
	out[218] = l1[2365] ^ l1[3354];
	out[219] = l1[3010] & !l1[3848];
	out[220] = !(l1[1580] | l1[1836]);
	out[221] = !l1[3666];
	out[222] = !(l1[3203] ^ l1[1950]);
	out[223] = l1[3556] | l1[3661];
	out[224] = l1[1575] & !l1[3202];
	out[225] = !(l1[26] ^ l1[3088]);
	out[226] = !(l1[2866] | l1[2573]);
	out[227] = l1[427];
	out[228] = !(l1[438] ^ l1[2197]);
	out[229] = l1[781];
	out[230] = l1[2094] & !l1[1072];
	out[231] = l1[3656] ^ l1[1838];
	out[232] = !l1[1441];
	out[233] = l1[791] & l1[1411];
	out[234] = l1[583];
	out[235] = !l1[2456] | (l1[2456] & l1[303]);
	out[236] = !(l1[1985] ^ l1[3457]);
	out[237] = !l1[383];
	out[238] = l1[484] ^ l1[2090];
	out[239] = l1[1757] ^ l1[3769];
	out[240] = l1[1219] ^ l1[2212];
	out[241] = l1[399] & !l1[2313];
	out[242] = !(l1[1893] ^ l1[1595]);
	out[243] = !l1[3623];
	out[244] = !(l1[3021] ^ l1[1168]);
	out[245] = !(l1[811] ^ l1[3912]);
	out[246] = !(l1[2931] ^ l1[2220]);
	out[247] = !(l1[3900] ^ l1[2814]);
	out[248] = l1[2625];
	out[249] = l1[847] ^ l1[3240];
	out[250] = !l1[2693] | (l1[2693] & l1[2533]);
	out[251] = !(l1[340] ^ l1[1159]);
	out[252] = !(l1[2753] | l1[1672]);
	out[253] = !l1[871] | (l1[871] & l1[1564]);
	out[254] = !(l1[2882] & l1[269]);
	out[255] = !l1[1638] | (l1[1638] & l1[93]);
	out[256] = l1[2957];
	out[257] = !(l1[3875] ^ l1[227]);
	out[258] = l1[979] | l1[3354];
	out[259] = !l1[1604];
	out[260] = l1[508] ^ l1[138];
	out[261] = l1[1681] & l1[1709];
	out[262] = !(l1[2745] ^ l1[1959]);
	out[263] = !l1[3032];
	out[264] = l1[17] ^ l1[1496];
	out[265] = !(l1[756] ^ l1[1602]);
	out[266] = !l1[2060] | (l1[2060] & l1[96]);
	out[267] = l1[3474];
	out[268] = !(l1[3822] | l1[1363]);
	out[269] = l1[3770];
	out[270] = l1[180] ^ l1[3788];
	out[271] = l1[390] & l1[1565];
	out[272] = l1[2518];
	out[273] = !(l1[593] ^ l1[945]);
	out[274] = l1[181] & !l1[1280];
	out[275] = !l1[523];
	out[276] = !l1[40] | (l1[40] & l1[430]);
	out[277] = !(l1[2579] | l1[2210]);
	out[278] = !(l1[717] ^ l1[907]);
	out[279] = l1[2413] & !l1[1661];
	out[280] = l1[2641] ^ l1[2845];
	out[281] = !(l1[2235] ^ l1[1499]);
	out[282] = l1[3080] ^ l1[3554];
	out[283] = l1[1850];
	out[284] = !l1[3392];
	out[285] = !(l1[3011] ^ l1[2127]);
	out[286] = !(l1[1065] ^ l1[2175]);
	out[287] = !(l1[2812] & l1[3533]);
	out[288] = l1[1364] & l1[3640];
	out[289] = l1[1351] & l1[2198];
	out[290] = !(l1[3269] | l1[2761]);
	out[291] = !(l1[431] ^ l1[1115]);
	out[292] = !(l1[2274] | l1[4]);
	out[293] = !l1[3493];
	out[294] = l1[3119] & !l1[3588];
	out[295] = !(l1[1212] ^ l1[1894]);
	out[296] = !(l1[3462] ^ l1[3982]);
	out[297] = l1[3768] | l1[544];
	out[298] = l1[865] & !l1[317];
	out[299] = !(l1[3483] | l1[951]);
	out[300] = l1[2053] & !l1[3004];
	out[301] = l1[2897] ^ l1[3834];
	out[302] = l1[744] & !l1[3638];
	out[303] = l1[186] & l1[1617];
	out[304] = !l1[625];
	out[305] = l1[1059] ^ l1[2355];
	out[306] = !l1[3058];
	out[307] = l1[2216] & !l1[1804];
	out[308] = l1[1745];
	out[309] = l1[3353];
	out[310] = l1[542] ^ l1[1685];
	out[311] = !(l1[2548] | l1[964]);
	out[312] = l1[3695] & !l1[1584];
	out[313] = !(l1[1782] ^ l1[278]);
	out[314] = l1[1578] ^ l1[2029];
	out[315] = l1[3909];
	out[316] = !(l1[2793] ^ l1[2142]);
	out[317] = !(l1[2880] ^ l1[3952]);
	out[318] = l1[2349] & !l1[1620];
	out[319] = !(l1[580] ^ l1[1678]);
	out[320] = !l1[241];
	out[321] = !(l1[489] ^ l1[2001]);
	out[322] = l1[1061] ^ l1[295];
	out[323] = l1[1313];
	out[324] = !(l1[587] ^ l1[1387]);
	out[325] = !(l1[1847] ^ l1[1720]);
	out[326] = l1[3318] ^ l1[3757];
	out[327] = !l1[1026] | (l1[1026] & l1[2945]);
	out[328] = !l1[1963] | (l1[1963] & l1[547]);
	out[329] = l1[3478];
	out[330] = l1[1283] & l1[1146];
	out[331] = l1[668] ^ l1[3959];
	out[332] = l1[1096] ^ l1[2566];
	out[333] = l1[3576] ^ l1[993];
	out[334] = l1[1367] ^ l1[3127];
	out[335] = !(l1[2059] ^ l1[2281]);
	out[336] = l1[442] & !l1[486];
	out[337] = !(l1[1082] ^ l1[239]);
	out[338] = !(l1[1312] | l1[3113]);
	out[339] = l1[407];
	out[340] = l1[3920] & !l1[2145];
	out[341] = l1[1398] ^ l1[2834];
	out[342] = !l1[1099];
	out[343] = !l1[954] | (l1[1983] & l1[954]);
	out[344] = l1[127];
	out[345] = !l1[2967];
	out[346] = l1[2450] ^ l1[2431];
	out[347] = l1[423] & !l1[163];
	out[348] = l1[454] ^ l1[197];
	out[349] = l1[3257];
	out[350] = l1[1946] ^ l1[3693];
	out[351] = l1[1655] & l1[2347];
	out[352] = !(l1[2422] ^ l1[2715]);
	out[353] = l1[3065] & !l1[693];
	out[354] = l1[1314] & l1[1550];
	out[355] = !(l1[1218] ^ l1[3968]);
	out[356] = !l1[2513];
	out[357] = !(l1[2499] ^ l1[1007]);
	out[358] = l1[1920] & !l1[3500];
	out[359] = !(l1[3144] ^ l1[309]);
	out[360] = l1[662];
	out[361] = !(l1[2285] ^ l1[2401]);
	out[362] = l1[1861] ^ l1[1119];
	out[363] = l1[1378] ^ l1[1245];
	out[364] = !l1[1358] | (l1[818] & l1[1358]);
	out[365] = l1[1854] ^ l1[3908];
	out[366] = !(l1[2896] ^ l1[1560]);
	out[367] = !(l1[966] ^ l1[3439]);
	out[368] = !(l1[2387] ^ l1[1156]);
	out[369] = l1[165];
	out[370] = !(l1[986] ^ l1[822]);
	out[371] = !l1[1104];
	out[372] = l1[1251] ^ l1[3613];
	out[373] = l1[3071];
	out[374] = !(l1[3089] ^ l1[1897]);
	out[375] = l1[1515] & !l1[1047];
	out[376] = l1[3604] ^ l1[177];
	out[377] = !(l1[3937] ^ l1[98]);
	out[378] = l1[498] ^ l1[3871];
	out[379] = l1[552] & !l1[2226];
	out[380] = l1[3676] & !l1[1181];
	out[381] = l1[402] & !l1[3376];
	out[382] = l1[2256] & !l1[3669];
	out[383] = !(l1[3410] | l1[3928]);
	out[384] = l1[2876];
	out[385] = !(l1[3931] ^ l1[753]);
	out[386] = l1[1362] ^ l1[50];
	out[387] = l1[561] ^ l1[2385];
	out[388] = l1[1008] ^ l1[2019];
	out[389] = l1[3656] & !l1[3586];
	out[390] = !(l1[1840] ^ l1[3924]);
	out[391] = l1[1660] & l1[86];
	out[392] = l1[2802];
	out[393] = l1[2612] ^ l1[494];
	out[394] = l1[1794] & l1[2337];
	out[395] = !(l1[2375] ^ l1[1485]);
	out[396] = l1[2887] ^ l1[3270];
	out[397] = l1[1422];
	out[398] = !(l1[1210] | l1[1444]);
	out[399] = l1[3708] & !l1[618];
	out[400] = l1[1825];
	out[401] = l1[2604];
	out[402] = !l1[1800];
	out[403] = !(l1[3388] | l1[1851]);
	out[404] = !(l1[1076] ^ l1[2306]);
	out[405] = l1[2366] & !l1[48];
	out[406] = l1[3519] & !l1[2326];
	out[407] = l1[1091] & !l1[2093];
	out[408] = l1[166];
	out[409] = !(l1[1589] | l1[208]);
	out[410] = !(l1[1406] ^ l1[2008]);
	out[411] = !(l1[3508] ^ l1[3838]);
	out[412] = !(l1[122] ^ l1[1544]);
	out[413] = l1[1298] ^ l1[199];
	out[414] = l1[1629] ^ l1[1178];
	out[415] = !(l1[3391] | l1[2712]);
	out[416] = l1[2527] ^ l1[2658];
	out[417] = l1[605] & !l1[2294];
	out[418] = !l1[2685] | (l1[2685] & l1[3436]);
	out[419] = !(l1[3489] | l1[1901]);
	out[420] = l1[3936];
	out[421] = l1[2794] & !l1[1914];
	out[422] = l1[2037];
	out[423] = l1[705] & !l1[2307];
	out[424] = l1[1429] & l1[404];
	out[425] = !(l1[3227] | l1[1442]);
	out[426] = l1[2486];
	out[427] = l1[996];
	out[428] = l1[2361] ^ l1[2114];
	out[429] = !(l1[2423] | l1[1950]);
	out[430] = l1[2075] & !l1[1235];
	out[431] = !l1[3662] | (l1[3441] & l1[3662]);
	out[432] = l1[3845] ^ l1[592];
	out[433] = l1[1541] & !l1[830];
	out[434] = l1[87] & !l1[1975];
	out[435] = !(l1[1234] ^ l1[271]);
	out[436] = !l1[2550];
	out[437] = l1[2124];
	out[438] = !l1[2069];
	out[439] = l1[1322] ^ l1[679];
	out[440] = l1[1097] ^ l1[1495];
	out[441] = l1[1991] & !l1[3430];
	out[442] = !(l1[3175] & l1[2096]);
	out[443] = l1[3514] & !l1[2632];
	out[444] = l1[2890] & l1[3145];
	out[445] = !l1[2100];
	out[446] = l1[932] ^ l1[385];
	out[447] = !(l1[126] & l1[3372]);
	out[448] = !(l1[109] | l1[2525]);
	out[449] = l1[389] ^ l1[3372];
	out[450] = l1[107] ^ l1[1732];
	out[451] = !l1[1237] | (l1[3464] & l1[1237]);
	out[452] = l1[1324] & !l1[3060];
	out[453] = l1[289] ^ l1[292];
	out[454] = !(l1[642] ^ l1[1969]);
	out[455] = l1[1794] & l1[2510];
	out[456] = l1[3400] ^ l1[409];
	out[457] = l1[2933] ^ l1[1099];
	out[458] = !(l1[2275] ^ l1[3912]);
	out[459] = l1[2116] ^ l1[1434];
	out[460] = l1[3992] ^ l1[3180];
	out[461] = l1[1344] & l1[3872];
	out[462] = l1[957] ^ l1[2144];
	out[463] = l1[639];
	out[464] = l1[2944];
	out[465] = l1[2850] ^ l1[3795];
	out[466] = !l1[3948];
	out[467] = l1[3688] & l1[1342];
	out[468] = !(l1[3178] | l1[3824]);
	out[469] = l1[3981] & l1[2252];
	out[470] = l1[236];
	out[471] = !l1[695];
	out[472] = l1[2387] ^ l1[281];
	out[473] = !(l1[843] | l1[763]);
	out[474] = l1[3406];
	out[475] = l1[8] & l1[2011];
	out[476] = !(l1[849] | l1[692]);
	out[477] = l1[1797] ^ l1[2817];
	out[478] = l1[1590] & !l1[930];
	out[479] = l1[3097] & !l1[3961];
	out[480] = !l1[1821];
	out[481] = l1[2163] ^ l1[2765];
	out[482] = !(l1[3149] ^ l1[2744]);
	out[483] = l1[3046] & l1[1376];
	out[484] = l1[570];
	out[485] = l1[3280] & !l1[2717];
	out[486] = l1[1785];
	out[487] = l1[3192] & !l1[1858];
	out[488] = !(l1[1217] | l1[3647]);
	out[489] = !l1[155] | (l1[155] & l1[1493]);
	out[490] = !l1[581] | (l1[581] & l1[2086]);
	out[491] = l1[2686];
	out[492] = l1[735] & !l1[2709];
	out[493] = l1[3363];
	out[494] = l1[194] ^ l1[34];
	out[495] = l1[1805] & !l1[3643];
	out[496] = l1[2458] & !l1[286];
	out[497] = !l1[2831] | (l1[2831] & l1[777]);
	out[498] = l1[3542] & l1[1787];
	out[499] = l1[3177] & !l1[713];
	out[500] = !l1[1343] | (l1[1343] & l1[2209]);
	out[501] = l1[1143] & !l1[901];
	out[502] = !(l1[984] ^ l1[3610]);
	out[503] = !(l1[3276] ^ l1[1539]);
	out[504] = l1[368] & !l1[975];
	out[505] = l1[2186] ^ l1[1219];
	out[506] = !l1[1532];
	out[507] = !l1[3030] | (l1[3030] & l1[2242]);
	out[508] = l1[1925];
	out[509] = l1[865] & !l1[2110];
	out[510] = !l1[2898];
	out[511] = !l1[667];
	out[512] = !(l1[528] ^ l1[3599]);
	out[513] = !l1[2515] | (l1[2515] & l1[3637]);
	out[514] = l1[3745] ^ l1[3405];
	out[515] = !(l1[327] ^ l1[3001]);
	out[516] = !(l1[3105] ^ l1[2438]);
	out[517] = !(l1[929] & l1[169]);
	out[518] = !(l1[740] ^ l1[654]);
	out[519] = l1[1237] & !l1[104];
	out[520] = l1[3887];
	out[521] = l1[1512] ^ l1[3277];
	out[522] = !(l1[340] ^ l1[766]);
	out[523] = !(l1[1902] ^ l1[2299]);
	out[524] = !(l1[320] & l1[3720]);
	out[525] = !(l1[2045] ^ l1[1926]);
	out[526] = l1[3778] ^ l1[1827];
	out[527] = l1[2823] ^ l1[3945];
	out[528] = !l1[3775];
	out[529] = l1[3627] ^ l1[1516];
	out[530] = !(l1[2072] ^ l1[14]);
	out[531] = !l1[2487] | (l1[2429] & l1[2487]);
	out[532] = l1[720] ^ l1[3763];
	out[533] = !(l1[2565] ^ l1[279]);
	out[534] = !l1[795] | (l1[795] & l1[1310]);
	out[535] = !(l1[1535] ^ l1[76]);
	out[536] = !l1[2737];
	out[537] = l1[3773];
	out[538] = !l1[1003];
	out[539] = l1[2295] ^ l1[1753];
	out[540] = l1[59] ^ l1[3077];
	out[541] = !(l1[471] ^ l1[2042]);
	out[542] = !l1[784];
	out[543] = l1[2596] ^ l1[1832];
	out[544] = !(l1[3240] ^ l1[1741]);
	out[545] = l1[3039] ^ l1[234];
	out[546] = !l1[2815];
	out[547] = !l1[3244];
	out[548] = l1[890] | l1[1414];
	out[549] = !l1[282];
	out[550] = !l1[3359];
	out[551] = !(l1[1154] ^ l1[1731]);
	out[552] = !l1[142];
	out[553] = l1[3428] & !l1[460];
	out[554] = !(l1[3891] & l1[2980]);
	out[555] = l1[780] ^ l1[1119];
	out[556] = l1[2993];
	out[557] = !(l1[3825] ^ l1[1098]);
	out[558] = l1[3271] ^ l1[3735];
	out[559] = l1[2670];
	out[560] = !l1[3759];
	out[561] = !(l1[1457] & l1[315]);
	out[562] = !(l1[579] ^ l1[3964]);
	out[563] = !l1[3263];
	out[564] = !l1[1169] | (l1[1169] & l1[564]);
	out[565] = l1[3902] ^ l1[1];
	out[566] = l1[2311] ^ l1[23];
	out[567] = l1[1172] | l1[1443];
	out[568] = l1[2324] & l1[3343];
	out[569] = !(l1[3650] ^ l1[3184]);
	out[570] = l1[3619] & !l1[1713];
	out[571] = !(l1[3962] ^ l1[655]);
	out[572] = !(l1[1221] ^ l1[1381]);
	out[573] = !(l1[2339] & l1[2958]);
	out[574] = l1[2215] ^ l1[1075];
	out[575] = l1[2204] ^ l1[3915];
	out[576] = l1[2493] | l1[1781];
	out[577] = l1[1880] ^ l1[2736];
	out[578] = !l1[517];
	out[579] = !(l1[1078] ^ l1[2118]);
	out[580] = l1[2542] ^ l1[369];
	out[581] = !(l1[941] ^ l1[3098]);
	out[582] = l1[3471] ^ l1[1819];
	out[583] = l1[3436];
	out[584] = l1[2205];
	out[585] = l1[2120] ^ l1[1980];
	out[586] = !(l1[1917] ^ l1[962]);
	out[587] = l1[11] ^ l1[829];
	out[588] = l1[3534] ^ l1[261];
	out[589] = !(l1[1117] & l1[2895]);
	out[590] = l1[3984] ^ l1[1265];
	out[591] = !l1[3893];
	out[592] = !(l1[2767] ^ l1[2820]);
	out[593] = l1[1106] ^ l1[3518];
	out[594] = l1[3148] & !l1[3649];
	out[595] = l1[2804] ^ l1[3877];
	out[596] = l1[1465] ^ l1[3917];
	out[597] = l1[3052] ^ l1[532];
	out[598] = !l1[2553] | (l1[2553] & l1[3886]);
	out[599] = l1[738] ^ l1[3726];
	out[600] = !(l1[2605] ^ l1[767]);
	out[601] = l1[216] & !l1[1867];
	out[602] = !(l1[1273] ^ l1[3229]);
	out[603] = !(l1[2078] ^ l1[3607]);
	out[604] = !(l1[1250] ^ l1[1124]);
	out[605] = l1[158] ^ l1[3851];
	out[606] = !(l1[3986] & l1[1070]);
	out[607] = l1[1531];
	out[608] = !l1[1823] | (l1[1095] & l1[1823]);
	out[609] = !(l1[1519] ^ l1[3316]);
	out[610] = !l1[2305];
	out[611] = l1[2213];
	out[612] = l1[1450] ^ l1[2111];
	out[613] = !(l1[814] | l1[1190]);
	out[614] = l1[2883] ^ l1[3950];
	out[615] = !(l1[2496] ^ l1[3063]);
	out[616] = l1[836] ^ l1[80];
	out[617] = l1[2552] & !l1[2483];
	out[618] = l1[1376] ^ l1[3176];
	out[619] = l1[3512] ^ l1[1205];
	out[620] = l1[3570] ^ l1[2755];
	out[621] = l1[1739] & !l1[2666];
	out[622] = l1[2910] | l1[2377];
	out[623] = !l1[3503];
	out[624] = l1[1056];
	out[625] = !l1[3409] | (l1[3109] & l1[3409]);
	out[626] = l1[935];
	out[627] = l1[625] | l1[1987];
	out[628] = !l1[3029];
	out[629] = l1[3224] ^ l1[3141];
	out[630] = l1[3797] | l1[1651];
	out[631] = !(l1[2086] ^ l1[1348]);
	out[632] = l1[2653] & !l1[3841];
	out[633] = l1[2427] ^ l1[230];
	out[634] = l1[3833];
	out[635] = !(l1[684] ^ l1[3587]);
	out[636] = !(l1[1596] ^ l1[1050]);
	out[637] = l1[3490];
	out[638] = l1[1790] ^ l1[638];
	out[639] = l1[2459] ^ l1[2091];
	out[640] = l1[1752] ^ l1[747];
	out[641] = l1[1866];
	out[642] = !l1[1727] | (l1[1200] & l1[1727]);
	out[643] = !l1[303];
	out[644] = l1[1554] | l1[2320];
	out[645] = !l1[3578];
	out[646] = !l1[1656];
	out[647] = !(l1[2280] & l1[2470]);
	out[648] = !(l1[2468] ^ l1[1033]);
	out[649] = l1[257] & !l1[3217];
	out[650] = l1[2873] ^ l1[1157];
	out[651] = l1[2733];
	out[652] = l1[2500] | l1[190];
	out[653] = !(l1[1] ^ l1[907]);
	out[654] = !l1[3635];
	out[655] = !(l1[105] & l1[104]);
	out[656] = l1[3772] & l1[3093];
	out[657] = !(l1[1867] & l1[3156]);
	out[658] = !l1[3243] | (l1[3243] & l1[680]);
	out[659] = !(l1[2860] ^ l1[1316]);
	out[660] = l1[1384] ^ l1[454];
	out[661] = !l1[2538];
	out[662] = !l1[1698];
	out[663] = !l1[821];
	out[664] = l1[2738] ^ l1[85];
	out[665] = !(l1[1862] ^ l1[1567]);
	out[666] = !l1[361];
	out[667] = l1[3138] & !l1[3629];
	out[668] = !l1[3502];
	out[669] = !(l1[1723] & l1[1609]);
	out[670] = !(l1[3542] ^ l1[1918]);
	out[671] = l1[2553] ^ l1[2125];
	out[672] = l1[3679] ^ l1[2260];
	out[673] = l1[1240];
	out[674] = !l1[953];
	out[675] = l1[1696] ^ l1[589];
	out[676] = !(l1[980] ^ l1[1829]);
	out[677] = l1[2927] & !l1[415];
	out[678] = l1[2507] & !l1[60];
	out[679] = !l1[3461];
	out[680] = l1[2059];
	out[681] = l1[1302];
	out[682] = !(l1[2789] ^ l1[2087]);
	out[683] = l1[3417] ^ l1[2905];
	out[684] = !(l1[77] ^ l1[968]);
	out[685] = !l1[787];
	out[686] = l1[3116] ^ l1[159];
	out[687] = l1[1403] ^ l1[2783];
	out[688] = !l1[1081];
	out[689] = l1[3183];
	out[690] = !(l1[231] ^ l1[2900]);
	out[691] = !(l1[1490] ^ l1[748]);
	out[692] = l1[2589];
	out[693] = l1[1968] ^ l1[3612];
	out[694] = !(l1[2258] & l1[998]);
	out[695] = !l1[3310] | (l1[19] & l1[3310]);
	out[696] = !(l1[896] | l1[3347]);
	out[697] = !(l1[1029] ^ l1[1954]);
	out[698] = !(l1[3278] ^ l1[2497]);
	out[699] = !(l1[772] ^ l1[2514]);
	out[700] = l1[1762] ^ l1[1917];
	out[701] = l1[2302] ^ l1[2536];
	out[702] = l1[858] ^ l1[2556];
	out[703] = !l1[228] | (l1[2191] & l1[228]);
	out[704] = l1[3284] & !l1[1581];
	out[705] = !(l1[2682] & l1[3407]);
	out[706] = l1[870] & l1[2002];
	out[707] = l1[3524] ^ l1[2849];
	out[708] = !(l1[2363] ^ l1[3266]);
	out[709] = l1[1173] & !l1[686];
	out[710] = l1[1838];
	out[711] = l1[3314];
	out[712] = !(l1[2864] ^ l1[3380]);
	out[713] = l1[1527] ^ l1[2444];
	out[714] = !l1[3090];
	out[715] = !(l1[3785] ^ l1[586]);
	out[716] = !(l1[3294] & l1[1640]);
	out[717] = l1[895] & l1[3167];
	out[718] = !(l1[1778] ^ l1[3561]);
	out[719] = l1[3521] & !l1[3540];
	out[720] = !(l1[509] ^ l1[621]);
	out[721] = !(l1[3402] ^ l1[3969]);
	out[722] = l1[3768];
	out[723] = l1[3070] | l1[3120];
	out[724] = !(l1[3786] ^ l1[367]);
	out[725] = l1[874] & !l1[1463];
	out[726] = !(l1[2649] ^ l1[1915]);
	out[727] = !l1[2615] | (l1[2615] & l1[235]);
	out[728] = l1[1427];
	out[729] = l1[1504] | l1[2975];
	out[730] = !(l1[401] & l1[2719]);
	out[731] = l1[2751] ^ l1[2786];
	out[732] = l1[1970] & !l1[3680];
	out[733] = !(l1[1184] | l1[53]);
	out[734] = l1[1699] & !l1[2750];
	out[735] = l1[3932] ^ l1[3397];
	out[736] = l1[46] ^ l1[287];
	out[737] = l1[2598];
	out[738] = !(l1[2623] ^ l1[978]);
	out[739] = !l1[2102] | (l1[2102] & l1[3101]);
	out[740] = !(l1[2758] & l1[193]);
	out[741] = !l1[2530];
	out[742] = !(l1[711] ^ l1[1182]);
	out[743] = !(l1[558] ^ l1[1909]);
	out[744] = !(l1[3468] ^ l1[1373]);
	out[745] = !l1[1700];
	out[746] = l1[1688] & !l1[2161];
	out[747] = !l1[3844];
	out[748] = !(l1[1999] ^ l1[2964]);
	out[749] = l1[1042] & !l1[2222];
	out[750] = !(l1[3522] ^ l1[1127]);
	out[751] = l1[1831];
	out[752] = l1[539] & l1[1734];
	out[753] = l1[2561] & l1[2498];
	out[754] = l1[2701] ^ l1[992];
	out[755] = !l1[2199] | (l1[191] & l1[2199]);
	out[756] = !(l1[2979] ^ l1[242]);
	out[757] = !l1[1339];
	out[758] = l1[733] ^ l1[1228];
	out[759] = !l1[1132];
	out[760] = l1[3717];
	out[761] = !l1[881] | (l1[2412] & l1[881]);
	out[762] = !l1[1760] | (l1[2662] & l1[1760]);
	out[763] = !l1[1646] | (l1[1646] & l1[2068]);
	out[764] = l1[3099] ^ l1[2690];
	out[765] = !l1[2576];
	out[766] = l1[3904] ^ l1[2064];
	out[767] = l1[2126];
	out[768] = l1[2082];
	out[769] = !(l1[827] & l1[222]);
	out[770] = l1[2885] & !l1[2032];
	out[771] = !(l1[3361] ^ l1[943]);
	out[772] = !l1[54] | (l1[1439] & l1[54]);
	out[773] = !l1[2982] | (l1[2982] & l1[3481]);
	out[774] = !(l1[1478] | l1[2939]);
	out[775] = !l1[641] | (l1[2752] & l1[641]);
	out[776] = !l1[3198];
	out[777] = !(l1[2330] & l1[956]);
	out[778] = l1[2654] ^ l1[1967];
	out[779] = l1[1649] & !l1[357];
	out[780] = !l1[1671] | (l1[3925] & l1[1671]);
	out[781] = l1[333] & !l1[572];
	out[782] = l1[1631] & l1[683];
	out[783] = l1[1514] ^ l1[2047];
	out[784] = l1[908] & !l1[3338];
	out[785] = !(l1[2652] | l1[2325]);
	out[786] = !(l1[1176] ^ l1[1716]);
	out[787] = !l1[568] | (l1[3365] & l1[568]);
	out[788] = l1[3429] ^ l1[732];
	out[789] = l1[701] ^ l1[1114];
	out[790] = !(l1[2529] ^ l1[1263]);
	out[791] = l1[1932] & !l1[565];
	out[792] = !(l1[2317] ^ l1[66]);
	out[793] = !l1[559] | (l1[1835] & l1[559]);
	out[794] = l1[384] & l1[1462];
	out[795] = l1[3783] ^ l1[3237];
	out[796] = !(l1[937] & l1[3182]);
	out[797] = !l1[827] | (l1[2655] & l1[827]);
	out[798] = l1[285] & !l1[3271];
	out[799] = l1[108];
	out[800] = !l1[1349];
	out[801] = !(l1[1815] ^ l1[3130]);
	out[802] = l1[3718] & !l1[2039];
	out[803] = !(l1[2491] ^ l1[205]);
	out[804] = l1[2211] ^ l1[3907];
	out[805] = l1[1789] & l1[1605];
	out[806] = !(l1[3039] | l1[338]);
	out[807] = !(l1[1038] ^ l1[1385]);
	out[808] = l1[166];
	out[809] = !(l1[2687] ^ l1[32]);
	out[810] = l1[3335] ^ l1[3517];
	out[811] = l1[1304] ^ l1[2356];
	out[812] = !l1[1148] | (l1[1148] & l1[3933]);
	out[813] = !(l1[3967] ^ l1[3741]);
	out[814] = l1[3412] & l1[2511];
	out[815] = !(l1[1736] ^ l1[21]);
	out[816] = l1[322] | l1[2073];
	out[817] = l1[2766] ^ l1[2101];
	out[818] = l1[2370];
	out[819] = !l1[563];
	out[820] = l1[2003] & l1[1041];
	out[821] = !l1[3085];
	out[822] = !l1[602];
	out[823] = l1[2551] & l1[3514];
	out[824] = !(l1[1601] ^ l1[875]);
	out[825] = !(l1[3704] ^ l1[1141]);
	out[826] = !l1[2254];
	out[827] = l1[2348] & !l1[3636];
	out[828] = l1[2960] | l1[1962];
	out[829] = l1[2121] ^ l1[1799];
	out[830] = !l1[3993];
	out[831] = !(l1[999] ^ l1[2277]);
	out[832] = !(l1[3557] ^ l1[2841]);
	out[833] = l1[1167] ^ l1[2561];
	out[834] = l1[1563] & !l1[1935];
	out[835] = l1[230] & !l1[2855];
	out[836] = !(l1[1275] ^ l1[2180]);
	out[837] = l1[809] ^ l1[774];
	out[838] = !(l1[135] ^ l1[2673]);
	out[839] = !l1[81];
	out[840] = l1[3589];
	out[841] = l1[426] ^ l1[1126];
	out[842] = l1[853] ^ l1[3336];
	out[843] = !l1[1006];
	out[844] = l1[2122] & !l1[420];
	out[845] = l1[1460] ^ l1[1884];
	out[846] = l1[2092];
	out[847] = !l1[1071] | (l1[1071] & l1[2288]);
	out[848] = !l1[253] | (l1[354] & l1[253]);
	out[849] = !(l1[3940] ^ l1[3325]);
	out[850] = !l1[3861];
	out[851] = l1[2951] & !l1[3443];
	out[852] = l1[2191] & !l1[9];
	out[853] = l1[3139] ^ l1[1480];
	out[854] = !l1[2032] | (l1[1984] & l1[2032]);
	out[855] = l1[347] ^ l1[1530];
	out[856] = l1[1885];
	out[857] = !l1[3018] | (l1[3018] & l1[2889]);
	out[858] = l1[27] ^ l1[3106];
	out[859] = l1[2357] & !l1[1285];
	out[860] = l1[2636];
	out[861] = !l1[3181];
	out[862] = !(l1[33] ^ l1[3746]);
	out[863] = l1[2697] & l1[2446];
	out[864] = l1[192] ^ l1[1012];
	out[865] = l1[3579] & !l1[149];
	out[866] = !(l1[1397] ^ l1[77]);
	out[867] = !(l1[1374] ^ l1[3603]);
	out[868] = !(l1[2652] ^ l1[1092]);
	out[869] = !l1[825] | (l1[925] & l1[825]);
	out[870] = !(l1[739] ^ l1[2300]);
	out[871] = l1[125] | l1[782];
	out[872] = l1[2136] & l1[3885];
	out[873] = !l1[841];
	out[874] = l1[3536] ^ l1[2160];
	out[875] = !(l1[1177] ^ l1[2537]);
	out[876] = l1[2599];
	out[877] = l1[1346] | l1[816];
	out[878] = !l1[1123] | (l1[1123] & l1[2801]);
	out[879] = l1[1515] & !l1[1269];
	out[880] = l1[3577] ^ l1[1642];
	out[881] = l1[838];
	out[882] = !(l1[2506] & l1[2539]);
	out[883] = !l1[656];
	out[884] = l1[3994] & !l1[671];
	out[885] = l1[3503] & !l1[3325];
	out[886] = !l1[3480];
	out[887] = l1[1795] & !l1[1553];
	out[888] = l1[1947] & l1[3784];
	out[889] = l1[299] ^ l1[3256];
	out[890] = !(l1[1042] & l1[1152]);
	out[891] = !l1[689];
	out[892] = l1[2373] ^ l1[677];
	out[893] = l1[2725];
	out[894] = !l1[624] | (l1[624] & l1[726]);
	out[895] = l1[581] ^ l1[3721];
	out[896] = !(l1[773] | l1[2619]);
	out[897] = !(l1[2842] | l1[48]);
	out[898] = !(l1[2164] ^ l1[3790]);
	out[899] = !l1[3374] | (l1[1422] & l1[3374]);
	out[900] = !l1[3911] | (l1[2372] & l1[3911]);
	out[901] = l1[1325] ^ l1[1764];
	out[902] = l1[2728];
	out[903] = l1[1330] | l1[1657];
	out[904] = l1[3664] ^ l1[2935];
	out[905] = l1[3107];
	out[906] = !(l1[2577] ^ l1[1538]);
	out[907] = l1[2567];
	out[908] = l1[1786] & l1[2511];
	out[909] = !(l1[427] ^ l1[2665]);
	out[910] = !(l1[3979] & l1[892]);
	out[911] = !l1[3592] | (l1[3839] & l1[3592]);
	out[912] = !l1[3600] | (l1[105] & l1[3600]);
	out[913] = !l1[831];
	out[914] = l1[3487] & !l1[3223];
	out[915] = !l1[2754] | (l1[2754] & l1[2479]);
	out[916] = !(l1[1199] ^ l1[2268]);
	out[917] = !(l1[2253] ^ l1[2718]);
	out[918] = !l1[2770] | (l1[2984] & l1[2770]);
	out[919] = l1[1619] ^ l1[2416];
	out[920] = l1[1658] & !l1[3056];
	out[921] = l1[3719] ^ l1[489];
	out[922] = !l1[1933] | (l1[1933] & l1[2658]);
	out[923] = !(l1[2790] ^ l1[2697]);
	out[924] = l1[1412] & !l1[3787];
	out[925] = !(l1[210] | l1[572]);
	out[926] = l1[3426] ^ l1[3049];
	out[927] = l1[1886];
	out[928] = !(l1[1332] ^ l1[2680]);
	out[929] = l1[793] ^ l1[1994];
	out[930] = !(l1[3665] ^ l1[1458]);
	out[931] = !(l1[2296] ^ l1[3632]);
	out[932] = l1[2405] & l1[2994];
	out[933] = !(l1[1930] ^ l1[2795]);
	out[934] = !l1[646];
	out[935] = l1[3868] ^ l1[859];
	out[936] = l1[3586] ^ l1[3906];
	out[937] = l1[1528];
	out[938] = l1[1937] & !l1[3387];
	out[939] = l1[512] & !l1[1611];
	out[940] = l1[526] ^ l1[1600];
	out[941] = !(l1[1220] ^ l1[2839]);
	out[942] = !(l1[493] ^ l1[2175]);
	out[943] = l1[3590] & l1[1937];
	out[944] = l1[2415] & l1[436];
	out[945] = l1[3843] & l1[1052];
	out[946] = !l1[3260] | (l1[1014] & l1[3260]);
	out[947] = !(l1[1725] ^ l1[2557]);
	out[948] = !l1[1145];
	out[949] = l1[696] & !l1[1714];
	out[950] = !l1[1636];
	out[951] = l1[3233] & l1[1682];
	out[952] = l1[2237];
	out[953] = l1[3509];
	out[954] = !(l1[274] | l1[595]);
	out[955] = l1[511] ^ l1[3566];
	out[956] = l1[3568] & !l1[2140];
	out[957] = l1[1907] & !l1[3299];
	out[958] = !(l1[1093] | l1[3852]);
	out[959] = !l1[140];
	out[960] = !(l1[3771] | l1[3540]);
	out[961] = l1[3122] & l1[3467];
	out[962] = !l1[338];
	out[963] = l1[3595] ^ l1[1116];
	out[964] = !l1[2865];
	out[965] = !l1[1248] | (l1[1248] & l1[504]);
	out[966] = l1[1236] & !l1[2282];
	out[967] = !(l1[1309] ^ l1[2098]);
	out[968] = !(l1[3322] | l1[3789]);
	out[969] = l1[850] & l1[3168];
	out[970] = l1[870];
	out[971] = l1[3283] | l1[919];
	out[972] = !(l1[3320] ^ l1[2112]);
	out[973] = !(l1[403] ^ l1[2916]);
	out[974] = !(l1[3624] | l1[1285]);
	out[975] = l1[356] ^ l1[364];
	out[976] = !(l1[3147] ^ l1[267]);
	out[977] = l1[2718] ^ l1[2172];
	out[978] = !(l1[355] ^ l1[1347]);
	out[979] = !(l1[2522] ^ l1[1461]);
	out[980] = !(l1[2974] ^ l1[1801]);
	out[981] = !l1[3064] | (l1[3812] & l1[3064]);
	out[982] = !(l1[3595] ^ l1[1868]);
	out[983] = l1[527] | l1[3689];
	out[984] = l1[3488] & !l1[3624];
	out[985] = l1[3125] ^ l1[2273];
	out[986] = !(l1[3707] ^ l1[1451]);
	out[987] = l1[3096] ^ l1[562];
	out[988] = !l1[3955];
	out[989] = !(l1[3618] ^ l1[2562]);
	out[990] = l1[3760] ^ l1[2559];
	out[991] = !l1[1135] | (l1[1135] & l1[967]);
	out[992] = !(l1[3922] ^ l1[1483]);
	out[993] = !(l1[2844] ^ l1[3368]);
	out[994] = !(l1[3118] ^ l1[1583]);
	out[995] = !l1[2018] | (l1[1390] & l1[2018]);
	out[996] = l1[1686] | l1[3544];
	out[997] = l1[1506] & !l1[3699];
	out[998] = !l1[1887];
	out[999] = !(l1[3538] | l1[1365]);
	out[1000] = !l1[3255] | (l1[1281] & l1[3255]);
	out[1001] = l1[1711] ^ l1[2477];
	out[1002] = !l1[210];
	out[1003] = l1[2526] ^ l1[1961];
	out[1004] = !(l1[444] ^ l1[3193]);
	out[1005] = !(l1[2990] ^ l1[3408]);
	out[1006] = !(l1[258] ^ l1[2618]);
	out[1007] = l1[1044] ^ l1[3946];
	out[1008] = !(l1[3304] ^ l1[3914]);
	out[1009] = !(l1[609] ^ l1[2297]);
	out[1010] = l1[144] ^ l1[1945];
	out[1011] = !(l1[392] ^ l1[3164]);
	out[1012] = !(l1[3505] ^ l1[1751]);
	out[1013] = l1[3380] ^ l1[2223];
	out[1014] = l1[2051] ^ l1[3914];
	out[1015] = l1[815] ^ l1[360];
	out[1016] = l1[1922] | l1[416];
	out[1017] = !(l1[2168] ^ l1[906]);
	out[1018] = l1[3983];
	out[1019] = l1[2149] ^ l1[3432];
	out[1020] = l1[418];
	out[1021] = !l1[1591] | (l1[1591] & l1[3901]);
	out[1022] = !(l1[2880] ^ l1[677]);
	out[1023] = l1[2827];
	out[1024] = l1[651] ^ l1[3776];
	out[1025] = !(l1[1197] ^ l1[1460]);
	out[1026] = l1[1141] & !l1[3267];
	out[1027] = l1[1718] ^ l1[3840];
	out[1028] = l1[200] ^ l1[1202];
	out[1029] = l1[1764];
	out[1030] = l1[1521] & l1[3169];
	out[1031] = !l1[3711] | (l1[409] & l1[3711]);
	out[1032] = l1[2184] & !l1[1733];
	out[1033] = l1[2535] & l1[2268];
	out[1034] = l1[1367];
	out[1035] = !l1[2378];
	out[1036] = !l1[3645];
	out[1037] = !(l1[91] ^ l1[2921]);
	out[1038] = !l1[476];
	out[1039] = !l1[1352] | (l1[691] & l1[1352]);
	out[1040] = l1[1194] ^ l1[2972];
	out[1041] = !l1[1361];
	out[1042] = l1[2859];
	out[1043] = l1[1694];
	out[1044] = !l1[1547] | (l1[1473] & l1[1547]);
	out[1045] = !l1[1782];
	out[1046] = l1[1008] & !l1[2795];
	out[1047] = !(l1[3425] ^ l1[276]);
	out[1048] = !(l1[2840] ^ l1[178]);
	out[1049] = !(l1[1067] ^ l1[1157]);
	out[1050] = !l1[2166];
	out[1051] = !(l1[1498] & l1[45]);
	out[1052] = l1[1428] | l1[202];
	out[1053] = l1[297] ^ l1[52];
	out[1054] = l1[2094] | l1[1744];
	out[1055] = !l1[3467];
	out[1056] = l1[2913] ^ l1[1616];
	out[1057] = !l1[2066];
	out[1058] = !(l1[3151] ^ l1[3672]);
	out[1059] = !(l1[2110] ^ l1[1352]);
	out[1060] = l1[3856] ^ l1[965];
	out[1061] = !l1[3906] | (l1[3906] & l1[2151]);
	out[1062] = !(l1[3342] & l1[3073]);
	out[1063] = !(l1[542] ^ l1[416]);
	out[1064] = !(l1[2448] ^ l1[802]);
	out[1065] = !(l1[3694] ^ l1[254]);
	out[1066] = l1[2036];
	out[1067] = l1[525] ^ l1[1755];
	out[1068] = l1[2264] & !l1[560];
	out[1069] = !(l1[3174] & l1[3941]);
	out[1070] = l1[2052];
	out[1071] = !(l1[496] ^ l1[1707]);
	out[1072] = !(l1[794] ^ l1[1382]);
	out[1073] = l1[3854];
	out[1074] = l1[2113] & !l1[3066];
	out[1075] = !(l1[121] | l1[2058]);
	out[1076] = l1[2818] ^ l1[2480];
	out[1077] = l1[29];
	out[1078] = !l1[1057];
	out[1079] = !l1[2080];
	out[1080] = l1[2200] & !l1[3159];
	out[1081] = l1[2629] ^ l1[1177];
	out[1082] = !l1[2685];
	out[1083] = l1[3583] ^ l1[549];
	out[1084] = !(l1[1178] ^ l1[1964]);
	out[1085] = !l1[2508];
	out[1086] = l1[3315] ^ l1[601];
	out[1087] = !(l1[1624] ^ l1[2889]);
	out[1088] = !(l1[2646] | l1[2861]);
	out[1089] = l1[550];
	out[1090] = !(l1[3279] ^ l1[3114]);
	out[1091] = !(l1[3253] | l1[3189]);
	out[1092] = l1[1828] ^ l1[1110];
	out[1093] = l1[983];
	out[1094] = !l1[3442];
	out[1095] = !l1[3427];
	out[1096] = l1[2785];
	out[1097] = l1[2645];
	out[1098] = !(l1[648] ^ l1[3913]);
	out[1099] = !l1[2520];
	out[1100] = l1[1760] & !l1[779];
	out[1101] = !l1[1208] | (l1[1208] & l1[3874]);
	out[1102] = l1[3706];
	out[1103] = l1[2532];
	out[1104] = l1[2598] & !l1[973];
	out[1105] = l1[3205];
	out[1106] = !l1[1632];
	out[1107] = !(l1[3212] | l1[2214]);
	out[1108] = !(l1[2503] | l1[891]);
	out[1109] = !l1[1955];
	out[1110] = l1[3677] ^ l1[1242];
	out[1111] = !l1[1090];
	out[1112] = l1[268] ^ l1[3112];
	out[1113] = l1[259] ^ l1[2393];
	out[1114] = l1[2928];
	out[1115] = l1[3868];
	out[1116] = !(l1[706] ^ l1[39]);
	out[1117] = l1[17] & !l1[3691];
	out[1118] = l1[375] & l1[2038];
	out[1119] = l1[491] & !l1[1432];
	out[1120] = !(l1[1023] ^ l1[1773]);
	out[1121] = l1[94] | l1[1487];
	out[1122] = !l1[765];
	out[1123] = l1[675] ^ l1[2157];
	out[1124] = l1[2307] ^ l1[3451];
	out[1125] = l1[2940];
	out[1126] = l1[3094] & l1[430];
	out[1127] = !l1[1703];
	out[1128] = l1[480];
	out[1129] = l1[882] & !l1[31];
	out[1130] = !(l1[1256] | l1[437]);
	out[1131] = !(l1[1203] ^ l1[2403]);
	out[1132] = !l1[1960];
	out[1133] = !(l1[3025] ^ l1[3433]);
	out[1134] = !l1[55];
	out[1135] = !(l1[3063] ^ l1[2912]);
	out[1136] = !l1[2627];
	out[1137] = !(l1[3339] | l1[3716]);
	out[1138] = l1[3782] ^ l1[2679];
	out[1139] = !(l1[1002] | l1[3921]);
	out[1140] = !l1[1305];
	out[1141] = !l1[478];
	out[1142] = l1[3898] ^ l1[3152];
	out[1143] = l1[2432];
	out[1144] = !(l1[279] ^ l1[2410]);
	out[1145] = l1[1746];
	out[1146] = !(l1[3484] | l1[1417]);
	out[1147] = l1[2892] & !l1[3690];
	out[1148] = l1[1351] ^ l1[1765];
	out[1149] = !l1[2292];
	out[1150] = !(l1[1420] ^ l1[451]);
	out[1151] = l1[2865];
	out[1152] = !(l1[948] ^ l1[1692]);
	out[1153] = l1[273] & !l1[209];
	out[1154] = !(l1[2364] ^ l1[755]);
	out[1155] = l1[3736] & l1[2099];
	out[1156] = l1[502] & !l1[167];
	out[1157] = l1[246] | l1[1370];
	out[1158] = l1[754];
	out[1159] = l1[1126] ^ l1[2751];
	out[1160] = l1[2585] & !l1[2502];
	out[1161] = l1[3498];
	out[1162] = !(l1[2358] | l1[1211]);
	out[1163] = l1[3459] ^ l1[3117];
	out[1164] = !(l1[2711] ^ l1[1684]);
	out[1165] = l1[3249] ^ l1[3366];
	out[1166] = !(l1[3376] ^ l1[3215]);
	out[1167] = l1[3170];
	out[1168] = l1[3764] ^ l1[139];
	out[1169] = !(l1[776] & l1[3673]);
	out[1170] = !(l1[2570] | l1[13]);
	out[1171] = !l1[1955];
	out[1172] = l1[2934] ^ l1[101];
	out[1173] = l1[3766] ^ l1[1069];
	out[1174] = !l1[3252];
	out[1175] = !(l1[3405] ^ l1[2578]);
	out[1176] = !(l1[2981] | l1[3122]);
	out[1177] = l1[22] ^ l1[2371];
	out[1178] = l1[2380] & !l1[3958];
	out[1179] = !(l1[2316] ^ l1[3276]);
	out[1180] = l1[3083] & !l1[2276];
	out[1181] = l1[1643];
	out[1182] = l1[3222] & l1[3573];
	out[1183] = l1[352] & !l1[1987];
	out[1184] = !(l1[465] ^ l1[2389]);
	out[1185] = l1[681];
	out[1186] = !l1[884];
	out[1187] = !(l1[2902] ^ l1[2660]);
	out[1188] = !l1[30];
	out[1189] = !(l1[2] ^ l1[3061]);
	out[1190] = !(l1[3157] ^ l1[412]);
	out[1191] = !(l1[452] ^ l1[312]);
	out[1192] = !(l1[3870] ^ l1[612]);
	out[1193] = l1[1036] & l1[2717];
	out[1194] = !l1[2767];
	out[1195] = l1[1940] ^ l1[2399];
	out[1196] = l1[1908];
	out[1197] = !l1[613];
	out[1198] = !l1[1408];
	out[1199] = !(l1[2978] | l1[3073]);
	out[1200] = l1[2915] ^ l1[1834];
	out[1201] = !l1[3211];
	out[1202] = l1[3296] ^ l1[2695];
	out[1203] = !(l1[1798] | l1[585]);
	out[1204] = l1[957] ^ l1[2904];
	out[1205] = l1[770];
	out[1206] = !(l1[551] & l1[248]);
	out[1207] = l1[926] & !l1[64];
	out[1208] = !l1[2971] | (l1[1409] & l1[2971]);
	out[1209] = l1[3003];
	out[1210] = l1[214] ^ l1[3732];
	out[1211] = !l1[447];
	out[1212] = !(l1[736] ^ l1[3737]);
	out[1213] = l1[3895];
	out[1214] = l1[1598];
	out[1215] = l1[885] ^ l1[2495];
	out[1216] = l1[951];
	out[1217] = l1[3476] & !l1[1438];
	out[1218] = !l1[2496] | (l1[2496] & l1[1771]);
	out[1219] = !l1[2672];
	out[1220] = !l1[115];
	out[1221] = l1[2518] & l1[1811];
	out[1222] = l1[57] & !l1[3072];
	out[1223] = l1[1106];
	out[1224] = l1[1319] & l1[1453];
	out[1225] = l1[1070] & l1[305];
	out[1226] = !(l1[3204] & l1[616]);
	out[1227] = !(l1[217] ^ l1[2014]);
	out[1228] = !l1[2637];
	out[1229] = l1[3331];
	out[1230] = !l1[2460];
	out[1231] = !(l1[2856] ^ l1[737]);
	out[1232] = l1[307] ^ l1[723];
	out[1233] = !l1[477];
	out[1234] = !(l1[3974] ^ l1[2297]);
	out[1235] = !(l1[1395] ^ l1[2919]);
	out[1236] = l1[2185] ^ l1[576];
	out[1237] = !l1[2970];
	out[1238] = l1[3639];
	out[1239] = !(l1[3491] & l1[198]);
	out[1240] = l1[62] ^ l1[2737];
	out[1241] = l1[2120] ^ l1[1060];
	out[1242] = l1[3133] ^ l1[939];
	out[1243] = !(l1[1489] & l1[3423]);
	out[1244] = l1[1077] ^ l1[1045];
	out[1245] = l1[2318] & !l1[1037];
	out[1246] = l1[1606];
	out[1247] = !l1[3832] | (l1[3832] & l1[2903]);
	out[1248] = !l1[2485];
	out[1249] = l1[1922] ^ l1[3995];
	out[1250] = !l1[2581];
	out[1251] = l1[25];
	out[1252] = !(l1[657] | l1[247]);
	out[1253] = !(l1[606] | l1[927]);
	out[1254] = !l1[1162];
	out[1255] = l1[3715] & !l1[2436];
	out[1256] = !(l1[2372] ^ l1[2510]);
	out[1257] = l1[1299] ^ l1[669];
	out[1258] = l1[1086] ^ l1[2083];
	out[1259] = !l1[3389];
	out[1260] = l1[1055] | l1[2809];
	out[1261] = !l1[2153];
	out[1262] = !l1[103] | (l1[3785] & l1[103]);
	out[1263] = l1[2424] & !l1[2924];
	out[1264] = !(l1[2240] ^ l1[528]);
	out[1265] = l1[2938];
	out[1266] = !(l1[2054] & l1[3403]);
	out[1267] = !l1[1353];
	out[1268] = !l1[1329];
	out[1269] = l1[3383] | l1[928];
	out[1270] = !l1[2272];
	out[1271] = l1[1492];
	out[1272] = !l1[3722] | (l1[3957] & l1[3722]);
	out[1273] = !l1[3460];
	out[1274] = !(l1[2523] & l1[3208]);
	out[1275] = l1[3140];
	out[1276] = !l1[1147] | (l1[1164] & l1[1147]);
	out[1277] = l1[3892] ^ l1[1005];
	out[1278] = !l1[582];
	out[1279] = !l1[607];
	out[1280] = l1[3755];
	out[1281] = l1[949] & l1[3938];
	out[1282] = l1[600] ^ l1[2029];
	out[1283] = !(l1[2708] ^ l1[3455]);
	out[1284] = !(l1[3153] ^ l1[3763]);
	out[1285] = !(l1[436] & l1[3750]);
	out[1286] = !l1[1582] | (l1[1582] & l1[2650]);
	out[1287] = !l1[499] | (l1[2925] & l1[499]);
	out[1288] = l1[3685];
	out[1289] = l1[2847] ^ l1[1898];
	out[1290] = !(l1[836] ^ l1[2681]);
	out[1291] = !(l1[3246] ^ l1[1610]);
	out[1292] = l1[3667] ^ l1[2395];
	out[1293] = l1[531];
	out[1294] = l1[117] ^ l1[653];
	out[1295] = l1[114];
	out[1296] = l1[1630] ^ l1[817];
	out[1297] = l1[1501] & l1[3501];
	out[1298] = l1[1395];
	out[1299] = l1[1003] & !l1[2051];
	out[1300] = !l1[3927];
	out[1301] = !l1[806] | (l1[3187] & l1[806]);
	out[1302] = !(l1[2884] ^ l1[0]);
	out[1303] = l1[535] ^ l1[1577];
	out[1304] = l1[1346] & !l1[152];
	out[1305] = !(l1[3128] ^ l1[1049]);
	out[1306] = !(l1[810] ^ l1[2601]);
	out[1307] = l1[3527] ^ l1[1206];
	out[1308] = l1[3606];
	out[1309] = l1[1358];
	out[1310] = l1[3421];
	out[1311] = l1[1410];
	out[1312] = l1[2713] ^ l1[832];
	out[1313] = l1[628];
	out[1314] = l1[2060];
	out[1315] = !(l1[1912] ^ l1[3040]);
	out[1316] = l1[120] & !l1[3535];
	out[1317] = !l1[1058];
	out[1318] = l1[1482];
	out[1319] = !(l1[1033] ^ l1[1293]);
	out[1320] = !(l1[3797] ^ l1[1286]);
	out[1321] = l1[3173] ^ l1[1454];
	out[1322] = !(l1[2164] ^ l1[3794]);
	out[1323] = !(l1[1118] ^ l1[3470]);
	out[1324] = !l1[823] | (l1[985] & l1[823]);
	out[1325] = l1[310] ^ l1[3006];
	out[1326] = !(l1[3646] ^ l1[1404]);
	out[1327] = !l1[2107];
	out[1328] = l1[3191];
	out[1329] = !l1[1669];
	out[1330] = !l1[3201];
	out[1331] = !(l1[3334] ^ l1[3000]);
	out[1332] = !l1[2152];
	out[1333] = !l1[3594];
	out[1334] = l1[156];
	out[1335] = !(l1[2350] ^ l1[3815]);
	out[1336] = l1[260] & !l1[1693];
	out[1337] = l1[2779];
	out[1338] = l1[2615] & !l1[1238];
	out[1339] = l1[1276];
	out[1340] = l1[2870];
	out[1341] = l1[916];
	out[1342] = !(l1[2207] ^ l1[1136]);
	out[1343] = l1[1013];
	out[1344] = !l1[604] | (l1[604] & l1[3771]);
	out[1345] = l1[2231];
	out[1346] = l1[3370];
	out[1347] = l1[2442];
	out[1348] = !(l1[266] & l1[1028]);
	out[1349] = !l1[1488];
	out[1350] = !l1[697];
	out[1351] = !(l1[2920] ^ l1[3458]);
	out[1352] = l1[1856];
	out[1353] = l1[2735] | l1[1318];
	out[1354] = !(l1[1198] | l1[2848]);
	out[1355] = !(l1[1830] ^ l1[42]);
	out[1356] = !(l1[3102] & l1[2445]);
	out[1357] = l1[3733] & !l1[1621];
	out[1358] = l1[3081] ^ l1[3486];
	out[1359] = !l1[2340] | (l1[2065] & l1[2340]);
	out[1360] = l1[3037] & !l1[1507];
	out[1361] = !l1[2723];
	out[1362] = l1[2554];
	out[1363] = l1[1179];
	out[1364] = !(l1[1500] ^ l1[428]);
	out[1365] = !l1[1853];
	out[1366] = !l1[1467] | (l1[1467] & l1[1780]);
	out[1367] = !(l1[1791] & l1[1927]);
	out[1368] = l1[3565] & !l1[1802];
	out[1369] = !(l1[2361] ^ l1[961]);
	out[1370] = l1[664] | l1[3027];
	out[1371] = !l1[1491];
	out[1372] = l1[803] & !l1[3239];
	out[1373] = l1[3397];
	out[1374] = l1[2777];
	out[1375] = l1[3410];
	out[1376] = !l1[2265] | (l1[2977] & l1[2265]);
	out[1377] = l1[3811];
	out[1378] = !l1[3062];
	out[1379] = !l1[2466] | (l1[2466] & l1[2543]);
	out[1380] = !l1[3444] | (l1[3444] & l1[1508]);
	out[1381] = l1[3580];
	out[1382] = l1[1002];
	out[1383] = !(l1[448] ^ l1[3036]);
	out[1384] = l1[1005] ^ l1[1942];
	out[1385] = !(l1[3447] ^ l1[1437]);
	out[1386] = l1[3339];
	out[1387] = !(l1[2647] ^ l1[536]);
	out[1388] = l1[379] & !l1[3247];
	out[1389] = !(l1[1271] & l1[323]);
	out[1390] = l1[598] ^ l1[1848];
	out[1391] = l1[2703] & l1[2150];
	out[1392] = !(l1[2249] | l1[2249]);
	out[1393] = l1[2710];
	out[1394] = !l1[704];
	out[1395] = l1[3364] & !l1[3730];
	out[1396] = l1[238] & l1[2692];
	out[1397] = l1[3028] ^ l1[792];
	out[1398] = l1[844];
	out[1399] = l1[3355] ^ l1[2279];
	out[1400] = !(l1[590] ^ l1[2182]);
	out[1401] = l1[3707] | l1[137];
	out[1402] = !l1[2355] | (l1[2355] & l1[3231]);
	out[1403] = !(l1[1022] ^ l1[719]);
	out[1404] = l1[3858];
	out[1405] = l1[1982];
	out[1406] = !l1[2457];
	out[1407] = !(l1[1687] ^ l1[3631]);
	out[1408] = l1[2192] ^ l1[2505];
	out[1409] = l1[3254];
	out[1410] = !l1[1074];
	out[1411] = !l1[660] | (l1[49] & l1[660]);
	out[1412] = !l1[1557];
	out[1413] = l1[3349] | l1[1253];
	out[1414] = l1[1338] ^ l1[2370];
	out[1415] = !l1[2354];
	out[1416] = l1[1336] ^ l1[2846];
	out[1417] = !l1[418];
	out[1418] = l1[596] & l1[1174];
	out[1419] = !l1[645];
	out[1420] = !(l1[132] ^ l1[3700]);
	out[1421] = l1[348] ^ l1[3305];
	out[1422] = !l1[864];
	out[1423] = l1[243] & !l1[1255];
	out[1424] = l1[365] & !l1[2241];
	out[1425] = !l1[492];
	out[1426] = !(l1[1974] & l1[1768]);
	out[1427] = l1[1103];
	out[1428] = !l1[2569];
	out[1429] = l1[2691];
	out[1430] = l1[3997];
	out[1431] = !(l1[1077] ^ l1[1295]);
	out[1432] = l1[429];
	out[1433] = l1[75] & !l1[1232];
	out[1434] = !l1[2089];
	out[1435] = l1[1690] ^ l1[725];
	out[1436] = l1[1998];
	out[1437] = l1[762] & l1[308];
	out[1438] = l1[3897] ^ l1[761];
	out[1439] = !(l1[168] ^ l1[3507]);
	out[1440] = !(l1[1830] ^ l1[2729]);
	out[1441] = l1[2564];
	out[1442] = l1[3724] ^ l1[2843];
	out[1443] = !l1[3391];
	out[1444] = !(l1[3144] & l1[1689]);
	out[1445] = l1[575] & !l1[2188];
	out[1446] = l1[3150];
	out[1447] = l1[3082] & !l1[2754];
	out[1448] = l1[3878] ^ l1[177];
	out[1449] = !(l1[790] ^ l1[3281]);
	out[1450] = l1[1792] | l1[2481];
	out[1451] = !(l1[3857] & l1[619]);
	out[1452] = !l1[3020] | (l1[159] & l1[3020]);
	out[1453] = !(l1[3575] ^ l1[3886]);
	out[1454] = !(l1[1857] ^ l1[3668]);
	out[1455] = !l1[56];
	out[1456] = l1[450] & !l1[332];
	out[1457] = !(l1[2380] | l1[3926]);
	out[1458] = l1[396];
	out[1459] = !(l1[1526] ^ l1[3684]);
	out[1460] = l1[2987] ^ l1[2117];
	out[1461] = l1[2084] | l1[72];
	out[1462] = !(l1[3792] ^ l1[3934]);
	out[1463] = l1[3186] | l1[2388];
	out[1464] = !(l1[2862] ^ l1[1561]);
	out[1465] = l1[1646] & !l1[2929];
	out[1466] = l1[913];
	out[1467] = l1[1797];
	out[1468] = !(l1[3980] ^ l1[2614]);
	out[1469] = !l1[3515] | (l1[3515] & l1[986]);
	out[1470] = l1[1812];
	out[1471] = !l1[3505] | (l1[1438] & l1[3505]);
	out[1472] = !(l1[992] | l1[1317]);
	out[1473] = l1[1609] ^ l1[3975];
	out[1474] = !l1[1440] | (l1[1440] & l1[1593]);
	out[1475] = l1[2835];
	out[1476] = !l1[2592];
	out[1477] = !l1[2147];
	out[1478] = l1[3850] ^ l1[370];
	out[1479] = l1[2817] ^ l1[759];
	out[1480] = !l1[3003];
	out[1481] = l1[1631] & !l1[3234];
	out[1482] = l1[567] ^ l1[2952];
	out[1483] = !(l1[3319] ^ l1[2568]);
	out[1484] = l1[2280] & !l1[670];
	out[1485] = l1[337] ^ l1[293];
	out[1486] = l1[3396] ^ l1[2434];
	out[1487] = l1[1169] ^ l1[2580];
	out[1488] = l1[2501] & !l1[3274];
	out[1489] = l1[3472] ^ l1[1633];
	out[1490] = l1[2438] & !l1[183];
	out[1491] = l1[1520] & !l1[3050];
	out[1492] = !(l1[678] | l1[2965]);
	out[1493] = l1[1278] ^ l1[36];
	out[1494] = l1[3916];
	out[1495] = !(l1[3225] | l1[1936]);
	out[1496] = l1[2247] ^ l1[1552];
	out[1497] = l1[3008] & !l1[57];
	out[1498] = l1[3626] ^ l1[1081];
	out[1499] = l1[1849] ^ l1[2329];
	out[1500] = !l1[1753];
	out[1501] = !(l1[3553] ^ l1[2234]);
	out[1502] = !l1[2000];
	out[1503] = !l1[2891] | (l1[758] & l1[2891]);
	out[1504] = l1[1085] & !l1[1447];
	out[1505] = l1[377] ^ l1[3475];
	out[1506] = !(l1[2376] & l1[2584]);
	out[1507] = l1[1997] ^ l1[2407];
	out[1508] = !(l1[3171] ^ l1[702]);
	out[1509] = l1[3528];
	out[1510] = l1[1085];
	out[1511] = !l1[3226];
	out[1512] = l1[81] & l1[219];
	out[1513] = !l1[1876];
	out[1514] = !(l1[1048] ^ l1[2797]);
	out[1515] = !(l1[3807] ^ l1[2377]);
	out[1516] = l1[1001];
	out[1517] = !l1[3462];
	out[1518] = !l1[1400];
	out[1519] = !l1[124];
	out[1520] = !l1[733] | (l1[1021] & l1[733]);
	out[1521] = !(l1[1046] ^ l1[3340]);
	out[1522] = l1[3196] ^ l1[1130];
	out[1523] = l1[1331];
	out[1524] = !(l1[3394] ^ l1[1080]);
	out[1525] = l1[2165] ^ l1[838];
	out[1526] = l1[1487] & l1[1894];
	out[1527] = l1[2816] ^ l1[2441];
	out[1528] = !(l1[1771] | l1[1225]);
	out[1529] = !l1[3304] | (l1[3714] & l1[3304]);
	out[1530] = !(l1[345] ^ l1[3308]);
	out[1531] = l1[2374] & !l1[3978];
	out[1532] = l1[1641] & !l1[1321];
	out[1533] = l1[472] ^ l1[1973];
	out[1534] = l1[724];
	out[1535] = l1[505];
	out[1536] = !l1[2367];
	out[1537] = !l1[288];
	out[1538] = l1[815] ^ l1[3791];
	out[1539] = !l1[2319];
	out[1540] = l1[845] ^ l1[3069];
	out[1541] = !l1[630];
	out[1542] = l1[1326] ^ l1[2255];
	out[1543] = l1[525];
	out[1544] = l1[714] & l1[1383];
	out[1545] = l1[3026] ^ l1[3560];
	out[1546] = l1[2743] & !l1[2997];
	out[1547] = l1[3306] ^ l1[2741];
	out[1548] = !(l1[3273] | l1[1924]);
	out[1549] = !l1[3798];
	out[1550] = l1[1503] & !l1[893];
	out[1551] = !l1[397];
	out[1552] = l1[1890];
	out[1553] = !(l1[2531] | l1[2296]);
	out[1554] = !(l1[2854] & l1[232]);
	out[1555] = l1[3601] & !l1[2828];
	out[1556] = l1[757] & !l1[3413];
	out[1557] = !l1[514];
	out[1558] = l1[3231];
	out[1559] = !(l1[2020] ^ l1[3863]);
	out[1560] = !l1[3210];
	out[1561] = !(l1[1295] ^ l1[483]);
	out[1562] = !l1[633];
	out[1563] = l1[3780] & l1[90];
	out[1564] = l1[1028] & l1[271];
	out[1565] = !(l1[3504] | l1[2115]);
	out[1566] = l1[3682];
	out[1567] = l1[705] ^ l1[223];
	out[1568] = l1[3298];
	out[1569] = l1[1303];
	out[1570] = l1[501] ^ l1[2181];
	out[1571] = l1[1992] ^ l1[3322];
	out[1572] = !(l1[3820] ^ l1[448]);
	out[1573] = !l1[2516];
	out[1574] = l1[3513];
	out[1575] = !l1[3742];
	out[1576] = l1[2879];
	out[1577] = l1[2528];
	out[1578] = !(l1[937] ^ l1[3437]);
	out[1579] = l1[2308] ^ l1[3384];
	out[1580] = !(l1[2608] | l1[1223]);
	out[1581] = !l1[837] | (l1[3960] & l1[837]);
	out[1582] = l1[3282] & !l1[3559];
	out[1583] = !l1[1581];
	out[1584] = l1[652];
	out[1585] = l1[2403];
	out[1586] = l1[1009] & l1[2382];
	out[1587] = l1[2664] ^ l1[2213];
	out[1588] = !(l1[1608] ^ l1[3045]);
	out[1589] = l1[3463] | l1[1051];
	out[1590] = l1[178];
	out[1591] = l1[1146] & l1[3300];
	out[1592] = l1[2304] | l1[612];
	out[1593] = l1[1541] & !l1[640];
	out[1594] = !(l1[545] ^ l1[1356]);
	out[1595] = !l1[1416];
	out[1596] = !(l1[3628] | l1[2560]);
	out[1597] = !l1[1043] | (l1[1043] & l1[3581]);
	out[1598] = !(l1[1648] ^ l1[3786]);
	out[1599] = l1[1584] & l1[2842];
	out[1600] = l1[2756] & !l1[1845];
	out[1601] = l1[46] ^ l1[3866];
	out[1602] = !(l1[1270] ^ l1[2339]);
	out[1603] = l1[2452] & l1[3043];
	out[1604] = !l1[3903];
	out[1605] = !l1[3697];
	out[1606] = !(l1[3108] ^ l1[3610]);
	out[1607] = l1[2095];
	out[1608] = l1[2024];
	out[1609] = l1[1545] & !l1[2379];
	out[1610] = l1[764] & !l1[2167];
	out[1611] = !l1[3520];
	out[1612] = !l1[3068] | (l1[1245] & l1[3068]);
	out[1613] = !l1[2469];
	out[1614] = !l1[146];
	out[1615] = !l1[873];
	out[1616] = l1[1525] & l1[70];
	out[1617] = l1[634];
	out[1618] = !(l1[398] ^ l1[1493]);
	out[1619] = !(l1[2475] ^ l1[299]);
	out[1620] = l1[590] & !l1[2911];
	out[1621] = !(l1[3287] ^ l1[2449]);
	out[1622] = l1[741] ^ l1[3248];
	out[1623] = !l1[835];
	out[1624] = l1[2597];
	out[1625] = !(l1[1525] ^ l1[1257]);
	out[1626] = !(l1[3980] ^ l1[2424]);
	out[1627] = !l1[2628];
	out[1628] = l1[3190] ^ l1[321];
	out[1629] = !(l1[2813] ^ l1[171]);
	out[1630] = l1[824] & l1[3385];
	out[1631] = l1[3536] & l1[666];
	out[1632] = !l1[626];
	out[1633] = l1[3358] ^ l1[1391];
	out[1634] = !(l1[644] | l1[3279]);
	out[1635] = l1[2156] & !l1[1321];
	out[1636] = !l1[1953];
	out[1637] = !l1[3312];
	out[1638] = l1[2585] & !l1[1556];
	out[1639] = l1[346] ^ l1[2352];
	out[1640] = !(l1[3012] ^ l1[1111]);
	out[1641] = l1[2137] & !l1[414];
	out[1642] = !l1[529];
	out[1643] = l1[1497] & l1[2071];
	out[1644] = l1[2934] & !l1[2726];
	out[1645] = !(l1[3172] | l1[2351]);
	out[1646] = l1[807];
	out[1647] = l1[2950] ^ l1[682];
	out[1648] = !l1[1788] | (l1[1919] & l1[1788]);
	out[1649] = l1[1382] & !l1[736];
	out[1650] = !(l1[47] | l1[1496]);
	out[1651] = !(l1[3187] & l1[404]);
	out[1652] = !l1[2489];
	out[1653] = l1[874] ^ l1[615];
	out[1654] = l1[1139] & l1[2027];
	out[1655] = !(l1[1939] ^ l1[886]);
	out[1656] = l1[2610] & !l1[2050];
	out[1657] = !l1[3683] | (l1[3683] & l1[3617]);
	out[1658] = !(l1[470] | l1[296]);
	out[1659] = l1[334] & !l1[955];
	out[1660] = l1[3572] & l1[1936];
	out[1661] = !(l1[2956] ^ l1[3328]);
	out[1662] = !l1[1859] | (l1[1872] & l1[1859]);
	out[1663] = !l1[3531];
	out[1664] = !l1[1766] | (l1[309] & l1[1766]);
	out[1665] = !(l1[357] | l1[2419]);
	out[1666] = l1[1879];
	out[1667] = !l1[2154];
	out[1668] = l1[1031];
	out[1669] = l1[1712] & !l1[1754];
	out[1670] = !(l1[2313] | l1[1112]);
	out[1671] = !(l1[1579] | l1[2701]);
	out[1672] = l1[2321] ^ l1[2008];
	out[1673] = !l1[1576];
	out[1674] = l1[1719];
	out[1675] = !(l1[3086] ^ l1[2776]);
	out[1676] = l1[3555] & !l1[2138];
	out[1677] = l1[785] & !l1[3199];
	out[1678] = !(l1[2013] ^ l1[3005]);
	out[1679] = !(l1[866] | l1[2763]);
	out[1680] = l1[1068] ^ l1[3278];
	out[1681] = !(l1[3213] ^ l1[2954]);
	out[1682] = !(l1[2805] ^ l1[2194]);
	out[1683] = !(l1[982] | l1[786]);
	out[1684] = !l1[1304];
	out[1685] = !(l1[3981] ^ l1[319]);
	out[1686] = l1[3395];
	out[1687] = l1[959] ^ l1[21];
	out[1688] = !(l1[3642] ^ l1[860]);
	out[1689] = !(l1[1272] ^ l1[63]);
	out[1690] = !l1[359];
	out[1691] = !(l1[1450] ^ l1[1347]);
	out[1692] = l1[3453] & !l1[1341];
	out[1693] = !l1[2881];
	out[1694] = !l1[1875];
	out[1695] = !(l1[328] ^ l1[3836]);
	out[1696] = !l1[335];
	out[1697] = l1[2988] & !l1[1035];
	out[1698] = l1[380] ^ l1[182];
	out[1699] = !l1[1308];
	out[1700] = l1[457] & !l1[1089];
	out[1701] = l1[413] & !l1[3161];
	out[1702] = l1[3206] ^ l1[1808];
	out[1703] = !(l1[1724] | l1[597]);
	out[1704] = l1[3537] ^ l1[2472];
	out[1705] = !(l1[1000] & l1[3826]);
	out[1706] = !l1[830];
	out[1707] = !(l1[344] & l1[3589]);
	out[1708] = !(l1[1296] ^ l1[516]);
	out[1709] = l1[2811];
	out[1710] = l1[629] & l1[1054];
	out[1711] = !(l1[1389] ^ l1[2010]);
	out[1712] = l1[3435] & !l1[2779];
	out[1713] = !(l1[1234] ^ l1[92]);
	out[1714] = l1[2474] ^ l1[1934];
	out[1715] = !l1[3686];
	out[1716] = !l1[2028] | (l1[2028] & l1[1730]);
	out[1717] = l1[2844] & !l1[3911];
	out[1718] = !l1[3404];
	out[1719] = !l1[914];
	out[1720] = !l1[2726] | (l1[2478] & l1[2726]);
	out[1721] = l1[3831];
	out[1722] = !l1[804] | (l1[804] & l1[3213]);
	out[1723] = !l1[2914];
	out[1724] = !(l1[3158] | l1[2868]);
	out[1725] = !l1[3378];
	out[1726] = l1[2838] & !l1[3527];
	out[1727] = l1[1405] ^ l1[2171];
	out[1728] = !l1[3543];
	out[1729] = l1[3390] ^ l1[3752];
	out[1730] = l1[2030] & !l1[3494];
	out[1731] = l1[513] & !l1[3021];
	out[1732] = l1[1883];
	out[1733] = !l1[1469];
	out[1734] = l1[121] ^ l1[1505];
	out[1735] = !(l1[1569] ^ l1[2130]);
	out[1736] = l1[909] ^ l1[143];
	out[1737] = !l1[949];
	out[1738] = !(l1[3889] ^ l1[2956]);
	out[1739] = l1[1971] ^ l1[1195];
	out[1740] = !(l1[2479] | l1[783]);
	out[1741] = !l1[2857] | (l1[2857] & l1[3227]);
	out[1742] = l1[2640];
	out[1743] = !l1[1306];
	out[1744] = l1[878] & !l1[240];
	out[1745] = !(l1[3934] ^ l1[3796]);
	out[1746] = l1[2202] ^ l1[556];
	out[1747] = !(l1[3078] & l1[1466]);
	out[1748] = l1[3419] ^ l1[2332];
	out[1749] = !(l1[730] ^ l1[2253]);
	out[1750] = !(l1[176] ^ l1[1523]);
	out[1751] = l1[145] & !l1[2325];
	out[1752] = l1[530] & !l1[917];
	out[1753] = !(l1[3620] | l1[2571]);
	out[1754] = !l1[1319];
	out[1755] = !(l1[2512] & l1[3817]);
	out[1756] = !l1[3029] | (l1[1623] & l1[3029]);
	out[1757] = l1[1327] & !l1[972];
	out[1758] = !(l1[1749] ^ l1[97]);
	out[1759] = !(l1[3687] ^ l1[504]);
	out[1760] = l1[227] ^ l1[2183];
	out[1761] = l1[1345] ^ l1[1555];
	out[1762] = l1[1043] ^ l1[1877];
	out[1763] = !(l1[1279] ^ l1[663]);
	out[1764] = l1[631] ^ l1[3700];
	out[1765] = !l1[3999];
	out[1766] = l1[3939];
	out[1767] = l1[820] & !l1[3711];
	out[1768] = !l1[1160];
	out[1769] = !(l1[3264] ^ l1[1839]);
	out[1770] = l1[1369] ^ l1[1502];
	out[1771] = !(l1[1323] ^ l1[42]);
	out[1772] = !(l1[2778] | l1[2328]);
	out[1773] = l1[3762];
	out[1774] = !l1[2995] | (l1[2867] & l1[2995]);
	out[1775] = l1[1644];
	out[1776] = l1[1399] ^ l1[2909];
	out[1777] = !(l1[1138] | l1[2560]);
	out[1778] = l1[2832];
	out[1779] = l1[1828] & l1[2871];
	out[1780] = l1[2926] ^ l1[771];
	out[1781] = !(l1[2583] ^ l1[1667]);
	out[1782] = !(l1[2351] ^ l1[414]);
	out[1783] = l1[456] & !l1[3575];
	out[1784] = l1[843] ^ l1[143];
	out[1785] = l1[2263] ^ l1[613];
	out[1786] = l1[1650] & l1[3949];
	out[1787] = l1[1430] & !l1[746];
	out[1788] = l1[2328];
	out[1789] = l1[3725] & l1[467];
	out[1790] = l1[3918] ^ l1[1190];
	out[1791] = !(l1[3163] ^ l1[1628]);
	out[1792] = !(l1[3692] ^ l1[294]);
	out[1793] = !(l1[808] | l1[3766]);
	out[1794] = !l1[2243];
	out[1795] = l1[1350] | l1[113];
	out[1796] = !(l1[1905] ^ l1[3947]);
	out[1797] = !(l1[1461] ^ l1[3290]);
	out[1798] = !(l1[495] | l1[251]);
	out[1799] = l1[1354];
	out[1800] = l1[1282] & !l1[772];
	out[1801] = !(l1[2394] | l1[1518]);
	out[1802] = !(l1[1580] ^ l1[2731]);
	out[1803] = !l1[2527];
	out[1804] = l1[1277];
	out[1805] = l1[2707] & !l1[958];
	out[1806] = l1[2952] & !l1[61];
	out[1807] = l1[2162] & !l1[2543];
	out[1808] = l1[2218];
	out[1809] = !l1[2572] | (l1[2572] & l1[3728]);
	out[1810] = !(l1[1785] ^ l1[2384]);
	out[1811] = l1[3262] ^ l1[3490];
	out[1812] = !l1[20];
	out[1813] = !(l1[1063] ^ l1[3452]);
	out[1814] = l1[2287] & !l1[719];
	out[1815] = !l1[411];
	out[1816] = !(l1[1266] ^ l1[441]);
	out[1817] = !l1[3956];
	out[1818] = l1[3987] ^ l1[2426];
	out[1819] = l1[1030];
	out[1820] = !l1[1824];
	out[1821] = !(l1[2033] | l1[2391]);
	out[1822] = l1[1108] ^ l1[3717];
	out[1823] = !l1[3937] | (l1[971] & l1[3937]);
	out[1824] = l1[2239] & l1[3124];
	out[1825] = l1[1869];
	out[1826] = l1[2778] ^ l1[2624];
	out[1827] = l1[2118] ^ l1[457];
	out[1828] = l1[449];
	out[1829] = !(l1[2989] | l1[3874]);
	out[1830] = l1[2158] & l1[3706];
	out[1831] = !l1[14];
	out[1832] = !(l1[2286] ^ l1[2784]);
	out[1833] = l1[2254] & l1[2353];
	out[1834] = !(l1[18] & l1[3076]);
	out[1835] = l1[751] & !l1[1038];
	out[1836] = !(l1[3799] | l1[1142]);
	out[1837] = l1[2248];
	out[1838] = l1[877] & !l1[1673];
	out[1839] = l1[3523];
	out[1840] = l1[3856] & !l1[2476];
	out[1841] = l1[2257];
	out[1842] = !(l1[3452] ^ l1[880]);
	out[1843] = !l1[1743] | (l1[1743] & l1[1311]);
	out[1844] = !(l1[614] ^ l1[2936]);
	out[1845] = l1[3653] & !l1[2657];
	out[1846] = !(l1[1659] ^ l1[173]);
	out[1847] = !l1[6] | (l1[6] & l1[3809]);
	out[1848] = !(l1[3756] ^ l1[977]);
	out[1849] = l1[3221] | l1[3910];
	out[1850] = l1[2245];
	out[1851] = !(l1[914] ^ l1[2224]);
	out[1852] = !(l1[3293] ^ l1[1626]);
	out[1853] = !l1[2123] | (l1[2869] & l1[2123]);
	out[1854] = l1[940] | l1[1966];
	out[1855] = l1[1559] & l1[3949];
	out[1856] = l1[2044] & !l1[3027];
	out[1857] = l1[3194] & !l1[1224];
	out[1858] = !l1[507];
	out[1859] = l1[1869];
	out[1860] = !(l1[2841] ^ l1[2320]);
	out[1861] = l1[1426] & !l1[2298];
	out[1862] = l1[3582] & !l1[754];
	out[1863] = l1[599] & !l1[2208];
	out[1864] = l1[3574] ^ l1[434];
	out[1865] = l1[3313] & !l1[61];
	out[1866] = l1[163] & l1[1941];
	out[1867] = l1[3739] & !l1[598];
	out[1868] = l1[978] & !l1[1549];
	out[1869] = !l1[2943] | (l1[2943] & l1[2819]);
	out[1870] = !(l1[3286] ^ l1[2648]);
	out[1871] = l1[883] ^ l1[1113];
	out[1872] = l1[674] & !l1[1083];
	out[1873] = !(l1[989] ^ l1[2719]);
	out[1874] = l1[2807] & l1[1468];
	out[1875] = l1[146] & !l1[3042];
	out[1876] = !(l1[2591] ^ l1[2755]);
	out[1877] = l1[1027];
	out[1878] = l1[780];
	out[1879] = l1[65] ^ l1[2135];
	out[1880] = !(l1[341] ^ l1[3465]);
	out[1881] = l1[3804] & !l1[3802];
	out[1882] = !(l1[3428] ^ l1[3162]);
	out[1883] = l1[2439];
	out[1884] = !(l1[1767] | l1[2064]);
	out[1885] = !(l1[3541] ^ l1[35]);
	out[1886] = !(l1[3740] | l1[1268]);
	out[1887] = !(l1[2626] ^ l1[3569]);
	out[1888] = !(l1[2860] | l1[2907]);
	out[1889] = !l1[1978];
	out[1890] = l1[3857] & !l1[2081];
	out[1891] = !(l1[2122] | l1[2976]);
	out[1892] = !(l1[882] | l1[3660]);
	out[1893] = l1[3867] ^ l1[2177];
	out[1894] = l1[3347] ^ l1[3558];
	out[1895] = !l1[3626];
	out[1896] = l1[2463] & l1[1481];
	out[1897] = l1[162] | l1[233];
	out[1898] = !(l1[141] ^ l1[2392]);
	out[1899] = l1[813] ^ l1[3571];
	out[1900] = !(l1[710] ^ l1[2786]);
	out[1901] = l1[3344] ^ l1[876];
	out[1902] = l1[3482] ^ l1[580];
	out[1903] = !(l1[3160] ^ l1[3698]);
	out[1904] = !l1[2942];
	out[1905] = !(l1[1990] ^ l1[2233]);
	out[1906] = l1[3188] ^ l1[1315];
	out[1907] = !(l1[1697] ^ l1[141]);
	out[1908] = !(l1[988] ^ l1[1733]);
	out[1909] = l1[1153];
	out[1910] = l1[879] ^ l1[41];
	out[1911] = !l1[2206];
	out[1912] = !(l1[3977] | l1[2062]);
	out[1913] = l1[468] & !l1[2360];
	out[1914] = l1[395] ^ l1[1256];
	out[1915] = l1[2938];
	out[1916] = l1[1131] ^ l1[2720];
	out[1917] = l1[3506] ^ l1[2346];
	out[1918] = !(l1[3765] ^ l1[2874]);
	out[1919] = !(l1[3846] ^ l1[1625]);
	out[1920] = !(l1[2170] ^ l1[3608]);
	out[1921] = !(l1[515] ^ l1[1971]);
	out[1922] = l1[1404] & !l1[1837];
	out[1923] = l1[2176] ^ l1[3539];
	out[1924] = !l1[829];
	out[1925] = l1[1537] & !l1[218];
	out[1926] = !(l1[10] ^ l1[1320]);
	out[1927] = l1[2139];
	out[1928] = l1[3609];
	out[1929] = !(l1[3417] ^ l1[594]);
	out[1930] = !(l1[1886] ^ l1[1107]);
	out[1931] = !(l1[853] | l1[1340]);
	out[1932] = !l1[3218];
	out[1933] = l1[1784] ^ l1[3765];
	out[1934] = !(l1[742] ^ l1[1834]);
	out[1935] = !(l1[119] | l1[991]);
	out[1936] = !l1[3059];
	out[1937] = !(l1[798] ^ l1[743]);
	out[1938] = !(l1[1356] ^ l1[995]);
	out[1939] = !(l1[1524] | l1[2484]);
	out[1940] = !l1[1472] | (l1[1472] & l1[3753]);
	out[1941] = l1[3777] & !l1[2555];
	out[1942] = !l1[3644] | (l1[3644] & l1[3611]);
	out[1943] = l1[3054] & l1[2582];
	out[1944] = l1[2138];
	out[1945] = !l1[1748];
	out[1946] = l1[2546] ^ l1[1294];
	out[1947] = l1[3712] ^ l1[2563];
	out[1948] = !l1[1543];
	out[1949] = l1[2774];
	out[1950] = l1[3948] ^ l1[1388];
	out[1951] = l1[1242];
	out[1952] = !(l1[775] ^ l1[771]);
	out[1953] = !(l1[1484] ^ l1[3154]);
	out[1954] = !l1[1899] | (l1[1899] & l1[1162]);
	out[1955] = l1[3709] & l1[3609];
	out[1956] = l1[3209];
	out[1957] = l1[1260];
	out[1958] = l1[151] ^ l1[1948];
	out[1959] = !(l1[3919] ^ l1[2025]);
	out[1960] = !(l1[1723] ^ l1[1903]);
	out[1961] = l1[1670] & !l1[3236];
	out[1962] = l1[3641] & !l1[3023];
	out[1963] = !l1[1415];
	out[1964] = l1[2671] ^ l1[3621];
	out[1965] = l1[1597] ^ l1[2836];
	out[1966] = !l1[3499];
	out[1967] = l1[1533];
	out[1968] = l1[1448] & !l1[3970];
	out[1969] = !l1[1812];
	out[1970] = !(l1[2653] ^ l1[3496]);
	out[1971] = !l1[778];
	out[1972] = !(l1[1882] | l1[1301]);
	out[1973] = !(l1[658] ^ l1[1744]);
	out[1974] = l1[673] ^ l1[1386];
	out[1975] = !(l1[3179] ^ l1[301]);
	out[1976] = l1[1505] ^ l1[1127];
	out[1977] = l1[3607] & !l1[1587];
	out[1978] = l1[687] ^ l1[1207];
	out[1979] = l1[2344];
	out[1980] = !l1[541];
	out[1981] = l1[2369] ^ l1[3013];
	out[1982] = l1[3373];
	out[1983] = l1[3] & !l1[872];
	out[1984] = !(l1[2787] ^ l1[3873]);
	out[1985] = !(l1[3469] ^ l1[2837]);
	out[1986] = l1[2428] ^ l1[2097];
	out[1987] = !(l1[3207] ^ l1[37]);
	out[1988] = l1[2462];
	out[1989] = !(l1[3776] ^ l1[2872]);
	out[1990] = l1[1627] ^ l1[1023];
	out[1991] = !l1[2219];
	out[1992] = !(l1[2941] ^ l1[180]);
	out[1993] = !l1[469];
	out[1994] = l1[2950];
	out[1995] = l1[3779] & !l1[1729];
	out[1996] = l1[336] & l1[3654];
	out[1997] = l1[2810] | l1[3584];
	out[1998] = !l1[997];
	out[1999] = !(l1[2677] ^ l1[2878]);
	out[2000] = l1[2586] | l1[1466];
	out[2001] = l1[3111] & l1[1246];
	out[2002] = !(l1[900] ^ l1[1290]);
	out[2003] = !(l1[172] ^ l1[2266]);
	out[2004] = !l1[2698] | (l1[2698] & l1[2819]);
	out[2005] = !(l1[1612] ^ l1[387]);
	out[2006] = !(l1[1705] ^ l1[2705]);
	out[2007] = l1[2335] ^ l1[2134];
	out[2008] = !(l1[129] ^ l1[3014]);
	out[2009] = !(l1[453] ^ l1[3424]);
	out[2010] = l1[3729] ^ l1[456];
	out[2011] = l1[2477] ^ l1[2263];
	out[2012] = !(l1[1662] & l1[722]);
	out[2013] = l1[388] & l1[3668];
	out[2014] = l1[2525] | l1[3567];
	out[2015] = !l1[1816];
	out[2016] = l1[2291];
	out[2017] = !(l1[2620] ^ l1[650]);
	out[2018] = !(l1[2578] ^ l1[3301]);
	out[2019] = !(l1[1019] ^ l1[2571]);
	out[2020] = !(l1[2270] ^ l1[2196]);
	out[2021] = l1[2482];
	out[2022] = !(l1[679] | l1[1534]);
	out[2023] = l1[2504] & !l1[707];
	out[2024] = !l1[3929] | (l1[3929] & l1[1017]);
	out[2025] = l1[73] & !l1[974];
	out[2026] = !(l1[2600] ^ l1[3738]);
	out[2027] = !(l1[538] ^ l1[356]);
	out[2028] = !l1[2238];
	out[2029] = l1[88] & l1[3250];
	out[2030] = l1[1735] ^ l1[1852];
	out[2031] = l1[2896] & !l1[3630];
	out[2032] = l1[2132] & !l1[622];
	out[2033] = l1[1548];
	out[2034] = l1[3006] ^ l1[398];
	out[2035] = !(l1[3735] & l1[187]);
	out[2036] = l1[2256] & l1[3663];
	out[2037] = l1[863];
	out[2038] = l1[170];
	out[2039] = l1[842] | l1[2270];
	out[2040] = l1[1244];
	out[2041] = !(l1[459] ^ l1[2473]);
	out[2042] = !(l1[417] ^ l1[2062]);
	out[2043] = !l1[1931] | (l1[1931] & l1[2421]);
	out[2044] = l1[1695] ^ l1[2654];
	out[2045] = !l1[1124];
	out[2046] = !(l1[2852] ^ l1[2757]);
	out[2047] = !(l1[2464] ^ l1[469]);
	out[2048] = l1[2968] & !l1[3330];
	out[2049] = l1[1944];
	out[2050] = !(l1[2049] ^ l1[316]);
	out[2051] = !(l1[2558] ^ l1[1916]);
	out[2052] = !l1[2926];
	out[2053] = l1[2386] ^ l1[148];
	out[2054] = !l1[2334];
	out[2055] = l1[1446] & !l1[3678];
	out[2056] = l1[2509] & !l1[1163];
	out[2057] = l1[1793] ^ l1[2054];
	out[2058] = !l1[3723] | (l1[3723] & l1[2727]);
	out[2059] = l1[520] & !l1[2023];
	out[2060] = l1[1563] ^ l1[342];
	out[2061] = !(l1[2433] | l1[920]);
	out[2062] = l1[3258] ^ l1[3831];
	out[2063] = l1[2283] ^ l1[1435];
	out[2064] = !(l1[220] ^ l1[3230]);
	out[2065] = !l1[307];
	out[2066] = l1[1952] ^ l1[1183];
	out[2067] = !l1[605] | (l1[347] & l1[605]);
	out[2068] = !(l1[3100] ^ l1[2535]);
	out[2069] = !l1[1032];
	out[2070] = !(l1[16] ^ l1[326]);
	out[2071] = !(l1[751] ^ l1[1507]);
	out[2072] = l1[1756] ^ l1[212];
	out[2073] = !(l1[2684] ^ l1[2830]);
	out[2074] = l1[2041] & !l1[445];
	out[2075] = l1[872] ^ l1[3457];
	out[2076] = !l1[3996];
	out[2077] = !l1[1337] | (l1[1337] & l1[1259]);
	out[2078] = l1[2678];
	out[2079] = l1[97] ^ l1[3821];
	out[2080] = l1[3888] & !l1[1958];
	out[2081] = l1[2262];
	out[2082] = !(l1[3603] & l1[1082]);
	out[2083] = l1[3352];
	out[2084] = l1[275];
	out[2085] = !(l1[2921] & l1[3479]);
	out[2086] = !(l1[727] ^ l1[1896]);
	out[2087] = l1[3419] & l1[690];
	out[2088] = !(l1[855] ^ l1[3440]);
	out[2089] = !(l1[3454] | l1[1701]);
	out[2090] = l1[3307];
	out[2091] = l1[2252] & l1[2041];
	out[2092] = !l1[2656];
	out[2093] = !(l1[1594] ^ l1[481]);
	out[2094] = !(l1[95] | l1[1150]);
	out[2095] = l1[3544] ^ l1[203];
	out[2096] = l1[1895] & l1[68];
	out[2097] = !(l1[289] | l1[1904]);
	out[2098] = l1[3593] ^ l1[1402];
	out[2099] = l1[255] & !l1[960];
	out[2100] = l1[1810] ^ l1[3383];
	out[2101] = l1[1639] ^ l1[2193];
	out[2102] = !(l1[1456] ^ l1[2986]);
	out[2103] = !(l1[828] ^ l1[1626]);
	out[2104] = l1[363] ^ l1[744];
	out[2105] = !(l1[3350] ^ l1[2622]);
	out[2106] = l1[998] ^ l1[963];
	out[2107] = !l1[1125];
	out[2108] = l1[3185] ^ l1[1401];
	out[2109] = l1[1889] ^ l1[1777];
	out[2110] = l1[3808] ^ l1[2035];
	out[2111] = l1[3288] & !l1[3703];
	out[2112] = l1[3444] ^ l1[2534];
	out[2113] = l1[1383] & l1[3463];
	out[2114] = l1[2160] ^ l1[703];
	out[2115] = l1[2347] ^ l1[659];
	out[2116] = !(l1[2798] ^ l1[2395]);
	out[2117] = l1[157] ^ l1[1683];
	out[2118] = l1[1261] ^ l1[2289];
	out[2119] = !(l1[1902] ^ l1[2848]);
	out[2120] = !l1[617] | (l1[617] & l1[2229]);
	out[2121] = !(l1[2798] | l1[3448]);
	out[2122] = l1[406];
	out[2123] = l1[2634] & !l1[1995];
	out[2124] = !l1[313] | (l1[313] & l1[3862]);
	out[2125] = !(l1[422] ^ l1[3935]);
	out[2126] = l1[3780];
	out[2127] = l1[1348] ^ l1[291];
	out[2128] = !(l1[2117] | l1[2923]);
	out[2129] = !(l1[2116] ^ l1[574]);
	out[2130] = !l1[1668] | (l1[366] & l1[1668]);
	out[2131] = !l1[839] | (l1[2773] & l1[839]);
	out[2132] = !(l1[1092] ^ l1[133]);
	out[2133] = !(l1[3261] & l1[1016]);
	out[2134] = !(l1[216] & l1[1714]);
	out[2135] = !l1[3550];
	out[2136] = l1[1921] ^ l1[1722];
	out[2137] = !(l1[1770] ^ l1[3744]);
	out[2138] = !(l1[111] ^ l1[2301]);
	out[2139] = l1[1993] ^ l1[3816];
	out[2140] = l1[485] | l1[2907];
	out[2141] = l1[543] ^ l1[92];
	out[2142] = !(l1[932] ^ l1[1359]);
	out[2143] = !l1[3655] | (l1[3655] & l1[1052]);
	out[2144] = l1[718];
	out[2145] = !l1[3456];
	out[2146] = l1[806];
	out[2147] = l1[889];
	out[2148] = !(l1[1905] ^ l1[3705]);
	out[2149] = !l1[579];
	out[2150] = l1[1445];
	out[2151] = l1[3835] ^ l1[1718];
	out[2152] = !l1[2625] | (l1[2625] & l1[3781]);
	out[2153] = l1[1963] & !l1[2596];
	out[2154] = l1[1101] & l1[2219];
	out[2155] = !(l1[3805] ^ l1[3814]);
	out[2156] = l1[318];
	out[2157] = l1[3382];
	out[2158] = !(l1[3687] ^ l1[1799]);
	out[2159] = l1[403] ^ l1[3681];
	out[2160] = !l1[833];
	out[2161] = l1[1375] & !l1[1462];
	out[2162] = l1[2721] ^ l1[1851];
	out[2163] = !(l1[950] ^ l1[2734]);
	out[2164] = l1[3007] ^ l1[3859];
	out[2165] = l1[3529] | l1[2084];
	out[2166] = !(l1[2428] ^ l1[2063]);
	out[2167] = l1[2366] ^ l1[3829];
	out[2168] = !(l1[3907] ^ l1[3142]);
	out[2169] = l1[82];
	out[2170] = !l1[164];
	out[2171] = l1[1614] & l1[2271];
	out[2172] = !l1[2689];
	out[2173] = l1[3326] ^ l1[3337];
	out[2174] = !l1[1307] | (l1[1307] & l1[3303]);
	out[2175] = l1[1817] ^ l1[3370];
	out[2176] = !(l1[3051] ^ l1[1769]);
	out[2177] = !(l1[2021] ^ l1[1542]);
	out[2178] = l1[2588] & !l1[2221];
	out[2179] = !l1[2327];
	out[2180] = !l1[902] | (l1[902] & l1[3195]);
	out[2181] = l1[667];
	out[2182] = l1[343] & !l1[2203];
	out[2183] = !(l1[3813] ^ l1[886]);
	out[2184] = !(l1[1434] ^ l1[1394]);
	out[2185] = l1[854] & l1[1167];
	out[2186] = !(l1[2833] ^ l1[2190]);
	out[2187] = !l1[2667] | (l1[2417] & l1[2667]);
	out[2188] = !(l1[2853] | l1[530]);
	out[2189] = l1[3136] | l1[2471];
	out[2190] = l1[2243] | l1[3059];
	out[2191] = !l1[629] | (l1[2408] & l1[629]);
	out[2192] = !(l1[265] & l1[3067]);
	out[2193] = l1[206] ^ l1[591];
	out[2194] = !(l1[3104] ^ l1[1299]);
	out[2195] = !l1[1378] | (l1[1378] & l1[2516]);
	out[2196] = !(l1[968] ^ l1[1679]);
	out[2197] = l1[1222] | l1[2985];
	out[2198] = l1[3132] ^ l1[2822];
	out[2199] = !(l1[1552] ^ l1[3833]);
	out[2200] = l1[1392] ^ l1[479];
	out[2201] = !l1[578];
	out[2202] = !(l1[3449] | l1[1676]);
	out[2203] = l1[446] & !l1[694];
	out[2204] = l1[3855] & l1[2951];
	out[2205] = l1[715] ^ l1[2792];
	out[2206] = l1[2829] ^ l1[3078];
	out[2207] = !(l1[3616] ^ l1[1067]);
	out[2208] = l1[1949] | l1[326];
	out[2209] = l1[2090] ^ l1[2];
	out[2210] = l1[2025] ^ l1[2312];
	out[2211] = !l1[1900] | (l1[160] & l1[1900]);
	out[2212] = !l1[918] | (l1[918] & l1[3806]);
	out[2213] = !l1[189];
	out[2214] = !l1[44] | (l1[2155] & l1[44]);
	out[2215] = !(l1[2930] ^ l1[691]);
	out[2216] = !(l1[3495] ^ l1[632]);
	out[2217] = !(l1[1213] ^ l1[1449]);
	out[2218] = !(l1[3793] ^ l1[555]);
	out[2219] = !(l1[800] ^ l1[3166]);
	out[2220] = l1[1494];
	out[2221] = l1[3126];
	out[2222] = !l1[3012];
	out[2223] = l1[185] ^ l1[433];
	out[2224] = l1[3341] ^ l1[1258];
	out[2225] = l1[731] ^ l1[1431];
	out[2226] = l1[812] & l1[709];
	out[2227] = l1[154] ^ l1[2714];
	out[2228] = !(l1[3129] ^ l1[603]);
	out[2229] = l1[1864] ^ l1[1796];
	out[2230] = !(l1[1663] ^ l1[1600]);
	out[2231] = !l1[569];
	out[2232] = l1[1459] ^ l1[3079];
	out[2233] = l1[283];
	out[2234] = l1[3420];
	out[2235] = !(l1[1774] ^ l1[381]);
	out[2236] = !(l1[3131] ^ l1[3860]);
	out[2237] = l1[425] & l1[624];
	out[2238] = !(l1[3900] ^ l1[3015]);
	out[2239] = !l1[2363] | (l1[3596] & l1[2363]);
	out[2240] = l1[2338] ^ l1[2425];
	out[2241] = !l1[3552] | (l1[3552] & l1[204]);
	out[2242] = !l1[277];
	out[2243] = l1[2606] ^ l1[2808];
	out[2244] = !(l1[1726] | l1[3449]);
	out[2245] = l1[1663] ^ l1[2916];
	out[2246] = !l1[2104];
	out[2247] = !(l1[2631] ^ l1[2174]);
	out[2248] = !l1[1480];
	out[2249] = !(l1[1943] | l1[2022]);
	out[2250] = !(l1[1001] ^ l1[3754]);
	out[2251] = !l1[2055];
	out[2252] = l1[3075] & !l1[2414];
	out[2253] = l1[3200];
	out[2254] = !(l1[2396] | l1[1965]);
	out[2255] = !(l1[3386] ^ l1[2702]);
	out[2256] = !l1[3532] | (l1[12] & l1[3532]);
	out[2257] = l1[1599] | l1[1498];
	out[2258] = l1[1175];
	out[2259] = l1[2800] ^ l1[3418];
	out[2260] = l1[3507] ^ l1[3614];
	out[2261] = !l1[466] | (l1[510] & l1[466]);
	out[2262] = !l1[3022];
	out[2263] = !l1[3074];
	out[2264] = l1[756] ^ l1[2289];
	out[2265] = l1[2780];
	out[2266] = !(l1[3548] & l1[2012]);
	out[2267] = l1[29];
	out[2268] = !(l1[1873] ^ l1[3438]);
	out[2269] = l1[3477];
	out[2270] = l1[2047] & !l1[2953];
	out[2271] = !(l1[1807] ^ l1[2517]);
	out[2272] = l1[915] ^ l1[1961];
	out[2273] = l1[280] ^ l1[2284];
	out[2274] = !(l1[1549] ^ l1[3643]);
	out[2275] = l1[115] ^ l1[2179];
	out[2276] = l1[851] ^ l1[845];
	out[2277] = !l1[577];
	out[2278] = l1[475];
	out[2279] = !(l1[3774] ^ l1[1857]);
	out[2280] = !l1[2336];
	out[2281] = l1[2642] & l1[2932];
	out[2282] = !(l1[1100] ^ l1[2908]);
	out[2283] = l1[2232] ^ l1[1350];
	out[2284] = !(l1[584] ^ l1[2991]);
	out[2285] = !l1[947];
	out[2286] = l1[2906];
	out[2287] = !(l1[3050] | l1[650]);
	out[2288] = l1[2825] ^ l1[2492];
	out[2289] = !(l1[3367] ^ l1[1322]);
	out[2290] = !(l1[1302] ^ l1[237]);
	out[2291] = !(l1[79] ^ l1[1898]);
	out[2292] = l1[43];
	out[2293] = l1[2404] ^ l1[3748];
	out[2294] = l1[721] ^ l1[3605];
	out[2295] = l1[195] & l1[2217];
	out[2296] = l1[1328] ^ l1[1115];
	out[2297] = l1[2781];
	out[2298] = !(l1[3618] ^ l1[1803]);
	out[2299] = l1[370] & l1[2694];
	out[2300] = l1[1280];
	out[2301] = !l1[1455];
	out[2302] = l1[1536] ^ l1[2375];
	out[2303] = l1[382] & !l1[3153];
	out[2304] = l1[2423] ^ l1[1818];
	out[2305] = l1[3220] ^ l1[3615];
	out[2306] = !(l1[1186] ^ l1[3455]);
	out[2307] = l1[3800] & l1[2109];
	out[2308] = l1[2563] ^ l1[3989];
	out[2309] = l1[1300] ^ l1[1677];
	out[2310] = l1[484] ^ l1[358];
	out[2311] = !(l1[944] ^ l1[174]);
	out[2312] = l1[970] ^ l1[887];
	out[2313] = !(l1[1492] | l1[244]);
	out[2314] = l1[1209] & !l1[1772];
	out[2315] = !l1[2593];
	out[2316] = l1[1154];
	out[2317] = !(l1[2493] ^ l1[369]);
	out[2318] = !(l1[123] & l1[3265]);
	out[2319] = !(l1[3803] ^ l1[1032]);
	out[2320] = !(l1[2782] ^ l1[424]);
	out[2321] = l1[463] & !l1[1717];
	out[2322] = l1[2146] ^ l1[3031];
	out[2323] = !(l1[2232] & l1[1598]);
	out[2324] = !(l1[2409] ^ l1[3101]);
	out[2325] = l1[1264] & l1[506];
	out[2326] = l1[2141] & !l1[720];
	out[2327] = l1[3511] ^ l1[2359];
	out[2328] = l1[131] & l1[797];
	out[2329] = l1[3048] & l1[3228];
	out[2330] = l1[2748] ^ l1[1504];
	out[2331] = l1[643] & !l1[1846];
	out[2332] = l1[3530] ^ l1[2149];
	out[2333] = !l1[334];
	out[2334] = l1[2730] & l1[2302];
	out[2335] = !l1[540];
	out[2336] = !(l1[3747] ^ l1[1759]);
	out[2337] = !l1[1253] | (l1[2739] & l1[1253]);
	out[2338] = l1[2863] & l1[3894];
	out[2339] = !(l1[1325] | l1[3329]);
	out[2340] = !(l1[3306] ^ l1[400]);
	out[2341] = !(l1[3864] | l1[3971]);
	out[2342] = !(l1[3591] | l1[251]);
	out[2343] = l1[1073] ^ l1[67];
	out[2344] = l1[2300];
	out[2345] = !l1[2575];
	out[2346] = !(l1[3123] ^ l1[387]);
	out[2347] = l1[3564] | l1[1102];
	out[2348] = !l1[2575];
	out[2349] = !(l1[1928] ^ l1[1664]);
	out[2350] = l1[3562] & !l1[2646];
	out[2351] = !(l1[2153] ^ l1[1004]);
	out[2352] = l1[2545];
	out[2353] = !(l1[774] ^ l1[3079]);
	out[2354] = l1[3922] & l1[1820];
	out[2355] = l1[176] ^ l1[3473];
	out[2356] = !(l1[1470] ^ l1[1013]);
	out[2357] = !l1[2206];
	out[2358] = !l1[3375];
	out[2359] = !l1[675] | (l1[675] & l1[2738]);
	out[2360] = !(l1[3767] ^ l1[2048]);
	out[2361] = l1[912];
	out[2362] = !(l1[1863] ^ l1[1547]);
	out[2363] = l1[2371] & !l1[2976];
	out[2364] = !l1[2875] | (l1[2875] & l1[3106]);
	out[2365] = l1[1288];
	out[2366] = !(l1[3047] ^ l1[2540]);
	out[2367] = !(l1[3884] ^ l1[715]);
	out[2368] = l1[3032] ^ l1[1777];
	out[2369] = !l1[2769] | (l1[3321] & l1[2769]);
	out[2370] = !(l1[394] ^ l1[1858]);
	out[2371] = l1[858] & l1[2544];
	out[2372] = l1[2444] ^ l1[1892];
	out[2373] = !(l1[130] ^ l1[637]);
	out[2374] = l1[3930] & !l1[2057];
	out[2375] = !(l1[3121] ^ l1[3972]);
	out[2376] = l1[2607] & !l1[1597];
	out[2377] = !l1[350];
	out[2378] = !l1[2663];
	out[2379] = !l1[1128];
	out[2380] = !(l1[1474] ^ l1[3736]);
	out[2381] = l1[1790];
	out[2382] = l1[2461] & !l1[1109];
	out[2383] = !(l1[1120] ^ l1[1287]);
	out[2384] = !l1[3450];
	out[2385] = !(l1[3369] ^ l1[136]);
	out[2386] = !(l1[3471] ^ l1[1826]);
	out[2387] = l1[113] ^ l1[1750];
	out[2388] = l1[83] ^ l1[472];
	out[2389] = l1[3873];
	out[2390] = !l1[2985];
	out[2391] = l1[201];
	out[2392] = !(l1[729] | l1[1727]);
	out[2393] = l1[3924] ^ l1[1878];
	out[2394] = l1[3110] & !l1[1772];
	out[2395] = l1[3446] ^ l1[1447];
	out[2396] = l1[3585] & !l1[1570];
	out[2397] = l1[3988] & l1[3954];
	out[2398] = l1[2955] ^ l1[2031];
	out[2399] = l1[801] ^ l1[770];
	out[2400] = l1[2345] ^ l1[3085];
	out[2401] = l1[3998];
	out[2402] = l1[1747];
	out[2403] = l1[1403] & l1[2056];
	out[2404] = l1[1371] & !l1[3990];
	out[2405] = !(l1[1637] ^ l1[2620]);
	out[2406] = !l1[1170];
	out[2407] = l1[699] & l1[2635];
	out[2408] = l1[3289] ^ l1[3235];
	out[2409] = !(l1[1546] ^ l1[2501]);
	out[2410] = !(l1[1665] ^ l1[2886]);
	out[2411] = !(l1[1823] ^ l1[74]);
	out[2412] = l1[2918] ^ l1[2283];
	out[2413] = !(l1[2259] ^ l1[747]);
	out[2414] = l1[869];
	out[2415] = !(l1[1196] | l1[3965]);
	out[2416] = l1[2186] ^ l1[1613];
	out[2417] = l1[1571] ^ l1[752];
	out[2418] = !(l1[2947] ^ l1[3744]);
	out[2419] = !(l1[3035] | l1[3197]);
	out[2420] = l1[69] ^ l1[2621];
	out[2421] = l1[905] ^ l1[848];
	out[2422] = !(l1[3853] | l1[1540]);
	out[2423] = !(l1[1923] ^ l1[3055]);
	out[2424] = !l1[791] | (l1[791] & l1[1956]);
	out[2425] = !(l1[1292] | l1[2619]);
	out[2426] = l1[2435] & !l1[1420];
	out[2427] = l1[3818] ^ l1[3348];
	out[2428] = l1[1189] ^ l1[2806];
	out[2429] = l1[2368] & !l1[3909];
	out[2430] = l1[2488];
	out[2431] = !l1[3138];
	out[2432] = l1[1464];
	out[2433] = l1[3398] ^ l1[1424];
	out[2434] = !l1[1888];
	out[2435] = l1[3837];
	out[2436] = !(l1[2831] ^ l1[1860]);
	out[2437] = !l1[1188];
	out[2438] = l1[2613] ^ l1[3751];
	out[2439] = !(l1[1264] ^ l1[716]);
	out[2440] = !(l1[734] ^ l1[161]);
	out[2441] = !(l1[1608] ^ l1[3285]);
	out[2442] = l1[3216];
	out[2443] = !l1[1094];
	out[2444] = !l1[477];
	out[2445] = l1[3088] ^ l1[1456];
	out[2446] = l1[3953] ^ l1[339];
	out[2447] = l1[3727] ^ l1[1192];
	out[2448] = !(l1[2425] | l1[2015]);
	out[2449] = l1[151] ^ l1[2742];
	out[2450] = !(l1[276] ^ l1[3034]);
	out[2451] = l1[1241] ^ l1[71];
	out[2452] = l1[1062] ^ l1[1655];
	out[2453] = l1[1588];
	out[2454] = l1[2169] ^ l1[1981];
	out[2455] = !l1[2269];
	out[2456] = !l1[103] | (l1[2519] & l1[103]);
	out[2457] = !l1[1479];
	out[2458] = !(l1[1180] ^ l1[2822]);
	out[2459] = l1[2611] & !l1[354];
	out[2460] = l1[78] & !l1[215];
	out[2461] = l1[3549] ^ l1[573];
	out[2462] = l1[264] & !l1[3499];
	out[2463] = l1[2962] & !l1[3001];
	out[2464] = l1[3957] ^ l1[63];
	out[2465] = l1[1826] ^ l1[2595];
	out[2466] = l1[3095] & l1[2740];
	out[2467] = !(l1[348] ^ l1[2917]);
	out[2468] = l1[2877] & !l1[1214];
	out[2469] = l1[2473] & l1[784];
	out[2470] = !l1[3261];
	out[2471] = l1[2877] & !l1[3189];
	out[2472] = !l1[5];
	out[2473] = !(l1[495] | l1[2587]);
	out[2474] = !l1[3057];
	out[2475] = !(l1[3963] ^ l1[1635]);
	out[2476] = l1[908] ^ l1[994];
	out[2477] = l1[1647] ^ l1[3869];
	out[2478] = l1[2922] & !l1[1929];
	out[2479] = l1[3828] ^ l1[1913];
	out[2480] = !l1[698];
	out[2481] = l1[2796];
	out[2482] = !(l1[3429] ^ l1[2165]);
	out[2483] = !(l1[3944] ^ l1[1742]);
	out[2484] = !(l1[3199] ^ l1[3204]);
	out[2485] = !(l1[575] ^ l1[911]);
	out[2486] = !l1[3253];
	out[2487] = l1[2959] | l1[2965];
	out[2488] = l1[1185] ^ l1[2574];
	out[2489] = !l1[1478];
	out[2490] = l1[3492];
	out[2491] = !(l1[1873] ^ l1[647]);
	out[2492] = !(l1[1645] ^ l1[118]);
	out[2493] = l1[2174];
	out[2494] = !(l1[3361] | l1[1396]);
	out[2495] = !(l1[2224] ^ l1[2488]);
	out[2496] = l1[1585] & !l1[2194];
	out[2497] = l1[3373] & l1[2348];
	out[2498] = l1[2085];
	out[2499] = l1[3658] & l1[946];
	out[2500] = !(l1[3422] ^ l1[2009]);
	out[2501] = l1[3903] & !l1[184];
	out[2502] = l1[1704] & l1[826];
	out[2503] = l1[760] ^ l1[2851];
	out[2504] = l1[2668] & !l1[974];
	out[2505] = l1[3734] & !l1[31];
	out[2506] = !l1[2430] | (l1[2724] & l1[2430]);
	out[2507] = l1[2046] & !l1[1066];
	out[2508] = !l1[3648];
	out[2509] = l1[2214] ^ l1[2760];
	out[2510] = !l1[2290];
	out[2511] = l1[1018] ^ l1[3865];
	out[2512] = !(l1[540] ^ l1[2772]);
	out[2513] = !(l1[745] ^ l1[2824]);
	out[2514] = !(l1[3619] ^ l1[3563]);
	out[2515] = l1[3260];
	out[2516] = l1[461];
	out[2517] = l1[3390] ^ l1[2859];
	out[2518] = l1[1586];
	out[2519] = !l1[378] | (l1[378] & l1[3356]);
	out[2520] = l1[3382];
	out[2521] = !l1[2343];
	out[2522] = l1[1335] ^ l1[1357];
	out[2523] = l1[1193] | l1[3801];
	out[2524] = l1[3016] | l1[2173];
	out[2525] = !(l1[1004] ^ l1[1765]);
	out[2526] = !(l1[1040] ^ l1[3923]);
	out[2527] = l1[3241] & l1[1349];
	out[2528] = !(l1[1079] ^ l1[3214]);
	out[2529] = l1[3759];
	out[2530] = l1[329] ^ l1[712];
	out[2531] = !(l1[3715] ^ l1[933]);
	out[2532] = !(l1[2195] ^ l1[888]);
	out[2533] = l1[804];
	out[2534] = l1[1854] ^ l1[693];
	out[2535] = !(l1[1607] ^ l1[1372]);
	out[2536] = !(l1[3526] & l1[3317]);
	out[2537] = l1[894] ^ l1[2076];
	out[2538] = l1[966] ^ l1[1244];
	out[2539] = l1[3659];
	out[2540] = !l1[3155] | (l1[3155] & l1[1509]);
	out[2541] = l1[3165] & !l1[2638];
	out[2542] = !(l1[128] & l1[2392]);
	out[2543] = l1[3625] | l1[2633];
	out[2544] = l1[58] & !l1[2716];
	out[2545] = l1[2052] & !l1[2638];
	out[2546] = !l1[3525];
	out[2547] = l1[3674];
	out[2548] = !(l1[3232] ^ l1[533]);
	out[2549] = l1[1634];

}
