/****************************************************************************
*	CreateBy:	 Nghiadt
*	CreateOn:	 1/19/2008 11:33AM
*	Description: Dinh	nghia	cac	cau	truc tin dien	cho	HVSS
*	ModifyBy:	NaLTH
*	Description: Them truong ORG_O_CODE vaf ORG_R_CODE vao tin dien huy.
* 	Theo do dan den sua truong cua cau truc va vi tri cac truong (POS)cua tin dien huy
**/
/*==================================BEGIN	LEN===============================*/
#define   ACC_BALANCE_LEN               22
#define   AUTHORIZED_LEN                1
#define   CR_QUEUE_LEN                  22
#define   CR_SUM_LEN                    22
#define   CURRENCY_CODE_LEN             3
#define   DR_QUEUE_LEN                  22
#define   DR_SUM_LEN                    22

#define   WARN_AMT_1_LEN                22
#define   WARN_AMT_2_LEN                22
#define   WARN_AMT_3_LEN                22
#define   WARN_BAL_LEN                  22
#define   WARN_LEVEL_LEN                1
#define   WARN_TIME_LEN                 14


/*==============================END	LEN============================================*/

/* Lenh chuyen tien gia tri cao */

#define    HVF_POSTING_TIME_POS    175
#define    HVF_CURRENCY_CODE_POS   189
#define    HVF_TR_AMT_POS          192
#define    HVF_O_NAME_POS          214
#define    HVF_O_ADDRESS_POS       424
#define    HVF_O_CODE_POS          724
#define    HVF_O_IDENTITY_POS      744
#define    HVF_O_ACC_POS           819
#define    HVF_R_NAME_POS          844
#define    HVF_R_ADDRESS_POS       1054
#define    HVF_R_CODE_POS          1354
#define    HVF_R_IDENTITY_POS      1374
#define    HVF_R_ACC_POS           1449
#define    HVF_TR_CONTENT_POS      1474
#define    HVF_APPROVER_CODE_POS   2104
#define    HVF_APPROVE_TIME_POS    2120
#define    HVF_AUTHORIZED_POS      2134
#define    HVF_RELATION_NO_POS     2135
#define    HVF_FEE_FLAG_POS        2175
#define    HVF_FEE_CI_CODE_POS     2176
#define    HVF_FEE_CI_ID_POS       2188
#define    HVF_TAX_CODE_POS        2196
#define    HVF_REFERENCE_POS       2226
#define    HVF_OPERT1_POS          2526
#define    HVF_OPERT2_POS          2528
#define    HVF_E_SIGN_POS          2531


/* Lenh chuyen co gia tri cao */

#define    HCF_POSTING_TIME_POS    175
#define    HCF_CURRENCY_CODE_POS   189
#define    HCF_TR_AMT_POS          192
#define    HCF_O_NAME_POS          214
#define    HCF_O_ADDRESS_POS       424
#define    HCF_O_CODE_POS          724
#define    HCF_O_IDENTITY_POS      744
#define    HCF_O_ACC_POS           819
#define    HCF_R_NAME_POS          844
#define    HCF_R_ADDRESS_POS       1054
#define    HCF_R_CODE_POS          1354
#define    HCF_R_IDENTITY_POS      1374
#define    HCF_R_ACC_POS           1449
#define    HCF_TR_CONTENT_POS      1474
#define    HCF_APPROVER_CODE_POS   2104
#define    HCF_APPROVE_TIME_POS    2120
#define    HCF_AUTHORIZED_POS      2134
#define    HCF_RELATION_NO_POS     2135
#define    HCF_FEE_FLAG_POS        2175
#define    HCF_FEE_CI_CODE_POS     2176
#define    HCF_FEE_CI_ID_POS       2188
#define    HCF_TAX_CODE_POS        2196
#define    HCF_REFERENCE_POS       2226
#define    HCF_OPERT1_POS          2526
#define    HCF_OPERT2_POS          2528
#define    HCF_E_SIGN_POS          2531


/* Lenh chuyen no gia tri cao */
#define    HDF_POSTING_TIME_POS    175
#define    HDF_CURRENCY_CODE_POS   189
#define    HDF_TR_AMT_POS          192
#define    HDF_O_NAME_POS          214
#define    HDF_O_ADDRESS_POS       424
#define    HDF_O_CODE_POS          724
#define    HDF_O_IDENTITY_POS      744
#define    HDF_O_ACC_POS           819
#define    HDF_R_NAME_POS          844
#define    HDF_R_ADDRESS_POS       1054
#define    HDF_R_CODE_POS          1354
#define    HDF_R_IDENTITY_POS      1374
#define    HDF_R_ACC_POS           1449
#define    HDF_TR_CONTENT_POS      1474
#define    HDF_APPROVER_CODE_POS   2104
#define    HDF_APPROVE_TIME_POS    2120
#define    HDF_AUTHORIZED_POS      2134
#define    HDF_RELATION_NO_POS     2135
#define    HDF_FEE_FLAG_POS        2175
#define    HDF_FEE_CI_CODE_POS     2176
#define    HDF_FEE_CI_ID_POS       2188
#define    HDF_TAX_CODE_POS        2196
#define    HDF_REFERENCE_POS       2226
#define    HDF_OPERT1_POS          2526
#define    HDF_OPERT2_POS          2528
#define    HDF_E_SIGN_POS          2531

/* Van tin tinh trang giao dich HV - HTI */

#define    HTI_PROCESS_TIME_POS        110
#define    HTI_ORG_TR_AMT_POS          124
#define    HTI_ORG_CURRENCY_CODE_POS   146
#define    HTI_ORG_MSG_NO_POS          149
#define    HTI_ORG_TR_DATE_POS         157
#define    HTI_ORG_TR_TYPE_POS         165
#define    HTI_ORG_RES_CODE_POS        171
#define    HTI_ORG_O_CI_CODE_POS       175
#define    HTI_ORG_O_CI_ID_POS         187
#define    HTI_ORG_R_CI_CODE_POS       195
#define    HTI_ORG_R_CI_ID_POS         207
#define    HTI_ENQUEUE_REASON_POS      215


/*Tra loi lenh chuyen no */
/*
#define    HDR_ORG_MSG_NO_POS          175
#define    HDR_ORG_TR_DATE_POS         183
#define    HDR_ORG_TR_TYPE_POS         191
#define    HDR_ORG_TR_CRT_TIME_POS     197
#define    HDR_ORG_O_CI_CODE_POS       211
#define    HDR_ORG_O_CI_ID_POS         223
#define    HDR_ORG_O_CODE_POS          231
#define    HDR_ORG_O_NAME_POS          251
#define    HDR_ORG_O_ADDRESS_POS       321
#define    HDR_ORG_O_IDENTITY_POS      421
#define    HDR_ORG_O_ACC_POS           446
#define    HDR_ORG_O_IND_CI_CODE_POS   471
#define    HDR_ORG_O_IND_CI_ID_POS     483
#define    HDR_ORG_R_CI_CODE_POS       491
#define    HDR_ORG_R_CI_ID_POS         503
#define    HDR_ORG_R_CODE_POS          511
#define    HDR_ORG_R_NAME_POS          531
#define    HDR_ORG_R_ADDRESS_POS       601
#define    HDR_ORG_R_IDENTITY_POS      701
#define    HDR_ORG_R_ACC_POS           726
#define    HDR_ORG_R_IND_CI_CODE_POS   751
#define    HDR_ORG_R_IND_CI_ID_POS     763
#define    HDR_ORG_TR_AMT_POS          771
#define    HDR_ORG_CURRENCY_CODE_POS   793
#define    HDR_REASON_POS              796
#define    HDR_APPROVER_CODE_POS       1006
#define    HDR_APPROVE_TIME_POS        1022
#define    HDR_E_SIGN_POS              1036
*/
#define    HDR_ORG_POSTING_TIME_POS    135
#define    HDR_ORG_MSG_NO_POS          149
#define    HDR_ORG_TR_DATE_POS         157
#define    HDR_ORG_TR_TYPE_POS         165
#define    HDR_ORG_TR_CRT_TIME_POS     171
#define    HDR_ORG_O_CI_CODE_POS       185
#define    HDR_ORG_O_CI_ID_POS         197
#define    HDR_ORG_O_CODE_POS          205
#define    HDR_ORG_O_NAME_POS          225
#define    HDR_ORG_O_ADDRESS_POS       435
#define    HDR_ORG_O_IDENTITY_POS      735
#define    HDR_ORG_O_ACC_POS           810
#define    HDR_ORG_O_IND_CI_CODE_POS   835
#define    HDR_ORG_O_IND_CI_ID_POS     847
#define    HDR_ORG_R_CI_CODE_POS       855
#define    HDR_ORG_R_CI_ID_POS         867
#define    HDR_ORG_R_CODE_POS          875
#define    HDR_ORG_R_NAME_POS          895
#define    HDR_ORG_R_ADDRESS_POS       1105
#define    HDR_ORG_R_IDENTITY_POS      1405
#define    HDR_ORG_R_ACC_POS           1480
#define    HDR_ORG_R_IND_CI_CODE_POS   1505
#define    HDR_ORG_R_IND_CI_ID_POS     1517
#define    HDR_ORG_TR_AMT_POS          1525
#define    HDR_ORG_CURRENCY_CODE_POS   1547
#define    HDR_TR_CONTENT_POS          1550
#define    HDR_APPROVER_CODE_POS       2180
#define    HDR_APPROVE_TIME_POS        2196
#define    HDR_E_SIGN_POS              2210

/*Dang ky canh bao so du tai khoan */

#define    HWR_WARN_AMT_1_POS           110
#define    HWR_WARN_AMT_2_POS           132
#define    HWR_WARN_AMT_3_POS           154
#define    HWR_REGISTER_TIME_POS        176
#define    HWR_APPROVER_CODE_POS        182
#define    HWR_APPROVE_TIME_POS         198
#define    HWR_E_SIGN_POS               212

/*Canh bao so du tai khoan*/
#define    HWN_WARN_TIME_POS            135
#define    HWN_WARN_BAL_POS             149
#define    HWN_WARN_LEVEL_POS           171
#define    HWN_ACC_BALANCE_POS          172


/* Hoan chuyen */

#define    HFR_ORG_MSG_NO_POS           135
#define    HFR_ORG_TR_DATE_POS          143
#define    HFR_ORG_TR_TYPE_POS          151
#define    HFR_ORG_TR_CRT_TIME_POS      157
#define    HFR_ORG_O_CI_CODE_POS        171
#define    HFR_ORG_O_CI_ID_POS          183
#define    HFR_ORG_O_CODE_POS           191
#define    HFR_ORG_O_NAME_POS           211
#define    HFR_ORG_O_ADDRESS_POS        421
#define    HFR_ORG_O_IDENTITY_POS       721
#define    HFR_ORG_O_ACC_POS            796
#define    HFR_ORG_O_IND_CI_CODE_POS    821
#define    HFR_ORG_O_IND_CI_ID_POS      833
#define    HFR_ORG_R_CI_CODE_POS        841
#define    HFR_ORG_R_CI_ID_POS          853
#define    HFR_ORG_R_CODE_POS           861
#define    HFR_ORG_R_NAME_POS           881
#define    HFR_ORG_R_ADDRESS_POS        1091
#define    HFR_ORG_R_IDENTITY_POS       1391
#define    HFR_ORG_R_ACC_POS            1466
#define    HFR_ORG_R_IND_CI_CODE_POS    1491
#define    HFR_ORG_R_IND_CI_ID_POS      1503
#define    HFR_ORG_TR_AMT_POS           1511
#define    HFR_ORG_CURRENCY_CODE_POS    1533
#define    HFR_ORG_REFERENCE_POS        1536
#define    HFR_ORG_TAX_CODE_POS         1836
#define    HFR_RET_MSG_NO_POS           1866
#define    HFR_RET_TR_DATE_POS          1874
#define    HFR_RET_TR_TYPE_POS          1882
#define    HFR_RET_O_CI_ID_POS          1888
#define    HFR_RET_TR_CONTENT_POS		1896
#define    HFR_TR_CONTENT_POS           2526
#define    HFR_APPROVER_CODE_POS        3156
#define    HFR_APPROVE_TIME_POS         3172
#define    HFR_E_SIGN_POS               3186



/* Van tin so du tai khoan quyet toan*/
#define    HBI_POSTING_AMT_POS          110
#define    HBI_OVERDRAFT_AMT_POS        132
#define    HBI_DR_SUM_POS               154
#define    HBI_CR_SUM_POS               176
#define    HBI_DR_QUEUE_POS             198
#define    HBI_CR_QUEUE_POS             220


/* Tra soat*/
#define    HCM_ORG_MSG_NO_POS           135
#define    HCM_ORG_TR_DATE_POS          143
#define    HCM_ORG_TR_TYPE_POS          151
#define    HCM_ORG_O_CI_CODE_POS        157
#define    HCM_ORG_O_CI_ID_POS          169
#define    HCM_ORG_R_CI_CODE_POS        177
#define    HCM_ORG_R_CI_ID_POS          189
#define    HCM_ORG_O_IND_CI_CODE_POS    197
#define    HCM_ORG_O_IND_CI_ID_POS      209
#define    HCM_ORG_R_IND_CI_CODE_POS    217
#define    HCM_ORG_R_IND_CI_ID_POS      229
#define    HCM_CONF_MSG_NO_POS          237
#define    HCM_CONF_TR_DATE_POS         245
#define    HCM_CONF_TR_TYPE_POS         253
#define    HCM_CONF_O_CI_ID_POS         259
#define    HCM_APPROVER_CODE_POS        267
#define    HCM_APPROVE_TIME_POS         283
#define    HCM_TR_CONTENT_POS           297
#define    HCM_E_SIGN_POS               927


/*Huy giao dich*/
/*#define    HFC_ORG_POSTING_TIME_POS     110
#define    HFC_ORG_MSG_NO_POS           124
#define    HFC_ORG_TR_DATE_POS          132
#define    HFC_ORG_TR_TYPE_POS          140
#define    HFC_ORG_TR_CRT_TIME_POS      146
#define    HFC_ORG_O_CI_CODE_POS        160
#define    HFC_ORG_O_CI_ID_POS          172
#define    HFC_ORG_O_NAME_POS           180
#define    HFC_ORG_O_ADDRESS_POS        250
#define    HFC_ORG_O_IDENTITY_POS       350
#define    HFC_ORG_O_ACC_POS            375
#define    HFC_ORG_O_IND_CI_ID_POS      400
#define    HFC_ORG_R_CI_CODE_POS        408
#define    HFC_ORG_R_CI_ID_POS          420
#define    HFC_ORG_R_NAME_POS           428
#define    HFC_ORG_R_ADDRESS_POS        498
#define    HFC_ORG_R_IDENTITY_POS       598
#define    HFC_ORG_R_ACC_POS            623
#define    HFC_ORG_R_IND_CI_ID_POS      648
#define    HFC_ORG_TR_AMT_POS           656
#define    HFC_ORG_CURRENCY_CODE_POS    678
#define    HFC_REASON_POS               681
#define    HFC_APPROVER_CODE_POS        891
#define    HFC_APPROVE_TIME_POS         907
#define    HFC_E_SIGN_POS               921*/

#define    HFC_ORG_POSTING_TIME_POS		110
#define    HFC_ORG_MSG_NO_POS      		124
#define    HFC_ORG_TR_DATE_POS     		132
#define    HFC_ORG_TR_TYPE_POS     		140
#define    HFC_ORG_TR_CRT_TIME_POS 		146
#define    HFC_ORG_O_CI_CODE_POS   		160
#define    HFC_ORG_O_CI_ID_POS     		172
#define    HFC_ORG_O_CODE_POS      		180
#define    HFC_ORG_O_NAME_POS      		200
#define    HFC_ORG_O_ADDRESS_POS   		410
#define    HFC_ORG_O_IDENTITY_POS  		710
#define    HFC_ORG_O_ACC_POS       		785
#define    HFC_ORG_O_IND_CI_CODE_POS 	810
#define    HFC_ORG_O_IND_CI_ID_POS 		822
#define    HFC_ORG_R_CI_CODE_POS   		830
#define    HFC_ORG_R_CI_ID_POS     		842
#define    HFC_ORG_R_CODE_POS      		850
#define    HFC_ORG_R_NAME_POS      		870
#define    HFC_ORG_R_ADDRESS_POS   		1080
#define    HFC_ORG_R_IDENTITY_POS  		1380
#define    HFC_ORG_R_ACC_POS       		1455
#define    HFC_ORG_R_IND_CI_CODE_POS 	1480
#define    HFC_ORG_R_IND_CI_ID_POS 		1492
#define    HFC_ORG_TR_AMT_POS      		1500
#define    HFC_ORG_CURRENCY_CODE_POS	1522
#define    HFC_TR_CONTENT_POS         	1525
#define    HFC_APPROVER_CODE_POS   		2155
#define    HFC_APPROVE_TIME_POS    		2171
#define    HFC_E_SIGN_POS          		2185


/*================================END POSITION================================*/

/*===========================BEGIN STRUCTURE DEFINE===========================*/


/*=====cau truc	phan TRANSACHTION cua lenh	chuyen tien	gia	tri	cao	HV====*/
typedef	struct
{
	char   s_posting_time[POSTING_TIME_LEN +1];     /* Thoi diem quyet toan */
	char   s_currency_code[CURRENCY_CODE_LEN +1];   /* Ma Loai tien */
	char   s_tr_amt[TR_AMT_LEN +1];             	/* So tien chuyen */
	char   s_o_name[O_NAME_LEN +1];             	/* Ten nguoi gui */
	char   s_o_address[O_ADDRESS_LEN +1];       	/* Dia chi nguoi gui */
	char   s_o_code[O_CODE_LEN +1];             	/* Ma Don vi Gui */
	char   s_o_identity[O_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi gui) */
	char   s_o_acc[O_ACC_LEN +1];               	/* Tai khoan nguoi gui */
	char   s_r_name[R_NAME_LEN +1];             	/* Ten nguoi nhan */
	char   s_r_address[R_ADDRESS_LEN +1];       	/* Dia chi nguoi nhan */
	char   s_r_code[R_CODE_LEN +1];             	/* Ma don vi nhan */
	char   s_r_identity[R_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi nhan) */
	char   s_r_acc[R_ACC_LEN +1];               	/* Tai khoan nguoi nhan */
	char   s_tr_content[TR_CONTENT_LEN +1];         /* Noi dung */
	char   s_approver_code[APPROVER_CODE_LEN +1];   /* Ma Nguoi ky duyet giao dich */
	char   s_approve_time[APPROVE_TIME_LEN +1];     /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char   s_authorized[AUTHORIZED_LEN +1];         /* Thong tin uy quyen */
	char   s_relation_no[RELATION_NO_LEN +1];       /* So tham chieu cua he thong ngoai */
	char   s_fee_flag[FEE_FLAG_LEN +1];             /* Thong tin lien quan toi tinh phi */
	char   s_fee_ci_code[FEE_CI_CODE_LEN +1];       /* Ma Ngan hang chiu phi */
	char   s_fee_ci_id[FEE_CI_ID_LEN +1];           /* Dinh danh Ngan hang chiu phi */
	char   s_tax_code[TAX_CODE_LEN +1];             /* Ma so thue (Cho nguoi thu huong) */
	char   s_reference[REFERENCE_LEN +1];           /* Chuong - loai - khoan - han muc    Cho ben nguoi thu huong */
	char   s_opert1[OPERT1_LEN +1];                 /*Loai nghiep vu 1 */
	char   s_opert2[OPERT2_LEN +1];                 /* Loai nghiep vu 2 */
	
	
	/*DienPV them*/
	char   s_exchange_rate[EXCHANGE_RATE_LEN +1];                 
  char   s_sd_id_no[SD_ID_NO_LEN +1];                 
  char   s_sd_issue_date[SD_ISSUE_DATE_LEN +1];                
  char   s_sd_issuer[SD_ISSUER_LEN +1];                
  char   s_rv_id_no[RV_ID_NO_LEN +1];                
  char   s_rv_issue_date[RV_ISSUE_DATE_LEN +1];                 
  char   s_rv_issuer[RV_ISSUER_LEN +1];                
  char   s_option1[OPTION1_LEN +1];                
  char   s_option2[OPTION2_LEN +1];                 
  char   s_option3[OPTION3_LEN +1];                 
  char   s_spare[SPARE_LEN +1];                 
  char   s_cus_type[CUS_TYPE_LEN +1];               
	
	char   s_e_sign[E_SIGN_LEN +1];                 /* Chu ky dien tu  */

}	TRAN_HVF_INFO;
typedef	struct
{
	COMM_INFO		t_comm;
	ROUT_INFO		t_rout;
	PROXY_INFO	    t_proxy;
	TRAN_HVF_INFO   t_tran;
}	MSG_HVF;
#define	MSG_HVF_LEN	sizeof(MSG_HVF)

/*=====cau truc	phan TRANSACHTION cua lenh	chuyen co	gia	tri	cao	HV====*/
typedef	struct
{
	char   s_posting_time[POSTING_TIME_LEN +1];     /* Thoi diem quyet toan */
	char   s_currency_code[CURRENCY_CODE_LEN +1];   /* Ma Loai tien */
	char   s_tr_amt[TR_AMT_LEN +1];             	/* So tien chuyen */
	char   s_o_name[O_NAME_LEN +1];             	/* Ten nguoi gui */
	char   s_o_address[O_ADDRESS_LEN +1];       	/* Dia chi nguoi gui */
	char   s_o_code[O_CODE_LEN +1];             	/* Ma Don vi Gui */
	char   s_o_identity[O_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi gui) */
	char   s_o_acc[O_ACC_LEN +1];               	/* Tai khoan nguoi gui */
	char   s_r_name[R_NAME_LEN +1];             	/* Ten nguoi nhan */
	char   s_r_address[R_ADDRESS_LEN +1];       	/* Dia chi nguoi nhan */
	char   s_r_code[R_CODE_LEN +1];             	/* Ma don vi nhan */
	char   s_r_identity[R_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi nhan) */
	char   s_r_acc[R_ACC_LEN +1];               	/* Tai khoan nguoi nhan */
	char   s_tr_content[TR_CONTENT_LEN +1];         /* Noi dung */
	char   s_approver_code[APPROVER_CODE_LEN +1];   /* Ma Nguoi ky duyet giao dich */
	char   s_approve_time[APPROVE_TIME_LEN +1];     /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char   s_authorized[AUTHORIZED_LEN +1];         /* Thong tin uy quyen */
	char   s_relation_no[RELATION_NO_LEN +1];       /* So tham chieu cua he thong ngoai */
	char   s_fee_flag[FEE_FLAG_LEN +1];             /* Thong tin lien quan toi tinh phi */
	char   s_fee_ci_code[FEE_CI_CODE_LEN +1];       /* Ma Ngan hang chiu phi */
	char   s_fee_ci_id[FEE_CI_ID_LEN +1];           /* Dinh danh Ngan hang chiu phi */
	char   s_tax_code[TAX_CODE_LEN +1];             /* Ma so thue (Cho nguoi thu huong) */
	char   s_reference[REFERENCE_LEN +1];           /* Chuong - loai - khoan - han muc    Cho ben nguoi thu huong */
	char   s_opert1[OPERT1_LEN +1];                 /*Loai nghiep vu 1 */
	char   s_opert2[OPERT2_LEN +1];                 /* Loai nghiep vu 2 */
	
	/*DienPV them*/
	char   s_exchange_rate[EXCHANGE_RATE_LEN +1];                 
  char   s_sd_id_no[SD_ID_NO_LEN +1];                 
  char   s_sd_issue_date[SD_ISSUE_DATE_LEN +1];                
  char   s_sd_issuer[SD_ISSUER_LEN +1];                
  char   s_rv_id_no[RV_ID_NO_LEN +1];                
  char   s_rv_issue_date[RV_ISSUE_DATE_LEN +1];                 
  char   s_rv_issuer[RV_ISSUER_LEN +1];                
  char   s_option1[OPTION1_LEN +1];                
  char   s_option2[OPTION2_LEN +1];                 
  char   s_option3[OPTION3_LEN +1];                 
  char   s_spare[SPARE_LEN +1];                 
  char   s_cus_type[CUS_TYPE_LEN +1];               
  
  char   s_e_sign[E_SIGN_LEN +1];                 /* Chu ky dien tu  */
}	TRAN_HCF_INFO;
typedef	struct
{
	COMM_INFO		t_comm;
	ROUT_INFO		t_rout;
	PROXY_INFO	    t_proxy;
	TRAN_HCF_INFO   t_tran;
}	MSG_HCF;
#define	MSG_HCF_LEN	sizeof(MSG_HCF)


/*=====cau truc	phan TRANSACHTION cua lenh	chuyen no	gia	tri	cao	HV====*/
typedef	struct
{
	char   s_posting_time[POSTING_TIME_LEN +1];     /* Thoi diem quyet toan */
	char   s_currency_code[CURRENCY_CODE_LEN +1];   /* Ma Loai tien */
	char   s_tr_amt[TR_AMT_LEN +1];             	/* So tien chuyen */
	char   s_o_name[O_NAME_LEN +1];             	/* Ten nguoi gui */
	char   s_o_address[O_ADDRESS_LEN +1];       	/* Dia chi nguoi gui */
	char   s_o_code[O_CODE_LEN +1];             	/* Ma Don vi Gui */
	char   s_o_identity[O_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi gui) */
	char   s_o_acc[O_ACC_LEN +1];               	/* Tai khoan nguoi gui */
	char   s_r_name[R_NAME_LEN +1];             	/* Ten nguoi nhan */
	char   s_r_address[R_ADDRESS_LEN +1];       	/* Dia chi nguoi nhan */
	char   s_r_code[R_CODE_LEN +1];             	/* Ma don vi nhan */
	char   s_r_identity[R_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi nhan) */
	char   s_r_acc[R_ACC_LEN +1];               	/* Tai khoan nguoi nhan */
	char   s_tr_content[TR_CONTENT_LEN +1];         /* Noi dung */
	char   s_approver_code[APPROVER_CODE_LEN +1];   /* Ma Nguoi ky duyet giao dich */
	char   s_approve_time[APPROVE_TIME_LEN +1];     /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char   s_authorized[AUTHORIZED_LEN +1];         /* Thong tin uy quyen */
	char   s_relation_no[RELATION_NO_LEN +1];       /* So tham chieu cua he thong ngoai */
	char   s_fee_flag[FEE_FLAG_LEN +1];             /* Thong tin lien quan toi tinh phi */
	char   s_fee_ci_code[FEE_CI_CODE_LEN +1];       /* Ma Ngan hang chiu phi */
	char   s_fee_ci_id[FEE_CI_ID_LEN +1];           /* Dinh danh Ngan hang chiu phi */
	char   s_tax_code[TAX_CODE_LEN +1];             /* Ma so thue (Cho nguoi thu huong) */
	char   s_reference[REFERENCE_LEN +1];           /* Chuong - loai - khoan - han muc    Cho ben nguoi thu huong */
	char   s_opert1[OPERT1_LEN +1];                 /*Loai nghiep vu 1 */
	char   s_opert2[OPERT2_LEN +1];                 /* Loai nghiep vu 2 */
	/*DienPV them*/
	char   s_exchange_rate[EXCHANGE_RATE_LEN +1];                 
  char   s_sd_id_no[SD_ID_NO_LEN +1];                 
  char   s_sd_issue_date[SD_ISSUE_DATE_LEN +1];                
  char   s_sd_issuer[SD_ISSUER_LEN +1];                
  char   s_rv_id_no[RV_ID_NO_LEN +1];                
  char   s_rv_issue_date[RV_ISSUE_DATE_LEN +1];                 
  char   s_rv_issuer[RV_ISSUER_LEN +1];                
  char   s_option1[OPTION1_LEN +1];                
  char   s_option2[OPTION2_LEN +1];                 
  char   s_option3[OPTION3_LEN +1];                 
  char   s_spare[SPARE_LEN +1];                 
  char   s_cus_type[CUS_TYPE_LEN +1];     
  
	char   s_e_sign[E_SIGN_LEN +1];                 /* Chu ky dien tu  */

}	TRAN_HDF_INFO;
typedef	struct
{
	COMM_INFO		t_comm;
	ROUT_INFO		t_rout;
	PROXY_INFO	t_proxy;
	TRAN_HDF_INFO t_tran;
}	MSG_HDF;
#define	MSG_HDF_LEN	sizeof(MSG_HDF)

/*Cau	truc toan	bo lenh	Van	tin	tinh trang giao	dich HV*/
typedef	struct
{
	char   s_process_time[PROCESS_TIME_LEN +1];           /* Thoi diem xu ly giao dich can van tin (Day co the la thoi gian hach toan hoac la thoi gian dua vao queue cho hach toan) */
	char   s_org_tr_amt[ORG_TR_AMT_LEN +1];               /* So tien giao dich goc */
	char   s_org_currency_code[ORG_CURRENCY_CODE_LEN +1]; /* Loai tien giao dich goc  */
	char   s_org_msg_no[ORG_MSG_NO_LEN +1];               /* So hieu giao dich goc */
	char   s_org_tr_date[ORG_TR_DATE_LEN +1];             /* Ngay giao dich goc */
	char   s_org_tr_type[ORG_TR_TYPE_LEN +1];             /* Ma phan loai giao dich goc */
	char   s_org_res_code[ORG_RES_CODE_LEN +1];           /* Ma tra loi giao dich goc */
	char   s_org_o_ci_code[ORG_O_CI_CODE_LEN +1];         /* Ma Ngan hang gui giao dich goc */
	char   s_org_o_ci_id[ORG_O_CI_ID_LEN +1];             /* Dinh danh Ngan hang gui giao dich goc */
	char   s_org_r_ci_code[ORG_R_CI_CODE_LEN +1];         /* Ma Ngan hang nhan giao dich goc */
	char   s_org_r_ci_id[ORG_R_CI_ID_LEN +1];             /* Dinh danh Ngan hang nhan giao dich goc */
	char   s_enqueue_reason[ENQUEUE_REASON_LEN +1];       /* Ly do nam tai hang doi */


}TRAN_HTI_INFO;

typedef	struct
{
	COMM_INFO		t_comm;
	TRAN_HTI_INFO	t_tran;
}	MSG_HTI;
#define	MSG_HTI_LEN	sizeof(MSG_HTI)

/*Cau	truc phan	thong	tin	chi	tiet giao	dich tu	choi/chap	nhan YC	chuyen no	HDR*/
typedef	struct
{
	char   	s_org_posting_time[ORG_POSTING_TIME_LEN +1];  /* Thoi diem quyet toan */
	char    s_org_msg_no[ORG_MSG_NO_LEN +1];              /* So hieu giao dich goc */
	char    s_org_tr_date[ORG_TR_DATE_LEN +1];            /* Ngay giao dich goc */
	char    s_org_tr_type[ORG_TR_TYPE_LEN +1];            /* Ma phan loai giao dich goc */
	char    s_org_tr_crt_time[ORG_TR_CRT_TIME_LEN +1];    /* Thoi gian gui giao dich goc  */
	char    s_org_o_ci_code[ORG_O_CI_CODE_LEN +1];        /* Ngan hang gui giao dich goc */
	char    s_org_o_ci_id[ORG_O_CI_ID_LEN +1];            /* Dinh danh ngan hang gui giao dich goc */
	char    s_org_o_code[ORG_O_CODE_LEN +1];              /* Ma don vi ( khach hang)  gui goc  */
	char    s_org_o_name[ORG_O_NAME_LEN +1];              /* Ten khach hang gui goc */
	char    s_org_o_address[ORG_O_ADDRESS_LEN +1];        /* Dia chi khach hang gui goc */
	char    s_org_o_identity[ORG_O_IDENTITY_LEN +1];      /* So chung minh thu   ho chieu cua khach hang gui goc */
	char    s_org_o_acc[ORG_O_ACC_LEN +1];                /* Tai khoan ca nhan cua khach hang gui goc */
	char    s_org_o_ind_ci_code[ORG_O_IND_CI_CODE_LEN +1];/* Ngan hang gian tiep gui giao dich goc */
	char    s_org_o_ind_ci_id[ORG_O_IND_CI_ID_LEN +1];    /* ID cua don vi thanh vien phuc vu cho khach hang lap goc lenh (gian tiep phia gui) */
	char    s_org_r_ci_code[ORG_R_CI_CODE_LEN +1];        /* Ngan hang nhan giao dich goc */
	char    s_org_r_ci_id[ORG_R_CI_ID_LEN +1];            /* Dinh danh ngan hang nhan giao dich goc */
	char    s_org_r_code[ORG_R_CODE_LEN +1];              /* Ma don vi ( khach hang) nhan goc  */
	char    s_org_r_name[ORG_R_NAME_LEN +1];              /* Ten khach hang nhan goc */
	char    s_org_r_address[ORG_R_ADDRESS_LEN +1];        /* Dia chi khach hang nhan goc */
	char    s_org_r_identity[ORG_R_IDENTITY_LEN +1];      /* So chung minh thu   ho chieu cua khach hang nhan goc */
	char    s_org_r_acc[ORG_R_ACC_LEN +1];                /* Tai khoan ca nhan cua khach hang nhan goc */
	char    s_org_r_ind_ci_code[ORG_R_IND_CI_CODE_LEN +1]; /* Ngan hang gian tiep nhan giao dich goc */
	char    s_org_r_ind_ci_id[ORG_R_IND_CI_ID_LEN +1];     /* ID cua don vi thanh vien phuc vu cho khach hang nhanlenh goc (gian tiep phia nhan) */
	char    s_org_tr_amt[ORG_TR_AMT_LEN +1];               /* So tien giao dich goc */
	char    s_org_currency_code[ORG_CURRENCY_CODE_LEN +1]; /* Loai tien cua giao dich goc */
	char    s_tr_content[TR_CONTENT_LEN +1];               /* Ly do tu choi */
	char    s_approver_code[APPROVER_CODE_LEN +1];         /* Ma nguoi ky duyet */
	char    s_approve_time[APPROVE_TIME_LEN +1];           /* Thoi diem ky duyet */
	/*DienPV them*/
  char   s_org_exchange_rate[EXCHANGE_RATE_LEN +1];                 
  char   s_org_sd_id_no[SD_ID_NO_LEN +1];                 
  char   s_org_sd_issue_date[SD_ISSUE_DATE_LEN +1];                
  char   s_org_sd_issuer[SD_ISSUER_LEN +1];                
  char   s_org_rv_id_no[RV_ID_NO_LEN +1];                
  char   s_org_rv_issue_date[RV_ISSUE_DATE_LEN +1];                 
  char   s_org_rv_issuer[RV_ISSUER_LEN +1];                
  char   s_org_option1[OPTION1_LEN +1];                
  char   s_org_option2[OPTION2_LEN +1];                 
  char   s_org_option3[OPTION3_LEN +1];                 
  char   s_org_spare[SPARE_LEN +1];                 
  char   s_org_cus_type[CUS_TYPE_LEN +1];  
  /*End DienPV*/
	char    s_e_sign[E_SIGN_LEN +1];                       /* Chu ky dien tu */

}TRAN_HDR_INFO;

/*Cau	truc toan	bo tin dien Tra loi chuyen	no khong uy	quyen	truoc	HDR*/
typedef	struct
{
		COMM_INFO		t_comm;
		ROUT_INFO		t_rout;
		TRAN_HDR_INFO	t_tran;
}	MSG_HDR;

#define	MSG_HDR_LEN	sizeof(MSG_HDR)

/*cau	truc phan	TRANSACHTION	cua	Dang ky	canh bao so	du tai khoan*/
typedef	struct
{
	char   s_warn_amt_1[WARN_AMT_1_LEN +1];       /* Muc so du tai khoan can canh bao 1 */
	char   s_warn_amt_2[WARN_AMT_2_LEN +1];       /* Muc so du tai khoan can canh bao 2 */
	char   s_warn_amt_3[WARN_AMT_3_LEN +1];       /* Muc so du tai khoan can canh bao 3 */
	char   s_register_time[REGISTER_TIME_LEN +1]; /* Thoi gian hoan thanh dang ky */
	char   s_approver_code[APPROVER_CODE_LEN +1]; /* Chu ky dien tu */
	char   s_approve_time[APPROVE_TIME_LEN +1];   /* Ma Nguoi ky duyet giao dich */
	char   s_e_sign[E_SIGN_LEN +1];               /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */

}TRAN_HWR_INFO;

/*====Cau	truc toan	bo Dang	ky canh	bao	so du	tai	khoan====*/
typedef	struct
{
	COMM_INFO		t_comm;
	TRAN_HWR_INFO	t_tran;
}	MSG_HWR;

#define	MSG_HWR_LEN	sizeof(MSG_HWR)


/*cau	truc phan	thong	tin	chi	tiet cua Thong bao so	du tai khoan*/
typedef	struct
{
	char    s_warn_time[WARN_TIME_LEN +1];      /* Thoi gian canh bao */
	char    s_warn_bal[WARN_BAL_LEN +1];        /* So du canh bao */
	char    s_warn_level[WARN_LEVEL_LEN +1];    /* Muc canh bao */
	char    s_acc_balance[ACC_BALANCE_LEN +1];  /* So du tai khoan quyet toan */

}TRAN_HWN_INFO;

/*Cau	truc toan	bo Thong bao so	du tai khoan*/
typedef	struct
{
	COMM_INFO		t_comm;
	ROUT_INFO       t_rout;
	TRAN_HWN_INFO	t_tran;
}	MSG_HWN;
#define	MSG_HWN_LEN	sizeof(MSG_HWN)

/*cau	truc phan	thong	tin	chi	tiet lenh	hoan chuyen	co HV*/
typedef	struct
{
	char      s_org_msg_no[ORG_MSG_NO_LEN +1];                 /* So hieu giao dich goc */
	char      s_org_tr_date[ORG_TR_DATE_LEN +1];               /* Ngay giao dich goc */
	char      s_org_tr_type[ORG_TR_TYPE_LEN +1];               /* Ma phan loai giao dich goc */
	char	  	s_org_tr_crt_time[ORG_TR_CRT_TIME_LEN +1];       /* Thoi gian gui giao dich goc  */
	char      s_org_o_ci_code[ORG_O_CI_CODE_LEN +1];           /* Ma ngan hang gui giao dich goc */
	char      s_org_o_ci_id[ORG_O_CI_ID_LEN +1];               /* Dinh danh ngan hang gui giao dich goc */
	char      s_org_o_code[ORG_O_CODE_LEN +1];                 /* Ma Don vi gui cua giao dich goc */
	char      s_org_o_name[ORG_O_NAME_LEN +1];                 /* Ten nguoi gui trong giao dich goc cua giao dich goc */
	char			s_org_o_address[ORG_O_ADDRESS_LEN +1];        	 /* Dia chi nguoi gui */
	char      s_org_o_identity[ORG_O_IDENTITY_LEN +1];         /* Giay to kem theo (So CMT nguoi gui hoac ho chieu) cua giao dich goc */
	char      s_org_o_acc[ORG_O_ACC_LEN +1];                   /* So tai khoan nguoi gui giao dich goc */
	char      s_org_o_ind_ci_code[ORG_O_IND_CI_CODE_LEN +1];   /* Ngan hang gian tiep gui giao dich goc */
	char      s_org_o_ind_ci_id[ORG_O_IND_CI_ID_LEN +1];       /* Dinh danh ngan hang gian tiep gui giao dich goc */
	char      s_org_r_ci_code[ORG_R_CI_CODE_LEN +1];           /* Ma ngan hang nhan giao dich goc */
	char      s_org_r_ci_id[ORG_R_CI_ID_LEN +1];               /* Dinh danh ngan hang nhan giao dich goc */
	char      s_org_r_code[ORG_R_CODE_LEN +1];                 /* Ma Don vi nhan cua giao dich goc */
	char      s_org_r_name[ORG_R_NAME_LEN +1];                 /* Ten nguoi nhan trong giao dich goc */
	char			s_org_r_address[ORG_R_ADDRESS_LEN +1];        	 /* Dia chi nguoi gui */
	char      s_org_r_identity[ORG_R_IDENTITY_LEN +1];         /* Giay to kem theo (So CMT nguoi nhan hoac ho chieu) cua giao dich goc */
	char      s_org_r_acc[ORG_R_ACC_LEN +1];                   /* So tai khoan nguoi nhan giao dich goc */
	char      s_org_r_ind_ci_code[ORG_R_IND_CI_CODE_LEN +1];   /* Ngan hang gian tiep nhan giao dich goc */
	char      s_org_r_ind_ci_id[ORG_R_IND_CI_ID_LEN +1];       /* Dinh danh ngan hang gian tiep nhan giao dich goc */
	char      s_org_tr_amt[ORG_TR_AMT_LEN +1];                 /* So tien giao dich goc */
	char      s_org_currency_code[ORG_CURRENCY_CODE_LEN +1];   /* Loai tien trong giao dich goc */
	char      s_org_reference[ORG_REFERENCE_LEN +1];           /* Phuc vu cho kho bac nha nuoc goc  */
	char      s_org_tax_code[ORG_TAX_CODE_LEN +1];             /* Ma so thue cho nguoi thu huong cua giao dich goc */
	char      s_ret_msg_no	[MSG_NO_LEN +1];                 /* So hieu giao dich */
	char      s_ret_tr_date	[TR_DATE_LEN +1];               /* Ngay giao dich */
	char      s_ret_tr_type	[TR_TYPE_LEN +1];               /* Ma phan loai dich vu */
	char      s_ret_o_ci_id	[O_CI_ID_LEN +1];               /* Dinh danh Don vi gui lenh hoan chuyen */
	char      s_ret_tr_content	[TR_CONTENT_LEN +1];        /* Nguyen nhan cua viec hoan chuyen dung cho tra loi hoan chuyen*/
	char      s_tr_content	[TR_CONTENT_LEN +1];            /* Nguyen nhan cua viec hoan chuyen */
	char      s_approver_code[APPROVER_CODE_LEN +1];           /* Ma Nguoi ky duyet giao dich */
	char      s_approve_time[APPROVE_TIME_LEN +1];             /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	/*DienPV them*/
  char   s_org_exchange_rate[EXCHANGE_RATE_LEN +1];                 
  char   s_org_sd_id_no[SD_ID_NO_LEN +1];                 
  char   s_org_sd_issue_date[SD_ISSUE_DATE_LEN +1];                
  char   s_org_sd_issuer[SD_ISSUER_LEN +1];                
  char   s_org_rv_id_no[RV_ID_NO_LEN +1];                
  char   s_org_rv_issue_date[RV_ISSUE_DATE_LEN +1];                 
  char   s_org_rv_issuer[RV_ISSUER_LEN +1];                
  char   s_org_option1[OPTION1_LEN +1];                
  char   s_org_option2[OPTION2_LEN +1];                 
  char   s_org_option3[OPTION3_LEN +1];                 
  char   s_org_spare[SPARE_LEN +1];                 
  char   s_org_cus_type[CUS_TYPE_LEN +1];  
  /*End DienPV*/
	char      s_e_sign[E_SIGN_LEN +1];                         /* Chu ky dien tu */


}TRAN_HFR_INFO;

#define	TRAN_HFR_INFO_LEN	sizeof(TRAN_HFR_INFO)
/*====Cau	truc toan	bo lenh	Hoan chuyen	co HV/LV====*/
typedef	struct
{
	COMM_INFO		t_comm;
	ROUT_INFO		t_rout;
	TRAN_HFR_INFO	 t_tran;
}	MSG_HFR;
#define	MSG_HFR_LEN	sizeof(MSG_HFR)

/*cau	truc phan	thong	tin	chi	tiet giao	dich Van tin so	du tai khoan quyet toan*/
typedef	struct
{
		char    s_posting_amt[POSTING_AMT_LEN +1];        /* Kha nang thanh toan hien tai */
    char    s_overdraft_amt[OVERDRAFT_AMT_LEN +1];    /* Han muc thau chi dang ky */
    char    s_dr_sum[DR_SUM_LEN +1];                  /* Tong no phat sinh trong ngay */
    char    s_cr_sum[CR_SUM_LEN +1];                  /* Tong co phat sinh trong ngay */
    char    s_dr_queue[DR_QUEUE_LEN +1];              /* Tong no dang cho hach toan vao tai khoan */
    char    s_cr_queue[CR_QUEUE_LEN +1];              /* Tong co dang cho hach toan vao tai khoan */
		char 		s_amout_block[22 +1];						/*so tien bi block test t24*/	
}	TRAN_HBI_INFO;

/*====Cau	truc toan	bo lenh	Van	tin	so du	tai	khoan	quyet	toan====*/
typedef	struct
{
	COMM_INFO		 t_comm;
	TRAN_HBI_INFO	 t_tran;
}	MSG_HBI;
#define	MSG_HBI_LEN	sizeof(MSG_HBI)

/*Cau	truc phan	TRANSACHTION	lenh tra soat	giao dich	HV*/
typedef	struct
{
  char     s_org_msg_no[ORG_MSG_NO_LEN +1];               /* So hieu giao dich goc */
	char     s_org_tr_date[ORG_TR_DATE_LEN +1];             /* Ngay giao dich goc */
	char     s_org_tr_type[ORG_TR_TYPE_LEN +1];             /* Ma phan loai giao dich goc */
	char     s_org_o_ci_code[ORG_O_CI_CODE_LEN +1];         /* Ma ngan hang gui giao dich goc */
	char     s_org_o_ci_id[ORG_O_CI_ID_LEN +1];             /* Dinh danh ngan hang gui giao dich goc */
	char     s_org_r_ci_code[ORG_R_CI_CODE_LEN +1];         /* Ma ngan hang nhan giao dich goc */
	char     s_org_r_ci_id[ORG_R_CI_ID_LEN +1];             /* Dinh danh ngan hang nhan giao dich goc */
	char     s_org_o_ind_ci_code[ORG_O_IND_CI_CODE_LEN +1]; /* Ngan hang gian tiep gui giao dich goc */
	char     s_org_o_ind_ci_id[ORG_O_IND_CI_ID_LEN +1];     /* Dinh danh ngan hang gian tiep gui giao dich goc */
	char     s_org_r_ind_ci_code[ORG_R_IND_CI_CODE_LEN +1]; /* Ngan hang gian tiep nhan giao dich goc */
	char     s_org_r_ind_ci_id[ORG_R_IND_CI_ID_LEN +1];     /* Dinh danh ngan hang gian tiep nhan giao dich goc */
	char     s_conf_msg_no[MSG_NO_LEN +1];               /* So hieu giao dich */
	char     s_conf_tr_date[TR_DATE_LEN +1];             /* Ngay giao dich */
	char     s_conf_tr_type[TR_TYPE_LEN +1];             /* Ma phan loai dich vu */
	char     s_conf_o_ci_id[O_CI_ID_LEN +1];             /* Dinh danh Don vi gui lenh tra soat */
	char     s_approver_code[APPROVER_CODE_LEN +1];         /* Ma Nguoi ky duyet giao dich */
	char     s_approve_time[APPROVE_TIME_LEN +1];           /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char     s_tr_content[TR_CONTENT_LEN +1];                       /* Nguyen nhan cua viec tra soat */
	char     s_e_sign[E_SIGN_LEN +1];                       /* Chu ky dien tu */

}	TRAN_HCM_INFO;

/*===Cau truc	toan bo	tin	dien Tra soat	giao dich	HV=======*/
typedef	struct
{
		COMM_INFO		t_comm;
		ROUT_INFO		t_rout;
		TRAN_HCM_INFO   t_tran;
}	MSG_HCM;

#define	MSG_HCM_LEN	sizeof(MSG_HCM)
/*=====cau truc	phan thong tin chi tiet	giao dich	cua	lenh huy giao	dich gia tri cao HV====*/
typedef	struct
{
	char    s_org_posting_time[ORG_POSTING_TIME_LEN +1];    /* Su dung de cap nhat lai tinh trang lenh goc tai CI, trong truong hop ko huy duoc  */
	char    s_org_msg_no[ORG_MSG_NO_LEN +1];                /* So hieu giao dich goc */
	char    s_org_tr_date[ORG_TR_DATE_LEN +1];              /* Ngay giao dich goc */
	char    s_org_tr_type[ORG_TR_TYPE_LEN +1];              /* Ma phan loai giao dich goc */
	char    s_org_tr_crt_time[ORG_TR_CRT_TIME_LEN +1];      /* Thoi gian gui giao dich goc  */
	char    s_org_o_ci_code[ORG_O_CI_CODE_LEN +1];          /* Ngan hang gui giao dich goc */
	char    s_org_o_ci_id[ORG_O_CI_ID_LEN +1];              /* Dinh danh ngan hang gui giao dich goc */
	char    s_org_o_name[ORG_O_NAME_LEN +1];                /* Ten khach hang gui goc */
	char		s_org_o_code[ORG_O_CODE_LEN +1];								/* Ma khach hang gui goc */
	char    s_org_o_address[ORG_O_ADDRESS_LEN +1];          /* Dia chi khach hang gui goc */
	char    s_org_o_identity[ORG_O_IDENTITY_LEN +1];        /* So chung minh thu   ho chieu cua khach hang gui goc */
	char    s_org_o_acc[ORG_O_ACC_LEN +1];                  /* Tai khoan ca nhan cua khach hang gui goc */
	char    s_org_o_ind_ci_code[ORG_O_IND_CI_CODE_LEN +1];  /* Ma Ngan hang gui giao dich goc gian tiep  ( neu co ) */
	char    s_org_o_ind_ci_id[ORG_O_IND_CI_ID_LEN +1];      /* ID cua don vi thanh vien phuc vu cho khach hang lap giao dich goc (gian tiep phia gui) */
	char    s_org_r_ci_code[ORG_R_CI_CODE_LEN +1];          /* Ngan hang nhan giao dich goc */
	char    s_org_r_ci_id[ORG_R_CI_ID_LEN +1];              /* Dinh danh ngan hang nhan giao dich goc */
	char    s_org_r_name[ORG_R_NAME_LEN +1];                /* Ten khach hang nhan goc */
	char		s_org_r_code[ORG_R_CODE_LEN +1];								/* Ma khach hang nhan goc */
	char    s_org_r_address[ORG_R_ADDRESS_LEN +1];          /* Dia chi khach hang nhan goc */
	char    s_org_r_identity[ORG_R_IDENTITY_LEN +1];        /* So chung minh thu   ho chieu cua khach hang nhan goc */
	char    s_org_r_acc[ORG_R_ACC_LEN +1];                  /* Tai khoan ca nhan cua khach hang nhan goc */
	char    s_org_r_ind_ci_code[ORG_R_IND_CI_CODE_LEN +1];  /* Ma Ngan hang nhan giao dich goc  gian tiep ( neu co ) */
	char    s_org_r_ind_ci_id[ORG_R_IND_CI_ID_LEN +1];      /* ID cua don vi thanh vien phuc vu cho khach hang nhan giao dich goc (gian tiep phia nhan) */
	char    s_org_tr_amt[ORG_TR_AMT_LEN +1];                /* So tien giao dich goc */
	char    s_org_currency_code[ORG_CURRENCY_CODE_LEN +1];  /* Loai tien cua giao dich goc */
	char    s_tr_content[TR_CONTENT_LEN +1];                        /* Nguyen nhan cua viec huy */
	char    s_approver_code[APPROVER_CODE_LEN +1];          /* Ma Nguoi ky duyet giao dich */
	char    s_approve_time[APPROVE_TIME_LEN +1];            /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char    s_e_sign[E_SIGN_LEN +1];                        /* Chu ky dien tu */


}	TRAN_HFC_INFO;

typedef	struct
{
	COMM_INFO		t_comm;
	TRAN_HFC_INFO t_tran;
}	MSG_HFC;
#define	MSG_HFC_LEN	sizeof(MSG_HFC)



/*BatchJob data*/
#define    BJ_FILE_CREATE_LEN 				10
#define    TRAN_TYPE_LEN 				2
typedef	struct
{
	/*char    s_rec_type[REC_TYPE_LEN];*/     /* Phan xac dinh loai ban ghi:  TT  */	
	MSG_HVF    t_hvf;                       /* Toan bo tin dien HV*/
	char	s_in_out[O_R_ID_LEN + 1];			/* chieu giao dich */	    
	char	s_rpc_ho_code[CIHO_ID_LEN + 1];   /* Ma CIHO */        
	char	s_ciho_code[CIHO_ID_LEN + 1];   /* Ma CIHO */         
	char	s_ciho_id[CIHO_ID_LEN + 1];       /* Dinh danh CIHO */  
	char	s_tran_type[TRAN_TYPE_LEN + 1];       /* Dinh danh CIHO */
	char  s_rec_no[REC_NO_LEN + 1];         /* So thu tu cua ban ghi. Bat dau tu "00000001" va tang dan*/
	char  s_bj_file_create[BJ_FILE_CREATE_LEN + 1];         /* So thu tu cua ban ghi. Bat dau tu "00000001" va tang dan*/
	
}	NB_MSG_HVF;

#define	NB_MSG_HVF_LEN	sizeof(NB_MSG_HVF)
/*#define NB_TRX201001     TRX201001 + O_R_ID_LEN + CIHO_ID_LEN + CIHO_ID_LEN + CIHO_ID_LEN + TRAN_TYPE_LEN + REC_NO_LEN + BJ_FILE_CREATE_LEN*/
#define NB_TRX201001  2776

/*Struct event broker begin*/
typedef	struct
{
	char	s_bank_system_id [8 + 1];			/* ma he thong */	    
	char	s_q_code[12 + 1];   /* Ma queue */        
	char	s_qb_code[12 + 1];   /* Ma CIHO */         
	char	s_run_mode[8 + 1];       /* Dinh danh CIHO */  
	
	
}	QUEUE_CODE;
/*end*/


/*================================END	STRUCT===========================*/

/* For USD */
/*=====cau truc	phan TRANSACHTION cua lenh	chuyen co	gia	tri	cao	HV====*/
typedef	struct
{
	char   s_posting_time[POSTING_TIME_LEN +1];     /* Thoi diem quyet toan */
	char   s_currency_code[CURRENCY_CODE_LEN +1];   /* Ma Loai tien */
	char   s_tr_amt[TR_AMT_LEN +1];             	/* So tien chuyen */
	char   s_o_name[O_NAME_LEN +1];             	/* Ten nguoi gui */
	char   s_o_address[O_ADDRESS_LEN +1];       	/* Dia chi nguoi gui */
	char   s_o_code[O_CODE_LEN +1];             	/* Ma Don vi Gui */
	char   s_o_identity[O_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi gui) */
	char   s_o_acc[O_ACC_LEN +1];               	/* Tai khoan nguoi gui */
	char   s_r_name[R_NAME_LEN +1];             	/* Ten nguoi nhan */
	char   s_r_address[R_ADDRESS_LEN +1];       	/* Dia chi nguoi nhan */
	char   s_r_code[R_CODE_LEN +1];             	/* Ma don vi nhan */
	char   s_r_identity[R_IDENTITY_LEN +1];     	/* Giay to kem theo (so CMT hoac Ho chieu cua nguoi nhan) */
	char   s_r_acc[R_ACC_LEN +1];               	/* Tai khoan nguoi nhan */
	char   s_tr_content[TR_CONTENT_LEN +1];         /* Noi dung */
	char   s_approver_code[APPROVER_CODE_LEN +1];   /* Ma Nguoi ky duyet giao dich */
	char   s_approve_time[APPROVE_TIME_LEN +1];     /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char   s_authorized[AUTHORIZED_LEN +1];         /* Thong tin uy quyen */
	char   s_relation_no[RELATION_NO_LEN +1];       /* So tham chieu cua he thong ngoai */
	char   s_fee_flag[FEE_FLAG_LEN +1];             /* Thong tin lien quan toi tinh phi */
	char   s_fee_ci_code[FEE_CI_CODE_LEN +1];       /* Ma Ngan hang chiu phi */
	char   s_fee_ci_id[FEE_CI_ID_LEN +1];           /* Dinh danh Ngan hang chiu phi */
	char   s_tax_code[TAX_CODE_LEN +1];             /* Ma so thue (Cho nguoi thu huong) */
	char   s_reference[REFERENCE_LEN +1];           /* Chuong - loai - khoan - han muc    Cho ben nguoi thu huong */
	char   s_opert1[OPERT1_LEN +1];                 /*Loai nghiep vu 1 */
	char   s_opert2[OPERT2_LEN +1];                 /* Loai nghiep vu 2 */
	char   s_e_sign[E_SIGN_SHA2_LEN +1];                 /* Chu ky dien tu  */

}	TRAN_HCF_SHA2_INFO;
typedef	struct
{
	COMM_INFO		t_comm;
	ROUT_INFO		t_rout;
	PROXY_INFO	    t_proxy;
	TRAN_HCF_SHA2_INFO   t_tran;
}	MSG_HCF_SHA2;
#define	MSG_HCF_SHA2_LEN	sizeof(MSG_HCF_SHA2)

/*Cau	truc phan	TRANSACHTION	giay no HV*/
typedef	struct
{
	char     s_approver_code[APPROVER_CODE_LEN +1];         /* Ma Nguoi ky duyet giao dich */
	char     s_approve_time[APPROVE_TIME_LEN +1];           /* Thoi gian nguoi phe duyet tien hanh phe duyet giao dich */
	char   	 s_currency_code[CURRENCY_CODE_LEN +1];   /* Ma Loai tien */
	char   	 s_relation_no[RELATION_NO_LEN +1];       /* So tham chieu cua he thong ngoai */

	char    s_dr_sum[DR_SUM_LEN +1];                  /* Tong tien */
    char  	s_interest_rate[22+1];

	char     s_tr_content[TR_CONTENT_LEN +1];                       /* noi dung */
	char     s_e_sign[E_SIGN_LEN +1];                       /* Chu ky dien tu */	

}	TRAN_PAPER_INFO;

/*===Cau truc	toan bo	tin	dien giay no=======*/
typedef	struct
{
		COMM_INFO		t_comm; /*110*/
		ROUT_INFO		t_rout; /*25*/
		TRAN_PAPER_INFO   t_tran; /*1147*/
}	MSG_PAPER;

#define	MSG_PAPER_LEN	sizeof(MSG_PAPER)

