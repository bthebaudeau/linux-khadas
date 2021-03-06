/*
 * drivers/amlogic/amports/arch/regs/vdin_regs.h
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
*/

#ifndef VDIN_REGS_HEADER_
#define VDIN_REGS_HEADER_


#define VDIN_SCALE_COEF_IDX 0x1200
#define VDIN_SCALE_COEF 0x1201
#define VDIN_COM_CTRL0 0x1202
#define VDIN_ACTIVE_MAX_PIX_CNT_STATUS 0x1203
#define VDIN_LCNT_STATUS 0x1204
#define VDIN_COM_STATUS0 0x1205
#define VDIN_COM_STATUS1 0x1206
#define VDIN_LCNT_SHADOW_STATUS 0x1207
#define VDIN_ASFIFO_CTRL0 0x1208
#define VDIN_ASFIFO_CTRL1 0x1209
#define VDIN_WIDTHM1I_WIDTHM1O 0x120a
#define VDIN_SC_MISC_CTRL 0x120b
#define VDIN_HSC_PHASE_STEP 0x120c
#define VDIN_HSC_INI_CTRL 0x120d
#define VDIN_COM_STATUS2 0x120e
#define VDIN_ASFIFO_CTRL2 0x120f
#define VDIN_MATRIX_CTRL 0x1210
#define VDIN_MATRIX_COEF00_01 0x1211
#define VDIN_MATRIX_COEF02_10 0x1212
#define VDIN_MATRIX_COEF11_12 0x1213
#define VDIN_MATRIX_COEF20_21 0x1214
#define VDIN_MATRIX_COEF22 0x1215
#define VDIN_MATRIX_OFFSET0_1 0x1216
#define VDIN_MATRIX_OFFSET2 0x1217
#define VDIN_MATRIX_PRE_OFFSET0_1 0x1218
#define VDIN_MATRIX_PRE_OFFSET2 0x1219
#define VDIN_LFIFO_CTRL 0x121a
#define VDIN_COM_GCLK_CTRL 0x121b
#define VDIN_INTF_WIDTHM1 0x121c
#define VDIN_WR_CTRL2 0x121f
#define VDIN_WR_CTRL 0x1220
#define VDIN_WR_H_START_END 0x1221
#define VDIN_WR_V_START_END 0x1222
#define VDIN_VSC_PHASE_STEP 0x1223
#define VDIN_VSC_INI_CTRL 0x1224
#define VDIN_SCIN_HEIGHTM1 0x1225
#define VDIN_DUMMY_DATA 0x1226
#define VDIN_MATRIX_PROBE_COLOR 0x1228
#define VDIN_MATRIX_HL_COLOR 0x1229
#define VDIN_MATRIX_PROBE_POS 0x122a
#define VDIN_CHROMA_ADDR_PORT 0x122b
#define VDIN_CHROMA_DATA_PORT 0x122c
#define VDIN_CM_BRI_CON_CTRL 0x122d
#define VDIN_GO_LINE_CTRL 0x122f
#define VDIN_HIST_CTRL 0x1230
#define VDIN_HIST_H_START_END 0x1231
#define VDIN_HIST_V_START_END 0x1232
#define VDIN_HIST_MAX_MIN 0x1233
#define VDIN_HIST_SPL_VAL 0x1234
#define VDIN_HIST_SPL_PIX_CNT 0x1235
#define VDIN_HIST_CHROMA_SUM 0x1236
#define VDIN_DNLP_HIST00 0x1237
#define VDIN_DNLP_HIST01 0x1238
#define VDIN_DNLP_HIST02 0x1239
#define VDIN_DNLP_HIST03 0x123a
#define VDIN_DNLP_HIST04 0x123b
#define VDIN_DNLP_HIST05 0x123c
#define VDIN_DNLP_HIST06 0x123d
#define VDIN_DNLP_HIST07 0x123e
#define VDIN_DNLP_HIST08 0x123f
#define VDIN_DNLP_HIST09 0x1240
#define VDIN_DNLP_HIST10 0x1241
#define VDIN_DNLP_HIST11 0x1242
#define VDIN_DNLP_HIST12 0x1243
#define VDIN_DNLP_HIST13 0x1244
#define VDIN_DNLP_HIST14 0x1245
#define VDIN_DNLP_HIST15 0x1246
#define VDIN_DNLP_HIST16 0x1247
#define VDIN_DNLP_HIST17 0x1248
#define VDIN_DNLP_HIST18 0x1249
#define VDIN_DNLP_HIST19 0x124a
#define VDIN_DNLP_HIST20 0x124b
#define VDIN_DNLP_HIST21 0x124c
#define VDIN_DNLP_HIST22 0x124d
#define VDIN_DNLP_HIST23 0x124e
#define VDIN_DNLP_HIST24 0x124f
#define VDIN_DNLP_HIST25 0x1250
#define VDIN_DNLP_HIST26 0x1251
#define VDIN_DNLP_HIST27 0x1252
#define VDIN_DNLP_HIST28 0x1253
#define VDIN_DNLP_HIST29 0x1254
#define VDIN_DNLP_HIST30 0x1255
#define VDIN_DNLP_HIST31 0x1256
#define VDIN_LDIM_STTS_HIST_REGION_IDX 0x1257
#define VDIN_LDIM_STTS_HIST_SET_REGION 0x1258
#define VDIN_LDIM_STTS_HIST_READ_REGION 0x1259
#define VDIN_MEAS_CTRL0 0x125a
#define VDIN_MEAS_VS_COUNT_HI 0x125b
#define VDIN_MEAS_VS_COUNT_LO 0x125c
#define VDIN_MEAS_HS_RANGE 0x125d
#define VDIN_MEAS_HS_COUNT 0x125e
#define VDIN_BLKBAR_CTRL1 0x125f
#define VDIN_BLKBAR_CTRL0 0x1260
#define VDIN_BLKBAR_H_START_END 0x1261
#define VDIN_BLKBAR_V_START_END 0x1262
#define VDIN_BLKBAR_CNT_THRESHOLD 0x1263
#define VDIN_BLKBAR_ROW_TH1_TH2 0x1264
#define VDIN_BLKBAR_IND_LEFT_START_END 0x1265
#define VDIN_BLKBAR_IND_RIGHT_START_END 0x1266
#define VDIN_BLKBAR_IND_LEFT1_CNT 0x1267
#define VDIN_BLKBAR_IND_LEFT2_CNT 0x1268
#define VDIN_BLKBAR_IND_RIGHT1_CNT 0x1269
#define VDIN_BLKBAR_IND_RIGHT2_CNT 0x126a
#define VDIN_BLKBAR_STATUS0 0x126b
#define VDIN_BLKBAR_STATUS1 0x126c
#define VDIN_WIN_H_START_END 0x126d
#define VDIN_WIN_V_START_END 0x126e
#define VDIN_ASFIFO_CTRL3 0x126f

#endif

