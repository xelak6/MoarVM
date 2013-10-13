/* This file is generated from src/core/oplist by tools/update_ops.p6. */

/* Op name defines. */
#define MVM_OP_no_op 0
#define MVM_OP_goto 1
#define MVM_OP_if_i 2
#define MVM_OP_unless_i 3
#define MVM_OP_if_n 4
#define MVM_OP_unless_n 5
#define MVM_OP_if_s 6
#define MVM_OP_unless_s 7
#define MVM_OP_if_s0 8
#define MVM_OP_unless_s0 9
#define MVM_OP_if_o 10
#define MVM_OP_unless_o 11
#define MVM_OP_set 12
#define MVM_OP_extend_u8 13
#define MVM_OP_extend_u16 14
#define MVM_OP_extend_u32 15
#define MVM_OP_extend_i8 16
#define MVM_OP_extend_i16 17
#define MVM_OP_extend_i32 18
#define MVM_OP_trunc_u8 19
#define MVM_OP_trunc_u16 20
#define MVM_OP_trunc_u32 21
#define MVM_OP_trunc_i8 22
#define MVM_OP_trunc_i16 23
#define MVM_OP_trunc_i32 24
#define MVM_OP_extend_n32 25
#define MVM_OP_trunc_n32 26
#define MVM_OP_getlex 27
#define MVM_OP_bindlex 28
#define MVM_OP_getlex_ni 29
#define MVM_OP_getlex_nn 30
#define MVM_OP_getlex_ns 31
#define MVM_OP_getlex_no 32
#define MVM_OP_bindlex_ni 33
#define MVM_OP_bindlex_nn 34
#define MVM_OP_bindlex_ns 35
#define MVM_OP_bindlex_no 36
#define MVM_OP_getlex_ng 37
#define MVM_OP_bindlex_ng 38
#define MVM_OP_return_i 39
#define MVM_OP_return_n 40
#define MVM_OP_return_s 41
#define MVM_OP_return_o 42
#define MVM_OP_return 43
#define MVM_OP_const_i8 44
#define MVM_OP_const_i16 45
#define MVM_OP_const_i32 46
#define MVM_OP_const_i64 47
#define MVM_OP_const_n32 48
#define MVM_OP_const_n64 49
#define MVM_OP_const_s 50
#define MVM_OP_add_i 51
#define MVM_OP_sub_i 52
#define MVM_OP_mul_i 53
#define MVM_OP_div_i 54
#define MVM_OP_div_u 55
#define MVM_OP_mod_i 56
#define MVM_OP_mod_u 57
#define MVM_OP_neg_i 58
#define MVM_OP_abs_i 59
#define MVM_OP_inc_i 60
#define MVM_OP_inc_u 61
#define MVM_OP_dec_i 62
#define MVM_OP_dec_u 63
#define MVM_OP_getcode 64
#define MVM_OP_prepargs 65
#define MVM_OP_arg_i 66
#define MVM_OP_arg_n 67
#define MVM_OP_arg_s 68
#define MVM_OP_arg_o 69
#define MVM_OP_invoke_v 70
#define MVM_OP_invoke_i 71
#define MVM_OP_invoke_n 72
#define MVM_OP_invoke_s 73
#define MVM_OP_invoke_o 74
#define MVM_OP_add_n 75
#define MVM_OP_sub_n 76
#define MVM_OP_mul_n 77
#define MVM_OP_div_n 78
#define MVM_OP_neg_n 79
#define MVM_OP_abs_n 80
#define MVM_OP_eq_i 81
#define MVM_OP_ne_i 82
#define MVM_OP_lt_i 83
#define MVM_OP_le_i 84
#define MVM_OP_gt_i 85
#define MVM_OP_ge_i 86
#define MVM_OP_eq_n 87
#define MVM_OP_ne_n 88
#define MVM_OP_lt_n 89
#define MVM_OP_le_n 90
#define MVM_OP_gt_n 91
#define MVM_OP_ge_n 92
#define MVM_OP_argconst_i 93
#define MVM_OP_argconst_n 94
#define MVM_OP_argconst_s 95
#define MVM_OP_checkarity 96
#define MVM_OP_param_rp_i 97
#define MVM_OP_param_rp_n 98
#define MVM_OP_param_rp_s 99
#define MVM_OP_param_rp_o 100
#define MVM_OP_param_op_i 101
#define MVM_OP_param_op_n 102
#define MVM_OP_param_op_s 103
#define MVM_OP_param_op_o 104
#define MVM_OP_param_rn_i 105
#define MVM_OP_param_rn_n 106
#define MVM_OP_param_rn_s 107
#define MVM_OP_param_rn_o 108
#define MVM_OP_param_on_i 109
#define MVM_OP_param_on_n 110
#define MVM_OP_param_on_s 111
#define MVM_OP_param_on_o 112
#define MVM_OP_coerce_in 113
#define MVM_OP_coerce_ni 114
#define MVM_OP_band_i 115
#define MVM_OP_bor_i 116
#define MVM_OP_bxor_i 117
#define MVM_OP_bnot_i 118
#define MVM_OP_blshift_i 119
#define MVM_OP_brshift_i 120
#define MVM_OP_pow_i 121
#define MVM_OP_pow_n 122
#define MVM_OP_capturelex 123
#define MVM_OP_takeclosure 124
#define MVM_OP_jumplist 125
#define MVM_OP_caller 126
#define MVM_OP_getdynlex 127
#define MVM_OP_binddynlex 128
#define MVM_OP_coerce_is 129
#define MVM_OP_coerce_ns 130
#define MVM_OP_coerce_si 131
#define MVM_OP_coerce_sn 132
#define MVM_OP_smrt_numify 133
#define MVM_OP_smrt_strify 134
#define MVM_OP_param_sp 135
#define MVM_OP_param_sn 136
#define MVM_OP_ifnonnull 137
#define MVM_OP_cmp_i 138
#define MVM_OP_cmp_n 139
#define MVM_OP_not_i 140
#define MVM_OP_setlexvalue 141
#define MVM_OP_exception 142
#define MVM_OP_bindexmessage 143
#define MVM_OP_bindexpayload 144
#define MVM_OP_bindexcategory 145
#define MVM_OP_getexmessage 146
#define MVM_OP_getexpayload 147
#define MVM_OP_getexcategory 148
#define MVM_OP_throwdyn 149
#define MVM_OP_throwlex 150
#define MVM_OP_throwlexotic 151
#define MVM_OP_throwcatdyn 152
#define MVM_OP_throwcatlex 153
#define MVM_OP_throwcatlexotic 154
#define MVM_OP_die 155
#define MVM_OP_takehandlerresult 156
#define MVM_OP_newlexotic 157
#define MVM_OP_lexoticresult 158
#define MVM_OP_mod_n 159
#define MVM_OP_usecapture 160
#define MVM_OP_savecapture 161
#define MVM_OP_captureposelems 162
#define MVM_OP_captureposarg 163
#define MVM_OP_captureposarg_i 164
#define MVM_OP_captureposarg_n 165
#define MVM_OP_captureposarg_s 166
#define MVM_OP_captureposprimspec 167
#define MVM_OP_invokewithcapture 168
#define MVM_OP_multicacheadd 169
#define MVM_OP_multicachefind 170
#define MVM_OP_lexprimspec 171
#define MVM_OP_ceil_n 172
#define MVM_OP_floor_n 173
#define MVM_OP_assign 174
#define MVM_OP_assignunchecked 175
#define MVM_OP_objprimspec 176
#define MVM_OP_backtracestrings 177
#define MVM_OP_masttofile 178
#define MVM_OP_masttocu 179
#define MVM_OP_iscompunit 180
#define MVM_OP_compunitmainline 181
#define MVM_OP_compunitcodes 182
#define MVM_OP_sleep 183
#define MVM_OP_concat_s 184
#define MVM_OP_repeat_s 185
#define MVM_OP_substr_s 186
#define MVM_OP_index_s 187
#define MVM_OP_graphs_s 188
#define MVM_OP_codes_s 189
#define MVM_OP_eq_s 190
#define MVM_OP_ne_s 191
#define MVM_OP_eqat_s 192
#define MVM_OP_haveat_s 193
#define MVM_OP_getcp_s 194
#define MVM_OP_indexcp_s 195
#define MVM_OP_uc 196
#define MVM_OP_lc 197
#define MVM_OP_tc 198
#define MVM_OP_split 199
#define MVM_OP_join 200
#define MVM_OP_getcpbyname 201
#define MVM_OP_indexat 202
#define MVM_OP_indexnat 203
#define MVM_OP_unipropcode 204
#define MVM_OP_unipvalcode 205
#define MVM_OP_hasuniprop 206
#define MVM_OP_hasunipropc 207
#define MVM_OP_chars 208
#define MVM_OP_chr 209
#define MVM_OP_ordfirst 210
#define MVM_OP_ordat 211
#define MVM_OP_rindexfrom 212
#define MVM_OP_escape 213
#define MVM_OP_flip 214
#define MVM_OP_iscclass 215
#define MVM_OP_findcclass 216
#define MVM_OP_findnotcclass 217
#define MVM_OP_nfafromstatelist 218
#define MVM_OP_nfarunproto 219
#define MVM_OP_nfarunalt 220
#define MVM_OP_flattenropes 221
#define MVM_OP_gt_s 222
#define MVM_OP_ge_s 223
#define MVM_OP_lt_s 224
#define MVM_OP_le_s 225
#define MVM_OP_cmp_s 226
#define MVM_OP_radix 227
#define MVM_OP_eqatic_s 228
#define MVM_OP_sin_n 229
#define MVM_OP_asin_n 230
#define MVM_OP_cos_n 231
#define MVM_OP_acos_n 232
#define MVM_OP_tan_n 233
#define MVM_OP_atan_n 234
#define MVM_OP_atan2_n 235
#define MVM_OP_sec_n 236
#define MVM_OP_asec_n 237
#define MVM_OP_sinh_n 238
#define MVM_OP_cosh_n 239
#define MVM_OP_tanh_n 240
#define MVM_OP_sech_n 241
#define MVM_OP_sqrt_n 242
#define MVM_OP_gcd_i 243
#define MVM_OP_lcm_i 244
#define MVM_OP_add_I 245
#define MVM_OP_sub_I 246
#define MVM_OP_mul_I 247
#define MVM_OP_div_I 248
#define MVM_OP_mod_I 249
#define MVM_OP_neg_I 250
#define MVM_OP_abs_I 251
#define MVM_OP_cmp_I 252
#define MVM_OP_eq_I 253
#define MVM_OP_ne_I 254
#define MVM_OP_lt_I 255
#define MVM_OP_le_I 256
#define MVM_OP_gt_I 257
#define MVM_OP_ge_I 258
#define MVM_OP_bor_I 259
#define MVM_OP_bxor_I 260
#define MVM_OP_band_I 261
#define MVM_OP_bnot_I 262
#define MVM_OP_blshift_I 263
#define MVM_OP_brshift_I 264
#define MVM_OP_pow_I 265
#define MVM_OP_gcd_I 266
#define MVM_OP_lcm_I 267
#define MVM_OP_expmod_I 268
#define MVM_OP_isprime_I 269
#define MVM_OP_rand_I 270
#define MVM_OP_coerce_In 271
#define MVM_OP_coerce_Is 272
#define MVM_OP_coerce_nI 273
#define MVM_OP_coerce_sI 274
#define MVM_OP_isbig_I 275
#define MVM_OP_bool_I 276
#define MVM_OP_base_I 277
#define MVM_OP_radix_I 278
#define MVM_OP_div_In 279
#define MVM_OP_log_n 280
#define MVM_OP_exp_n 281
#define MVM_OP_knowhow 282
#define MVM_OP_findmeth 283
#define MVM_OP_findmeth_s 284
#define MVM_OP_can 285
#define MVM_OP_can_s 286
#define MVM_OP_create 287
#define MVM_OP_gethow 288
#define MVM_OP_getwhat 289
#define MVM_OP_atkey_i 290
#define MVM_OP_atkey_n 291
#define MVM_OP_atkey_s 292
#define MVM_OP_atkey_o 293
#define MVM_OP_bindkey_i 294
#define MVM_OP_bindkey_n 295
#define MVM_OP_bindkey_s 296
#define MVM_OP_bindkey_o 297
#define MVM_OP_existskey 298
#define MVM_OP_deletekey 299
#define MVM_OP_getwhere 300
#define MVM_OP_eqaddr 301
#define MVM_OP_reprname 302
#define MVM_OP_isconcrete 303
#define MVM_OP_atpos_i 304
#define MVM_OP_atpos_n 305
#define MVM_OP_atpos_s 306
#define MVM_OP_atpos_o 307
#define MVM_OP_bindpos_i 308
#define MVM_OP_bindpos_n 309
#define MVM_OP_bindpos_s 310
#define MVM_OP_bindpos_o 311
#define MVM_OP_push_i 312
#define MVM_OP_push_n 313
#define MVM_OP_push_s 314
#define MVM_OP_push_o 315
#define MVM_OP_pop_i 316
#define MVM_OP_pop_n 317
#define MVM_OP_pop_s 318
#define MVM_OP_pop_o 319
#define MVM_OP_shift_i 320
#define MVM_OP_shift_n 321
#define MVM_OP_shift_s 322
#define MVM_OP_shift_o 323
#define MVM_OP_unshift_i 324
#define MVM_OP_unshift_n 325
#define MVM_OP_unshift_s 326
#define MVM_OP_unshift_o 327
#define MVM_OP_splice 328
#define MVM_OP_setelemspos 329
#define MVM_OP_box_i 330
#define MVM_OP_box_n 331
#define MVM_OP_box_s 332
#define MVM_OP_unbox_i 333
#define MVM_OP_unbox_n 334
#define MVM_OP_unbox_s 335
#define MVM_OP_bindattr_i 336
#define MVM_OP_bindattr_n 337
#define MVM_OP_bindattr_s 338
#define MVM_OP_bindattr_o 339
#define MVM_OP_bindattrs_i 340
#define MVM_OP_bindattrs_n 341
#define MVM_OP_bindattrs_s 342
#define MVM_OP_bindattrs_o 343
#define MVM_OP_getattr_i 344
#define MVM_OP_getattr_n 345
#define MVM_OP_getattr_s 346
#define MVM_OP_getattr_o 347
#define MVM_OP_getattrs_i 348
#define MVM_OP_getattrs_n 349
#define MVM_OP_getattrs_s 350
#define MVM_OP_getattrs_o 351
#define MVM_OP_isnull 352
#define MVM_OP_knowhowattr 353
#define MVM_OP_iscoderef 354
#define MVM_OP_null 355
#define MVM_OP_clone 356
#define MVM_OP_isnull_s 357
#define MVM_OP_bootint 358
#define MVM_OP_bootnum 359
#define MVM_OP_bootstr 360
#define MVM_OP_bootarray 361
#define MVM_OP_boothash 362
#define MVM_OP_sethllconfig 363
#define MVM_OP_hllboxtype_i 364
#define MVM_OP_hllboxtype_n 365
#define MVM_OP_hllboxtype_s 366
#define MVM_OP_elems 367
#define MVM_OP_null_s 368
#define MVM_OP_newtype 369
#define MVM_OP_isint 370
#define MVM_OP_isnum 371
#define MVM_OP_isstr 372
#define MVM_OP_islist 373
#define MVM_OP_ishash 374
#define MVM_OP_iter 375
#define MVM_OP_iterkey_s 376
#define MVM_OP_iterval 377
#define MVM_OP_getcodename 378
#define MVM_OP_composetype 379
#define MVM_OP_setmethcache 380
#define MVM_OP_setmethcacheauth 381
#define MVM_OP_settypecache 382
#define MVM_OP_setinvokespec 383
#define MVM_OP_isinvokable 384
#define MVM_OP_iscont 385
#define MVM_OP_decont 386
#define MVM_OP_setboolspec 387
#define MVM_OP_istrue 388
#define MVM_OP_isfalse 389
#define MVM_OP_istrue_s 390
#define MVM_OP_isfalse_s 391
#define MVM_OP_getcodeobj 392
#define MVM_OP_setcodeobj 393
#define MVM_OP_setcodename 394
#define MVM_OP_forceouterctx 395
#define MVM_OP_getcomp 396
#define MVM_OP_bindcomp 397
#define MVM_OP_getcurhllsym 398
#define MVM_OP_bindcurhllsym 399
#define MVM_OP_getwho 400
#define MVM_OP_setwho 401
#define MVM_OP_rebless 402
#define MVM_OP_istype 403
#define MVM_OP_ctx 404
#define MVM_OP_ctxouter 405
#define MVM_OP_ctxcaller 406
#define MVM_OP_ctxlexpad 407
#define MVM_OP_curcode 408
#define MVM_OP_callercode 409
#define MVM_OP_bootintarray 410
#define MVM_OP_bootnumarray 411
#define MVM_OP_bootstrarray 412
#define MVM_OP_hlllist 413
#define MVM_OP_hllhash 414
#define MVM_OP_attrinited 415
#define MVM_OP_setcontspec 416
#define MVM_OP_existspos 417
#define MVM_OP_gethllsym 418
#define MVM_OP_freshcoderef 419
#define MVM_OP_markcodestatic 420
#define MVM_OP_markcodestub 421
#define MVM_OP_getstaticcode 422
#define MVM_OP_getcodecuid 423
#define MVM_OP_copy_f 424
#define MVM_OP_append_f 425
#define MVM_OP_rename_f 426
#define MVM_OP_delete_f 427
#define MVM_OP_chmod_f 428
#define MVM_OP_exists_f 429
#define MVM_OP_mkdir 430
#define MVM_OP_rmdir 431
#define MVM_OP_open_dir 432
#define MVM_OP_read_dir 433
#define MVM_OP_close_dir 434
#define MVM_OP_open_fh 435
#define MVM_OP_close_fh 436
#define MVM_OP_read_fhs 437
#define MVM_OP_slurp 438
#define MVM_OP_spew 439
#define MVM_OP_write_fhs 440
#define MVM_OP_seek_fh 441
#define MVM_OP_lock_fh 442
#define MVM_OP_unlock_fh 443
#define MVM_OP_sync_fh 444
#define MVM_OP_trunc_fh 445
#define MVM_OP_eof_fh 446
#define MVM_OP_getstdin 447
#define MVM_OP_getstdout 448
#define MVM_OP_getstderr 449
#define MVM_OP_connect_sk 450
#define MVM_OP_close_sk 451
#define MVM_OP_bind_sk 452
#define MVM_OP_listen_sk 453
#define MVM_OP_accept_sk 454
#define MVM_OP_send_sks 455
#define MVM_OP_recv_sks 456
#define MVM_OP_setencoding 457
#define MVM_OP_print 458
#define MVM_OP_say 459
#define MVM_OP_readall_fh 460
#define MVM_OP_tell_fh 461
#define MVM_OP_stat 462
#define MVM_OP_readline_fh 463
#define MVM_OP_readlineint_fh 464
#define MVM_OP_chdir 465
#define MVM_OP_rand_i 466
#define MVM_OP_rand_n 467
#define MVM_OP_time_i 468
#define MVM_OP_clargs 469
#define MVM_OP_newthread 470
#define MVM_OP_jointhread 471
#define MVM_OP_time_n 472
#define MVM_OP_exit 473
#define MVM_OP_loadbytecode 474
#define MVM_OP_getenvhash 475
#define MVM_OP_sha1 476
#define MVM_OP_createsc 477
#define MVM_OP_scsetobj 478
#define MVM_OP_scsetcode 479
#define MVM_OP_scgetobj 480
#define MVM_OP_scgethandle 481
#define MVM_OP_scgetobjidx 482
#define MVM_OP_scsetdesc 483
#define MVM_OP_scobjcount 484
#define MVM_OP_setobjsc 485
#define MVM_OP_getobjsc 486
#define MVM_OP_serialize 487
#define MVM_OP_deserialize 488
#define MVM_OP_wval 489
#define MVM_OP_wval_wide 490
#define MVM_OP_scwbdisable 491
#define MVM_OP_scwbenable 492
#define MVM_OP_pushcompsc 493
#define MVM_OP_popcompsc 494
#define MVM_OP_scgetdesc 495
#define MVM_OP_shell 496
#define MVM_OP_cwd 497
#define MVM_OP_seed 498
#define MVM_OP_rethrow 499
#define MVM_OP_resume 500
#define MVM_OP_settypehll 501
#define MVM_OP_settypehllrole 502
#define MVM_OP_usecompileehllconfig 503
#define MVM_OP_usecompilerhllconfig 504
#define MVM_OP_encode 505
#define MVM_OP_decode 506
#define MVM_OP_bindhllsym 507
#define MVM_OP_hllize 508
#define MVM_OP_hllizefor 509

MVMOpInfo * MVM_op_get_op(unsigned short op);
