/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   ccmni_if.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Defines CCCI CCMNI APIs
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 27 2014 ap.wang
 * removed!
 * Add QBM pool status notify
 *
 * 05 14 2014 ap.wang
 * removed!
 * CCMNI Fast Ack Patch and linkdown fast reload
 *
 * removed!
 * removed!
 * 	[CCMNI ACK Fast Path]
 *
 * removed!
 * removed!
 * Rename project name as MT6290
 *
 * removed!
 * removed!
 * sync latest version of new features
 *
 * removed!
 * removed!
 * [MOLY][CCCI_SDIO] 1st version of MT6290 CCCI feature
 ****************************************************************************/
#ifndef _CCMNI_IF_H
#define _CCMNI_IF_H

#include "ipc_api.h"
#include "ccci_if.h"
#include "ccmni_common.h"

kal_bool ccmni_ipc_dl(void* context, ipc_io_request_t* ior);
void ccmni_ccci_ul_cb(CCCI_CHANNEL_T channel, ccci_io_request_t* io_request);
kal_bool ccmni_reload_ul_gpds(void *context);
kal_bool ccmni_init_ul_gpds(void *context);
void ccmni_ccci_dummy_cb(CCCI_CHANNEL_T channel, ccci_io_request_t* io_request);

#if (defined(__CCMNI_LB_IT__) || defined(__CCMNI_IT__))
void ccmni_it_init();
#endif
void ccmni_qbm_pool_status_cb(qbm_pool_status status);
kal_int32 ccmni_dev_main_init(kal_uint32 dev_mapping);
kal_int32 ccmni_dev_deinit(kal_uint32 dev_mapping);

#endif //#ifndef _CCMNI_IF_H
