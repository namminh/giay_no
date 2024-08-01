/******************************************************************************
* CreateBy  : Loi-td
* CreateOn  : 2008/01/15
* Description: khai bao server NS_WRN_0300001
******************************************************************************/
/*define XA or NON_XA MODE*/
int XA_MODE=1; /*xa =1; non_xa=0*/
int SERVICE_TIMEOUT=120;

/*Khai bao ham*/


extern int nf_cmn_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);
extern int nf_frn_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);
extern int nf_fcn_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);

extern int nh_cmn_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);
extern int nh_frn_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);
extern int nh_fcn_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);

extern int nh_pap_0103001(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA *);

/**************/
typedef struct callfunc 
{
    char    svcname[100];
    int     (*funcenv_ptr)(SUCOMMONAREA *, SUINPUTAREA *, SUOUTPUTAREA * );
    int     xamode;
} CALLFUNC_T;

CALLFUNC_T  tSvcNm[] = 
{
	
	"NF_CMN_0103001", nf_cmn_0103001, 1,
	"NF_FRN_0103001", nf_frn_0103001, 1,
	"NF_FCN_0103001", nf_fcn_0103001, 1,
	"NH_CMN_0103001", nh_cmn_0103001, 1,
	"NH_FRN_0103001", nh_frn_0103001, 1,
	"NH_FCN_0103001", nh_fcn_0103001, 1,
	"NH_PAP_0103001", nh_pap_0103001, 1,

};

