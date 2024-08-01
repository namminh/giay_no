#include  "common.h"
#include  "co_extern.h"
#include  "hv_extern.h"
/******************************************************************************
* Name      : nh_paper_0103001
* CreateBy  : 
* CreateOn  : 
*
* Input     : SUCOMMONAREA     *t_com_info
*             SUINPUTAREA      *t_inp_info
*
* Output    : SUOUTPUTAREA     *t_out_info
*
* Description: Xu ly giay no
*
* ModifyBy   :
* CreateOn  : 
* Description:	Gop vao NPSC
******************************************************************************/
int nh_pap_0103001(t_com_info, t_inp_info, t_out_info)
SUCOMMONAREA     *t_com_info;
SUINPUTAREA      *t_inp_info;
SUOUTPUTAREA     *t_out_info;
{
	/*****************************************************************************************/
	/*Khai bao bien*/
	char    s_mod[] = "NH_PAP_0103001";   /* function name */
	return hv_pap_0103001(t_com_info, t_inp_info, t_out_info,s_mod);
}
