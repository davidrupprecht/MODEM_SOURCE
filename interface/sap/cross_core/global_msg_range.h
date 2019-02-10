#ifndef GLOBAL_MSG_RANGE_H
#define GLOBAL_MSG_RANGE_H

#define MSG_ID_GLOBAL_END 302

typedef enum {
	
    MSG_ID_GLOBAL_BEGIN = 0, MSG_ID_GLOBAL_NIL_CHECK_TAIL = MSG_ID_GLOBAL_BEGIN,
    MSG_ID_GLOBAL_MD1_BEGIN, MSG_ID_GLOBAL_MD1_TAIL = MSG_ID_GLOBAL_MD1_BEGIN + 99,
    MSG_ID_GLOBAL_MD2_BEGIN, MSG_ID_GLOBAL_MD2_TAIL = MSG_ID_GLOBAL_MD2_BEGIN + 99,
    MSG_ID_GLOBAL_MD3_BEGIN, MSG_ID_GLOBAL_MD3_TAIL = MSG_ID_GLOBAL_MD3_BEGIN + 99,
    MSG_ID_GLOBAL_TAIL,
	
} GLOBAL_MSG_ID_CODE_BEGIN;

typedef unsigned int msg_global_id_boundary_check1[MSG_ID_GLOBAL_END - MSG_ID_GLOBAL_TAIL];

#ifdef GEN_FOR_PC
    #define MODULE_MSG_BEGIN(BEGIN_POS)  typedef enum __cgen_msg_type_id_##BEGIN_POS{MSG_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_MSG_END(END_POS) MSG_ID_CGEN_PARSE_LAST_ID=END_POS }_cgen_msg_type_id_##END_POS;
#else
    #define MODULE_MSG_BEGIN(BEGIN_POS)   enum { MSG_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_MSG_END(END_POS)     };    
#endif /* GEN_FOR_PC */

#endif /* GLOBAL_MSG_RANGE_H */
