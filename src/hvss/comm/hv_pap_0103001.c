#include  "common.h"
#include  "co_extern.h"
#include  "hv_extern.h"
int co_paper_to_msg(MSG_PAPER * hcm, char * msg);
int co_msg_to_paper(char *msg, MSG_PAPER *hcm);
int co_paper_to_msg(MSG_PAPER * hcm, char * msg){

    int i_ret = 0 ;
    memset(msg, SPACE , 1282+1 );
    i_ret = co_comm_to_msg(hcm->t_comm, msg);
	  i_ret = co_rout_to_msg(hcm->t_rout, msg);

	co_fullleftpad(hcm->t_tran.s_approver_code, APPROVER_CODE_LEN, SPACE );
	memcpy( msg + 135, hcm->t_tran.s_approver_code, APPROVER_CODE_LEN);

	co_fullleftpad(hcm->t_tran.s_approve_time, APPROVE_TIME_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN, hcm->t_tran.s_approve_time, APPROVE_TIME_LEN);

  
	co_fullleftpad(hcm->t_tran.s_currency_code, CURRENCY_CODE_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN, hcm->t_tran.s_currency_code, CURRENCY_CODE_LEN);

  co_fullleftpad(hcm->t_tran.s_relation_no, RELATION_NO_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN, hcm->t_tran.s_relation_no, RELATION_NO_LEN);

  co_fullleftpad(hcm->t_tran.s_dr_sum, DR_SUM_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN, hcm->t_tran.s_dr_sum, DR_SUM_LEN);
	 
   co_fullleftpad(hcm->t_tran.s_interest_rate, DR_SUM_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN + DR_SUM_LEN, hcm->t_tran.s_interest_rate, DR_SUM_LEN);

  co_fullleftpad(hcm->t_tran.s_tr_content, TR_CONTENT_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN + DR_SUM_LEN + DR_SUM_LEN, hcm->t_tran.s_tr_content, TR_CONTENT_LEN);

   co_fullleftpad(hcm->t_tran.s_e_sign, E_SIGN_LEN, SPACE );
	memcpy( msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN + DR_SUM_LEN + DR_SUM_LEN + TR_CONTENT_LEN, hcm->t_tran.s_e_sign, E_SIGN_LEN);
	msg[1282]= 0x00;

	return SUCCESS;
	}
  int co_msg_to_paper(char *msg, MSG_PAPER *hcm){

	char *s_mod = "co_msg_to_paper(): ";
	int i_ret = 0;

	memset(hcm->t_comm.s_sys_type, 0x00, sizeof(MSG_HCM));

	/*Kiem tra gia tri truyen vao*/
	if (msg[0]== 0x00) {
		co_write_log(SYS,ON,"[E][%s][Tin dien truyen vao rong msg = (%s)]",s_mod, msg);
		return FAIL;
	}
	/*Phan thong tin chung */
	i_ret = co_msg_to_comm(msg, &hcm->t_comm);
	if (i_ret < 0 ){
			co_write_log(SYS, ON, "[E][%s][Loi khi goi ham co_msg_to_comm: input msg = (%s)]",
																s_mod, msg);
			return FAIL;
	}
	/*Phan thong tin dinh tuyen */
	i_ret = co_msg_to_rout(msg, &hcm->t_rout);
	if (i_ret < 0 ){
			co_write_log(SYS, ON, "[E][%s][Loi khi goi ham co_msg_to_rout: input msg = (%s)]",
																s_mod, msg);
			return FAIL;
	}

	/*Phan thong tin chi tiet */
	memcpy(hcm->t_tran.s_approver_code, msg + 135, APPROVER_CODE_LEN);
	hcm->t_tran.s_approver_code[APPROVER_CODE_LEN ] = '\0';

	memcpy(hcm->t_tran.s_approve_time, msg + 135 + APPROVER_CODE_LEN, APPROVE_TIME_LEN);
	hcm->t_tran.s_approve_time[APPROVE_TIME_LEN ] = '\0';
  memcpy(hcm->t_tran.s_currency_code, msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN, CURRENCY_CODE_LEN);
	hcm->t_tran.s_currency_code[CURRENCY_CODE_LEN ] = '\0';
	
   memcpy(hcm->t_tran.s_relation_no, msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN, RELATION_NO_LEN);
	hcm->t_tran.s_relation_no[RELATION_NO_LEN ] = '\0';

  memcpy(hcm->t_tran.s_dr_sum, msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN, DR_SUM_LEN);
	hcm->t_tran.s_dr_sum[DR_SUM_LEN ] = '\0';

   memcpy(hcm->t_tran.s_interest_rate, msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN + DR_SUM_LEN, DR_SUM_LEN);
	hcm->t_tran.s_interest_rate[DR_SUM_LEN ] = '\0';

  memcpy(hcm->t_tran.s_tr_content, msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN + DR_SUM_LEN + DR_SUM_LEN, TR_CONTENT_LEN);
	hcm->t_tran.s_tr_content[TR_CONTENT_LEN ] = '\0';

  memcpy(hcm->t_tran.s_e_sign, msg + 135 + APPROVER_CODE_LEN + APPROVE_TIME_LEN + CURRENCY_CODE_LEN + RELATION_NO_LEN + DR_SUM_LEN + DR_SUM_LEN + TR_CONTENT_LEN, E_SIGN_LEN);
	hcm->t_tran.s_e_sign[E_SIGN_LEN ] = '\0';

	return SUCCESS; /*parser sang cau truc HCM thanh cong*/

}
int hv_pap_0103001(t_com_info, t_inp_info, t_out_info,  s_mod)
SUCOMMONAREA     *t_com_info;
SUINPUTAREA      *t_inp_info;
SUOUTPUTAREA     *t_out_info;
char * s_mod;
{
  /*****************************************************************************************/
  /*Khai bao bien*/
  MSG_PAPER    *t_msg; /*Cau truc lenh */
  char *s_tmp_in;   /*Noi dung toan bo cac tin dien vao*/
  char *s_tmp_out;   /*Noi dung toan bo cac tin dien ra*/
  int  i_ret_val = 0; /*Gia tri tra ve, ket qua goi Ham*/
  int  i_flog = 0;   /*Co ghi log*/
  int  iCnt = 0;     /*So luong tin dien duoc truyen vao de xu ly*/
  int  ilen = 0;     /*Do dai cua tin dien ghi*/
  char s_system_id[ENV_VALUE_LEN + 1];
  int i_len_inp; /* Chieu dai noi dung tin dien vao*/
  int i_len_out; /* Chieu dai noi dung tin dien tra loi*/
  char rcv_date[8+1]; /*Ngay*/
  char s_res_code[RES_CODE_LEN+1]; /*Rescode lay tu CSDL*/
  long i_o_rpc_tmp; /* Ma O-RPC*/
  char s_o_rpc_tmp[O_RPC_ID_LEN+1]; /*Ma O-RPC*/
  long i_r_rpc_tmp; /* Ma R-RPC*/
  char s_r_rpc_tmp[R_RPC_ID_LEN+1]; /*Ma R-RPC*/
  char s_tr_date[TR_DATE_LEN+1];
  char s_msg_no[MSG_NO_LEN + 1];
  char s_tr_type[TR_TYPE_LEN+1];
  char s_o_ci_id[O_CI_ID_LEN+1];
  char s_status_code[STATUS_CODE_LEN+1]; /* Trang thai tin dien*/
  char s_connect_oci[O_CI_ID_LEN+1];/*ID ngan hang ket noi*/
  char s_verify_time[6 +1];  /*Thoi gian xac thuc tai server*/    
  /*****************************************************************************************/
  /*Cac bien khai bao cho phan xac thuc*/
  int  i_auth_msg_len = TR_TYPE_LEN + TR_DATE_LEN + MSG_NO_LEN + O_CI_ID_LEN + R_CI_ID_LEN + RELATION_NO_LEN + CURRENCY_CODE_LEN + DR_SUM_LEN + DR_SUM_LEN + TR_CONTENT_LEN;
  char s_auth_msg[TR_TYPE_LEN + TR_DATE_LEN + MSG_NO_LEN + O_CI_ID_LEN + R_CI_ID_LEN + RELATION_NO_LEN + CURRENCY_CODE_LEN + DR_SUM_LEN + DR_SUM_LEN + TR_CONTENT_LEN  + 1];/*Noi dung xac thuc*/
  int  i_tr_type_pos = 0;
  int  i_tr_date_pos = i_tr_type_pos + TR_TYPE_LEN;
  int  i_msg_no_pos  = i_tr_date_pos + TR_DATE_LEN;
  int  i_o_ci_id_pos = i_msg_no_pos + MSG_NO_LEN;

  char s_au[TRX404005 + 1];      /*Tin dien xac thuc*/
  MSG_AU  t_au;              /*Cau truc tin dien xac thuc*/
  char s_au_appr_id[SC_AU_APPR_ID_LEN + 1];  /*Ma ngan hang ky duyet*/
  char s_res_code_tmp[RES_CODE_LEN + 1];
  /*****************************************************************************************/  
  
  /*Cac bien khai bao cho phan xac thuc*/
  /*****************************************************************************************/
  memset(s_system_id, 0x00, ENV_VALUE_LEN+1);  
  /*Lay co trang thai ghi Log*/
  i_ret_val = co_get_flag_log(t_com_info, &i_flog);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON, "[%s][E]"
          "[<--- Loi lay co ghi LOG - Ham(co_get_flag_log) --->]",
          s_mod);
  }
  /*****************************************************************************************/
  co_write_log(SYS, i_flog, "[%s][D][<---BAT DAU SERVICE DIENPV: NH_PAP_0103001--->]", s_mod);
  
  /* Lay ma cua he thong*/
  i_ret_val = co_get_current_env(MY_SYSTEM_ID, s_system_id);
  if (i_ret_val != SUCCESS){
      co_write_log(SYS, ON, "[%s][%s][E]"
            "[<---Loi lay ma cua he thong--->]",
            s_system_id, s_mod);
      free((MSG_PAPER*)t_msg);
      free((char*)s_tmp_in);
      free((char*)s_tmp_out);
      return FAIL;
  }
  co_trim(s_system_id);
  /*****************************************************************************************/
  co_write_log(SYS, i_flog, "[%s][D]"
      "[<-- Hoan thanh lay ma server de ghi log: s_system_id(%s) -->]",
      s_mod, s_system_id);
  /*****************************************************************************************/

    /*Truoc khi thuc hien xu ly nghiep vu*/
  i_ret_val = co_get_inp_len(t_inp_info, &i_len_inp);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, i_flog, "[%s][%s][E]"
          "[<--- Loi Lay do dai tin dien giay no. "
          "Ham co_get_msg_len: i_len_inp(%d)--->]",
          s_system_id, s_mod, i_len_inp);
          free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  /*****************************************************************************************/
  co_write_log(SYS, i_flog, "[%s][D][<--- Hoan thanh Lay do dai tin dien: LEN(%d) --->]",
       s_mod, i_len_inp);
  /*****************************************************************************************/
  s_tmp_in = (char *)malloc(1282 + 1);
  s_tmp_out = (char *)malloc(1282 + 1);
  t_msg = (MSG_PAPER *)malloc(sizeof(MSG_PAPER));
  memset(s_tmp_in, 0x00, i_len_inp + 1);
  memset(s_status_code,0x00,STATUS_CODE_LEN+1);
  memset(s_o_rpc_tmp,0x00,O_RPC_ID_LEN+1);
  memset(s_r_rpc_tmp,0x00,R_RPC_ID_LEN+1);
  memset(rcv_date, 0x00, TR_DATE_LEN+1);
  memset(s_res_code, 0x00, RES_CODE_LEN+1);
  memset(s_tr_date, 0x00, TR_DATE_LEN+1);
  memset(s_msg_no, 0x00, MSG_NO_LEN + 1);
  memset(s_tr_type, 0x00, TR_TYPE_LEN+1);
  memset(s_o_ci_id, 0x00, O_CI_ID_LEN+1);
  memset(s_connect_oci , 0x00, O_CI_ID_LEN + 1   );
  memset(s_verify_time , 0x00, 6 + 1);    
  /*Cac bien khai bao cho phan xac thuc*/
  memset(s_auth_msg , 0x00, i_auth_msg_len + 1);
  memset(s_au , 0x00, TRX404005 + 1);
  memset(s_au_appr_id , 0x00, SC_AU_APPR_ID_LEN + 1);  
  memset(t_msg,0x00,MSG_PAPER_LEN);
  memset(s_res_code_tmp,0x00,RES_CODE_LEN + 1);
  /*****************************************************************************************/
  
  /*Lay tin dien tu cau truc */
    i_ret_val = co_get_inp_msg(t_inp_info, s_tmp_in);
    if (i_ret_val < 0){
    co_write_log(SYS, ON, "[%s] [%s] [E] "
          "[<---Loi trong qua trinh lay tin dien tu cau truc"
          "Ham co_get_inp_msg--->]",
          s_system_id, s_mod, s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
    }
    co_write_log(SYS, i_flog, "[%s][%s][D]"
        "[<---Lay tin dien tra soat tu cau truc SUINPUTAREA--->]",
        s_system_id, s_mod);
  /*****************************************************************************************/
  
  /*****************************************************************************************/
    /* kiem tra kieu va do dai tin dien TRX206002*/
    memset(s_tr_type, 0x00, TR_TYPE_LEN + 1);
    memcpy(s_tr_type, s_tmp_in + TR_TYPE_POS, TR_TYPE_LEN);
  /*****************************************************************************************/
  i_ret_val = co_len_service(s_tmp_in,s_mod);
  if (i_ret_val  != SUCCESS ){
    if(i_ret_val == FAIL){
      co_write_log(SYS, ON, "[%s] [E][<---Sai do dai tin dien, Ham: co_len--->][MSG: (%s)]", s_mod, s_tmp_in);
      memcpy(s_tmp_in + RES_CODE_POS, NP_LEN_ERR, RES_CODE_LEN);
    }else {
      co_write_log(SYS, ON, "[%s] [E][<---Loi loai tin dien, Ham: co_len_service--->][MSG: (%s)]", s_mod, s_tmp_in);
      memcpy(s_tmp_in + RES_CODE_POS, NP_TR_TYPE_ERR, RES_CODE_LEN);
    }
    goto return_msg_err;
  }
  
  /*****************************************************************************************/ 
  
  /*****************************************************************************************/ 
    /*Phan tich tin dien thanh cau truc*/
    i_ret_val=co_msg_to_paper(s_tmp_in,t_msg);
    if (i_ret_val<0){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[<---Loi trong qua trinh phan tich tin dien,"
              " Ham co_msg_to_hbi--->] [MSG: (%s)]",
                  s_system_id,
                  s_mod,
                  s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
    }
    co_write_log(SYS, i_flog,"[%s][%s][D]"
      "[<---Hoan thanh phan tich tin dien thanh cau truc --->]",
      s_system_id, s_mod);

    co_write_log(SYS, i_flog,"[%s][%s][NAMNM]"
      "[<---esign (%s) t_msg->t_tran.s_approver_code(%s) t_msg->t_comm.s_o_ci_code(%s) t_msg->t_tran.s_dr_sum(%s) t_msg->t_tran.s_relation_no(%s) t_msg->t_tran.s_interest_rate(%s) t_msg->t_tran.s_tr_content(%s)--->]",
      s_system_id, s_mod,t_msg->t_tran.s_e_sign,t_msg->t_tran.s_approver_code,t_msg->t_comm.s_o_ci_code,t_msg->t_tran.s_dr_sum,
      t_msg->t_tran.s_relation_no,t_msg->t_tran.s_interest_rate,t_msg->t_tran.s_tr_content);  
  /*****************************************************************************************/ 

  /*****************************************************************************************/
    /* 1. Kiem tra ngay lam viec */
    i_ret_val=co_check_date(t_msg->t_comm.s_tr_date);
    if (i_ret_val==DB_ERROR){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] " 
              "[TR_TYPE: (%s)] "
              "[<---Loi CSDL khi kiem tra ngay lam viec. "
              "Ham: co_check_date--->] "
              "[TR_DATE (from msg): (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_comm.s_tr_date,
              s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
  }
  else{
    if (i_ret_val<0){
      co_write_log(SYS,ON,"[%s] [%s] [E] "
                "[TR_DATE: (%s)] "
                "[O_CI_ID: (%s)] "
                "[MSG_NO: (%s)] " 
                "[TR_TYPE: (%s)] "
                "[<---Sai ngay lam viec. "
                "Ham: co_check_date--->] "
                "[TR_DATE (from msg): (%s)] "
                "[MSG: (%s)]",
                s_system_id,
                s_mod,
                t_msg->t_comm.s_tr_date,
                t_msg->t_comm.s_o_ci_id,
                t_msg->t_comm.s_msg_no,
                t_msg->t_comm.s_tr_type,
                t_msg->t_comm.s_tr_date,
                s_tmp_in);
      memcpy(t_msg->t_comm.s_res_code,NP_TR_DATE_ERR,RES_CODE_LEN);
      co_get_today('D',rcv_date);
      co_get_date('D', t_msg->t_comm.s_respond_time);
      i_ret_val=co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                   s_tmp_in,
                                   t_msg->t_comm.s_res_code,
                                   t_msg->t_comm.s_tr_type,
                                   t_msg->t_comm.s_o_ci_id,
                                   rcv_date,
                                   t_msg->t_comm.s_o_ci_id,
                                   "");
      if (i_ret_val <0){
        co_write_log(SYS,ON,"[%s] [%s] [E] "
                  "[<---Loi khi luu tin dien loi vao DB "
                  "Ham co_insert_msgerror--->] [MSG: (%s)]",
                  s_system_id,
                  s_mod,
                  s_tmp_in);
        free((MSG_PAPER*)t_msg);
        free((char*)s_tmp_in);
            free((char*)s_tmp_out);
        return FAIL;
      }

      goto return_msg;
    }
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] [<---Hoan thanh kiem tra ngay lam viec: "
            "t_msg->t_comm.s_tr_date(%s)--->]",
            s_system_id, s_mod, t_msg->t_comm.s_tr_date);
  /*****************************************************************************************/

  /*****************************************************************************************/
  /*Kiem tra ngan hang gui co dung la ngan hang ket noi khong*/
  i_ret_val = co_get_conn_ci(t_com_info, s_connect_oci);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, i_flog, "[%s][%s][E]"
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "
          "[<--- Loi tai buoc kiem tra ngan hang gui co dung la ngan hang ket noi khong. "
          "Ham co_get_conn_ci. "
          "S_CONNECT_OCI(%s)--->]",
          s_system_id, s_mod, 
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type,
          s_connect_oci);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;          
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] "
          "[<---Hoan thanh lay ngan hang ket noi. "
          "S_CONNECT_OCI(%s)--->]",
          s_system_id, s_mod, s_connect_oci);
          
i_ret_val =co_Check_Connect_O_CI(s_connect_oci, t_msg->t_comm.s_o_ci_id);
    if(i_ret_val<0){
      co_write_log(SYS,ON,"[%s] [%s] [E] "
                "[TR_DATE: (%s)] "
                "[O_CI_ID: (%s)] "
                "[MSG_NO: (%s)] "
                "[TR_TYPE: (%s)] "
                "[<---Loi CSDL khi kiem tra ngan hang ket noi. "
                "Ham co_check_date--->] "
                "[TR_DATE: (%s)] "
                "[MSG: (%s)]",
                s_system_id,
                s_mod,
                t_msg->t_comm.s_tr_date,
                t_msg->t_comm.s_o_ci_id,
                t_msg->t_comm.s_msg_no,
                t_msg->t_comm.s_tr_type,  
                t_msg->t_comm.s_tr_date,
                s_tmp_in);
      free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
      return FAIL;
      }
      else
    if(i_ret_val > 0){
      memcpy(t_msg->t_comm.s_res_code, NP_OCI_NOT_VALID, RES_CODE_LEN);
      co_write_log(SYS, ON, "[%s][%s][E]"
            "[TR_DATE: (%s)] "
            "[O_CI_ID: (%s)] "
            "[MSG_NO: (%s)] "
            "[TR_TYPE: (%s)] "
            "[<-- Ngan hang gui trong tin dien(%s) khac voi"
              " ngan hang ket noi(%s) -->]",
              s_system_id, s_mod,
              t_msg->t_comm.s_tr_date,
            t_msg->t_comm.s_o_ci_id,
            t_msg->t_comm.s_msg_no,
            t_msg->t_comm.s_tr_type,
              t_msg->t_comm.s_o_ci_id, s_connect_oci);
      goto return_msg;
    }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] "
          "[<--- Hoan thanh kiem tra ngan hang gui "
          "co dung la ngan hang ket noi khong --->]",
          s_system_id, s_mod);
  /*************************************************************************/
  
  /*************************************************************************/
  /* 2. Kiem tra su ton tai ngan hang gui*/
  i_ret_val=co_check_bank(t_msg->t_comm.s_o_ci_id);
  if (i_ret_val==DB_ERROR){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
              "[<---Loi CSDL khi kiem tra su ton tai cua ngan hang gui "
              "Ham: co_check_bank--->] "
              "[O_CI_ID: (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_comm.s_o_ci_id,
              s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
  }
  if (i_ret_val!=0){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
              "[<---Khong ton tai ngan hang gui. "
              "Ham: co_check_bank--->] "
              "[O_CI_ID: (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_comm.s_o_ci_id,
              s_tmp_in);
    memcpy(t_msg->t_comm.s_res_code,NP_OBANK_NOT_EXIST,RES_CODE_LEN);
    co_get_today('D',rcv_date);
    co_get_date('D', t_msg->t_comm.s_respond_time);
    i_ret_val=co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                s_tmp_in,
                                t_msg->t_comm.s_res_code,
                                t_msg->t_comm.s_tr_type,
                                t_msg->t_comm.s_o_ci_id,
                                rcv_date,
                                t_msg->t_comm.s_o_ci_id,
                                "");
    if (i_ret_val <0){
      co_write_log(SYS,ON,"[%s] [%s] [E] "
                "[<---Loi khi luu tin dien loi vao DB "
                "Ham co_insert_msgerror--->] [MSG: (%s)]",
                s_system_id,
                s_mod,
                s_tmp_in);
      free((MSG_PAPER*)t_msg);
      free((char*)s_tmp_in);
          free((char*)s_tmp_out);
      return FAIL;
    }

    goto return_msg;
      /*free(s_tmp_in);
      return SUCCESS;  */
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] [<---Hoan thanh kiem tra ton tai NH gui: "
                "O_CI_ID(%s)--->]",
                s_system_id, s_mod, t_msg->t_comm.s_o_ci_id);
  
  /*****************************************************************************************/
  
  /* 3. Kiem tra su ton tai ngan hang nhan*/
  i_ret_val=co_check_bank(t_msg->t_rout.s_r_ci_id);
  if (i_ret_val==DB_ERROR){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
              "[<---Loi CSDL khi kiem tra su ton tai cua ngan hang nhan. "
              "Ham: co_check_bank--->] "
              "[R_CI_ID: (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_rout.s_r_ci_id,
              s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
  }
  if (i_ret_val!=0){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
              "[<---Khong ton tai ngan hang nhan. "
              "Ham: co_check_bank--->] "
              "[R_CI_ID: (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_rout.s_r_ci_id,
              s_tmp_in);
    memcpy(t_msg->t_comm.s_res_code,NP_FAULT_AT_RRPC,RES_CODE_LEN);
    co_get_today('D',rcv_date);
    co_get_date('D', t_msg->t_comm.s_respond_time);
    i_ret_val=co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                s_tmp_in,
                                t_msg->t_comm.s_res_code,
                                t_msg->t_comm.s_tr_type,
                                t_msg->t_comm.s_o_ci_id,
                                rcv_date,
                                t_msg->t_comm.s_o_ci_id,
                                "");
    if (i_ret_val <0){
      co_write_log(SYS,ON,"[%s] [%s] [E] "
                "[<---Loi khi luu tin dien loi vao DB "
                "Ham co_insert_msgerror--->] [MSG: (%s)]",
                s_system_id,
                s_mod,
                s_tmp_in);
      free((MSG_PAPER*)t_msg);
      free((char*)s_tmp_in);
          free((char*)s_tmp_out);
      return FAIL;
    }
    goto return_msg;
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] [<--- Hoan thanh kiem tra ton tai NH nhan: "
            "S_R_CI_ID(%s)--->]",
            s_system_id, s_mod, t_msg->t_rout.s_r_ci_id);
  /*****************************************************************************************/

  /* 4. Kiem tra dang ky dich vu cua ngan hang gui */
  i_ret_val=co_check_bank_service(t_msg->t_comm.s_o_ci_id,t_msg->t_comm.s_tr_type,O_R_ID_O);
  if (i_ret_val==DB_ERROR){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
              "[<---Loi CSDL khi kiem tra dang ky dich vu cua "
              "ngan hang gui : Loi oracle. "
              "Ham: co_check_bank_service--->] "
              "[O_CI_ID: (%s) - TR_TYPE: (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_tr_type,
              s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
  }
  else{
    if (i_ret_val<0){
      co_write_log(SYS,ON,"[%s] [%s] [E] "
                "[TR_DATE: (%s)] "
                "[O_CI_ID: (%s)] "
                "[MSG_NO: (%s)] "
                "[TR_TYPE: (%s)] "
                "[<---O-CI khong dang ky dich vu tra soat "
                "Ham: co_check_bank_service--->] "
                "[O_CI_ID: (%s) - TR_TYPE: (%s)] "
                "[MSG: (%s)]",
                s_system_id,
                s_mod,
                t_msg->t_comm.s_tr_date,
                t_msg->t_comm.s_o_ci_id,
                t_msg->t_comm.s_msg_no,
                t_msg->t_comm.s_tr_type,
                t_msg->t_comm.s_o_ci_id,
                t_msg->t_comm.s_tr_type,
                s_tmp_in);
      memcpy(t_msg->t_comm.s_res_code,NP_O_SVC_NOT_REG,RES_CODE_LEN);
      co_get_today('D',rcv_date);
      co_get_date('D', t_msg->t_comm.s_respond_time);
      i_ret_val=co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                  s_tmp_in,
                                  t_msg->t_comm.s_res_code,
                                  t_msg->t_comm.s_tr_type,
                                  t_msg->t_comm.s_o_ci_id,
                                  rcv_date,
                                  t_msg->t_comm.s_o_ci_id,
                                  "");
      if (i_ret_val <0){
        co_write_log(SYS,ON,"[%s] [%s] [E] "
                  "[<---Loi khi luu tin dien loi vao DB "
                  "Ham co_insert_msgerror--->] [MSG: (%s)]",
                  s_system_id,
                  s_mod,
                  s_tmp_in);
        free((MSG_PAPER*)t_msg);
        free((char*)s_tmp_in);
            free((char*)s_tmp_out);
        return FAIL;
      }

      goto return_msg;
    }
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] "
          "[<---Hoan thanh kiem tra ngan hang gui co dang ky dich vu khong: "
          "O_CI_ID(%s), TR_TYPE(%s)--->]",
          s_system_id, s_mod,
          t_msg->t_comm.s_o_ci_id, 
          t_msg->t_comm.s_tr_type);  
  /*****************************************************************************************/

  /* 5. Kiem tra dang ky dich vu cua ngan hang nhan */
  i_ret_val=co_check_bank_service(t_msg->t_rout.s_r_ci_id,t_msg->t_comm.s_tr_type,O_R_ID_R);
  if (i_ret_val==DB_ERROR){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
              "[<---Loi CSDL khi kiem tra dang ky dich vu "
              "cua ngan hang nhan. "
              "Ham: co_check_bank_service--->] "
              "[R_CI_ID: (%s) - TR_TYPE: (%s)] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              t_msg->t_rout.s_r_ci_id,
              t_msg->t_comm.s_tr_type,
              s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
  }
  else{
    if (i_ret_val<0){
      co_write_log(SYS,ON,"[%s] [%s] [E] "
                "[TR_DATE: (%s)] "
                "[O_CI_ID: (%s)] "
                "[MSG_NO: (%s)] "
                "[TR_TYPE: (%s)] "
                "[<---R-CI khong dang ky dich vu tra soat. "
                "Ham: co_check_bank_service--->] "
                "[R_CI_ID: (%s) - TR_TYPE: (%s)] "
                "[MSG: (%s)]",
                s_system_id,
                s_mod,
                t_msg->t_comm.s_tr_date,
                t_msg->t_comm.s_o_ci_id,
                t_msg->t_comm.s_msg_no,
                t_msg->t_comm.s_tr_type,
                t_msg->t_rout.s_r_ci_id,
                t_msg->t_comm.s_tr_type,
                s_tmp_in);
      memcpy(t_msg->t_comm.s_res_code,NP_R_SVC_NOT_REG,RES_CODE_LEN);
      co_get_today('D',rcv_date);
      co_get_date('D', t_msg->t_comm.s_respond_time);
      i_ret_val=co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                  s_tmp_in,
                                  t_msg->t_comm.s_res_code,
                                  t_msg->t_comm.s_tr_type,
                                  t_msg->t_comm.s_o_ci_id,
                                  rcv_date,
                                  t_msg->t_comm.s_o_ci_id,
                                  "");
      if (i_ret_val <0){
        co_write_log(SYS,ON,"[%s] [%s] [E] "
                  "[<---Loi khi luu tin dien loi vao DB. "
                  "Ham co_insert_msgerror--->] [MSG: (%s)]",
                  s_system_id,
                  s_mod,
                  s_tmp_in);
        free((MSG_PAPER*)t_msg);
        free((char*)s_tmp_in);
            free((char*)s_tmp_out);
        return FAIL;
      }

      goto return_msg;
      /*free(s_tmp_in);
      return SUCCESS;  */
    }
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] "
            "[<---Hoan thanh kiem tra ngan hang nhan co dang ky dich vu khong: "
            "R_CI_ID(%s), TR_TYPE(%s)--->]",
            s_system_id, s_mod, 
            t_msg->t_rout.s_r_ci_id,
            t_msg->t_comm.s_tr_type);
  /*****************************************************************************************/

  /* 6. Kiem tra do dai va dinh dang cac truong trong tin dien */
  
  /*****************************************************************************************/

  /*DienPV bo o_r rpcid, gan lai serverid cho r_o_rpcid*/  
  memcpy(t_msg->t_comm.s_o_rpc_id,s_system_id,O_RPC_ID_LEN);
  memcpy(t_msg->t_rout.s_r_rpc_id,s_system_id,R_RPC_ID_LEN);  
  
  /*-------------------------------------------------------------------*/
  /*CONGLV: Bo sung 06/12/2008: Chua dich lai*/
  /*Kiem tra xem thuc the truyen thong co phai la thuc the ky khong*/
  /*Khong cho phep thuc the truyen thong dung de ky duyet giao dich*/
  if(memcmp(t_msg->t_tran.s_approver_code, t_msg->t_comm.s_o_ci_code, O_CI_CODE_LEN) == 0){
      co_write_log(SYS, ON, "[%s][%s][E]"
            "[TR_DATE: (%s)] "
            "[O_CI_ID: (%s)] "
            "[MSG_NO: (%s)] "
            "[TR_TYPE: (%s)] "
            "[APPROVER_CODE: (%s)]"
            "[O_CI_CODE: (%s)]"
            "[<-- Thuc the ky = Thuc the truyen thong"
            " - Thuc the ky khong duoc dung lam truyen thong -->]",
            s_system_id, s_mod,
            t_msg->t_comm.s_tr_date,
            t_msg->t_comm.s_o_ci_id,
            t_msg->t_comm.s_msg_no,
            t_msg->t_comm.s_tr_type,
            t_msg->t_tran.s_approver_code,
            t_msg->t_comm.s_o_ci_code);
           memcpy(t_msg->t_comm.s_res_code, NP_INVALID_APPR, RES_CODE_LEN);
      co_get_today('D', rcv_date);
      co_get_date('D', t_msg->t_comm.s_respond_time);
      /********************************************************************/
      i_ret_val = co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                    s_tmp_in,
                                    t_msg->t_comm.s_res_code,
                                    t_msg->t_comm.s_tr_type,
                                    t_msg->t_comm.s_o_ci_id,
                                    rcv_date,
                                    t_msg->t_comm.s_o_ci_id,
                                    "");
      if (i_ret_val < 0){
        co_write_log(SYS, ON, "[%s][%s][E]"
              "[<-- Loi luu tin dien loi vao DB"
              " ham co_insert_msgerror--->][%s]",
              s_system_id, s_mod, s_tmp_in);
        free((MSG_PAPER*)t_msg);
        free((char*)s_tmp_in);
        free((char*)s_tmp_out);
        return FAIL;
      }
      goto return_msg;
  }
  /*************************************************************************/
  /*Kiem tra xem thuc the ky co duoc phep ky duyet khong*/
  i_ret_val = co_chk_validate_appr(t_msg->t_comm.s_o_ci_id,
                  t_msg->t_tran.s_approver_code,
                  t_msg->t_tran.s_e_sign);
  if(i_ret_val != SUCCESS){
    if(i_ret_val == 1){
      co_write_log(SYS, ON, "[%s][%s][E]"
            "[TR_DATE: (%s)] "
            "[O_CI_ID: (%s)] "
            "[MSG_NO: (%s)] "
            "[TR_TYPE: (%s)] "
            "[<-- Thuc the ky khong duoc phep ky duyet"
            " - Ham(co_chk_validate_appr) -  APPR_ID(%s) -->]",
            s_system_id, s_mod, 
            t_msg->t_comm.s_tr_date,
            t_msg->t_comm.s_o_ci_id,
            t_msg->t_comm.s_msg_no,
            t_msg->t_comm.s_tr_type,
            t_msg->t_tran.s_approver_code);
      memcpy(t_msg->t_comm.s_res_code, NP_INVALID_APPR, RES_CODE_LEN);
      co_get_today('D', rcv_date);
      co_get_date('D', t_msg->t_comm.s_respond_time);
      /********************************************************************/
      i_ret_val = co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                    s_tmp_in,
                                    t_msg->t_comm.s_res_code,
                                    t_msg->t_comm.s_tr_type,
                                    t_msg->t_comm.s_o_ci_id,
                                    rcv_date,
                                    t_msg->t_comm.s_o_ci_id,
                                    "");
      if (i_ret_val < 0){
        co_write_log(SYS, ON, "[%s][%s][E]"
              "[<-- Loi luu tin dien loi vao DB"
              " ham co_insert_msgerror--->][%s]",
              s_system_id, s_mod, s_tmp_in);
        free((MSG_PAPER*)t_msg);
        free((char*)s_tmp_in);
        free((char*)s_tmp_out);
        return FAIL;
      }
      goto return_msg;
    }
    else if(i_ret_val == FAIL){/*Khong ton tai chung thu so*/
      co_write_log(SYS, ON, "[%s][%s][E]"
            "[TR_DATE: (%s)] "
            "[O_CI_ID: (%s)] "
            "[MSG_NO: (%s)] "
            "[TR_TYPE: (%s)] "
            "[<-- Khong ton tai chung so "
            " - Ham(co_chk_validate_appr) -  APPR_ID(%s) -->]",
            s_system_id, s_mod, 
            t_msg->t_comm.s_tr_date,
            t_msg->t_comm.s_o_ci_id,
            t_msg->t_comm.s_msg_no,
            t_msg->t_comm.s_tr_type,
            t_msg->t_tran.s_approver_code);
      memcpy(t_msg->t_comm.s_res_code, NP_CERT_NOT_EXIST, RES_CODE_LEN);
      co_get_today('D', rcv_date);
      co_get_date('D', t_msg->t_comm.s_respond_time);
      /********************************************************************/
      i_ret_val = co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                    s_tmp_in,
                                    t_msg->t_comm.s_res_code,
                                    t_msg->t_comm.s_tr_type,
                                    t_msg->t_comm.s_o_ci_id,
                                    rcv_date,
                                    t_msg->t_comm.s_o_ci_id,
                                    "");
      if (i_ret_val < 0){
        co_write_log(SYS, ON, "[%s][%s][E]"
              "[<-- Loi luu tin dien loi vao DB"
              " ham co_insert_msgerror--->][%s]",
              s_system_id, s_mod, s_tmp_in);
        free((MSG_PAPER*)t_msg);
        free((char*)s_tmp_in);
        free((char*)s_tmp_out);
        return FAIL;
      }
      goto return_msg;
    }    
    else{
      co_write_log(SYS, ON, "[%s][%s][E]"
            "[TR_DATE: (%s)] "
            "[O_CI_ID: (%s)] "
            "[MSG_NO: (%s)] "
            "[TR_TYPE: (%s)] "
            "[<-- Loi kiem tra xem thuc the ky co duoc phep ky duyet khong"
            " - Ham(co_chk_validate_appr) -  APPR_ID(%s) -->]",
            s_system_id, s_mod, 
            t_msg->t_comm.s_tr_date,
            t_msg->t_comm.s_o_ci_id,
            t_msg->t_comm.s_msg_no,
            t_msg->t_comm.s_tr_type,
            t_msg->t_tran.s_approver_code);
      free((MSG_PAPER*)t_msg);
      free((char*)s_tmp_in);
          free((char*)s_tmp_out);
      return FAIL;
    }
  }
  co_write_log(SYS,i_flog,"[%s] [%s] [D] "
          "[<---Hoan thanh kiem tra dieu kien ky duyet--->] ",
          s_system_id, s_mod);
  /*************************************************************************/
  /*9. kiem tra chu ky*/
  /*Kiem tra chu ky. ky tren cac truong: TR_TYPE, TR_DATE, MSG_NO,
  O_CI_ID, ORG_TR_DATE, ORG_MSG_NO: CHUA TEST*/
  co_write_log(SYS, ON, "[%s][%s][D]"
        "[<-- Bat dau qua trinh xac thuc -->]",
        s_system_id, s_mod);
  /*Lay noi dung de ky*/
  memcpy(s_auth_msg + i_tr_type_pos,
              t_msg->t_comm.s_tr_type, TR_TYPE_LEN);
  memcpy(s_auth_msg + i_tr_date_pos,
              t_msg->t_comm.s_tr_date, TR_DATE_LEN);
  memcpy(s_auth_msg + i_msg_no_pos,
              t_msg->t_comm.s_msg_no, MSG_NO_LEN);
  memcpy(s_auth_msg + i_o_ci_id_pos,
              t_msg->t_comm.s_o_ci_id, O_CI_ID_LEN);

  memcpy(s_auth_msg + i_o_ci_id_pos +  O_CI_ID_LEN,
              t_msg->t_rout.s_r_ci_id, R_CI_ID_LEN);
  memcpy(s_auth_msg + i_o_ci_id_pos +  O_CI_ID_LEN + R_CI_ID_LEN,
              t_msg->t_tran.s_relation_no, RELATION_NO_LEN);
  memcpy(s_auth_msg + i_o_ci_id_pos +  O_CI_ID_LEN + R_CI_ID_LEN + RELATION_NO_LEN,
              t_msg->t_tran.s_currency_code, CURRENCY_CODE_LEN);
  
  memcpy(s_auth_msg + i_o_ci_id_pos +  O_CI_ID_LEN + R_CI_ID_LEN + RELATION_NO_LEN + CURRENCY_CODE_LEN,
              t_msg->t_tran.s_dr_sum, DR_SUM_LEN);
  
   memcpy(s_auth_msg + i_o_ci_id_pos +  O_CI_ID_LEN + R_CI_ID_LEN + RELATION_NO_LEN + CURRENCY_CODE_LEN + DR_SUM_LEN,
              t_msg->t_tran.s_interest_rate, DR_SUM_LEN);
  memcpy(s_auth_msg + i_o_ci_id_pos +  O_CI_ID_LEN + R_CI_ID_LEN + RELATION_NO_LEN + CURRENCY_CODE_LEN + DR_SUM_LEN + DR_SUM_LEN,
              t_msg->t_tran.s_tr_content, TR_CONTENT_LEN);
  /*Lay ma APRROCODE*/
  memset(s_au_appr_id , 0x00, SC_AU_APPR_ID_LEN + 1);
  memcpy(s_au_appr_id, t_msg->t_tran.s_approver_code, SC_AU_APPR_ID_LEN);
  co_trim(s_au_appr_id);
  
  co_write_log(SYS, ON, "[%s][%s][D]"
        "[<-- AU_APPR_ID(%s), AU_APPR_ID_LEN(%d) -->",
        s_system_id, s_mod, s_au_appr_id, strlen(s_au_appr_id));              
      
  /*Tao tin dien xac thuc*/
  i_ret_val = sc_make_au_msg(t_msg->t_comm.s_tr_date,
               s_system_id,
               t_msg->t_comm.s_o_ci_id,
               t_msg->t_comm.s_o_ci_code,
               s_au_appr_id,
               t_msg->t_tran.s_e_sign,
               s_auth_msg,
               s_au);
     if(i_ret_val!=SUCCESS){
    co_write_log(SYS, ON, "[%s] [%s] [E] "
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "
          "[<-- Loi tao tin dien xac thuc"
          " - Ham(sc_make_au_msg) - Tham so:"
          " TR_DATE(%s), SYSTEM_ID(%s), CI_ID(%s)"
          ", APPR_CODE(%s), E_SIGN(%s), AUTH_MSG(%s)]",
          s_system_id, s_mod, 
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type,
          t_msg->t_comm.s_tr_date,
          s_system_id, t_msg->t_comm.s_o_ci_id,
          s_au_appr_id,
          t_msg->t_tran.s_e_sign, 
          s_auth_msg);
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
     }

   co_write_log(SYS, i_flog, "[%s] [%s] [D] [<---Tao tin dien xac thuc thanh cong: "
           "t_msg->t_comm.s_tr_date(%s), "
           "s_system_id(%s), "
           "t_msg->t_comm.s_o_ci_id(%s),"
           "t_msg->t_comm.s_o_ci_code(%s), "
           "s_au_appr_id(%s), "
           "t_msg->t_tran.s_e_sign(%s),"
           "s_auth_msg(%s),s_au(%s)--->]",
          s_system_id, s_mod,
          t_msg->t_comm.s_tr_date,
          s_system_id,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_o_ci_code,
          s_au_appr_id,
          t_msg->t_tran.s_e_sign,
          s_auth_msg,s_au);
   /*****************************************************************************************/
     
     /*Thiet lap cac thong so co ban de goi service xac thuc*/
  i_ret_val = co_put_inp_msg(s_au, t_inp_info);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON, "[%s][%s][E]"
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "
          "[<-- Loi dua tin dien xac thuc vao cau truc"
          " SUINPUTAREA - Ham(co_put_inp_msg) - Tham so:"
          "MSG_AU(%s) -->]",
          s_system_id, s_mod, 
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type,
          s_au);
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] "
        "[<---Hoan thanh thiet lap cac thong so co ban de goi service xac thuc. "
        "S_AU(%s)--->]",
        s_system_id, s_mod, s_au);
  /*****************************************************************************************/
  
  i_ret_val = co_set_msg_count(1, t_com_info);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON, "[%s][%s][E]"
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "
          "[<-- Loi thiet lap so tin dien cho cau truc"
          "SUINPUTAREA - Ham(co_set_msg_count) - Tham so:"
          "CNT(1) -->]",
          s_system_id, s_mod,
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type);
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  /*Thiet lap so RELATION cho cau truc SUCOMMONAREA: CONGLV-13/08/08*/
  
  i_ret_val = co_set_relation(0, t_com_info);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON,   "[E][%s][%s]"
                  "[TR_DATE: (%s)] "
                "[O_CI_ID: (%s)] "
                "[MSG_NO: (%s)] "
                "[TR_TYPE: (%s)] "  
                "[<-- Loi thiet lap so RELATION cho cau truc"
                "SUCOMMONAREA truoc khi goi service xac thuc"
                "- Ham(co_set_relation) -->]",
                    s_system_id, s_mod,
                    t_msg->t_comm.s_tr_date,
                t_msg->t_comm.s_o_ci_id,
                t_msg->t_comm.s_msg_no,
                t_msg->t_comm.s_tr_type
                  );
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS, i_flog, "[%s] [%s] [D] "
        "[<---Hoan thanh thiet lap so RELATION cho cau truc "
        "SUCOMMONAREA truoc khi goi service xac thuc--->]",
        s_system_id, s_mod);
/*****************************************************************************************/
    
  /*Goi service xac thuc tin dien*/
  i_ret_val = co_svc_call32("RA_VEA_0200001",
                  t_com_info, t_inp_info,t_out_info);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON, "[%s] [%s] [E]"
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "  
          "[<-- Loi goi service xac thuc: RA_VEA_0200001 -->]",
          s_system_id, s_mod,
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type);
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS,i_flog,"[%s] [%s][D] "
        "[<---Hoan thanh goi service xac thuc tin dien: RA_VEA_0200001--->]",
        s_system_id, s_mod);
  /*****************************************************************************************/
  
  /*Lay tin dien ket qua tu cau truc SUOUTPUTAREA*/
  memset(s_au, 0x00, TRX404005 + 1);
  i_ret_val = co_get_out_msg(t_out_info, s_au);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON, "[%s][%s][E]"
          "[<-- Loi lay tin dien xac thuc ket qua tu cau truc"
          " SUOUTPUTAREA - Ham(co_get_out_msg) -->]",
          s_system_id, s_mod);
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS,i_flog,"[%s] [%s] [D] "
            "[<---Lay tin dien ket qua xac thuc "
            "tu cau truc SUOUTPUTAREA thanh cong: "
            "S_AU(%s)--->]",
            s_system_id, s_mod,  s_au);
  /*****************************************************************************************/
  
  /*Phan tich tin dien xac thuc ket qua thanh cau truc*/
    memset((char*)&t_au, 0x00, MSG_AU_LEN);
    i_ret_val = co_msg_to_au(s_au, &t_au);
  if(i_ret_val != SUCCESS){
    co_write_log(SYS, ON, "[%s][%s][E]"
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "
          "[<-- Loi phan tich tin dien xac thuc thanh cau truc"
          "  - Ham(co_msg_to_au) - Tham so: MSG_AU(%s) -->]",
          s_system_id, s_mod, 
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type,
          s_au);
    free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS,i_flog,"[%s] [%s] [D] "
            "[<---Hoan thanh phan tich tin dien "
            "xac thuc ket qua thanh cau truc --->] ",
            s_system_id,s_mod);
  /*****************************************************************************************/
  
    /*Kiem tra ket qua xac thuc*/
    if(memcmp(t_au.t_tran.s_res_code, NP_NORMAL, RES_CODE_LEN) !=0){
    co_write_log(SYS, ON, "[%s][%s][E]"
          "[TR_DATE: (%s)] "
          "[O_CI_ID: (%s)] "
          "[MSG_NO: (%s)] "
          "[TR_TYPE: (%s)] "
          "[<-- Xac thuc khong thanh cong -->]",
          s_system_id, s_mod,
          t_msg->t_comm.s_tr_date,
          t_msg->t_comm.s_o_ci_id,
          t_msg->t_comm.s_msg_no,
          t_msg->t_comm.s_tr_type);
    memcpy(t_msg->t_comm.s_res_code, t_au.t_tran.s_res_code, RES_CODE_LEN);
    co_get_today('D', rcv_date);
    co_get_date('D', t_msg->t_comm.s_respond_time);
    /*****************************************************************/
    i_ret_val = co_insert_msgerror(t_msg->t_comm.s_msg_no,
                                  s_tmp_in,
                                  t_msg->t_comm.s_res_code,
                                  t_msg->t_comm.s_tr_type,
                                  t_msg->t_comm.s_o_ci_id,
                                  rcv_date,
                                  t_msg->t_comm.s_o_ci_id,
                                  "");
        /*****************************************************************/
    if (i_ret_val <0){
      co_write_log(SYS, ON, "[%s][%s][E] "
                  "[<-- Loi khi luu tin dien loi vao DB "
                  "Ham co_insert_msgerror -->][MSG(%s)]",
                  s_system_id,
                  s_mod,
                  s_tmp_in);
      free((MSG_PAPER*)t_msg);
      free((char*)s_tmp_in);
          free((char*)s_tmp_out);
      return FAIL;
    }
    goto return_msg;
    }
  co_write_log(SYS,i_flog,"[%s] [%s] [D] "
            "[<---Kiem tra ket qua xac thuc: "
            "t_au.t_tran.s_res_code(%s)--->] ",
            s_system_id,s_mod,
            t_au.t_tran.s_res_code);
  /*****************************************************************************************/
  /* end kiem tra chu ky*/
  /*************************************************************************/
  /*Gan thoi gian xac thuc tai server vao ESIGN: CONGLV*/
  co_write_log(SYS, i_flog, "[%s][D][<-ESIGN1(%s)->]", s_mod, t_msg->t_tran.s_e_sign);  
  co_get_ctime('D', s_verify_time);
  memcpy(t_msg->t_tran.s_e_sign + E_SIGN_LEN - 6, s_verify_time, 6);
  co_write_log(SYS, i_flog, "[%s][D][<-ESIGN2(%s)->]", s_mod, t_msg->t_tran.s_e_sign);
 
  /*************************************************************************/    
  
 
   /*5. Thiet lap gia tri da thanh cong tai NPSC
        cho ma tra loi trong cau truc */
    memcpy(t_msg->t_comm.s_res_code,NP_NORMAL,RES_CODE_LEN +1);
    /*co_get_date('D', t_msg->t_comm.s_respond_time);*/
    co_get_db_time(t_msg->t_comm.s_respond_time);
    
    /*6. Luu tin dien vao CSDL */
    memset(s_res_code, 0x00, RES_CODE_LEN + 1);
    i_ret_val=hv_insert_debit_paper(t_msg,s_res_code);
    if (i_ret_val==DB_ERROR)
    {
        co_write_log(SYS,ON,"[%s] [%s] [E]"
                "[TR_DATE: (%s)] "
            "[O_CI_ID: (%s)] "
            "[MSG_NO: (%s)] "
            "[TR_TYPE: (%s)] "
                "[<---Loi khi Luu tin dien vao CSDL "
            "Ham: hv_insert_debit_paper--->] [MSG: (%s)]",
            s_system_id,
            s_mod,
            t_msg->t_comm.s_tr_date,
            t_msg->t_comm.s_o_ci_id,
            t_msg->t_comm.s_msg_no,
            t_msg->t_comm.s_tr_type,
            s_tmp_in);
      free((MSG_PAPER*)t_msg);
      free((char*)s_tmp_in);
      free((char*)s_tmp_out);
        return FAIL;
    }
    if (i_ret_val==FAIL)/*Trung du lieu*/
    {
        co_write_log(SYS,ON,"[%s] [%s] [N]"
                  "[TR_DATE: (%s)] "
              "[O_CI_ID: (%s)] "
              "[MSG_NO: (%s)] "
              "[TR_TYPE: (%s)] "
                  "[<---Trung tin dien. "
              "Ham: hcm_insert_hv_conf_master--->] "
              "[MSG: (%s)]",
              s_system_id,
              s_mod,
              t_msg->t_comm.s_tr_date,
              t_msg->t_comm.s_o_ci_id,
              t_msg->t_comm.s_msg_no,
              t_msg->t_comm.s_tr_type,
              s_tmp_in);
        memcpy(t_msg->t_comm.s_res_code,s_res_code,RES_CODE_LEN +1);
        goto return_msg;
    }
  co_write_log(SYS, i_flog,"[%s][%s][D]"
      "[<---Luu tin dien vao CSDL. Ham hv_insert_debit_paper.",
      s_system_id, s_mod);  
      
  
    memcpy(t_msg->t_comm.s_res_code,NP_NORMAL,RES_CODE_LEN+1);  
    /*Thiet lap thoi diem respond_time
    co_get_date('D', t_msg->t_comm.s_respond_time);*/
    co_get_db_time(t_msg->t_comm.s_respond_time);
    
    
  
 

  
/*****************************************************************************************/
  
return_msg:
  /* Tao tin dien tra loi */
  memset(s_tmp_out, 0x00, 1282 + 1);
  i_ret_val=co_paper_to_msg(t_msg,s_tmp_out);
  if (i_ret_val<0){
    co_write_log(SYS,ON,"[%s] [%s] [E] "
              "[<---Loi trong qua trinh Tao tin dien tra loi. "
              "Ham: co_hcm_to_msg--->] [MSG: (%s)]",
              s_system_id,
              s_mod,
              s_tmp_out);
      free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
        free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS,i_flog,"[%s] [%s] [D] "
            "[<---Tao tin dien tra loi. Ham co_hcm_to_msg, s_tmp_out(%s), s_tmp_in(%s)--->]",
            s_system_id, s_mod, s_tmp_out, s_tmp_in);
  /*****************************************************************************************/
  /* Tao va tra loi ket qua xu ly*/
  i_ret_val = co_put_out_msg(s_tmp_out, t_out_info);
  if(i_ret_val < 0){
     co_write_log(SYS, ON, "[%s][%s][E]"
                 "[<---Loi khi tao va tra loi ket qua xu ly "
                "Ham: co_put_out_msg--->] [MSG: (%s)]",
                s_system_id, s_mod, s_tmp_out);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
    free((char*)s_tmp_out);
    return FAIL;
  }
  /*co_write_log(SYS,ON," Done");*/
  free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
  return SUCCESS;

return_msg_err:
  memset(s_tr_date, 0x00, TR_DATE_LEN + 1);
  memset(s_msg_no, 0x00, MSG_NO_LEN + 1);
  memset(s_tr_type, 0x00, TR_TYPE_LEN + 1);
  memset(s_o_ci_id, 0x00, O_CI_ID_LEN + 1);
  co_get_today('D', rcv_date);
  memcpy(s_tr_date, s_tmp_in + TR_DATE_POS, TR_DATE_LEN);
  memcpy(s_msg_no, s_tmp_in + MSG_NO_POS, MSG_NO_LEN);
  memcpy(s_tr_type, s_tmp_in + TR_TYPE_POS, TR_TYPE_LEN);
  memcpy(s_o_ci_id, s_tmp_in + O_CI_ID_POS, O_CI_ID_LEN);
  memcpy(s_res_code_tmp, s_tmp_in + RES_CODE_POS, RES_CODE_LEN);
  i_ret_val = co_insert_msgerror(s_msg_no,
                                s_tmp_in,
                                s_res_code_tmp,
                                s_tr_type,
                                s_o_ci_id,
                                rcv_date,
                                s_o_ci_id,
                                "");

  if (i_ret_val < 0 && memcmp(s_res_code_tmp, NP_LEN_ERR, RES_CODE_LEN) != 0){
    co_write_log(SYS, ON, "[%s] [E][<---Loi khi luu tin dien loi vao DB Ham co_insert_msgerror--->][MSG: (%s)]", s_mod, s_tmp_in);
    free((MSG_PAPER*)t_msg);
    free((char*)s_tmp_in);
    free((char*)s_tmp_out);
    return FAIL;
  }
  co_write_log(SYS, ON, "[%s] [D][<---co_insert_msgerror--->][MSG: (%s), s_res_code_tmp(%s)]", s_mod, s_tmp_in, s_res_code_tmp);
  i_ret_val = co_put_out_msg(s_tmp_in, t_out_info);
    if(i_ret_val != SUCCESS) {
      co_write_log(SYS, ON, "[%s][E][GIANGDH][label:return_err_msg_len_type] Put tin dien tra loi loi s_tmp_in(%s)", s_mod, s_tmp_in);
  }
  co_write_log(SYS, ON, "[%s][E][GIANGDH][label:return_msg_err] Put tin dien tra loi loi s_tmp_in(%s)", s_mod, s_tmp_in);
  free((MSG_PAPER*)t_msg);
  free((char*)s_tmp_in);
  free((char*)s_tmp_out);
  return SUCCESS;
}